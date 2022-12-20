// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectTypes() {}
// Cross Module References
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings();
// End Cross Module References
	static UEnum* EGameplayTagEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayTagEventType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTagEventType::Type>()
	{
		return EGameplayTagEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagEventType(EGameplayTagEventType_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayTagEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Hash() { return 3745283808U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagEventType"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayTagEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagEventType::NewOrRemoved", (int64)EGameplayTagEventType::NewOrRemoved },
				{ "EGameplayTagEventType::AnyCountChange", (int64)EGameplayTagEventType::AnyCountChange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyCountChange.Comment", "/** Event happens any time tag \"count\" changes */" },
				{ "AnyCountChange.Name", "EGameplayTagEventType::AnyCountChange" },
				{ "AnyCountChange.ToolTip", "Event happens any time tag \"count\" changes" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Rather a tag was added or removed, used in callbacks */" },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "NewOrRemoved.Comment", "/** Event only happens when tag is new or completely removed */" },
				{ "NewOrRemoved.Name", "EGameplayTagEventType::NewOrRemoved" },
				{ "NewOrRemoved.ToolTip", "Event only happens when tag is new or completely removed" },
				{ "ToolTip", "Rather a tag was added or removed, used in callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayTagEventType",
				"EGameplayTagEventType::Type",
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
	static UEnum* EGameplayCueEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayCueEvent"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueEvent::Type>()
	{
		return EGameplayCueEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayCueEvent(EGameplayCueEvent_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayCueEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Hash() { return 2431675653U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayCueEvent"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayCueEvent::OnActive", (int64)EGameplayCueEvent::OnActive },
				{ "EGameplayCueEvent::WhileActive", (int64)EGameplayCueEvent::WhileActive },
				{ "EGameplayCueEvent::Executed", (int64)EGameplayCueEvent::Executed },
				{ "EGameplayCueEvent::Removed", (int64)EGameplayCueEvent::Removed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Indicates what type of action happend to a specific gameplay cue tag. Sometimes you will get multiple events at once */" },
				{ "Executed.Comment", "/** Called when a GameplayCue is executed: instant effects or periodic tick */" },
				{ "Executed.Name", "EGameplayCueEvent::Executed" },
				{ "Executed.ToolTip", "Called when a GameplayCue is executed: instant effects or periodic tick" },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "OnActive.Comment", "/** Called when GameplayCue is activated */" },
				{ "OnActive.Name", "EGameplayCueEvent::OnActive" },
				{ "OnActive.ToolTip", "Called when GameplayCue is activated" },
				{ "Removed.Comment", "/** Called when GameplayCue is removed */" },
				{ "Removed.Name", "EGameplayCueEvent::Removed" },
				{ "Removed.ToolTip", "Called when GameplayCue is removed" },
				{ "ToolTip", "Indicates what type of action happend to a specific gameplay cue tag. Sometimes you will get multiple events at once" },
				{ "WhileActive.Comment", "/** Called when GameplayCue is active, even if it wasn't actually just applied (Join in progress, etc) */" },
				{ "WhileActive.Name", "EGameplayCueEvent::WhileActive" },
				{ "WhileActive.ToolTip", "Called when GameplayCue is active, even if it wasn't actually just applied (Join in progress, etc)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayCueEvent",
				"EGameplayCueEvent::Type",
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
	static UEnum* EGameplayEffectStackingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingType>()
	{
		return EGameplayEffectStackingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectStackingType(EGameplayEffectStackingType_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayEffectStackingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Hash() { return 521050718U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectStackingType"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectStackingType::None", (int64)EGameplayEffectStackingType::None },
				{ "EGameplayEffectStackingType::AggregateBySource", (int64)EGameplayEffectStackingType::AggregateBySource },
				{ "EGameplayEffectStackingType::AggregateByTarget", (int64)EGameplayEffectStackingType::AggregateByTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AggregateBySource.Comment", "/** Each caster has its own stack. */" },
				{ "AggregateBySource.Name", "EGameplayEffectStackingType::AggregateBySource" },
				{ "AggregateBySource.ToolTip", "Each caster has its own stack." },
				{ "AggregateByTarget.Comment", "/** Each target has its own stack. */" },
				{ "AggregateByTarget.Name", "EGameplayEffectStackingType::AggregateByTarget" },
				{ "AggregateByTarget.ToolTip", "Each target has its own stack." },
				{ "Comment", "/** Enumeration for ways a single GameplayEffect asset can stack. */" },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "None.Comment", "/** No stacking. Multiple applications of this GameplayEffect are treated as separate instances. */" },
				{ "None.Name", "EGameplayEffectStackingType::None" },
				{ "None.ToolTip", "No stacking. Multiple applications of this GameplayEffect are treated as separate instances." },
				{ "ToolTip", "Enumeration for ways a single GameplayEffect asset can stack." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayEffectStackingType",
				"EGameplayEffectStackingType",
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
	static UEnum* EGameplayEffectAttributeCaptureSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectAttributeCaptureSource"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectAttributeCaptureSource>()
	{
		return EGameplayEffectAttributeCaptureSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayEffectAttributeCaptureSource(EGameplayEffectAttributeCaptureSource_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayEffectAttributeCaptureSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Hash() { return 3924431167U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayEffectAttributeCaptureSource"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayEffectAttributeCaptureSource::Source", (int64)EGameplayEffectAttributeCaptureSource::Source },
				{ "EGameplayEffectAttributeCaptureSource::Target", (int64)EGameplayEffectAttributeCaptureSource::Target },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enumeration for options of where to capture gameplay attributes from for gameplay effects. */" },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "Source.Comment", "/** Source (caster) of the gameplay effect. */" },
				{ "Source.Name", "EGameplayEffectAttributeCaptureSource::Source" },
				{ "Source.ToolTip", "Source (caster) of the gameplay effect." },
				{ "Target.Comment", "/** Target (recipient) of the gameplay effect. */" },
				{ "Target.Name", "EGameplayEffectAttributeCaptureSource::Target" },
				{ "Target.ToolTip", "Target (recipient) of the gameplay effect." },
				{ "ToolTip", "Enumeration for options of where to capture gameplay attributes from for gameplay effects." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayEffectAttributeCaptureSource",
				"EGameplayEffectAttributeCaptureSource",
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
	static UEnum* EGameplayModOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModOp"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModOp::Type>()
	{
		return EGameplayModOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayModOp(EGameplayModOp_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayModOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Hash() { return 247783414U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayModOp"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayModOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayModOp::Additive", (int64)EGameplayModOp::Additive },
				{ "EGameplayModOp::Multiplicitive", (int64)EGameplayModOp::Multiplicitive },
				{ "EGameplayModOp::Division", (int64)EGameplayModOp::Division },
				{ "EGameplayModOp::Override", (int64)EGameplayModOp::Override },
				{ "EGameplayModOp::Max", (int64)EGameplayModOp::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.Comment", "/** Numeric. */" },
				{ "Additive.DisplayName", "Add" },
				{ "Additive.Name", "EGameplayModOp::Additive" },
				{ "Additive.ToolTip", "Numeric." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it */" },
				{ "Division.Comment", "/** Numeric. */" },
				{ "Division.DisplayName", "Divide" },
				{ "Division.Name", "EGameplayModOp::Division" },
				{ "Division.ToolTip", "Numeric." },
				{ "Max.Comment", "// This must always be at the end.\n" },
				{ "Max.DisplayName", "Invalid" },
				{ "Max.Name", "EGameplayModOp::Max" },
				{ "Max.ToolTip", "This must always be at the end." },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "Multiplicitive.Comment", "/** Numeric. */" },
				{ "Multiplicitive.DisplayName", "Multiply" },
				{ "Multiplicitive.Name", "EGameplayModOp::Multiplicitive" },
				{ "Multiplicitive.ToolTip", "Numeric." },
				{ "Override.Comment", "/** Other. */" },
				{ "Override.DisplayName", "Override" },
				{ "Override.Name", "EGameplayModOp::Override" },
				{ "Override.ToolTip", "Other." },
				{ "ToolTip", "Defines the ways that mods will modify attributes. Numeric ones operate on the existing value, override ignores it" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayModOp",
				"EGameplayModOp::Type",
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
	static UEnum* EGameplayModEvaluationChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayModEvaluationChannel"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModEvaluationChannel>()
	{
		return EGameplayModEvaluationChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayModEvaluationChannel(EGameplayModEvaluationChannel_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayModEvaluationChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Hash() { return 4142984008U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayModEvaluationChannel"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayModEvaluationChannel::Channel0", (int64)EGameplayModEvaluationChannel::Channel0 },
				{ "EGameplayModEvaluationChannel::Channel1", (int64)EGameplayModEvaluationChannel::Channel1 },
				{ "EGameplayModEvaluationChannel::Channel2", (int64)EGameplayModEvaluationChannel::Channel2 },
				{ "EGameplayModEvaluationChannel::Channel3", (int64)EGameplayModEvaluationChannel::Channel3 },
				{ "EGameplayModEvaluationChannel::Channel4", (int64)EGameplayModEvaluationChannel::Channel4 },
				{ "EGameplayModEvaluationChannel::Channel5", (int64)EGameplayModEvaluationChannel::Channel5 },
				{ "EGameplayModEvaluationChannel::Channel6", (int64)EGameplayModEvaluationChannel::Channel6 },
				{ "EGameplayModEvaluationChannel::Channel7", (int64)EGameplayModEvaluationChannel::Channel7 },
				{ "EGameplayModEvaluationChannel::Channel8", (int64)EGameplayModEvaluationChannel::Channel8 },
				{ "EGameplayModEvaluationChannel::Channel9", (int64)EGameplayModEvaluationChannel::Channel9 },
				{ "EGameplayModEvaluationChannel::Channel_MAX", (int64)EGameplayModEvaluationChannel::Channel_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Channel0.Hidden", "" },
				{ "Channel0.Name", "EGameplayModEvaluationChannel::Channel0" },
				{ "Channel1.Hidden", "" },
				{ "Channel1.Name", "EGameplayModEvaluationChannel::Channel1" },
				{ "Channel2.Hidden", "" },
				{ "Channel2.Name", "EGameplayModEvaluationChannel::Channel2" },
				{ "Channel3.Hidden", "" },
				{ "Channel3.Name", "EGameplayModEvaluationChannel::Channel3" },
				{ "Channel4.Hidden", "" },
				{ "Channel4.Name", "EGameplayModEvaluationChannel::Channel4" },
				{ "Channel5.Hidden", "" },
				{ "Channel5.Name", "EGameplayModEvaluationChannel::Channel5" },
				{ "Channel6.Hidden", "" },
				{ "Channel6.Name", "EGameplayModEvaluationChannel::Channel6" },
				{ "Channel7.Hidden", "" },
				{ "Channel7.Name", "EGameplayModEvaluationChannel::Channel7" },
				{ "Channel8.Hidden", "" },
				{ "Channel8.Name", "EGameplayModEvaluationChannel::Channel8" },
				{ "Channel9.Hidden", "" },
				{ "Channel9.Name", "EGameplayModEvaluationChannel::Channel9" },
				{ "Channel_MAX.Comment", "// Always keep last\n" },
				{ "Channel_MAX.Hidden", "" },
				{ "Channel_MAX.Name", "EGameplayModEvaluationChannel::Channel_MAX" },
				{ "Channel_MAX.ToolTip", "Always keep last" },
				{ "Comment", "/** Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options */" },
				{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
				{ "ToolTip", "Valid gameplay modifier evaluation channels; Displayed and renamed via game-specific aliases and options" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayModEvaluationChannel",
				"EGameplayModEvaluationChannel",
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
class UScriptStruct* FMinimalReplicationTagCountMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMap"), sizeof(FMinimalReplicationTagCountMap), Get_Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMap>()
{
	return FMinimalReplicationTagCountMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMinimalReplicationTagCountMap(FMinimalReplicationTagCountMap::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("MinimalReplicationTagCountMap"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFMinimalReplicationTagCountMap
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFMinimalReplicationTagCountMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MinimalReplicationTagCountMap")),new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMap>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFMinimalReplicationTagCountMap;
	struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Map that stores count of tags, in a form that is optimized for replication */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Map that stores count of tags, in a form that is optimized for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMinimalReplicationTagCountMap, Owner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"MinimalReplicationTagCountMap",
		sizeof(FMinimalReplicationTagCountMap),
		alignof(FMinimalReplicationTagCountMap),
		Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MinimalReplicationTagCountMap"), sizeof(FMinimalReplicationTagCountMap), Get_Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Hash() { return 4141283873U; }
class UScriptStruct* FGameplayEffectSpecHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpecHandle"), sizeof(FGameplayEffectSpecHandle), Get_Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpecHandle>()
{
	return FGameplayEffectSpecHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectSpecHandle(FGameplayEffectSpecHandle::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEffectSpecHandle"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectSpecHandle
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectSpecHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectSpecHandle")),new UScriptStruct::TCppStructOps<FGameplayEffectSpecHandle>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectSpecHandle;
	struct Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Allows blueprints to generate a GameplayEffectSpec once and then reference it by handle, to apply it multiple times/multiple targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpecHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectSpecHandle",
		sizeof(FGameplayEffectSpecHandle),
		alignof(FGameplayEffectSpecHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectSpecHandle"), sizeof(FGameplayEffectSpecHandle), Get_Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Hash() { return 1504899541U; }
class UScriptStruct* FTagContainerAggregator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FTagContainerAggregator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagContainerAggregator, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("TagContainerAggregator"), sizeof(FTagContainerAggregator), Get_Z_Construct_UScriptStruct_FTagContainerAggregator_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FTagContainerAggregator>()
{
	return FTagContainerAggregator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTagContainerAggregator(FTagContainerAggregator::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("TagContainerAggregator"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFTagContainerAggregator
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFTagContainerAggregator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TagContainerAggregator")),new UScriptStruct::TCppStructOps<FTagContainerAggregator>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFTagContainerAggregator;
	struct Z_Construct_UScriptStruct_FTagContainerAggregator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedActorTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedActorTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedSpecTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedSpecTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScopedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure used to combine tags from different sources during effect execution */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Structure used to combine tags from different sources during effect execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagContainerAggregator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags = { "CapturedActorTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagContainerAggregator, CapturedActorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags = { "CapturedSpecTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagContainerAggregator, CapturedSpecTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags = { "ScopedTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTagContainerAggregator, ScopedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedActorTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_CapturedSpecTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::NewProp_ScopedTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"TagContainerAggregator",
		sizeof(FTagContainerAggregator),
		alignof(FTagContainerAggregator),
		Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTagContainerAggregator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TagContainerAggregator"), sizeof(FTagContainerAggregator), Get_Z_Construct_UScriptStruct_FTagContainerAggregator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTagContainerAggregator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTagContainerAggregator_Hash() { return 536139964U; }
class UScriptStruct* FGameplayTagRequirements::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRequirements_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRequirements, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagRequirements"), sizeof(FGameplayTagRequirements), Get_Z_Construct_UScriptStruct_FGameplayTagRequirements_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagRequirements>()
{
	return FGameplayTagRequirements::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagRequirements(FGameplayTagRequirements::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayTagRequirements"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagRequirements
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagRequirements()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagRequirements")),new UScriptStruct::TCppStructOps<FGameplayTagRequirements>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagRequirements;
	struct Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequireTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Encapsulate require and ignore tags */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Encapsulate require and ignore tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRequirements>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** All of these tags must be present */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "All of these tags must be present" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags = { "RequireTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagRequirements, RequireTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** None of these tags may be present */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "None of these tags may be present" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags = { "IgnoreTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagRequirements, IgnoreTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_RequireTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::NewProp_IgnoreTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagRequirements",
		sizeof(FGameplayTagRequirements),
		alignof(FGameplayTagRequirements),
		Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRequirements_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagRequirements"), sizeof(FGameplayTagRequirements), Get_Z_Construct_UScriptStruct_FGameplayTagRequirements_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRequirements_Hash() { return 1733817550U; }
class UScriptStruct* FGameplayTagBlueprintPropertyMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMap"), sizeof(FGameplayTagBlueprintPropertyMap), Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMap>()
{
	return FGameplayTagBlueprintPropertyMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagBlueprintPropertyMap(FGameplayTagBlueprintPropertyMap::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayTagBlueprintPropertyMap"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMap
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagBlueprintPropertyMap")),new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMap>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMap;
	struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertyMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to manage gameplay tag blueprint property mappings.\n * It registers the properties with delegates on an ability system component.\n * This struct should not be used in containers (such as TArray) since it uses a raw pointer\n * to bind the delegate and it's address could change causing an invalid binding.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct used to manage gameplay tag blueprint property mappings.\nIt registers the properties with delegates on an ability system component.\nThis struct should not be used in containers (such as TArray) since it uses a raw pointer\nto bind the delegate and it's address could change causing an invalid binding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMap>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner = { "PropertyMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings = { "PropertyMappings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMap, PropertyMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::NewProp_PropertyMappings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagBlueprintPropertyMap",
		sizeof(FGameplayTagBlueprintPropertyMap),
		alignof(FGameplayTagBlueprintPropertyMap),
		Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagBlueprintPropertyMap"), sizeof(FGameplayTagBlueprintPropertyMap), Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Hash() { return 3661848208U; }
class UScriptStruct* FGameplayTagBlueprintPropertyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayTagBlueprintPropertyMapping"), sizeof(FGameplayTagBlueprintPropertyMapping), Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayTagBlueprintPropertyMapping>()
{
	return FGameplayTagBlueprintPropertyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagBlueprintPropertyMapping(FGameplayTagBlueprintPropertyMapping::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayTagBlueprintPropertyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMapping
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagBlueprintPropertyMapping")),new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMapping>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayTagBlueprintPropertyMapping;
	struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagToMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyToEdit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFieldPathPropertyParams NewProp_PropertyToEdit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct used to update a blueprint property with a gameplay tag count.\n * The property is automatically updated as the gameplay tag count changes.\n * It only supports boolean, integer, and float properties.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct used to update a blueprint property with a gameplay tag count.\nThe property is automatically updated as the gameplay tag count changes.\nIt only supports boolean, integer, and float properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagBlueprintPropertyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Gameplay tag being counted. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Gameplay tag being counted." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap = { "TagToMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, TagToMap), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Property to update with the gameplay tag count. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Property to update with the gameplay tag count." },
	};
#endif
	const UE4CodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit = { "PropertyToEdit", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyToEdit), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Name of property being edited. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Name of property being edited." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData[] = {
		{ "Category", "GameplayTagBlueprintProperty" },
		{ "Comment", "/** Guid of property being edited. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Guid of property being edited." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid = { "PropertyGuid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayTagBlueprintPropertyMapping, PropertyGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_TagToMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyToEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::NewProp_PropertyGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayTagBlueprintPropertyMapping",
		sizeof(FGameplayTagBlueprintPropertyMapping),
		alignof(FGameplayTagBlueprintPropertyMapping),
		Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagBlueprintPropertyMapping"), sizeof(FGameplayTagBlueprintPropertyMapping), Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Hash() { return 21072810U; }
class UScriptStruct* FGameplayCueParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayCueParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueParameters, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueParameters"), sizeof(FGameplayCueParameters), Get_Z_Construct_UScriptStruct_FGameplayCueParameters_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueParameters>()
{
	return FGameplayCueParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayCueParameters(FGameplayCueParameters::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayCueParameters"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayCueParameters
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayCueParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayCueParameters")),new UScriptStruct::TCppStructOps<FGameplayCueParameters>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayCueParameters;
	struct Z_Construct_UScriptStruct_FGameplayCueParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchedTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchedTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregatedSourceTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggregatedSourceTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregatedTargetTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggregatedTargetTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAttachComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAttachComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Metadata about a gameplay cue execution */" },
		{ "HasNativeBreak", "GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters" },
		{ "HasNativeMake", "GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Metadata about a gameplay cue execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Magnitude of source gameplay effect, normalzed from 0-1. Use this for \"how strong is the gameplay effect\" (0=min, 1=,max)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, NormalizedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Raw final magnitude of source gameplay effect. Use this is you need to display numbers or for other informational purposes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude = { "RawMagnitude", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, RawMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Effect context, contains information about hit result, etc */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Effect context, contains information about hit result, etc" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The tag name that matched this specific gameplay cue handler */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The tag name that matched this specific gameplay cue handler" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName = { "MatchedTagName", nullptr, (EPropertyFlags)0x0010000080000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, MatchedTagName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The original tag of the gameplay cue */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The original tag of the gameplay cue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag = { "OriginalTag", nullptr, (EPropertyFlags)0x0010000080000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, OriginalTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The aggregated source tags taken from the effect spec */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The aggregated source tags taken from the effect spec" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags = { "AggregatedSourceTags", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, AggregatedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The aggregated target tags taken from the effect spec */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The aggregated target tags taken from the effect spec" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags = { "AggregatedTargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, AggregatedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Location cue took place at */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Location cue took place at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, Location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Normal of impact that caused cue */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Normal of impact that caused cue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** PhysMat of the hit, if there was a hit. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "PhysMat of the hit, if there was a hit." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** If originating from a GameplayEffect, the level of that GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "If originating from a GameplayEffect, the level of that GameplayEffect" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, GameplayEffectLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** If originating from an ability, this will be the level of that ability */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "If originating from an ability, this will be the level of that ability" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Could be used to say \"attach FX to this component always\" */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Could be used to say \"attach FX to this component always\"" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent = { "TargetAttachComponent", nullptr, (EPropertyFlags)0x001400000008000c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayCueParameters, TargetAttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_NormalizedMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_RawMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_MatchedTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_OriginalTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedSourceTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AggregatedTargetTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_EffectCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_SourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_GameplayEffectLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::NewProp_TargetAttachComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueParameters",
		sizeof(FGameplayCueParameters),
		alignof(FGameplayCueParameters),
		Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayCueParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayCueParameters"), sizeof(FGameplayCueParameters), Get_Z_Construct_UScriptStruct_FGameplayCueParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayCueParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayCueParameters_Hash() { return 1418632046U; }
class UScriptStruct* FGameplayEffectRemovalInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectRemovalInfo"), sizeof(FGameplayEffectRemovalInfo), Get_Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectRemovalInfo>()
{
	return FGameplayEffectRemovalInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectRemovalInfo(FGameplayEffectRemovalInfo::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEffectRemovalInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectRemovalInfo
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectRemovalInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectRemovalInfo")),new UScriptStruct::TCppStructOps<FGameplayEffectRemovalInfo>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectRemovalInfo;
	struct Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrematureRemoval_MetaData[];
#endif
		static void NewProp_bPrematureRemoval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrematureRemoval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data struct for containing information pertinent to GameplayEffects as they are removed */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data struct for containing information pertinent to GameplayEffects as they are removed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectRemovalInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed.  */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True when the gameplay effect's duration has not expired, meaning the gameplay effect is being forcefully removed." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit(void* Obj)
	{
		((FGameplayEffectRemovalInfo*)Obj)->bPrematureRemoval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval = { "bPrematureRemoval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayEffectRemovalInfo), &Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Number of Stacks this gameplay effect had before it was removed. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Number of Stacks this gameplay effect had before it was removed." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectRemovalInfo, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData[] = {
		{ "Category", "Removal" },
		{ "Comment", "/** Actor this gameplay effect was targeting. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Actor this gameplay effect was targeting." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectRemovalInfo, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_bPrematureRemoval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_StackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::NewProp_EffectContext,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectRemovalInfo",
		sizeof(FGameplayEffectRemovalInfo),
		alignof(FGameplayEffectRemovalInfo),
		Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectRemovalInfo"), sizeof(FGameplayEffectRemovalInfo), Get_Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Hash() { return 535508738U; }
class UScriptStruct* FGameplayEffectContextHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContextHandle, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContextHandle"), sizeof(FGameplayEffectContextHandle), Get_Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContextHandle>()
{
	return FGameplayEffectContextHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectContextHandle(FGameplayEffectContextHandle::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEffectContextHandle"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContextHandle
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContextHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectContextHandle")),new UScriptStruct::TCppStructOps<FGameplayEffectContextHandle>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContextHandle;
	struct Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Handle that wraps a FGameplayEffectContext or subclass, to allow it to be polymorphic and replicate properly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContextHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectContextHandle",
		sizeof(FGameplayEffectContextHandle),
		alignof(FGameplayEffectContextHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectContextHandle"), sizeof(FGameplayEffectContextHandle), Get_Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Hash() { return 930895996U; }
class UScriptStruct* FGameplayEffectContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContext, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContext"), sizeof(FGameplayEffectContext), Get_Z_Construct_UScriptStruct_FGameplayEffectContext_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContext>()
{
	return FGameplayEffectContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectContext(FGameplayEffectContext::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEffectContext"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContext
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectContext")),new UScriptStruct::TCppStructOps<FGameplayEffectContext>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectContext;
	struct Z_Construct_UScriptStruct_FGameplayEffectContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_EffectCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityCDO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInstanceNotReplicated_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AbilityInstanceNotReplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorAbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InstigatorAbilitySystemComponent;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasWorldOrigin_MetaData[];
#endif
		static void NewProp_bHasWorldOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWorldOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateSourceObject_MetaData[];
#endif
		static void NewProp_bReplicateSourceObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateSourceObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data structure that stores an instigator and related data, such as positions and targets\n * Games can subclass this structure and add game-specific information\n * It is passed throughout effect execution so it is a great place to track transient information about an execution\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data structure that stores an instigator and related data, such as positions and targets\nGames can subclass this structure and add game-specific information\nIt is passed throughout effect execution so it is a great place to track transient information about an execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData[] = {
		{ "Comment", "/** Instigator actor, the actor that owns the ability system component */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Instigator actor, the actor that owns the ability system component" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData[] = {
		{ "Comment", "/** The physical actor that actually did the damage, can be a weapon or projectile */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The physical actor that actually did the damage, can be a weapon or projectile" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData[] = {
		{ "Comment", "/** The ability CDO that is responsible for this effect context (replicated) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability CDO that is responsible for this effect context (replicated)" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO = { "AbilityCDO", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityCDO), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData[] = {
		{ "Comment", "/** The ability instance that is responsible for this effect context (NOT replicated) */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability instance that is responsible for this effect context (NOT replicated)" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated = { "AbilityInstanceNotReplicated", nullptr, (EPropertyFlags)0x0024080080000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityInstanceNotReplicated), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Comment", "/** The level this was executed at */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The level this was executed at" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Object this effect was created from, can be an actor or static object. Useful to bind an effect to a gameplay object" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData[] = {
		{ "Comment", "/** The ability system component that's bound to instigator */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The ability system component that's bound to instigator" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent = { "InstigatorAbilitySystemComponent", nullptr, (EPropertyFlags)0x0024080080080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, InstigatorAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData[] = {
		{ "Comment", "/** Actors referenced by this context */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Actors referenced by this context" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData[] = {
		{ "Comment", "/** Stored origin, may be invalid if bHasWorldOrigin is false */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Stored origin, may be invalid if bHasWorldOrigin is false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin = { "WorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectContext, WorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bHasWorldOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin = { "bHasWorldOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData[] = {
		{ "Comment", "/** True if the SourceObject can be replicated. This bool is not replicated itself. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if the SourceObject can be replicated. This bool is not replicated itself." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit(void* Obj)
	{
		((FGameplayEffectContext*)Obj)->bReplicateSourceObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject = { "bReplicateSourceObject", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayEffectContext), &Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_EffectCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityInstanceNotReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_SourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_InstigatorAbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_WorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bHasWorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::NewProp_bReplicateSourceObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectContext",
		sizeof(FGameplayEffectContext),
		alignof(FGameplayEffectContext),
		Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectContext"), sizeof(FGameplayEffectContext), Get_Z_Construct_UScriptStruct_FGameplayEffectContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectContext_Hash() { return 3390049496U; }
class UScriptStruct* FGameplayEffectAttributeCaptureDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureDefinition"), sizeof(FGameplayEffectAttributeCaptureDefinition), Get_Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureDefinition>()
{
	return FGameplayEffectAttributeCaptureDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition(FGameplayEffectAttributeCaptureDefinition::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEffectAttributeCaptureDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectAttributeCaptureDefinition
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectAttributeCaptureDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEffectAttributeCaptureDefinition")),new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureDefinition>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEffectAttributeCaptureDefinition;
	struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeToCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeToCapture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributeSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapshot_MetaData[];
#endif
		static void NewProp_bSnapshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct defining gameplay attribute capture options for gameplay effects */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct defining gameplay attribute capture options for gameplay effects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Gameplay attribute to capture */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Gameplay attribute to capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture = { "AttributeToCapture", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Source of the gameplay attribute */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Source of the gameplay attribute" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource = { "AttributeSource", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeSource), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Whether the attribute should be snapshotted or not */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Whether the attribute should be snapshotted or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit(void* Obj)
	{
		((FGameplayEffectAttributeCaptureDefinition*)Obj)->bSnapshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot = { "bSnapshot", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayEffectAttributeCaptureDefinition), &Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectAttributeCaptureDefinition",
		sizeof(FGameplayEffectAttributeCaptureDefinition),
		alignof(FGameplayEffectAttributeCaptureDefinition),
		Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEffectAttributeCaptureDefinition"), sizeof(FGameplayEffectAttributeCaptureDefinition), Get_Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Hash() { return 1266344669U; }
class UScriptStruct* FGameplayModifierEvaluatedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModifierEvaluatedData"), sizeof(FGameplayModifierEvaluatedData), Get_Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModifierEvaluatedData>()
{
	return FGameplayModifierEvaluatedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayModifierEvaluatedData(FGameplayModifierEvaluatedData::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayModifierEvaluatedData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModifierEvaluatedData
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModifierEvaluatedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayModifierEvaluatedData")),new UScriptStruct::TCppStructOps<FGameplayModifierEvaluatedData>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModifierEvaluatedData;
	struct Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data that describes what happened in an attribute modification. This is passed to ability set callbacks */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Data that describes what happened in an attribute modification. This is passed to ability set callbacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierEvaluatedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData[] = {
		{ "Comment", "/** What attribute was modified */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "What attribute was modified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Comment", "/** The numeric operation of this modifier: Override, Add, Multiply, etc  */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The numeric operation of this modifier: Override, Add, Multiply, etc" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Comment", "/** The raw magnitude of the applied attribute, this is generally before being clamped */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "The raw magnitude of the applied attribute, this is generally before being clamped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** Handle of the active gameplay effect that originated us. Will be invalid in many cases */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Handle of the active gameplay effect that originated us. Will be invalid in many cases" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModifierEvaluatedData, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData[] = {
		{ "Comment", "/** True if something was evaluated */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "True if something was evaluated" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((FGameplayModifierEvaluatedData*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayModifierEvaluatedData), &Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_ModifierOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::NewProp_IsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayModifierEvaluatedData",
		sizeof(FGameplayModifierEvaluatedData),
		alignof(FGameplayModifierEvaluatedData),
		Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayModifierEvaluatedData"), sizeof(FGameplayModifierEvaluatedData), Get_Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Hash() { return 655152001U; }
class UScriptStruct* FActiveGameplayEffectHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectHandle"), sizeof(FActiveGameplayEffectHandle), Get_Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectHandle>()
{
	return FActiveGameplayEffectHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveGameplayEffectHandle(FActiveGameplayEffectHandle::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("ActiveGameplayEffectHandle"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFActiveGameplayEffectHandle
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFActiveGameplayEffectHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveGameplayEffectHandle")),new UScriptStruct::TCppStructOps<FActiveGameplayEffectHandle>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFActiveGameplayEffectHandle;
	struct Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPassedFiltersAndWasExecuted_MetaData[];
#endif
		static void NewProp_bPassedFiltersAndWasExecuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPassedFiltersAndWasExecuted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This handle is required for things outside of FActiveGameplayEffectsContainer to refer to a specific active GameplayEffect\n *\x09""For example if a skill needs to create an active effect and then destroy that specific effect that it created, it has to do so\n *\x09through a handle. a pointer or index into the active list is not sufficient.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "This handle is required for things outside of FActiveGameplayEffectsContainer to refer to a specific active GameplayEffect\n    For example if a skill needs to create an active effect and then destroy that specific effect that it created, it has to do so\n    through a handle. a pointer or index into the active list is not sufficient." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveGameplayEffectHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_SetBit(void* Obj)
	{
		((FActiveGameplayEffectHandle*)Obj)->bPassedFiltersAndWasExecuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted = { "bPassedFiltersAndWasExecuted", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActiveGameplayEffectHandle), &Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::NewProp_bPassedFiltersAndWasExecuted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ActiveGameplayEffectHandle",
		sizeof(FActiveGameplayEffectHandle),
		alignof(FActiveGameplayEffectHandle),
		Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveGameplayEffectHandle"), sizeof(FActiveGameplayEffectHandle), Get_Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveGameplayEffectHandle_Hash() { return 440665643U; }
class UScriptStruct* FGameplayModEvaluationChannelSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModEvaluationChannelSettings"), sizeof(FGameplayModEvaluationChannelSettings), Get_Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModEvaluationChannelSettings>()
{
	return FGameplayModEvaluationChannelSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayModEvaluationChannelSettings(FGameplayModEvaluationChannelSettings::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayModEvaluationChannelSettings"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModEvaluationChannelSettings
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModEvaluationChannelSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayModEvaluationChannelSettings")),new UScriptStruct::TCppStructOps<FGameplayModEvaluationChannelSettings>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayModEvaluationChannelSettings;
	struct Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct representing evaluation channel settings for a gameplay modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Struct representing evaluation channel settings for a gameplay modifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModEvaluationChannelSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "EvaluationChannel" },
		{ "Comment", "/** Channel the settings would prefer to use, if possible/valid */" },
		{ "ModuleRelativePath", "Public/GameplayEffectTypes.h" },
		{ "ToolTip", "Channel the settings would prefer to use, if possible/valid" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayModEvaluationChannelSettings, Channel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::NewProp_Channel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayModEvaluationChannelSettings",
		sizeof(FGameplayModEvaluationChannelSettings),
		alignof(FGameplayModEvaluationChannelSettings),
		Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayModEvaluationChannelSettings"), sizeof(FGameplayModEvaluationChannelSettings), Get_Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Hash() { return 2971967407U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
