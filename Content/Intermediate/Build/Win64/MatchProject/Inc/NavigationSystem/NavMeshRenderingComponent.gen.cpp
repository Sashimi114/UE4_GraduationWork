// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavMesh/NavMeshRenderingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshRenderingComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavMeshRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavMeshRenderingComponent::StaticRegisterNativesUNavMeshRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister()
	{
		return UNavMeshRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavMeshRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavMeshRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavMesh/NavMeshRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavMeshRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMeshRenderingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavMeshRenderingComponent_Statics::ClassParams = {
		&UNavMeshRenderingComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavMeshRenderingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavMeshRenderingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavMeshRenderingComponent, 3845349848);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavMeshRenderingComponent>()
	{
		return UNavMeshRenderingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavMeshRenderingComponent(Z_Construct_UClass_UNavMeshRenderingComponent, &UNavMeshRenderingComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavMeshRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMeshRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
