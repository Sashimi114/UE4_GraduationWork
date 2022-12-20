// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h
#error "AbilitySystemGlobals.generated.h already included, missing '#pragma once' in AbilitySystemGlobals.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FNetSerializeScriptStructCache>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execServerCancelPlayerAbility); \
	DECLARE_FUNCTION(execServerEndPlayerAbility); \
	DECLARE_FUNCTION(execServerActivatePlayerAbility); \
	DECLARE_FUNCTION(execListPlayerAbilities); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerCancelPlayerAbility); \
	DECLARE_FUNCTION(execServerEndPlayerAbility); \
	DECLARE_FUNCTION(execServerActivatePlayerAbility); \
	DECLARE_FUNCTION(execListPlayerAbilities); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend struct Z_Construct_UClass_UAbilitySystemGlobals_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend struct Z_Construct_UClass_UAbilitySystemGlobals_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemGlobals(UAbilitySystemGlobals&&); \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemGlobals(UAbilitySystemGlobals&&); \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAllowGameplayModEvaluationChannels() { return STRUCT_OFFSET(UAbilitySystemGlobals, bAllowGameplayModEvaluationChannels); } \
	FORCEINLINE static uint32 __PPO__DefaultGameplayModEvaluationChannel() { return STRUCT_OFFSET(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel); } \
	FORCEINLINE static uint32 __PPO__GameplayModEvaluationChannelAliases() { return STRUCT_OFFSET(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases); } \
	FORCEINLINE static uint32 __PPO__GlobalCurveTableName() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTableName); } \
	FORCEINLINE static uint32 __PPO__GlobalCurveTable() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalCurveTable); } \
	FORCEINLINE static uint32 __PPO__GlobalAttributeMetaDataTableName() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName); } \
	FORCEINLINE static uint32 __PPO__GlobalAttributeMetaDataTable() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeMetaDataTable); } \
	FORCEINLINE static uint32 __PPO__GlobalAttributeSetDefaultsTableName() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName); } \
	FORCEINLINE static uint32 __PPO__GlobalAttributeSetDefaultsTableNames() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames); } \
	FORCEINLINE static uint32 __PPO__GlobalAttributeDefaultsTables() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalAttributeDefaultsTables); } \
	FORCEINLINE static uint32 __PPO__GlobalGameplayCueManagerClass() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerClass); } \
	FORCEINLINE static uint32 __PPO__GlobalGameplayCueManagerName() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManagerName); } \
	FORCEINLINE static uint32 __PPO__GameplayCueNotifyPaths() { return STRUCT_OFFSET(UAbilitySystemGlobals, GameplayCueNotifyPaths); } \
	FORCEINLINE static uint32 __PPO__GameplayTagResponseTableName() { return STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTableName); } \
	FORCEINLINE static uint32 __PPO__GameplayTagResponseTable() { return STRUCT_OFFSET(UAbilitySystemGlobals, GameplayTagResponseTable); } \
	FORCEINLINE static uint32 __PPO__PredictTargetGameplayEffects() { return STRUCT_OFFSET(UAbilitySystemGlobals, PredictTargetGameplayEffects); } \
	FORCEINLINE static uint32 __PPO__GlobalGameplayCueManager() { return STRUCT_OFFSET(UAbilitySystemGlobals, GlobalGameplayCueManager); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_42_PROLOG
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemGlobals."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemGlobals>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
