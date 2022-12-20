// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FVector;
class UCurveFloat;
class UCurveVector;
class UAbilityTask_MoveToLocation;
#ifdef GAMEPLAYABILITIES_AbilityTask_MoveToLocation_generated_h
#error "AbilityTask_MoveToLocation.generated.h already included, missing '#pragma once' in AbilityTask_MoveToLocation.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_MoveToLocation_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_13_DELEGATE \
static inline void FMoveToLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& MoveToLocationDelegate) \
{ \
	MoveToLocationDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveToLocation);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveToLocation);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveToLocation(); \
	friend struct Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_MoveToLocation, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_MoveToLocation) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		DurationOfMovement, \
		LerpCurve, \
		LerpCurveVector, \
		NETFIELD_REP_END=LerpCurveVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAbilityTask_MoveToLocation) \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveToLocation(); \
	friend struct Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_MoveToLocation, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_MoveToLocation) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		DurationOfMovement, \
		LerpCurve, \
		LerpCurveVector, \
		NETFIELD_REP_END=LerpCurveVector	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAbilityTask_MoveToLocation) \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MoveToLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveToLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MoveToLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveToLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_MoveToLocation(UAbilityTask_MoveToLocation&&); \
	NO_API UAbilityTask_MoveToLocation(const UAbilityTask_MoveToLocation&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MoveToLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_MoveToLocation(UAbilityTask_MoveToLocation&&); \
	NO_API UAbilityTask_MoveToLocation(const UAbilityTask_MoveToLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MoveToLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveToLocation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveToLocation)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartLocation() { return STRUCT_OFFSET(UAbilityTask_MoveToLocation, StartLocation); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(UAbilityTask_MoveToLocation, TargetLocation); } \
	FORCEINLINE static uint32 __PPO__DurationOfMovement() { return STRUCT_OFFSET(UAbilityTask_MoveToLocation, DurationOfMovement); } \
	FORCEINLINE static uint32 __PPO__LerpCurve() { return STRUCT_OFFSET(UAbilityTask_MoveToLocation, LerpCurve); } \
	FORCEINLINE static uint32 __PPO__LerpCurveVector() { return STRUCT_OFFSET(UAbilityTask_MoveToLocation, LerpCurveVector); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_30_PROLOG
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_MoveToLocation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_MoveToLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
