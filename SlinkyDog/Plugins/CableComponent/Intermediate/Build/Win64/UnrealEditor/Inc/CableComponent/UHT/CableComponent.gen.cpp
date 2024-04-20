// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CableComponent/Classes/CableComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableComponent() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UPackage* Z_Construct_UPackage__Script_CableComponent();
// End Cross Module References
	DEFINE_FUNCTION(UCableComponent::execGetCableParticleLocations)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCableParticleLocations(Z_Param_Out_Locations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execGetAttachedComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachedComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execGetAttachedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAttachedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execSetAttachEndTo)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_ComponentProperty);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachEndTo(Z_Param_Actor,Z_Param_ComponentProperty,Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCableComponent::execSetAttachEndToComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachEndToComponent(Z_Param_Component,Z_Param_SocketName);
		P_NATIVE_END;
	}
	void UCableComponent::StaticRegisterNativesUCableComponent()
	{
		UClass* Class = UCableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedActor", &UCableComponent::execGetAttachedActor },
			{ "GetAttachedComponent", &UCableComponent::execGetAttachedComponent },
			{ "GetCableParticleLocations", &UCableComponent::execGetCableParticleLocations },
			{ "SetAttachEndTo", &UCableComponent::execSetAttachEndTo },
			{ "SetAttachEndToComponent", &UCableComponent::execSetAttachEndToComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics
	{
		struct CableComponent_eventGetAttachedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventGetAttachedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the Actor that the cable is attached to **/" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Actor that the cable is attached to *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetAttachedActor", nullptr, nullptr, Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::CableComponent_eventGetAttachedActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::CableComponent_eventGetAttachedActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCableComponent_GetAttachedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCableComponent_GetAttachedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics
	{
		struct CableComponent_eventGetAttachedComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventGetAttachedComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the specific USceneComponent that the cable is attached to **/" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the specific USceneComponent that the cable is attached to *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetAttachedComponent", nullptr, nullptr, Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::CableComponent_eventGetAttachedComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::CableComponent_eventGetAttachedComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCableComponent_GetAttachedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCableComponent_GetAttachedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics
	{
		struct CableComponent_eventGetCableParticleLocations_Parms
		{
			TArray<FVector> Locations;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventGetCableParticleLocations_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::NewProp_Locations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get array of locations of particles (in world space) making up the cable simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get array of locations of particles (in world space) making up the cable simulation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "GetCableParticleLocations", nullptr, nullptr, Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::CableComponent_eventGetCableParticleLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::CableComponent_eventGetCableParticleLocations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCableComponent_GetCableParticleLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCableComponent_GetCableParticleLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics
	{
		struct CableComponent_eventSetAttachEndTo_Parms
		{
			AActor* Actor;
			FName ComponentProperty;
			FName SocketName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentProperty;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_ComponentProperty = { "ComponentProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, ComponentProperty), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndTo_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_ComponentProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches the end of the cable to a specific Component within an Actor **/" },
#endif
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the end of the cable to a specific Component within an Actor *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "SetAttachEndTo", nullptr, nullptr, Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::CableComponent_eventSetAttachEndTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::CableComponent_eventSetAttachEndTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCableComponent_SetAttachEndTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCableComponent_SetAttachEndTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics
	{
		struct CableComponent_eventSetAttachEndToComponent_Parms
		{
			USceneComponent* Component;
			FName SocketName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndToComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CableComponent_eventSetAttachEndToComponent_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches the end of the cable to a specific Component **/" },
#endif
		{ "CPP_Default_SocketName", "None" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the end of the cable to a specific Component *" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCableComponent, nullptr, "SetAttachEndToComponent", nullptr, nullptr, Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::CableComponent_eventSetAttachEndToComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::CableComponent_eventSetAttachEndToComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCableComponent);
	UClass* Z_Construct_UClass_UCableComponent_NoRegister()
	{
		return UCableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachStart_MetaData[];
#endif
		static void NewProp_bAttachStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachEnd_MetaData[];
#endif
		static void NewProp_bAttachEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachEndTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachEndTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachEndToSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachEndToSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubstepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStiffness_MetaData[];
#endif
		static void NewProp_bEnableStiffness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSubstepping_MetaData[];
#endif
		static void NewProp_bUseSubstepping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSubstepping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotVisible_MetaData[];
#endif
		static void NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData[];
#endif
		static void NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CableForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableGravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableGravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CableComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCableComponent_GetAttachedActor, "GetAttachedActor" }, // 107458501
		{ &Z_Construct_UFunction_UCableComponent_GetAttachedComponent, "GetAttachedComponent" }, // 2926070903
		{ &Z_Construct_UFunction_UCableComponent_GetCableParticleLocations, "GetCableParticleLocations" }, // 187631754
		{ &Z_Construct_UFunction_UCableComponent_SetAttachEndTo, "SetAttachEndTo" }, // 2014626206
		{ &Z_Construct_UFunction_UCableComponent_SetAttachEndToComponent, "SetAttachEndToComponent" }, // 543915166
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
#endif
		{ "HideCategories", "Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "CableComponent.h" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Should we fix the start to something, or leave it free.\n\x09 *\x09If false, component transform is just used for initial location of start of cable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we fix the start to something, or leave it free.\nIf false, component transform is just used for initial location of start of cable" },
#endif
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bAttachStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart = { "bAttachStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Should we fix the end to something (using AttachEndTo and EndLocation), or leave it free.\n\x09 *\x09If false, AttachEndTo and EndLocation are just used for initial location of end of cable\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we fix the end to something (using AttachEndTo and EndLocation), or leave it free.\nIf false, AttachEndTo and EndLocation are just used for initial location of end of cable" },
#endif
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bAttachEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd = { "bAttachEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor or Component that the defines the end position of the cable */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor or Component that the defines the end position of the cable" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo = { "AttachEndTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, AttachEndTo), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo_MetaData) }; // 834145860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket name on the AttachEndTo component to attach to */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket name on the AttachEndTo component to attach to" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName = { "AttachEndToSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, AttachEndToSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component. */" },
#endif
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End location of cable, relative to AttachEndTo (or AttachEndToSocketName) if specified, otherwise relative to cable component." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rest length of the cable */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rest length of the cable" },
#endif
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength = { "CableLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, CableLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many segments the cable has */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many segments the cable has" },
#endif
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMin", "0.005" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the simulation substep time for the cable */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the simulation substep time for the cable" },
#endif
		{ "UIMax", "0.1" },
		{ "UIMin", "0.005" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime = { "SubstepTime", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, SubstepTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of solver iterations controls how 'stiff' the cable is */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of solver iterations controls how 'stiff' the cable is" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations = { "SolverIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, SolverIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add stiffness constraints to cable. */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add stiffness constraints to cable." },
#endif
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bEnableStiffness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness = { "bEnableStiffness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When false, will still wait for SubstepTime to elapse before updating, but will only run the cable simulation once using all of accumulated simulation time" },
#endif
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bUseSubstepping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping = { "bUseSubstepping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bSkipCableUpdateWhenNotVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible = { "bSkipCableUpdateWhenNotVisible", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData[] = {
		{ "Category", "Cable" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bSkipCableUpdateWhenNotOwnerRecentlyRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered = { "bSkipCableUpdateWhenNotOwnerRecentlyRendered", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Cable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""EXPERIMENTAL. Perform sweeps for each cable particle, each substep, to avoid collisions with the world.\n\x09 *\x09Uses the Collision Preset on the component to determine what is collided with.\n\x09 *\x09This greatly increases the cost of the cable simulation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EXPERIMENTAL. Perform sweeps for each cable particle, each substep, to avoid collisions with the world.\nUses the Collision Preset on the component to determine what is collided with.\nThis greatly increases the cost of the cable simulation." },
#endif
	};
#endif
	void Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((UCableComponent*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCableComponent), &Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData[] = {
		{ "Category", "Cable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If collision is enabled, control how much sliding friction is applied when cable is in contact. */" },
#endif
		{ "EditCondition", "bEnableCollision" },
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If collision is enabled, control how much sliding friction is applied when cable is in contact." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction = { "CollisionFriction", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, CollisionFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData[] = {
		{ "Category", "Cable Forces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force vector (world space) applied to all particles in cable. */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force vector (world space) applied to all particles in cable." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce = { "CableForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, CableForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData[] = {
		{ "Category", "Cable Forces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scaling applied to world gravity affecting this cable. */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaling applied to world gravity affecting this cable." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale = { "CableGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, CableGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How wide the cable geometry is */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How wide the cable geometry is" },
#endif
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, CableWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "Cable Rendering" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of sides of the cable geometry */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of sides of the cable geometry" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, NumSides), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData[] = {
		{ "Category", "Cable Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many times to repeat the material along the length of the cable */" },
#endif
		{ "ModuleRelativePath", "Classes/CableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many times to repeat the material along the length of the cable" },
#endif
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCableComponent, TileMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData), Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bAttachEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_AttachEndToSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_SubstepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_SolverIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bUseSubstepping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bSkipCableUpdateWhenNotOwnerRecentlyRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CollisionFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableGravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_CableWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_NumSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCableComponent_Statics::NewProp_TileMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCableComponent_Statics::ClassParams = {
		&UCableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCableComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCableComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCableComponent()
	{
		if (!Z_Registration_Info_UClass_UCableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCableComponent.OuterSingleton, Z_Construct_UClass_UCableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCableComponent.OuterSingleton;
	}
	template<> CABLECOMPONENT_API UClass* StaticClass<UCableComponent>()
	{
		return UCableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCableComponent);
	UCableComponent::~UCableComponent() {}
	struct Z_CompiledInDeferFile_FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCableComponent, UCableComponent::StaticClass, TEXT("UCableComponent"), &Z_Registration_Info_UClass_UCableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCableComponent), 2145990359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_1770053166(TEXT("/Script/CableComponent"),
		Z_CompiledInDeferFile_FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HOWL_Plugins_CableComponent_Source_CableComponent_Classes_CableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
