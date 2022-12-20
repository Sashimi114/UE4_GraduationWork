// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
struct FGameplayTagQuery;
class UAbilityTask_WaitAbilityActivate;
struct FGameplayTagRequirements;
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h
#error "AbilityTask_WaitAbilityActivate.generated.h already included, missing '#pragma once' in AbilityTask_WaitAbilityActivate.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_11_DELEGATE \
struct _Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms \
{ \
	UGameplayAbility* ActivatedAbility; \
}; \
static inline void FWaitAbilityActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityActivateDelegate, UGameplayAbility* ActivatedAbility) \
{ \
	_Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms Parms; \
	Parms.ActivatedAbility=ActivatedAbility; \
	WaitAbilityActivateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForAbilityActivate_Query); \
	DECLARE_FUNCTION(execWaitForAbilityActivateWithTagRequirements); \
	DECLARE_FUNCTION(execWaitForAbilityActivate); \
	DECLARE_FUNCTION(execOnAbilityActivate);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForAbilityActivate_Query); \
	DECLARE_FUNCTION(execWaitForAbilityActivateWithTagRequirements); \
	DECLARE_FUNCTION(execWaitForAbilityActivate); \
	DECLARE_FUNCTION(execOnAbilityActivate);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityActivate(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAbilityActivate, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityActivate)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityActivate(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAbilityActivate, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityActivate)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAbilityActivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityActivate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAbilityActivate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityActivate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAbilityActivate(UAbilityTask_WaitAbilityActivate&&); \
	NO_API UAbilityTask_WaitAbilityActivate(const UAbilityTask_WaitAbilityActivate&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAbilityActivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAbilityActivate(UAbilityTask_WaitAbilityActivate&&); \
	NO_API UAbilityTask_WaitAbilityActivate(const UAbilityTask_WaitAbilityActivate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAbilityActivate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityActivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityActivate)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_18_PROLOG
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitAbilityActivate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAbilityActivate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
