// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldReticleParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameplayAbilityTargetActor::execCancelTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameplayAbilityTargetActor::execConfirmTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmTargeting();
		P_NATIVE_END;
	}
	void AGameplayAbilityTargetActor::StaticRegisterNativesAGameplayAbilityTargetActor()
	{
		UClass* Class = AGameplayAbilityTargetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelTargeting", &AGameplayAbilityTargetActor::execCancelTargeting },
			{ "ConfirmTargeting", &AGameplayAbilityTargetActor::execConfirmTargeting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Outside code is saying 'stop everything and just forget about it' */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Outside code is saying 'stop everything and just forget about it'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "CancelTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Outside code is saying 'stop and just give me what you have.' Returns true if the ability accepts this and can be forgotten." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityTargetActor, nullptr, "ConfirmTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister()
	{
		return AGameplayAbilityTargetActor::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldProduceTargetDataOnServer_MetaData[];
#endif
		static void NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldProduceTargetDataOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnConfirmation_MetaData[];
#endif
		static void NewProp_bDestroyOnConfirmation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnConfirmation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReticleParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReticleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReticleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericDelegateBoundASC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GenericDelegateBoundASC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_CancelTargeting, "CancelTargeting" }, // 1140441482
		{ &Z_Construct_UFunction_AGameplayAbilityTargetActor_ConfirmTargeting, "ConfirmTargeting" }, // 3979406928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n *\n * WARNING: These actors are spawned once per ability activation and in their default form are not very efficient\n * For most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\n * This class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs\n */" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "TargetActors are spawned to assist with ability targeting. They are spawned by ability tasks and create/determine the outgoing targeting data passed from one task to another\n\nWARNING: These actors are spawned once per ability activation and in their default form are not very efficient\nFor most games you will need to subclass and heavily modify this actor, or you will want to implement similar functions in a game-specific actor or blueprint to avoid actor spawn costs\nThis class is not well tested by internal games, but it is a useful class to look at to learn how target replication occurs" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm') */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "The TargetData this class produces can be entirely generated on the server. We don't require the client to send us full or partial TargetData (possibly just a 'confirm')" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->ShouldProduceTargetDataOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer = { "ShouldProduceTargetDataOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Describes where the targeting action starts, usually the player character or a socket on the player character. *///UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Describes where the targeting action starts, usually the player character or a socket on the player character. //UPROPERTY(BlueprintReadOnly, meta=(ExposeOnSpawn=true), Category=Targeting)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0011008000000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, StartLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_MasterPC_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_MasterPC = { "MasterPC", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, MasterPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_MasterPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_MasterPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->bDestroyOnConfirmation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation = { "bDestroyOnConfirmation", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Parameters for world reticle. Usage of these parameters is dependent on the reticle. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Parameters for world reticle. Usage of these parameters is dependent on the reticle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams = { "ReticleParams", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleParams), Z_Construct_UScriptStruct_FWorldReticleParameters, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Reticle that will appear on top of acquired targets. Reticles will be spawned/despawned as targets are acquired/lost." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass = { "ReticleClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, ReticleClass), Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "//Using a special class for replication purposes.\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Using a special class for replication purposes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0011000000000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, Filter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Draw the debug information (if applicable) for this targeting actor. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
		{ "ToolTip", "Draw the debug information (if applicable) for this targeting actor." },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((AGameplayAbilityTargetActor*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0011000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameplayAbilityTargetActor), &Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC = { "GenericDelegateBoundASC", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameplayAbilityTargetActor, GenericDelegateBoundASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ShouldProduceTargetDataOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_MasterPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDestroyOnConfirmation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_SourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_ReticleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::NewProp_GenericDelegateBoundASC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams = {
		&AGameplayAbilityTargetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameplayAbilityTargetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayAbilityTargetActor, 1086696673);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor>()
	{
		return AGameplayAbilityTargetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayAbilityTargetActor(Z_Construct_UClass_AGameplayAbilityTargetActor, &AGameplayAbilityTargetActor::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("AGameplayAbilityTargetActor"), false, nullptr, nullptr, nullptr);

	void AGameplayAbilityTargetActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartLocation(TEXT("StartLocation"));
		static const FName Name_bDestroyOnConfirmation(TEXT("bDestroyOnConfirmation"));
		static const FName Name_SourceActor(TEXT("SourceActor"));
		static const FName Name_Filter(TEXT("Filter"));
		static const FName Name_bDebug(TEXT("bDebug"));

		const bool bIsValid = true
			&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
			&& Name_bDestroyOnConfirmation == ClassReps[(int32)ENetFields_Private::bDestroyOnConfirmation].Property->GetFName()
			&& Name_SourceActor == ClassReps[(int32)ENetFields_Private::SourceActor].Property->GetFName()
			&& Name_Filter == ClassReps[(int32)ENetFields_Private::Filter].Property->GetFName()
			&& Name_bDebug == ClassReps[(int32)ENetFields_Private::bDebug].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameplayAbilityTargetActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
