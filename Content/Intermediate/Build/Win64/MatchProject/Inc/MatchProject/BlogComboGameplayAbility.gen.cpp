// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MatchProject/BlogComboGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlogComboGameplayAbility() {}
// Cross Module References
	MATCHPROJECT_API UClass* Z_Construct_UClass_UBlogComboGameplayAbility_NoRegister();
	MATCHPROJECT_API UClass* Z_Construct_UClass_UBlogComboGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_MatchProject();
// End Cross Module References
	void UBlogComboGameplayAbility::StaticRegisterNativesUBlogComboGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UBlogComboGameplayAbility_NoRegister()
	{
		return UBlogComboGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBlogComboGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlogComboGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_MatchProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlogComboGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlogComboGameplayAbility.h" },
		{ "ModuleRelativePath", "BlogComboGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlogComboGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlogComboGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlogComboGameplayAbility_Statics::ClassParams = {
		&UBlogComboGameplayAbility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlogComboGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlogComboGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlogComboGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlogComboGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlogComboGameplayAbility, 2738484449);
	template<> MATCHPROJECT_API UClass* StaticClass<UBlogComboGameplayAbility>()
	{
		return UBlogComboGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlogComboGameplayAbility(Z_Construct_UClass_UBlogComboGameplayAbility, &UBlogComboGameplayAbility::StaticClass, TEXT("/Script/MatchProject"), TEXT("UBlogComboGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlogComboGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
