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
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UBlogComboGameplayAbility::execRemoveGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameplayTags(Z_Param_GameplayTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlogComboGameplayAbility::execAddGameplayTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGameplayTags(Z_Param_GameplayTags);
		P_NATIVE_END;
	}
	void UBlogComboGameplayAbility::StaticRegisterNativesUBlogComboGameplayAbility()
	{
		UClass* Class = UBlogComboGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTags", &UBlogComboGameplayAbility::execAddGameplayTags },
			{ "RemoveGameplayTags", &UBlogComboGameplayAbility::execRemoveGameplayTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics
	{
		struct BlogComboGameplayAbility_eventAddGameplayTags_Parms
		{
			FGameplayTagContainer GameplayTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlogComboGameplayAbility_eventAddGameplayTags_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::NewProp_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "/** AbilitySystemComponent??GameplayTagCountContainer?\xc9\x90V????GameplayTag???\xc7\x89????? */" },
		{ "ModuleRelativePath", "BlogComboGameplayAbility.h" },
		{ "ToolTip", "AbilitySystemComponent??GameplayTagCountContainer?\xc9\x90V????GameplayTag???\xc7\x89?????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlogComboGameplayAbility, nullptr, "AddGameplayTags", nullptr, nullptr, sizeof(BlogComboGameplayAbility_eventAddGameplayTags_Parms), Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics
	{
		struct BlogComboGameplayAbility_eventRemoveGameplayTags_Parms
		{
			FGameplayTagContainer GameplayTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlogComboGameplayAbility_eventRemoveGameplayTags_Parms, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::NewProp_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePlayAbility" },
		{ "Comment", "/** AbilitySystemComponent??GameplayTagCountContainer??GameplayTag???\xed\x8f\x9c???? */" },
		{ "ModuleRelativePath", "BlogComboGameplayAbility.h" },
		{ "ToolTip", "AbilitySystemComponent??GameplayTagCountContainer??GameplayTag???\xed\x8f\x9c????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlogComboGameplayAbility, nullptr, "RemoveGameplayTags", nullptr, nullptr, sizeof(BlogComboGameplayAbility_eventRemoveGameplayTags_Parms), Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlogComboGameplayAbility_NoRegister()
	{
		return UBlogComboGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBlogComboGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlogComboGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlogComboGameplayAbility_AddGameplayTags, "AddGameplayTags" }, // 4044673604
		{ &Z_Construct_UFunction_UBlogComboGameplayAbility_RemoveGameplayTags, "RemoveGameplayTags" }, // 1803450407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlogComboGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UBlogComboGameplayAbility, 1731416928);
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
