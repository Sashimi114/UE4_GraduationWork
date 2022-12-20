// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotionMoveToActorForce() {}
// Cross Module References
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms
		{
			bool DestinationReached;
			bool TimedOut;
			FVector FinalTargetLocation;
		};
		static void NewProp_DestinationReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestinationReached;
		static void NewProp_TimedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TimedOut;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalTargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_DestinationReached_SetBit(void* Obj)
	{
		((_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms*)Obj)->DestinationReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_DestinationReached = { "DestinationReached", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_DestinationReached_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_TimedOut_SetBit(void* Obj)
	{
		((_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms*)Obj)->TimedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_TimedOut = { "TimedOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_TimedOut_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_FinalTargetLocation = { "FinalTargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms, FinalTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_DestinationReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_TimedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::NewProp_FinalTargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ApplyRootMotionMoveToActorForceDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GameplayAbilities_eventApplyRootMotionMoveToActorForceDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ERootMotionMoveToActorTargetOffsetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ERootMotionMoveToActorTargetOffsetType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERootMotionMoveToActorTargetOffsetType>()
	{
		return ERootMotionMoveToActorTargetOffsetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERootMotionMoveToActorTargetOffsetType(ERootMotionMoveToActorTargetOffsetType_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("ERootMotionMoveToActorTargetOffsetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType_Hash() { return 1692169841U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERootMotionMoveToActorTargetOffsetType"), 0, Get_Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource", (int64)ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource },
				{ "ERootMotionMoveToActorTargetOffsetType::AlignToTargetForward", (int64)ERootMotionMoveToActorTargetOffsetType::AlignToTargetForward },
				{ "ERootMotionMoveToActorTargetOffsetType::AlignToWorldSpace", (int64)ERootMotionMoveToActorTargetOffsetType::AlignToWorldSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlignFromTargetToSource.Comment", "// Align target offset vector from target to source, ignoring height difference\n" },
				{ "AlignFromTargetToSource.Name", "ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource" },
				{ "AlignFromTargetToSource.ToolTip", "Align target offset vector from target to source, ignoring height difference" },
				{ "AlignToTargetForward.Comment", "// Align from target actor location to target actor forward\n" },
				{ "AlignToTargetForward.Name", "ERootMotionMoveToActorTargetOffsetType::AlignToTargetForward" },
				{ "AlignToTargetForward.ToolTip", "Align from target actor location to target actor forward" },
				{ "AlignToWorldSpace.Comment", "// Align in world space\n" },
				{ "AlignToWorldSpace.Name", "ERootMotionMoveToActorTargetOffsetType::AlignToWorldSpace" },
				{ "AlignToWorldSpace.ToolTip", "Align in world space" },
				{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"ERootMotionMoveToActorTargetOffsetType",
				"ERootMotionMoveToActorTargetOffsetType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionMoveToActorForce::execOnRep_TargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionMoveToActorForce::execOnTargetActorSwapped)
	{
		P_GET_OBJECT(AActor,Z_Param_OriginalTarget);
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetActorSwapped(Z_Param_OriginalTarget,Z_Param_NewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionMoveToActorForce::execApplyRootMotionMoveToTargetDataActorForce)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetDataHandle);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetDataIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetActorIndex);
		P_GET_STRUCT(FVector,Z_Param_TargetLocationOffset);
		P_GET_ENUM(ERootMotionMoveToActorTargetOffsetType,Z_Param_OffsetAlignment);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UCurveFloat,Z_Param_TargetLerpSpeedHorizontal);
		P_GET_OBJECT(UCurveFloat,Z_Param_TargetLerpSpeedVertical);
		P_GET_UBOOL(Z_Param_bSetNewMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_MovementMode);
		P_GET_UBOOL(Z_Param_bRestrictSpeedToExpected);
		P_GET_OBJECT(UCurveVector,Z_Param_PathOffsetCurve);
		P_GET_OBJECT(UCurveFloat,Z_Param_TimeMappingCurve);
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
		P_GET_UBOOL(Z_Param_bDisableDestinationReachedInterrupt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_ApplyRootMotionMoveToActorForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_TargetDataHandle,Z_Param_TargetDataIndex,Z_Param_TargetActorIndex,Z_Param_TargetLocationOffset,ERootMotionMoveToActorTargetOffsetType(Z_Param_OffsetAlignment),Z_Param_Duration,Z_Param_TargetLerpSpeedHorizontal,Z_Param_TargetLerpSpeedVertical,Z_Param_bSetNewMovementMode,EMovementMode(Z_Param_MovementMode),Z_Param_bRestrictSpeedToExpected,Z_Param_PathOffsetCurve,Z_Param_TimeMappingCurve,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish,Z_Param_bDisableDestinationReachedInterrupt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_ApplyRootMotionMoveToActorForce::execApplyRootMotionMoveToActorForce)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FVector,Z_Param_TargetLocationOffset);
		P_GET_ENUM(ERootMotionMoveToActorTargetOffsetType,Z_Param_OffsetAlignment);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UCurveFloat,Z_Param_TargetLerpSpeedHorizontal);
		P_GET_OBJECT(UCurveFloat,Z_Param_TargetLerpSpeedVertical);
		P_GET_UBOOL(Z_Param_bSetNewMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_MovementMode);
		P_GET_UBOOL(Z_Param_bRestrictSpeedToExpected);
		P_GET_OBJECT(UCurveVector,Z_Param_PathOffsetCurve);
		P_GET_OBJECT(UCurveFloat,Z_Param_TimeMappingCurve);
		P_GET_ENUM(ERootMotionFinishVelocityMode,Z_Param_VelocityOnFinishMode);
		P_GET_STRUCT(FVector,Z_Param_SetVelocityOnFinish);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampVelocityOnFinish);
		P_GET_UBOOL(Z_Param_bDisableDestinationReachedInterrupt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_ApplyRootMotionMoveToActorForce**)Z_Param__Result=UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_TargetActor,Z_Param_TargetLocationOffset,ERootMotionMoveToActorTargetOffsetType(Z_Param_OffsetAlignment),Z_Param_Duration,Z_Param_TargetLerpSpeedHorizontal,Z_Param_TargetLerpSpeedVertical,Z_Param_bSetNewMovementMode,EMovementMode(Z_Param_MovementMode),Z_Param_bRestrictSpeedToExpected,Z_Param_PathOffsetCurve,Z_Param_TimeMappingCurve,ERootMotionFinishVelocityMode(Z_Param_VelocityOnFinishMode),Z_Param_SetVelocityOnFinish,Z_Param_ClampVelocityOnFinish,Z_Param_bDisableDestinationReachedInterrupt);
		P_NATIVE_END;
	}
	void UAbilityTask_ApplyRootMotionMoveToActorForce::StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToActorForce()
	{
		UClass* Class = UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyRootMotionMoveToActorForce", &UAbilityTask_ApplyRootMotionMoveToActorForce::execApplyRootMotionMoveToActorForce },
			{ "ApplyRootMotionMoveToTargetDataActorForce", &UAbilityTask_ApplyRootMotionMoveToActorForce::execApplyRootMotionMoveToTargetDataActorForce },
			{ "OnRep_TargetLocation", &UAbilityTask_ApplyRootMotionMoveToActorForce::execOnRep_TargetLocation },
			{ "OnTargetActorSwapped", &UAbilityTask_ApplyRootMotionMoveToActorForce::execOnTargetActorSwapped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics
	{
		struct AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			AActor* TargetActor;
			FVector TargetLocationOffset;
			ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
			float Duration;
			UCurveFloat* TargetLerpSpeedHorizontal;
			UCurveFloat* TargetLerpSpeedVertical;
			bool bSetNewMovementMode;
			TEnumAsByte<EMovementMode> MovementMode;
			bool bRestrictSpeedToExpected;
			UCurveVector* PathOffsetCurve;
			UCurveFloat* TimeMappingCurve;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			bool bDisableDestinationReachedInterrupt;
			UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocationOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetAlignment;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedHorizontal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedVertical;
		static void NewProp_bSetNewMovementMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetNewMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode;
		static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static void NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDestinationReachedInterrupt;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset = { "TargetLocationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TargetLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment = { "OffsetAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, OffsetAlignment), Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontal = { "TargetLerpSpeedHorizontal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TargetLerpSpeedHorizontal), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVertical = { "TargetLerpSpeedVertical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TargetLerpSpeedVertical), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms*)Obj)->bSetNewMovementMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode = { "bSetNewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms*)Obj)->bRestrictSpeedToExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms*)Obj)->bDisableDestinationReachedInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt = { "bDisableDestinationReachedInterrupt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_VelocityOnFinishMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_SetVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Apply force to character's movement */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "Apply force to character's movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce, nullptr, "ApplyRootMotionMoveToActorForce", nullptr, nullptr, sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToActorForce_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics
	{
		struct AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			FGameplayAbilityTargetDataHandle TargetDataHandle;
			int32 TargetDataIndex;
			int32 TargetActorIndex;
			FVector TargetLocationOffset;
			ERootMotionMoveToActorTargetOffsetType OffsetAlignment;
			float Duration;
			UCurveFloat* TargetLerpSpeedHorizontal;
			UCurveFloat* TargetLerpSpeedVertical;
			bool bSetNewMovementMode;
			TEnumAsByte<EMovementMode> MovementMode;
			bool bRestrictSpeedToExpected;
			UCurveVector* PathOffsetCurve;
			UCurveFloat* TimeMappingCurve;
			ERootMotionFinishVelocityMode VelocityOnFinishMode;
			FVector SetVelocityOnFinish;
			float ClampVelocityOnFinish;
			bool bDisableDestinationReachedInterrupt;
			UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetDataIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetActorIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocationOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetAlignment_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetAlignment;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedHorizontal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedVertical;
		static void NewProp_bSetNewMovementMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetNewMovementMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode;
		static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VelocityOnFinishMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VelocityOnFinishMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetVelocityOnFinish;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampVelocityOnFinish;
		static void NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDestinationReachedInterrupt;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetDataIndex = { "TargetDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetActorIndex = { "TargetActorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetActorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLocationOffset = { "TargetLocationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OffsetAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OffsetAlignment = { "OffsetAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, OffsetAlignment), Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLerpSpeedHorizontal = { "TargetLerpSpeedHorizontal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetLerpSpeedHorizontal), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLerpSpeedVertical = { "TargetLerpSpeedVertical", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TargetLerpSpeedVertical), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bSetNewMovementMode_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms*)Obj)->bSetNewMovementMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bSetNewMovementMode = { "bSetNewMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bSetNewMovementMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms*)Obj)->bRestrictSpeedToExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_VelocityOnFinishMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_VelocityOnFinishMode = { "VelocityOnFinishMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, VelocityOnFinishMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_SetVelocityOnFinish = { "SetVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, SetVelocityOnFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_ClampVelocityOnFinish = { "ClampVelocityOnFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, ClampVelocityOnFinish), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj)
	{
		((AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms*)Obj)->bDisableDestinationReachedInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt = { "bDisableDestinationReachedInterrupt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms), &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetDataHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetActorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OffsetAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_OffsetAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLerpSpeedHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TargetLerpSpeedVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bSetNewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bRestrictSpeedToExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_PathOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_TimeMappingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_VelocityOnFinishMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_VelocityOnFinishMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_SetVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_ClampVelocityOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Apply force to character's movement using an index into targetData instead of using an actor directly. */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "Apply force to character's movement using an index into targetData instead of using an actor directly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce, nullptr, "ApplyRootMotionMoveToTargetDataActorForce", nullptr, nullptr, sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventApplyRootMotionMoveToTargetDataActorForce_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce, nullptr, "OnRep_TargetLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics
	{
		struct AbilityTask_ApplyRootMotionMoveToActorForce_eventOnTargetActorSwapped_Parms
		{
			AActor* OriginalTarget;
			AActor* NewTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::NewProp_OriginalTarget = { "OriginalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventOnTargetActorSwapped_Parms, OriginalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbilityTask_ApplyRootMotionMoveToActorForce_eventOnTargetActorSwapped_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::NewProp_OriginalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce, nullptr, "OnTargetActorSwapped", nullptr, nullptr, sizeof(AbilityTask_ApplyRootMotionMoveToActorForce_eventOnTargetActorSwapped_Parms), Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_NoRegister()
	{
		return UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocationOffset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetAlignment_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDestinationReachedInterrupt_MetaData[];
#endif
		static void NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDestinationReachedInterrupt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetNewMovementMode_MetaData[];
#endif
		static void NewProp_bSetNewMovementMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetNewMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictSpeedToExpected_MetaData[];
#endif
		static void NewProp_bRestrictSpeedToExpected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictSpeedToExpected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathOffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMappingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeMappingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLerpSpeedHorizontalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedHorizontalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLerpSpeedVerticalCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLerpSpeedVerticalCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce, "ApplyRootMotionMoveToActorForce" }, // 1217867131
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce, "ApplyRootMotionMoveToTargetDataActorForce" }, // 964583586
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation, "OnRep_TargetLocation" }, // 3213686422
		{ &Z_Construct_UFunction_UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped, "OnTargetActorSwapped" }, // 2856063742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Applies force to character's movement\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "Applies force to character's movement" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, OnFinished), Z_Construct_UDelegateFunction_GameplayAbilities_ApplyRootMotionMoveToActorForceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OnFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocation = { "TargetLocation", "OnRep_TargetLocation", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset = { "TargetLocationOffset", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment = { "OffsetAlignment", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment), Z_Construct_UEnum_GameplayAbilities_ERootMotionMoveToActorTargetOffsetType, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, Duration), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_MetaData[] = {
		{ "Comment", "/** By default, this force ends when the destination is reached. Using this parameter you can disable it so it will not \n\x09 *  \"early out\" and get interrupted by reaching the destination and instead go to its full duration. */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "By default, this force ends when the destination is reached. Using this parameter you can disable it so it will not\n\"early out\" and get interrupted by reaching the destination and instead go to its full duration." },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionMoveToActorForce*)Obj)->bDisableDestinationReachedInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt = { "bDisableDestinationReachedInterrupt", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionMoveToActorForce*)Obj)->bSetNewMovementMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode = { "bSetNewMovementMode", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_NewMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_NewMovementMode = { "NewMovementMode", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_NewMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_NewMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData[] = {
		{ "Comment", "/** If enabled, we limit velocity to the initial expected velocity to go distance to the target over Duration.\n\x09 *  This prevents cases of getting really high velocity the last few frames of the root motion if you were being blocked by\n\x09 *  collision. Disabled means we do everything we can to velocity during the move to get to the TargetLocation. */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "If enabled, we limit velocity to the initial expected velocity to go distance to the target over Duration.\nThis prevents cases of getting really high velocity the last few frames of the root motion if you were being blocked by\ncollision. Disabled means we do everything we can to velocity during the move to get to the TargetLocation." },
	};
#endif
	void Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit(void* Obj)
	{
		((UAbilityTask_ApplyRootMotionMoveToActorForce*)Obj)->bRestrictSpeedToExpected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected = { "bRestrictSpeedToExpected", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce), &Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve = { "PathOffsetCurve", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Maps real time to movement fraction curve to affect the speed of the\n\x09 *  movement through the path\n\x09 *  Curve X is 0 to 1 normalized real time (a fraction of the duration)\n\x09 *  Curve Y is 0 to 1 is what percent of the move should be at a given X\n\x09 *  Default if unset is a 1:1 correspondence\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
		{ "ToolTip", "Maps real time to movement fraction curve to affect the speed of the\nmovement through the path\nCurve X is 0 to 1 normalized real time (a fraction of the duration)\nCurve Y is 0 to 1 is what percent of the move should be at a given X\nDefault if unset is a 1:1 correspondence" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve = { "TimeMappingCurve", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontalCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontalCurve = { "TargetLerpSpeedHorizontalCurve", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVerticalCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVerticalCurve = { "TargetLerpSpeedVerticalCurve", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVerticalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVerticalCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OnFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_OffsetAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bDisableDestinationReachedInterrupt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bSetNewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_NewMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_bRestrictSpeedToExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_PathOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TimeMappingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedHorizontalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::NewProp_TargetLerpSpeedVerticalCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotionMoveToActorForce>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::ClassParams = {
		&UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilityTask_ApplyRootMotionMoveToActorForce, 1559919472);
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotionMoveToActorForce>()
	{
		return UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce(Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce, &UAbilityTask_ApplyRootMotionMoveToActorForce::StaticClass, TEXT("/Script/GameplayAbilities"), TEXT("UAbilityTask_ApplyRootMotionMoveToActorForce"), false, nullptr, nullptr, nullptr);

	void UAbilityTask_ApplyRootMotionMoveToActorForce::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartLocation(TEXT("StartLocation"));
		static const FName Name_TargetLocation(TEXT("TargetLocation"));
		static const FName Name_TargetActor(TEXT("TargetActor"));
		static const FName Name_TargetLocationOffset(TEXT("TargetLocationOffset"));
		static const FName Name_OffsetAlignment(TEXT("OffsetAlignment"));
		static const FName Name_Duration(TEXT("Duration"));
		static const FName Name_bDisableDestinationReachedInterrupt(TEXT("bDisableDestinationReachedInterrupt"));
		static const FName Name_bSetNewMovementMode(TEXT("bSetNewMovementMode"));
		static const FName Name_NewMovementMode(TEXT("NewMovementMode"));
		static const FName Name_bRestrictSpeedToExpected(TEXT("bRestrictSpeedToExpected"));
		static const FName Name_PathOffsetCurve(TEXT("PathOffsetCurve"));
		static const FName Name_TimeMappingCurve(TEXT("TimeMappingCurve"));
		static const FName Name_TargetLerpSpeedHorizontalCurve(TEXT("TargetLerpSpeedHorizontalCurve"));
		static const FName Name_TargetLerpSpeedVerticalCurve(TEXT("TargetLerpSpeedVerticalCurve"));

		const bool bIsValid = true
			&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
			&& Name_TargetActor == ClassReps[(int32)ENetFields_Private::TargetActor].Property->GetFName()
			&& Name_TargetLocationOffset == ClassReps[(int32)ENetFields_Private::TargetLocationOffset].Property->GetFName()
			&& Name_OffsetAlignment == ClassReps[(int32)ENetFields_Private::OffsetAlignment].Property->GetFName()
			&& Name_Duration == ClassReps[(int32)ENetFields_Private::Duration].Property->GetFName()
			&& Name_bDisableDestinationReachedInterrupt == ClassReps[(int32)ENetFields_Private::bDisableDestinationReachedInterrupt].Property->GetFName()
			&& Name_bSetNewMovementMode == ClassReps[(int32)ENetFields_Private::bSetNewMovementMode].Property->GetFName()
			&& Name_NewMovementMode == ClassReps[(int32)ENetFields_Private::NewMovementMode].Property->GetFName()
			&& Name_bRestrictSpeedToExpected == ClassReps[(int32)ENetFields_Private::bRestrictSpeedToExpected].Property->GetFName()
			&& Name_PathOffsetCurve == ClassReps[(int32)ENetFields_Private::PathOffsetCurve].Property->GetFName()
			&& Name_TimeMappingCurve == ClassReps[(int32)ENetFields_Private::TimeMappingCurve].Property->GetFName()
			&& Name_TargetLerpSpeedHorizontalCurve == ClassReps[(int32)ENetFields_Private::TargetLerpSpeedHorizontalCurve].Property->GetFName()
			&& Name_TargetLerpSpeedVerticalCurve == ClassReps[(int32)ENetFields_Private::TargetLerpSpeedVerticalCurve].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotionMoveToActorForce"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotionMoveToActorForce);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
