// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemGlobals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemGlobals() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayTagReponseTable_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager_NoRegister();
// End Cross Module References
class UScriptStruct* FNetSerializeScriptStructCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("NetSerializeScriptStructCache"), sizeof(FNetSerializeScriptStructCache), Get_Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FNetSerializeScriptStructCache>()
{
	return FNetSerializeScriptStructCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetSerializeScriptStructCache(FNetSerializeScriptStructCache::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("NetSerializeScriptStructCache"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFNetSerializeScriptStructCache
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFNetSerializeScriptStructCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NetSerializeScriptStructCache")),new UScriptStruct::TCppStructOps<FNetSerializeScriptStructCache>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFNetSerializeScriptStructCache;
	struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScriptStructs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptStructs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScriptStructs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//  Container for safely replicating  script struct references (constrained to a specified parent struct)\n" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Container for safely replicating  script struct references (constrained to a specified parent struct)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetSerializeScriptStructCache>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_Inner = { "ScriptStructs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs = { "ScriptStructs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetSerializeScriptStructCache, ScriptStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::NewProp_ScriptStructs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"NetSerializeScriptStructCache",
		sizeof(FNetSerializeScriptStructCache),
		alignof(FNetSerializeScriptStructCache),
		Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetSerializeScriptStructCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetSerializeScriptStructCache"), sizeof(FNetSerializeScriptStructCache), Get_Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Hash() { return 936037465U; }
	DEFINE_FUNCTION(UAbilitySystemGlobals::execServerCancelPlayerAbility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbilityNameMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCancelPlayerAbility(Z_Param_AbilityNameMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemGlobals::execServerEndPlayerAbility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbilityNameMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEndPlayerAbility(Z_Param_AbilityNameMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemGlobals::execServerActivatePlayerAbility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AbilityNameMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerActivatePlayerAbility(Z_Param_AbilityNameMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemGlobals::execListPlayerAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListPlayerAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemGlobals::execToggleIgnoreAbilitySystemCosts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleIgnoreAbilitySystemCosts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySystemGlobals::execToggleIgnoreAbilitySystemCooldowns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleIgnoreAbilitySystemCooldowns();
		P_NATIVE_END;
	}
	void UAbilitySystemGlobals::StaticRegisterNativesUAbilitySystemGlobals()
	{
		UClass* Class = UAbilitySystemGlobals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ListPlayerAbilities", &UAbilitySystemGlobals::execListPlayerAbilities },
			{ "ServerActivatePlayerAbility", &UAbilitySystemGlobals::execServerActivatePlayerAbility },
			{ "ServerCancelPlayerAbility", &UAbilitySystemGlobals::execServerCancelPlayerAbility },
			{ "ServerEndPlayerAbility", &UAbilitySystemGlobals::execServerEndPlayerAbility },
			{ "ToggleIgnoreAbilitySystemCooldowns", &UAbilitySystemGlobals::execToggleIgnoreAbilitySystemCooldowns },
			{ "ToggleIgnoreAbilitySystemCosts", &UAbilitySystemGlobals::execToggleIgnoreAbilitySystemCosts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Show all abilities currently assigned to the local player */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Show all abilities currently assigned to the local player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ListPlayerAbilities", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics
	{
		struct AbilitySystemGlobals_eventServerActivatePlayerAbility_Parms
		{
			FString AbilityNameMatch;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityNameMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::NewProp_AbilityNameMatch = { "AbilityNameMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilitySystemGlobals_eventServerActivatePlayerAbility_Parms, AbilityNameMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::NewProp_AbilityNameMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Force server activation of a specific player ability (useful for cheat testing) */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Force server activation of a specific player ability (useful for cheat testing)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ServerActivatePlayerAbility", nullptr, nullptr, sizeof(AbilitySystemGlobals_eventServerActivatePlayerAbility_Parms), Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics
	{
		struct AbilitySystemGlobals_eventServerCancelPlayerAbility_Parms
		{
			FString AbilityNameMatch;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityNameMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::NewProp_AbilityNameMatch = { "AbilityNameMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilitySystemGlobals_eventServerCancelPlayerAbility_Parms, AbilityNameMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::NewProp_AbilityNameMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Force server cancellation of a specific player ability (useful for cheat testing) */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Force server cancellation of a specific player ability (useful for cheat testing)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ServerCancelPlayerAbility", nullptr, nullptr, sizeof(AbilitySystemGlobals_eventServerCancelPlayerAbility_Parms), Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics
	{
		struct AbilitySystemGlobals_eventServerEndPlayerAbility_Parms
		{
			FString AbilityNameMatch;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbilityNameMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::NewProp_AbilityNameMatch = { "AbilityNameMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilitySystemGlobals_eventServerEndPlayerAbility_Parms, AbilityNameMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::NewProp_AbilityNameMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Force server deactivation of a specific player ability (useful for cheat testing) */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Force server deactivation of a specific player ability (useful for cheat testing)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ServerEndPlayerAbility", nullptr, nullptr, sizeof(AbilitySystemGlobals_eventServerEndPlayerAbility_Parms), Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Toggles whether we should ignore ability cooldowns. Does nothing in shipping builds */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Toggles whether we should ignore ability cooldowns. Does nothing in shipping builds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ToggleIgnoreAbilitySystemCooldowns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Toggles whether we should ignore ability costs. Does nothing in shipping builds */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Toggles whether we should ignore ability costs. Does nothing in shipping builds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySystemGlobals, nullptr, "ToggleIgnoreAbilitySystemCosts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilitySystemGlobals_NoRegister()
	{
		return UAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalsClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitySystemGlobalsClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailIsDeadTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailIsDeadTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailIsDeadName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailIsDeadName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCooldownTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailCooldownTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCooldownName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailCooldownName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCostTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailCostTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCostName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailCostName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsBlockedTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsBlockedTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsBlockedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailTagsBlockedName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsMissingTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsMissingTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsMissingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailTagsMissingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailNetworkingTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivateFailNetworkingTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateFailNetworkingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivateFailNetworkingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimalReplicationTagCountBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimalReplicationTagCountBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDataStructCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDataStructCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowGameplayModEvaluationChannels_MetaData[];
#endif
		static void NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowGameplayModEvaluationChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultGameplayModEvaluationChannel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayModEvaluationChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultGameplayModEvaluationChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayModEvaluationChannelAliases_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GameplayModEvaluationChannelAliases;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCurveTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalCurveTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCurveTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalCurveTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeMetaDataTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeMetaDataTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeMetaDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalAttributeMetaDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeSetDefaultsTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeSetDefaultsTableName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeSetDefaultsTableNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalAttributeDefaultsTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeDefaultsTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalAttributeDefaultsTables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameplayCueNotifyPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayCueNotifyPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagResponseTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagResponseTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagResponseTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayTagResponseTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictTargetGameplayEffects_MetaData[];
#endif
		static void NewProp_PredictTargetGameplayEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PredictTargetGameplayEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalGameplayCueManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySystemGlobals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ListPlayerAbilities, "ListPlayerAbilities" }, // 3283183533
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ServerActivatePlayerAbility, "ServerActivatePlayerAbility" }, // 634950185
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ServerCancelPlayerAbility, "ServerCancelPlayerAbility" }, // 3860078883
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ServerEndPlayerAbility, "ServerEndPlayerAbility" }, // 3767256931
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns, "ToggleIgnoreAbilitySystemCooldowns" }, // 539938537
		{ &Z_Construct_UFunction_UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts, "ToggleIgnoreAbilitySystemCosts" }, // 2885889954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds global data for the ability system. Can be configured per project via config file */" },
		{ "IncludePath", "AbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Holds global data for the ability system. Can be configured per project via config file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName_MetaData[] = {
		{ "Comment", "/** The class to instantiate as the globals object. Defaults to this class but can be overridden */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "The class to instantiate as the globals object. Defaults to this class but can be overridden" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName = { "AbilitySystemGlobalsClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, AbilitySystemGlobalsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag_MetaData[] = {
		{ "Comment", "/** TryActivate failed due to being dead */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "TryActivate failed due to being dead" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag = { "ActivateFailIsDeadTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailIsDeadTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName = { "ActivateFailIsDeadName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailIsDeadName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag_MetaData[] = {
		{ "Comment", "/** TryActivate failed due to being on cooldown */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "TryActivate failed due to being on cooldown" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag = { "ActivateFailCooldownTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName = { "ActivateFailCooldownName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCooldownName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag_MetaData[] = {
		{ "Comment", "/** TryActivate failed due to not being able to spend costs */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "TryActivate failed due to not being able to spend costs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag = { "ActivateFailCostTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCostTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName = { "ActivateFailCostName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailCostName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag_MetaData[] = {
		{ "Comment", "/** TryActivate failed due to being blocked by other abilities */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "TryActivate failed due to being blocked by other abilities" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag = { "ActivateFailTagsBlockedTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsBlockedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName = { "ActivateFailTagsBlockedName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsBlockedName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag_MetaData[] = {
		{ "Comment", "/** TryActivate failed due to missing required tags */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "TryActivate failed due to missing required tags" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag = { "ActivateFailTagsMissingTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsMissingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName = { "ActivateFailTagsMissingName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailTagsMissingName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag_MetaData[] = {
		{ "Comment", "/** Failed to activate due to invalid networking settings, this is designer error */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Failed to activate due to invalid networking settings, this is designer error" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag = { "ActivateFailNetworkingTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailNetworkingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName = { "ActivateFailNetworkingName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, ActivateFailNetworkingName), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits_MetaData[] = {
		{ "Comment", "/** How many bits to use for \"number of tags\" in FMinimapReplicationTagCountMap::NetSerialize.  */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "How many bits to use for \"number of tags\" in FMinimapReplicationTagCountMap::NetSerialize." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits = { "MinimalReplicationTagCountBits", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, MinimalReplicationTagCountBits), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache = { "TargetDataStructCache", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, TargetDataStructCache), Z_Construct_UScriptStruct_FNetSerializeScriptStructCache, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_MetaData[] = {
		{ "Comment", "/** Whether the game should allow the usage of gameplay mod evaluation channels or not */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Whether the game should allow the usage of gameplay mod evaluation channels or not" },
	};
#endif
	void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj)
	{
		((UAbilitySystemGlobals*)Obj)->bAllowGameplayModEvaluationChannels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels = { "bAllowGameplayModEvaluationChannels", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_MetaData[] = {
		{ "Comment", "/** The default mod evaluation channel for the game */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "The default mod evaluation channel for the game" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel = { "DefaultGameplayModEvaluationChannel", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases_MetaData[] = {
		{ "Comment", "/** Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid) */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases = { "GameplayModEvaluationChannelAliases", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(GameplayModEvaluationChannelAliases, UAbilitySystemGlobals), STRUCT_OFFSET(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName_MetaData[] = {
		{ "Comment", "/** Name of global curve table to use as the default for scalable floats, etc. */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Name of global curve table to use as the default for scalable floats, etc." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName = { "GlobalCurveTableName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable = { "GlobalCurveTable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName_MetaData[] = {
		{ "Comment", "/** Holds information about the valid attributes' min and max values and stacking rules */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Holds information about the valid attributes' min and max values and stacking rules" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName = { "GlobalAttributeMetaDataTableName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable = { "GlobalAttributeMetaDataTable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName_MetaData[] = {
		{ "Comment", "/** Holds default values for attribute sets, keyed off of Name/Levels. NOTE: Preserved for backwards compatibility, should use the array version below now */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Holds default values for attribute sets, keyed off of Name/Levels. NOTE: Preserved for backwards compatibility, should use the array version below now" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName = { "GlobalAttributeSetDefaultsTableName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_MetaData[] = {
		{ "Comment", "/** Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_Inner = { "GlobalAttributeDefaultsTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_MetaData[] = {
		{ "Comment", "/** Curve tables containing default values for attribute sets, keyed off of Name/Levels */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Curve tables containing default values for attribute sets, keyed off of Name/Levels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables = { "GlobalAttributeDefaultsTables", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeDefaultsTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass_MetaData[] = {
		{ "Comment", "/** Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset. */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass = { "GlobalGameplayCueManagerClass", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName_MetaData[] = {
		{ "Comment", "/** Object reference to gameplay cue manager (E.g., reference to a specific blueprint of your GameplayCueManager class. This is not necessary unless you want to have data or blueprints in your gameplay cue manager. */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Object reference to gameplay cue manager (E.g., reference to a specific blueprint of your GameplayCueManager class. This is not necessary unless you want to have data or blueprints in your gameplay cue manager." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName = { "GlobalGameplayCueManagerName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_Inner = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_MetaData[] = {
		{ "Comment", "/** Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set. */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayCueNotifyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName_MetaData[] = {
		{ "Comment", "/** The class to instantiate as the GameplayTagResponseTable. */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "The class to instantiate as the GameplayTagResponseTable." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName = { "GameplayTagResponseTableName", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable = { "GameplayTagResponseTable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTable), Z_Construct_UClass_UGameplayTagReponseTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_MetaData[] = {
		{ "Comment", "/** Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects" },
	};
#endif
	void Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_SetBit(void* Obj)
	{
		((UAbilitySystemGlobals*)Obj)->PredictTargetGameplayEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects = { "PredictTargetGameplayEffects", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilitySystemGlobals), &Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager_MetaData[] = {
		{ "Comment", "/** Manager for all gameplay cues */" },
		{ "ModuleRelativePath", "Public/AbilitySystemGlobals.h" },
		{ "ToolTip", "Manager for all gameplay cues" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager = { "GlobalGameplayCueManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManager), Z_Construct_UClass_UGameplayCueManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_AbilitySystemGlobalsClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailIsDeadName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCooldownName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailCostName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsBlockedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailTagsMissingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_ActivateFailNetworkingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_MinimalReplicationTagCountBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_TargetDataStructCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_bAllowGameplayModEvaluationChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_DefaultGameplayModEvaluationChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayModEvaluationChannelAliases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalCurveTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeMetaDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeSetDefaultsTableNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalAttributeDefaultsTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManagerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayCueNotifyPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GameplayTagResponseTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_PredictTargetGameplayEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemGlobals_Statics::NewProp_GlobalGameplayCueManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemGlobals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemGlobals_Statics::ClassParams = {
		&UAbilitySystemGlobals::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySystemGlobals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySystemGlobals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySystemGlobals, 1040825239);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemGlobals>()
	{
		return UAbilitySystemGlobals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySystemGlobals(Z_Construct_UClass_UAbilitySystemGlobals, &UAbilitySystemGlobals::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilitySystemGlobals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemGlobals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
