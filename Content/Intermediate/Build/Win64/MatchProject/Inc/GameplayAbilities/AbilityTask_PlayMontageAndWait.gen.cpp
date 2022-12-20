// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PlayMontageAndWait() {}
// Cross Module References
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "MontageWaitSimpleDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageAndWait::execCreatePlayMontageAndWaitProxy)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTimeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_PlayMontageAndWait**)Z_Param__Result=UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_StartTimeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageAndWait::execOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageAndWait::execOnMontageInterrupted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageInterrupted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PlayMontageAndWait::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void UAbilityTask_PlayMontageAndWait::StaticRegisterNativesUAbilityTask_PlayMontageAndWait()
	{
		UClass* Class = UAbilityTask_PlayMontageAndWait::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePlayMontageAndWaitProxy", &UAbilityTask_PlayMontageAndWait::execCreatePlayMontageAndWaitProxy },
			{ "OnMontageBlendingOut", &UAbilityTask_PlayMontageAndWait::execOnMontageBlendingOut },
			{ "OnMontageEnded", &UAbilityTask_PlayMontageAndWait::execOnMontageEnded },
			{ "OnMontageInterrupted", &UAbilityTask_PlayMontageAndWait::execOnMontageInterrupted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics
	{
		struct AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			float StartTimeSeconds;
			UAbilityTask_PlayMontageAndWait* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, StartSection), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, StartTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** \n\x09 * Start playing an animation montage on the avatar actor and wait for it to finish\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param StartSection If not empty, named montage section to start from\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 * @param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set\n\x09 */" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "CPP_Default_StartTimeSeconds", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "PlayMontageAndWait" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
		{ "ToolTip", "Start playing an animation montage on the avatar actor and wait for it to finish\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param Rate Change to play the montage faster or slower\n@param StartSection If not empty, named montage section to start from\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n@param StartTimeSeconds Starting time offset in montage, this will be overridden by StartSection if that is also set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait, nullptr, "CreatePlayMontageAndWaitProxy", nullptr, nullptr, sizeof(AbilityTask_PlayMontageAndWait_eventCreatePlayMontageAndWaitProxy_Parms), Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics
	{
		struct AbilityTask_PlayMontageAndWait_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageAndWait_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageAndWait_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(AbilityTask_PlayMontageAndWait_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics
	{
		struct AbilityTask_PlayMontageAndWait_eventOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_PlayMontageAndWait_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((AbilityTask_PlayMontageAndWait_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_PlayMontageAndWait_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait, nullptr, "OnMontageEnded", nullptr, nullptr, sizeof(AbilityTask_PlayMontageAndWait_eventOnMontageEnded_Parms), Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait, nullptr, "OnMontageInterrupted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_NoRegister()
	{
		return UAbilityTask_PlayMontageAndWait::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy, "CreatePlayMontageAndWaitProxy" }, // 1243025151
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3670939300
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageEnded, "OnMontageEnded" }, // 219524471
		{ &Z_Construct_UFunction_UAbilityTask_PlayMontageAndWait_OnMontageInterrupted, "OnMontageInterrupted" }, // 1393932627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Ability task to simply play a montage. Many games will want to make a modified version of this task that looks for game-specific events */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
		{ "ToolTip", "Ability task to simply play a montage. Many games will want to make a modified version of this task that looks for game-specific events" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, OnCompleted), Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, OnBlendOut), Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, OnInterrupted), Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, OnCancelled), Z_Construct_UDelegateFunction_GameplayAbilities_MontageWaitSimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_MontageToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_Rate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, Rate), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, StartSection), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, AnimRootMotionTranslationScale), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartTimeSeconds = { "StartTimeSeconds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, StartTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_PlayMontageAndWait.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((UAbilityTask_PlayMontageAndWait*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilityTask_PlayMontageAndWait), &Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_OnCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_StartTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PlayMontageAndWait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::ClassParams = {
		&UAbilityTask_PlayMontageAndWait::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityTask_PlayMontageAndWait, 634830391);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_PlayMontageAndWait>()
	{
		return UAbilityTask_PlayMontageAndWait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityTask_PlayMontageAndWait(Z_Construct_UClass_UAbilityTask_PlayMontageAndWait, &UAbilityTask_PlayMontageAndWait::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilityTask_PlayMontageAndWait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PlayMontageAndWait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
