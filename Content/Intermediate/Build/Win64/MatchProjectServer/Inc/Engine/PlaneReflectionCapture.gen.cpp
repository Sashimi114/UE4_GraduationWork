// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PlaneReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlaneReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlaneReflectionCapture::StaticRegisterNativesAPlaneReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_APlaneReflectionCapture_NoRegister()
	{
		return APlaneReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_APlaneReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaneReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/PlaneReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlaneReflectionCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaneReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaneReflectionCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams = {
		&APlaneReflectionCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaneReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaneReflectionCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlaneReflectionCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlaneReflectionCapture, 2022900259);
	template<> ENGINE_API UClass* StaticClass<APlaneReflectionCapture>()
	{
		return APlaneReflectionCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlaneReflectionCapture(Z_Construct_UClass_APlaneReflectionCapture, &APlaneReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("APlaneReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaneReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
