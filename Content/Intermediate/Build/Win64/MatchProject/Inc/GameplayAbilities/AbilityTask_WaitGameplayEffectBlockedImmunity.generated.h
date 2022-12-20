// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEffectSpecHandle;
struct FActiveGameplayEffectHandle;
class UGameplayAbility;
struct FGameplayTagRequirements;
class AActor;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectBlockedImmunity_generated_h
#error "AbilityTask_WaitGameplayEffectBlockedImmunity.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectBlockedImmunity.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectBlockedImmunity_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_12_DELEGATE \
struct _Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms \
{ \
	FGameplayEffectSpecHandle BlockedSpec; \
	FActiveGameplayEffectHandle ImmunityGameplayEffectHandle; \
}; \
static inline void FGameplayEffectBlockedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectBlockedDelegate, FGameplayEffectSpecHandle BlockedSpec, FActiveGameplayEffectHandle ImmunityGameplayEffectHandle) \
{ \
	_Script_GameplayAbilities_eventGameplayEffectBlockedDelegate_Parms Parms; \
	Parms.BlockedSpec=BlockedSpec; \
	Parms.ImmunityGameplayEffectHandle=ImmunityGameplayEffectHandle; \
	GameplayEffectBlockedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectBlockedByImmunity);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectBlockedByImmunity);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectBlockedImmunity(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectBlockedImmunity, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectBlockedImmunity)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectBlockedImmunity(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectBlockedImmunity_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectBlockedImmunity, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectBlockedImmunity)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectBlockedImmunity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayEffectBlockedImmunity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectBlockedImmunity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(UAbilityTask_WaitGameplayEffectBlockedImmunity&&); \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(const UAbilityTask_WaitGameplayEffectBlockedImmunity&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(UAbilityTask_WaitGameplayEffectBlockedImmunity&&); \
	NO_API UAbilityTask_WaitGameplayEffectBlockedImmunity(const UAbilityTask_WaitGameplayEffectBlockedImmunity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayEffectBlockedImmunity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectBlockedImmunity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectBlockedImmunity)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExternalOwner() { return STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_14_PROLOG
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitGameplayEffectBlockedImmunity."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitGameplayEffectBlockedImmunity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectBlockedImmunity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
