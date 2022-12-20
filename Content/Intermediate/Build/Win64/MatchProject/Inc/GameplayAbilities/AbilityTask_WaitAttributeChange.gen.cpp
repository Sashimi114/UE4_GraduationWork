// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAttributeChange() {}
// Cross Module References
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAttributeChangeDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EWaitAttributeChangeComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EWaitAttributeChangeComparison"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitAttributeChangeComparison::Type>()
	{
		return EWaitAttributeChangeComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWaitAttributeChangeComparison(EWaitAttributeChangeComparison_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EWaitAttributeChangeComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Hash() { return 1374066177U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWaitAttributeChangeComparison"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWaitAttributeChangeComparison::None", (int64)EWaitAttributeChangeComparison::None },
				{ "EWaitAttributeChangeComparison::GreaterThan", (int64)EWaitAttributeChangeComparison::GreaterThan },
				{ "EWaitAttributeChangeComparison::LessThan", (int64)EWaitAttributeChangeComparison::LessThan },
				{ "EWaitAttributeChangeComparison::GreaterThanOrEqualTo", (int64)EWaitAttributeChangeComparison::GreaterThanOrEqualTo },
				{ "EWaitAttributeChangeComparison::LessThanOrEqualTo", (int64)EWaitAttributeChangeComparison::LessThanOrEqualTo },
				{ "EWaitAttributeChangeComparison::NotEqualTo", (int64)EWaitAttributeChangeComparison::NotEqualTo },
				{ "EWaitAttributeChangeComparison::ExactlyEqualTo", (int64)EWaitAttributeChangeComparison::ExactlyEqualTo },
				{ "EWaitAttributeChangeComparison::MAX", (int64)EWaitAttributeChangeComparison::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExactlyEqualTo.Name", "EWaitAttributeChangeComparison::ExactlyEqualTo" },
				{ "GreaterThan.Name", "EWaitAttributeChangeComparison::GreaterThan" },
				{ "GreaterThanOrEqualTo.Name", "EWaitAttributeChangeComparison::GreaterThanOrEqualTo" },
				{ "LessThan.Name", "EWaitAttributeChangeComparison::LessThan" },
				{ "LessThanOrEqualTo.Name", "EWaitAttributeChangeComparison::LessThanOrEqualTo" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EWaitAttributeChangeComparison::MAX" },
				{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
				{ "None.Name", "EWaitAttributeChangeComparison::None" },
				{ "NotEqualTo.Name", "EWaitAttributeChangeComparison::NotEqualTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EWaitAttributeChangeComparison",
				"EWaitAttributeChangeComparison::Type",
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
	DEFINE_FUNCTION(UAbilityTask_WaitAttributeChange::execWaitForAttributeChangeWithComparison)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_InAttribute);
		P_GET_STRUCT(FGameplayTag,Z_Param_InWithTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_InWithoutTag);
		P_GET_PROPERTY(FByteProperty,Z_Param_InComparisonType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InComparisonValue);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAttributeChange**)Z_Param__Result=UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(Z_Param_OwningAbility,Z_Param_InAttribute,Z_Param_InWithTag,Z_Param_InWithoutTag,EWaitAttributeChangeComparison::Type(Z_Param_InComparisonType),Z_Param_InComparisonValue,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitAttributeChange::execWaitForAttributeChange)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_STRUCT(FGameplayTag,Z_Param_WithSrcTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_WithoutSrcTag);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAttributeChange**)Z_Param__Result=UAbilityTask_WaitAttributeChange::WaitForAttributeChange(Z_Param_OwningAbility,Z_Param_Attribute,Z_Param_WithSrcTag,Z_Param_WithoutSrcTag,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitAttributeChange::StaticRegisterNativesUAbilityTask_WaitAttributeChange()
	{
		UClass* Class = UAbilityTask_WaitAttributeChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForAttributeChange", &UAbilityTask_WaitAttributeChange::execWaitForAttributeChange },
			{ "WaitForAttributeChangeWithComparison", &UAbilityTask_WaitAttributeChange::execWaitForAttributeChangeWithComparison },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics
	{
		struct AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAttribute Attribute;
			FGameplayTag WithSrcTag;
			FGameplayTag WithoutSrcTag;
			bool TriggerOnce;
			AActor* OptionalExternalOwner;
			UAbilityTask_WaitAttributeChange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WithSrcTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WithoutSrcTag;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithSrcTag = { "WithSrcTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, WithSrcTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithoutSrcTag = { "WithoutSrcTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, WithoutSrcTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms*)Obj)->TriggerOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithSrcTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_WithoutSrcTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_TriggerOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_OptionalExternalOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until an attribute changes. */" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "ToolTip", "Wait until an attribute changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChange, nullptr, "WaitForAttributeChange", nullptr, nullptr, sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChange_Parms), Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics
	{
		struct AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAttribute InAttribute;
			FGameplayTag InWithTag;
			FGameplayTag InWithoutTag;
			TEnumAsByte<EWaitAttributeChangeComparison::Type> InComparisonType;
			float InComparisonValue;
			bool TriggerOnce;
			AActor* OptionalExternalOwner;
			UAbilityTask_WaitAttributeChange* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttribute;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWithTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWithoutTag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InComparisonType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InComparisonValue;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithTag = { "InWithTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InWithTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithoutTag = { "InWithoutTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InWithoutTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonType = { "InComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InComparisonType), Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonValue = { "InComparisonValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, InComparisonValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms*)Obj)->TriggerOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InWithoutTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_InComparisonValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_TriggerOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_OptionalExternalOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until an attribute changes to pass a given test. */" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "ToolTip", "Wait until an attribute changes to pass a given test." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChange, nullptr, "WaitForAttributeChangeWithComparison", nullptr, nullptr, sizeof(AbilityTask_WaitAttributeChange_eventWaitForAttributeChangeWithComparison_Parms), Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange_NoRegister()
	{
		return UAbilityTask_WaitAttributeChange::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChange, "WaitForAttributeChange" }, // 2582160344
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison, "WaitForAttributeChangeWithComparison" }, // 3804165840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
		{ "ToolTip", "Waits for the actor to activate another ability" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChange, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChange.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_WaitAttributeChange, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_OnChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::NewProp_ExternalOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAttributeChange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::ClassParams = {
		&UAbilityTask_WaitAttributeChange::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityTask_WaitAttributeChange, 1915219603);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAttributeChange>()
	{
		return UAbilityTask_WaitAttributeChange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityTask_WaitAttributeChange(Z_Construct_UClass_UAbilityTask_WaitAttributeChange, &UAbilityTask_WaitAttributeChange::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilityTask_WaitAttributeChange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAttributeChange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
