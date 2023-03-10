// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Size/ParticleModuleSizeScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSizeScale::StaticRegisterNativesUParticleModuleSizeScale()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScale_NoRegister()
	{
		return UParticleModuleSizeScale::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableX_MetaData[];
#endif
		static void NewProp_EnableX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableY_MetaData[];
#endif
		static void NewProp_EnableY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableZ_MetaData[];
#endif
		static void NewProp_EnableZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size Scale" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScale.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/**\n\x09 *\x09The amount the BaseSize should be scaled before being used as the size of the particle. \n\x09 *\x09The value is retrieved using the RelativeTime of the particle during its update.\n\x09 *\x09NOTE: this module overrides any size adjustments made prior to this module in that frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "The amount the BaseSize should be scaled before being used as the size of the particle.\nThe value is retrieved using the RelativeTime of the particle during its update.\nNOTE: this module overrides any size adjustments made prior to this module in that frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeScale, SizeScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX = { "EnableX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY = { "EnableY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData[] = {
		{ "Category", "ParticleModuleSizeScale" },
		{ "Comment", "/** Ignored */" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScale.h" },
		{ "ToolTip", "Ignored" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit(void* Obj)
	{
		((UParticleModuleSizeScale*)Obj)->EnableZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ = { "EnableZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeScale), &Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_SizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScale_Statics::NewProp_EnableZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScale>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams = {
		&UParticleModuleSizeScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSizeScale_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSizeScale, 3635544684);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScale>()
	{
		return UParticleModuleSizeScale::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeScale(Z_Construct_UClass_UParticleModuleSizeScale, &UParticleModuleSizeScale::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
