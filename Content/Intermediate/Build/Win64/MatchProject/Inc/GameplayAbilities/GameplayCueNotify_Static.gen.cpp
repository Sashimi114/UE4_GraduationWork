// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayCueNotify_Static.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_Static() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayCueNotify_Static::execOnRemove)
	{
		P_GET_OBJECT(AActor,Z_Param_MyTarget);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnRemove_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueNotify_Static::execWhileActive)
	{
		P_GET_OBJECT(AActor,Z_Param_MyTarget);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WhileActive_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueNotify_Static::execOnActive)
	{
		P_GET_OBJECT(AActor,Z_Param_MyTarget);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnActive_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayCueNotify_Static::execOnExecute)
	{
		P_GET_OBJECT(AActor,Z_Param_MyTarget);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnExecute_Implementation(Z_Param_MyTarget,Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	static FName NAME_UGameplayCueNotify_Static_K2_HandleGameplayCue = FName(TEXT("K2_HandleGameplayCue"));
	void UGameplayCueNotify_Static::K2_HandleGameplayCue(AActor* MyTarget, EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters) const
	{
		GameplayCueNotify_Static_eventK2_HandleGameplayCue_Parms Parms;
		Parms.MyTarget=MyTarget;
		Parms.EventType=EventType;
		Parms.Parameters=Parameters;
		const_cast<UGameplayCueNotify_Static*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Static_K2_HandleGameplayCue),&Parms);
	}
	static FName NAME_UGameplayCueNotify_Static_OnActive = FName(TEXT("OnActive"));
	bool UGameplayCueNotify_Static::OnActive(AActor* MyTarget, FGameplayCueParameters const& Parameters) const
	{
		GameplayCueNotify_Static_eventOnActive_Parms Parms;
		Parms.MyTarget=MyTarget;
		Parms.Parameters=Parameters;
		const_cast<UGameplayCueNotify_Static*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Static_OnActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGameplayCueNotify_Static_OnExecute = FName(TEXT("OnExecute"));
	bool UGameplayCueNotify_Static::OnExecute(AActor* MyTarget, FGameplayCueParameters const& Parameters) const
	{
		GameplayCueNotify_Static_eventOnExecute_Parms Parms;
		Parms.MyTarget=MyTarget;
		Parms.Parameters=Parameters;
		const_cast<UGameplayCueNotify_Static*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Static_OnExecute),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGameplayCueNotify_Static_OnRemove = FName(TEXT("OnRemove"));
	bool UGameplayCueNotify_Static::OnRemove(AActor* MyTarget, FGameplayCueParameters const& Parameters) const
	{
		GameplayCueNotify_Static_eventOnRemove_Parms Parms;
		Parms.MyTarget=MyTarget;
		Parms.Parameters=Parameters;
		const_cast<UGameplayCueNotify_Static*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Static_OnRemove),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGameplayCueNotify_Static_WhileActive = FName(TEXT("WhileActive"));
	bool UGameplayCueNotify_Static::WhileActive(AActor* MyTarget, FGameplayCueParameters const& Parameters) const
	{
		GameplayCueNotify_Static_eventWhileActive_Parms Parms;
		Parms.MyTarget=MyTarget;
		Parms.Parameters=Parameters;
		const_cast<UGameplayCueNotify_Static*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayCueNotify_Static_WhileActive),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGameplayCueNotify_Static::StaticRegisterNativesUGameplayCueNotify_Static()
	{
		UClass* Class = UGameplayCueNotify_Static::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActive", &UGameplayCueNotify_Static::execOnActive },
			{ "OnExecute", &UGameplayCueNotify_Static::execOnExecute },
			{ "OnRemove", &UGameplayCueNotify_Static::execOnRemove },
			{ "WhileActive", &UGameplayCueNotify_Static::execWhileActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventK2_HandleGameplayCue_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventK2_HandleGameplayCue_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventK2_HandleGameplayCue_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_MyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
		{ "Comment", "/** Generic Event Graph event that will get called for every event type */" },
		{ "DisplayName", "HandleGameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
		{ "ScriptName", "HandleGameplayCue" },
		{ "ToolTip", "Generic Event Graph event that will get called for every event type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Static, nullptr, "K2_HandleGameplayCue", nullptr, nullptr, sizeof(GameplayCueNotify_Static_eventK2_HandleGameplayCue_Parms), Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnActive_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnActive_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_Parameters_MetaData)) };
	void Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayCueNotify_Static_eventOnActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayCueNotify_Static_eventOnActive_Parms), &Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_MyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Static, nullptr, "OnActive", nullptr, nullptr, sizeof(GameplayCueNotify_Static_eventOnActive_Parms), Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnExecute_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnExecute_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_Parameters_MetaData)) };
	void Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayCueNotify_Static_eventOnExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayCueNotify_Static_eventOnExecute_Parms), &Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_MyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Static, nullptr, "OnExecute", nullptr, nullptr, sizeof(GameplayCueNotify_Static_eventOnExecute_Parms), Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnRemove_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventOnRemove_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_Parameters_MetaData)) };
	void Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayCueNotify_Static_eventOnRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayCueNotify_Static_eventOnRemove_Parms), &Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_MyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Static, nullptr, "OnRemove", nullptr, nullptr, sizeof(GameplayCueNotify_Static_eventOnRemove_Parms), Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_MyTarget = { "MyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventWhileActive_Parms, MyTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayCueNotify_Static_eventWhileActive_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_Parameters_MetaData)) };
	void Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayCueNotify_Static_eventWhileActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayCueNotify_Static_eventWhileActive_Parms), &Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_MyTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayCueNotify" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayCueNotify_Static, nullptr, "WhileActive", nullptr, nullptr, sizeof(GameplayCueNotify_Static_eventWhileActive_Parms), Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayCueNotify_Static_NoRegister()
	{
		return UGameplayCueNotify_Static::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueNotify_Static_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GameplayCueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOverride_MetaData[];
#endif
		static void NewProp_IsOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueNotify_Static_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayCueNotify_Static_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayCueNotify_Static_K2_HandleGameplayCue, "K2_HandleGameplayCue" }, // 602523517
		{ &Z_Construct_UFunction_UGameplayCueNotify_Static_OnActive, "OnActive" }, // 2542350053
		{ &Z_Construct_UFunction_UGameplayCueNotify_Static_OnExecute, "OnExecute" }, // 1563096806
		{ &Z_Construct_UFunction_UGameplayCueNotify_Static_OnRemove, "OnRemove" }, // 3138309228
		{ &Z_Construct_UFunction_UGameplayCueNotify_Static_WhileActive, "WhileActive" }, // 1831801786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Static_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""A non instantiated UObject that acts as a handler for a GameplayCue. These are useful for one-off \"burst\" effects.\n */" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_Static.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
		{ "ShowWorldContextPin", "" },
		{ "ToolTip", "A non instantiated UObject that acts as a handler for a GameplayCue. These are useful for one-off \"burst\" effects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Tag this notify is activated by */" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
		{ "ToolTip", "Tag this notify is activated by" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayCueNotify_Static, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueName_MetaData[] = {
		{ "Comment", "/** Mirrors GameplayCueTag in order to be asset registry searchable */" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
		{ "ToolTip", "Mirrors GameplayCueTag in order to be asset registry searchable" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueName = { "GameplayCueName", nullptr, (EPropertyFlags)0x0010010000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayCueNotify_Static, GameplayCueName), METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Does this Cue override other cues, or is it called in addition to them? E.g., If this is Damage.Physical.Slash, we wont call Damage.Physical afer we run this cue. */" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_Static.h" },
		{ "ToolTip", "Does this Cue override other cues, or is it called in addition to them? E.g., If this is Damage.Physical.Slash, we wont call Damage.Physical afer we run this cue." },
	};
#endif
	void Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride_SetBit(void* Obj)
	{
		((UGameplayCueNotify_Static*)Obj)->IsOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride = { "IsOverride", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameplayCueNotify_Static), &Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_Static_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_GameplayCueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_Static_Statics::NewProp_IsOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueNotify_Static_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_Static>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_Static_Statics::ClassParams = {
		&UGameplayCueNotify_Static::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayCueNotify_Static_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_Static_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueNotify_Static()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayCueNotify_Static_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayCueNotify_Static, 2449517421);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_Static>()
	{
		return UGameplayCueNotify_Static::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayCueNotify_Static(Z_Construct_UClass_UGameplayCueNotify_Static, &UGameplayCueNotify_Static::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UGameplayCueNotify_Static"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_Static);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayCueNotify_Static)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
