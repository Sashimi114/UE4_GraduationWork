// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Color/ParticleModuleColorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleColorBase::StaticRegisterNativesUParticleModuleColorBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColorBase_NoRegister()
	{
		return UParticleModuleColorBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorBase_Statics::ClassParams = {
		&UParticleModuleColorBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleColorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleColorBase, 3019277446);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColorBase>()
	{
		return UParticleModuleColorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColorBase(Z_Construct_UClass_UParticleModuleColorBase, &UParticleModuleColorBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
