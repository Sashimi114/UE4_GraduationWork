// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionConstant3Vector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant3Vector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionConstant3Vector::StaticRegisterNativesUMaterialExpressionConstant3Vector()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector_NoRegister()
	{
		return UMaterialExpressionConstant3Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstant3Vector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "MaterialExpressionConstant3Vector" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant3Vector.h" },
		{ "OnlyUpdateOnInteractionEnd", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionConstant3Vector, Constant), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::NewProp_Constant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstant3Vector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::ClassParams = {
		&UMaterialExpressionConstant3Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstant3Vector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionConstant3Vector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionConstant3Vector, 266187671);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstant3Vector>()
	{
		return UMaterialExpressionConstant3Vector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionConstant3Vector(Z_Construct_UClass_UMaterialExpressionConstant3Vector, &UMaterialExpressionConstant3Vector::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionConstant3Vector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant3Vector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
