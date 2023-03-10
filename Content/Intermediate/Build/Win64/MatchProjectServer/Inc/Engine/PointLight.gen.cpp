// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PointLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APointLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APointLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APointLight::execSetLightFalloffExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFalloffExponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APointLight::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	void APointLight::StaticRegisterNativesAPointLight()
	{
		UClass* Class = APointLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightFalloffExponent", &APointLight::execSetLightFalloffExponent },
			{ "SetRadius", &APointLight::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics
	{
		struct PointLight_eventSetLightFalloffExponent_Parms
		{
			float NewLightFalloffExponent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent = { "NewLightFalloffExponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLight_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetLightFalloffExponent", nullptr, nullptr, sizeof(PointLight_eventSetLightFalloffExponent_Parms), Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointLight_SetLightFalloffExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointLight_SetLightFalloffExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APointLight_SetRadius_Statics
	{
		struct PointLight_eventSetRadius_Parms
		{
			float NewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLight_eventSetRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APointLight_SetRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APointLight, nullptr, "SetRadius", nullptr, nullptr, sizeof(PointLight_eventSetRadius_Parms), Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APointLight_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APointLight_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APointLight_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APointLight_NoRegister()
	{
		return APointLight::StaticClass();
	}
	struct Z_Construct_UClass_APointLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APointLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APointLight_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 2248254204
		{ &Z_Construct_UFunction_APointLight_SetRadius, "SetRadius" }, // 4089199430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights PointLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/PointLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "PointLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/PointLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APointLight, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointLight_Statics::NewProp_PointLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APointLight_Statics::ClassParams = {
		&APointLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APointLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APointLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APointLight, 3100301177);
	template<> ENGINE_API UClass* StaticClass<APointLight>()
	{
		return APointLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APointLight(Z_Construct_UClass_APointLight, &APointLight::StaticClass, TEXT("/Script/Engine"), TEXT("APointLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
