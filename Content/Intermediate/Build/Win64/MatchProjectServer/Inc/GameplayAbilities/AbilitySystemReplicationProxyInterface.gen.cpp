// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/AbilitySystemReplicationProxyInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemReplicationProxyInterface() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAbilitySystemReplicationProxyInterface::StaticRegisterNativesUAbilitySystemReplicationProxyInterface()
	{
	}
	UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_NoRegister()
	{
		return UAbilitySystemReplicationProxyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystemReplicationProxyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAbilitySystemReplicationProxyInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::ClassParams = {
		&UAbilitySystemReplicationProxyInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySystemReplicationProxyInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilitySystemReplicationProxyInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilitySystemReplicationProxyInterface, 3836954062);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemReplicationProxyInterface>()
	{
		return UAbilitySystemReplicationProxyInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilitySystemReplicationProxyInterface(Z_Construct_UClass_UAbilitySystemReplicationProxyInterface, &UAbilitySystemReplicationProxyInterface::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilitySystemReplicationProxyInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemReplicationProxyInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
