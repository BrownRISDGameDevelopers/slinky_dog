#!/bin/sh
set -eo pipefail
SRC_EXE="${UE_BINARIES_DIR}/${UE_UBT_BINARY_SUBPATH}"
DEST_EXE="${CONFIGURATION_BUILD_DIR}/${EXECUTABLE_PATH}"
DEST_EXE_DIR=`dirname "${DEST_EXE}"`

echo Copying executable and any standalone dylibs into ${DEST_EXE_DIR}
mkdir -p "${DEST_EXE_DIR}"
ditto "${SRC_EXE}" "${DEST_EXE}"

# Skip syncing if desired
if [[ ${UE_SKIP_STAGEDDATA_SYNC} -eq 1 ]]; then exit 0; fi

# When building engine projects, like UnrealGame, we don't have data to stage unless something has specified UE_OVERRIDE_STAGE_DIR
if [[ -z ${UE_OVERRIDE_STAGE_DIR} ]]; then 
STAGED_DIR="${UE_PROJECT_DIR}/Saved/StagedBuilds/${UE_TARGET_PLATFORM_NAME}"
else
  STAGED_DIR="${UE_OVERRIDE_STAGE_DIR}"
fi
if [[ -z ${STAGED_DIR} ]]; then exit 0; fi
# Make sure the staged directory exists and has files in it
if [[ ! -e "${STAGED_DIR}" || ! $(ls -A "${STAGED_DIR}") ]]; then 
  echo =========================================================================================
  echo "WARNING: To run, you must have a valid staged build directory. The Staged location is:"
  echo "  ${STAGED_DIR}"
  echo "Use the editor's Platforms menu, or run a command like::"
  echo "./RunUAT.sh BuildCookRun -platform=Mac -project=<project> -build -cook -stage -pak"
  echo =========================================================================================
  exit -0 
fi

echo "Syncing ${STAGED_DIR} to ${CONFIGURATION_BUILD_DIR}/${CONTENTS_FOLDER_PATH}/UE"
rsync -a --delete --exclude="/Info.plist" --exclude="/Manifest_*" --exclude="/*.app" "${STAGED_DIR}/" "${CONFIGURATION_BUILD_DIR}/${CONTENTS_FOLDER_PATH}/UE"
