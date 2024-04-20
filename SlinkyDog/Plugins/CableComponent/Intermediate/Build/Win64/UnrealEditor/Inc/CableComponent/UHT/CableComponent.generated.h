// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef CABLECOMPONENT_CableComponent_generated_h
#error "CableComponent.generated.h already included, missing '#pragma once' in CableComponent.h"
#endif
#define CABLECOMPONENT_CableComponent_generated_h

#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_SPARSE_DATA
#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execGetAttachedComponent); \
	DECLARE_FUNCTION(execGetAttachedActor); \
	DECLARE_FUNCTION(execSetAttachEndTo); \
	DECLARE_FUNCTION(execSetAttachEndToComponent);


#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_ACCESSORS
#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct Z_Construct_UClass_UCableComponent_Statics; \
public: \
	DECLARE_CLASS(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(UCableComponent)


#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCableComponent(UCableComponent&&); \
	NO_API UCableComponent(const UCableComponent&); \
public: \
	NO_API virtual ~UCableComponent();


#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_28_PROLOG
#define FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_SPARSE_DATA \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_RPC_WRAPPERS \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_ACCESSORS \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_INCLASS \
	FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CABLECOMPONENT_API UClass* StaticClass<class UCableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
