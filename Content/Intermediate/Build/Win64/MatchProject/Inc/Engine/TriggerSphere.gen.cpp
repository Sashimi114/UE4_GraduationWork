// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TriggerSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSphere() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerSphere::StaticRegisterNativesATriggerSphere()
	{
	}
	UClass* Z_Construct_UClass_ATriggerSphere_NoRegister()
	{
		return ATriggerSphere::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A sphere shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerSphere.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerSphere.h" },
		{ "ToolTip", "A sphere shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerSphere_Statics::ClassParams = {
		&ATriggerSphere::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerSphere, 414891615);
	template<> ENGINE_API UClass* StaticClass<ATriggerSphere>()
	{
		return ATriggerSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerSphere(Z_Construct_UClass_ATriggerSphere, &ATriggerSphere::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
