// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UAnimMontage;
class UAbilityTask_PlayMontageAndWait;
#ifdef GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h
#error "AbilityTask_PlayMontageAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayMontageAndWait.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_PlayMontageAndWait_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_10_DELEGATE \
static inline void FMontageWaitSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate) \
{ \
	MontageWaitSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayMontageAndWait(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayMontageAndWait_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayMontageAndWait)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayMontageAndWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_PlayMontageAndWait(UAbilityTask_PlayMontageAndWait&&); \
	NO_API UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PlayMontageAndWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_PlayMontageAndWait(UAbilityTask_PlayMontageAndWait&&); \
	NO_API UAbilityTask_PlayMontageAndWait(const UAbilityTask_PlayMontageAndWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayMontageAndWait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayMontageAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayMontageAndWait)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MontageToPlay() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, MontageToPlay); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, Rate); } \
	FORCEINLINE static uint32 __PPO__StartSection() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, StartSection); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__StartTimeSeconds() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, StartTimeSeconds); } \
	FORCEINLINE static uint32 __PPO__bStopWhenAbilityEnds() { return STRUCT_OFFSET(UAbilityTask_PlayMontageAndWait, bStopWhenAbilityEnds); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_13_PROLOG
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_PlayMontageAndWait."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_PlayMontageAndWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_PlayMontageAndWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
