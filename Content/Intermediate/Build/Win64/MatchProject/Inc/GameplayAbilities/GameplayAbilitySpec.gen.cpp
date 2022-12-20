// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayAbilitySpec.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitySpec() {}
// Cross Module References
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
// End Cross Module References
	static UEnum* EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectGrantedAbilityRemovePolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectGrantedAbilityRemovePolicy>()
	{
		return EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectGrantedAbilityRemovePolicy(EGameplayEffectGrantedAbilityRemovePolicy_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayEffectGrantedAbilityRemovePolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Hash() { return 2619105896U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectGrantedAbilityRemovePolicy"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately", (int64)EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately },
				{ "EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd", (int64)EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd },
				{ "EGameplayEffectGrantedAbilityRemovePolicy::DoNothing", (int64)EGameplayEffectGrantedAbilityRemovePolicy::DoNothing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CancelAbilityImmediately.Comment", "/** Active abilities are immediately canceled and the ability is removed. */" },
				{ "CancelAbilityImmediately.Name", "EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately" },
				{ "CancelAbilityImmediately.ToolTip", "Active abilities are immediately canceled and the ability is removed." },
				{ "Comment", "/** Describes what happens when a GameplayEffect, that is granting an active ability, is removed from its owner. */" },
				{ "DoNothing.Comment", "/** Granted abilities are left lone when the granting GameplayEffect is removed. */" },
				{ "DoNothing.Name", "EGameplayEffectGrantedAbilityRemovePolicy::DoNothing" },
				{ "DoNothing.ToolTip", "Granted abilities are left lone when the granting GameplayEffect is removed." },
				{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
				{ "RemoveAbilityOnEnd.Comment", "/** Active abilities are allowed to finish, and then removed. */" },
				{ "RemoveAbilityOnEnd.Name", "EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd" },
				{ "RemoveAbilityOnEnd.ToolTip", "Active abilities are allowed to finish, and then removed." },
				{ "ToolTip", "Describes what happens when a GameplayEffect, that is granting an active ability, is removed from its owner." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayEffectGrantedAbilityRemovePolicy",
				"EGameplayEffectGrantedAbilityRemovePolicy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayAbilityActivationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityActivationMode"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityActivationMode::Type>()
	{
		return EGameplayAbilityActivationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityActivationMode(EGameplayAbilityActivationMode_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityActivationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Hash() { return 4185298113U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityActivationMode"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityActivationMode::Authority", (int64)EGameplayAbilityActivationMode::Authority },
				{ "EGameplayAbilityActivationMode::NonAuthority", (int64)EGameplayAbilityActivationMode::NonAuthority },
				{ "EGameplayAbilityActivationMode::Predicting", (int64)EGameplayAbilityActivationMode::Predicting },
				{ "EGameplayAbilityActivationMode::Confirmed", (int64)EGameplayAbilityActivationMode::Confirmed },
				{ "EGameplayAbilityActivationMode::Rejected", (int64)EGameplayAbilityActivationMode::Rejected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Authority.Comment", "/** We are the authority activating this ability */" },
				{ "Authority.Name", "EGameplayAbilityActivationMode::Authority" },
				{ "Authority.ToolTip", "We are the authority activating this ability" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Describes the status of activating this ability, this is updated as prediction is handled */" },
				{ "Confirmed.Comment", "/** We are not the authority, but the authority has confirmed this activation */" },
				{ "Confirmed.Name", "EGameplayAbilityActivationMode::Confirmed" },
				{ "Confirmed.ToolTip", "We are not the authority, but the authority has confirmed this activation" },
				{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
				{ "NonAuthority.Comment", "/** We are not the authority but aren't predicting yet. This is a mostly invalid state to be in */" },
				{ "NonAuthority.Name", "EGameplayAbilityActivationMode::NonAuthority" },
				{ "NonAuthority.ToolTip", "We are not the authority but aren't predicting yet. This is a mostly invalid state to be in" },
				{ "Predicting.Comment", "/** We are predicting the activation of this ability */" },
				{ "Predicting.Name", "EGameplayAbilityActivationMode::Predicting" },
				{ "Predicting.ToolTip", "We are predicting the activation of this ability" },
				{ "Rejected.Comment", "/** We tried to activate it, and server told us we couldn't (even though we thought we could) */" },
				{ "Rejected.Name", "EGameplayAbilityActivationMode::Rejected" },
				{ "Rejected.ToolTip", "We tried to activate it, and server told us we couldn't (even though we thought we could)" },
				{ "ToolTip", "Describes the status of activating this ability, this is updated as prediction is handled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityActivationMode",
				"EGameplayAbilityActivationMode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FGameplayAbilitySpecContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FGameplayAbilitySpecContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FGameplayAbilitySpecContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecContainer"), sizeof(FGameplayAbilitySpecContainer), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecContainer>()
{
	return FGameplayAbilitySpecContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilitySpecContainer(FGameplayAbilitySpecContainer::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilitySpecContainer"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecContainer
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilitySpecContainer")),new UScriptStruct::TCppStructOps<FGameplayAbilitySpecContainer>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecContainer;
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Fast serializer wrapper for above struct */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Fast serializer wrapper for above struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpec, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData[] = {
		{ "Comment", "/** List of activatable abilities */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "List of activatable abilities" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecContainer, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Component that owns this list */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Component that owns this list" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecContainer, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"GameplayAbilitySpecContainer",
		sizeof(FGameplayAbilitySpecContainer),
		alignof(FGameplayAbilitySpecContainer),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilitySpecContainer"), sizeof(FGameplayAbilitySpecContainer), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Hash() { return 1658992981U; }

static_assert(std::is_polymorphic<FGameplayAbilitySpec>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FGameplayAbilitySpec cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FGameplayAbilitySpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpec, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpec"), sizeof(FGameplayAbilitySpec), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpec_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpec>()
{
	return FGameplayAbilitySpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilitySpec(FGameplayAbilitySpec::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilitySpec"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpec
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpec()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilitySpec")),new UScriptStruct::TCppStructOps<FGameplayAbilitySpec>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpec;
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPressed_MetaData[];
#endif
		static void NewProp_InputPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveAfterActivation_MetaData[];
#endif
		static void NewProp_RemoveAfterActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveAfterActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingRemove_MetaData[];
#endif
		static void NewProp_PendingRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PendingRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateOnce_MetaData[];
#endif
		static void NewProp_bActivateOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicAbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicAbilityTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonReplicatedInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonReplicatedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NonReplicatedInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An activatable ability spec, hosted on the ability system component. This defines both what the ability is (what class, what level, input binding etc)\n * and also holds runtime state that must be kept outside of the ability being instanced/activated.\n */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "An activatable ability spec, hosted on the ability system component. This defines both what the ability is (what class, what level, input binding etc)\nand also holds runtime state that must be kept outside of the ability being instanced/activated." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle for outside sources to refer to this spec by */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Handle for outside sources to refer to this spec by" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData[] = {
		{ "Comment", "/** Ability of the spec (Always the CDO. This should be const but too many things modify it currently) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Ability of the spec (Always the CDO. This should be const but too many things modify it currently)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "/** Level of Ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Level of Ability" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData[] = {
		{ "Comment", "/** InputID, if bound */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "InputID, if bound" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, InputID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** Object this ability was created from, can be an actor or static object. Useful to bind an ability to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Object this ability was created from, can be an actor or static object. Useful to bind an ability to a gameplay object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData[] = {
		{ "Comment", "/** A count of the number of times this ability has been activated minus the number of times it has been ended. For instanced abilities this will be the number of currently active instances. Can't replicate until prediction accurately handles this.*/" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "A count of the number of times this ability has been activated minus the number of times it has been ended. For instanced abilities this will be the number of currently active instances. Can't replicate until prediction accurately handles this." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount = { "ActiveCount", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, ActiveCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData[] = {
		{ "Comment", "/** Is input currently pressed. Set to false when input is released */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Is input currently pressed. Set to false when input is released" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->InputPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed = { "InputPressed", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData[] = {
		{ "Comment", "/** If true, this ability should be removed as soon as it finishes executing */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "If true, this ability should be removed as soon as it finishes executing" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->RemoveAfterActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation = { "RemoveAfterActivation", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData[] = {
		{ "Comment", "/** Pending removal due to scope lock */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Pending removal due to scope lock" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->PendingRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove = { "PendingRemove", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData[] = {
		{ "Comment", "/** This ability should be activated once when it is granted. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This ability should be activated once when it is granted." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_SetBit(void* Obj)
	{
		((FGameplayAbilitySpec*)Obj)->bActivateOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce = { "bActivateOnce", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilitySpec), &Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData[] = {
		{ "Comment", "/** Activation state of this ability. This is not replicated since it needs to be overwritten locally on clients during prediction. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Activation state of this ability. This is not replicated since it needs to be overwritten locally on clients during prediction." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo = { "ActivationInfo", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, ActivationInfo), Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData[] = {
		{ "Comment", "/** Optional ability tags that are replicated.  These tags are also captured as source tags by applied gameplay effects. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Optional ability tags that are replicated.  These tags are also captured as source tags by applied gameplay effects." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags = { "DynamicAbilityTags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, DynamicAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_Inner = { "NonReplicatedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData[] = {
		{ "Comment", "/** Non replicating instances of this ability. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Non replicating instances of this ability." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances = { "NonReplicatedInstances", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, NonReplicatedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_Inner = { "ReplicatedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData[] = {
		{ "Comment", "/** Replicated instances of this ability.. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Replicated instances of this ability.." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances = { "ReplicatedInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, ReplicatedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData[] = {
		{ "Comment", "/** Handle to GE that granted us (usually invalid) */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Handle to GE that granted us (usually invalid)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle = { "GameplayEffectHandle", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpec, GameplayEffectHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_SourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActiveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_InputPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_RemoveAfterActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_PendingRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_bActivateOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ActivationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_DynamicAbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_NonReplicatedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_ReplicatedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::NewProp_GameplayEffectHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"GameplayAbilitySpec",
		sizeof(FGameplayAbilitySpec),
		alignof(FGameplayAbilitySpec),
		Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilitySpec"), sizeof(FGameplayAbilitySpec), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpec_Hash() { return 4095375190U; }
class UScriptStruct* FGameplayAbilityActivationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityActivationInfo"), sizeof(FGameplayAbilityActivationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityActivationInfo>()
{
	return FGameplayAbilityActivationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityActivationInfo(FGameplayAbilityActivationInfo::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityActivationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActivationInfo
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActivationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityActivationInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityActivationInfo>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActivationInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeEndedByOtherInstance_MetaData[];
#endif
		static void NewProp_bCanBeEndedByOtherInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeEndedByOtherInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionKeyWhenActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionKeyWhenActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""FGameplayAbilityActivationInfo\n *\n *\x09""Data tied to a specific activation of an ability.\n *\x09\x09-Tell us whether we are the authority, if we are predicting, confirmed, etc.\n *\x09\x09-Holds current and previous PredictionKey\n *\x09\x09-Generally not meant to be subclassed in projects.\n *\x09\x09-Passed around by value since the struct is small.\n */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "FGameplayAbilityActivationInfo\n\nData tied to a specific activation of an ability.\n        -Tell us whether we are the authority, if we are predicting, confirmed, etc.\n        -Holds current and previous PredictionKey\n        -Generally not meant to be subclassed in projects.\n        -Passed around by value since the struct is small." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityActivationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Activation status of this ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Activation status of this ability" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode = { "ActivationMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActivationInfo, ActivationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityActivationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData[] = {
		{ "Comment", "/** An ability that runs on multiple game instances can be canceled by a remote instance, but only if that remote instance has already confirmed starting it. */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "An ability that runs on multiple game instances can be canceled by a remote instance, but only if that remote instance has already confirmed starting it." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_SetBit(void* Obj)
	{
		((FGameplayAbilityActivationInfo*)Obj)->bCanBeEndedByOtherInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance = { "bCanBeEndedByOtherInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityActivationInfo), &Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData[] = {
		{ "Comment", "/** This was the prediction key used to activate this ability. It does not get updated if new prediction keys are generated over the course of the ability */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This was the prediction key used to activate this ability. It does not get updated if new prediction keys are generated over the course of the ability" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated = { "PredictionKeyWhenActivated", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_ActivationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_bCanBeEndedByOtherInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::NewProp_PredictionKeyWhenActivated,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityActivationInfo",
		sizeof(FGameplayAbilityActivationInfo),
		alignof(FGameplayAbilityActivationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityActivationInfo"), sizeof(FGameplayAbilityActivationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Hash() { return 3618487753U; }
class UScriptStruct* FGameplayAbilitySpecDef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecDef"), sizeof(FGameplayAbilitySpecDef), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecDef>()
{
	return FGameplayAbilitySpecDef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilitySpecDef(FGameplayAbilitySpecDef::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilitySpecDef"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecDef
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecDef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilitySpecDef")),new UScriptStruct::TCppStructOps<FGameplayAbilitySpecDef>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecDef;
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Ability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScalableFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelScalableFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemovalPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovalPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RemovalPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssignedHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is data that can be used to create an FGameplayAbilitySpec. Has some data that is only relevant when granted by a GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This is data that can be used to create an FGameplayAbilitySpec. Has some data that is only relevant when granted by a GameplayEffect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecDef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What ability to grant */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What ability to grant" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000080010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What level to grant this ability at */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What level to grant this ability at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat = { "LevelScalableFloat", nullptr, (EPropertyFlags)0x0010000080010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, LevelScalableFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** Input ID to bind this ability to */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Input ID to bind this ability to" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000080010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, InputID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData[] = {
		{ "Category", "Ability Definition" },
		{ "Comment", "/** What will remove this ability later */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What will remove this ability later" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy = { "RemovalPolicy", nullptr, (EPropertyFlags)0x0010000080010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, RemovalPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** What granted this spec, not replicated or settable in editor */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "What granted this spec, not replicated or settable in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData[] = {
		{ "Comment", "/** This handle can be set if the SpecDef is used to create a real FGameplaybilitySpec */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "This handle can be set if the SpecDef is used to create a real FGameplaybilitySpec" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle = { "AssignedHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecDef, AssignedHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_Ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_LevelScalableFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_InputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_RemovalPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_SourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::NewProp_AssignedHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecDef",
		sizeof(FGameplayAbilitySpecDef),
		alignof(FGameplayAbilitySpecDef),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilitySpecDef"), sizeof(FGameplayAbilitySpecDef), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Hash() { return 2181797649U; }
class UScriptStruct* FGameplayAbilitySpecHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandle"), sizeof(FGameplayAbilitySpecHandle), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandle>()
{
	return FGameplayAbilitySpecHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilitySpecHandle(FGameplayAbilitySpecHandle::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilitySpecHandle"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandle
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilitySpecHandle")),new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandle>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandle;
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle that points to a specific granted ability. These are globally unique */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
		{ "ToolTip", "Handle that points to a specific granted ability. These are globally unique" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySpec.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecHandle",
		sizeof(FGameplayAbilitySpecHandle),
		alignof(FGameplayAbilitySpecHandle),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilitySpecHandle"), sizeof(FGameplayAbilitySpecHandle), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Hash() { return 2356360707U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
