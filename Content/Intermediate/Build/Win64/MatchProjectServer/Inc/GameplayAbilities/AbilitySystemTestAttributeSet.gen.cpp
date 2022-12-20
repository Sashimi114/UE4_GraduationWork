// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemTestAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemTestAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemTestAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemTestAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAbilitySystemTestAttributeSet::StaticRegisterNativesUAbilitySystemTestAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UAbilitySystemTestAttributeSet_NoRegister()
	{
		return UAbilitySystemTestAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpellDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpellDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicalDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CritChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CritMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CritMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorDamageReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSteal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSteal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackingAttribute1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StackingAttribute1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackingAttribute2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StackingAttribute2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoStackAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoStackAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideInDetailsView", "" },
		{ "IncludePath", "AbilitySystemTestAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "Comment", "/**\n\x09 *\x09NOTE ON MUTABLE:\n\x09 *\x09This is only done so that UAbilitySystemTestAttributeSet can be initialized directly in GameplayEffectsTest.cpp without doing a const_cast in 100+ places.\n\x09 *\x09Mutable is not required and should never be used on normal attribute sets.\n\x09 */// You can't make a GameplayEffect modify Health Directly (go through)\n" },
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
		{ "ToolTip", "NOTE ON MUTABLE:\nThis is only done so that UAbilitySystemTestAttributeSet can be initialized directly in GameplayEffectsTest.cpp without doing a const_cast in 100+ places.\nMutable is not required and should never be used on normal attribute sets.\n   // You can't make a GameplayEffect modify Health Directly (go through)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "Comment", "// You can't make a GameplayEffect modify Health Directly (go through)\n" },
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
		{ "ToolTip", "You can't make a GameplayEffect modify Health Directly (go through)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, Health), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, Mana), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, MaxMana), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, Damage), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_SpellDamage_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "Comment", "/** This Attribute is the actual spell damage for this actor. It will power spell based GameplayEffects */" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
		{ "ToolTip", "This Attribute is the actual spell damage for this actor. It will power spell based GameplayEffects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_SpellDamage = { "SpellDamage", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, SpellDamage), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_SpellDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_SpellDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_PhysicalDamage_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "Comment", "/** This Attribute is the actual physical damage for this actor. It will power physical based GameplayEffects */" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
		{ "ToolTip", "This Attribute is the actual physical damage for this actor. It will power physical based GameplayEffects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_PhysicalDamage = { "PhysicalDamage", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, PhysicalDamage), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_PhysicalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_PhysicalDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritChance_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, CritChance), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritMultiplier_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritMultiplier = { "CritMultiplier", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, CritMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_ArmorDamageReduction_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_ArmorDamageReduction = { "ArmorDamageReduction", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, ArmorDamageReduction), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_ArmorDamageReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_ArmorDamageReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_DodgeChance_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_DodgeChance = { "DodgeChance", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, DodgeChance), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_DodgeChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_DodgeChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_LifeSteal_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_LifeSteal = { "LifeSteal", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, LifeSteal), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_LifeSteal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_LifeSteal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, Strength), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute1_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute1 = { "StackingAttribute1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, StackingAttribute1), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute2_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute2 = { "StackingAttribute2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, StackingAttribute2), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_NoStackAttribute_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/AbilitySystemTestAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_NoStackAttribute = { "NoStackAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilitySystemTestAttributeSet, NoStackAttribute), METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_NoStackAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_NoStackAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_SpellDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_PhysicalDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_CritMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_ArmorDamageReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_DodgeChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_LifeSteal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_StackingAttribute2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::NewProp_NoStackAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySystemTestAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::ClassParams = {
		&UAbilitySystemTestAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySystemTestAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySystemTestAttributeSet, 1397125060);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemTestAttributeSet>()
	{
		return UAbilitySystemTestAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySystemTestAttributeSet(Z_Construct_UClass_UAbilitySystemTestAttributeSet, &UAbilitySystemTestAttributeSet::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilitySystemTestAttributeSet"), false, nullptr, nullptr, nullptr);

	void UAbilitySystemTestAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_SpellDamage(TEXT("SpellDamage"));
		static const FName Name_PhysicalDamage(TEXT("PhysicalDamage"));
		static const FName Name_CritChance(TEXT("CritChance"));
		static const FName Name_CritMultiplier(TEXT("CritMultiplier"));
		static const FName Name_ArmorDamageReduction(TEXT("ArmorDamageReduction"));
		static const FName Name_DodgeChance(TEXT("DodgeChance"));
		static const FName Name_LifeSteal(TEXT("LifeSteal"));
		static const FName Name_Strength(TEXT("Strength"));

		const bool bIsValid = true
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_SpellDamage == ClassReps[(int32)ENetFields_Private::SpellDamage].Property->GetFName()
			&& Name_PhysicalDamage == ClassReps[(int32)ENetFields_Private::PhysicalDamage].Property->GetFName()
			&& Name_CritChance == ClassReps[(int32)ENetFields_Private::CritChance].Property->GetFName()
			&& Name_CritMultiplier == ClassReps[(int32)ENetFields_Private::CritMultiplier].Property->GetFName()
			&& Name_ArmorDamageReduction == ClassReps[(int32)ENetFields_Private::ArmorDamageReduction].Property->GetFName()
			&& Name_DodgeChance == ClassReps[(int32)ENetFields_Private::DodgeChance].Property->GetFName()
			&& Name_LifeSteal == ClassReps[(int32)ENetFields_Private::LifeSteal].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilitySystemTestAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemTestAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
