// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetimeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLifetimeBase::StaticRegisterNativesUParticleModuleLifetimeBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase_NoRegister()
	{
		return UParticleModuleLifetimeBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLifetimeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Lifetime" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetimeBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetimeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLifetimeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::ClassParams = {
		&UParticleModuleLifetimeBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLifetimeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLifetimeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLifetimeBase, 1681947245);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLifetimeBase>()
	{
		return UParticleModuleLifetimeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLifetimeBase(Z_Construct_UClass_UParticleModuleLifetimeBase, &UParticleModuleLifetimeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLifetimeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetimeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
