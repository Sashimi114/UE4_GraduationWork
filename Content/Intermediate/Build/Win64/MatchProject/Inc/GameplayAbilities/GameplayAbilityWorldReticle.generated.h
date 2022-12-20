// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GAMEPLAYABILITIES_GameplayAbilityWorldReticle_generated_h
#error "GameplayAbilityWorldReticle.generated.h already included, missing '#pragma once' in GameplayAbilityWorldReticle.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityWorldReticle_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldReticleParameters_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FWorldReticleParameters>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFaceTowardSource);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFaceTowardSource);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_EVENT_PARMS \
	struct GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms \
	{ \
		bool bNewValue; \
	}; \
	struct GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms \
	{ \
		bool bNewValue; \
	}; \
	struct GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms \
	{ \
		FName ParamName; \
		float value; \
	}; \
	struct GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms \
	{ \
		FName ParamName; \
		FVector value; \
	};


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayAbilityWorldReticle(); \
	friend struct Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics; \
public: \
	DECLARE_CLASS(AGameplayAbilityWorldReticle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AGameplayAbilityWorldReticle)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayAbilityWorldReticle(); \
	friend struct Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics; \
public: \
	DECLARE_CLASS(AGameplayAbilityWorldReticle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(AGameplayAbilityWorldReticle)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayAbilityWorldReticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityWorldReticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayAbilityWorldReticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityWorldReticle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayAbilityWorldReticle(AGameplayAbilityWorldReticle&&); \
	NO_API AGameplayAbilityWorldReticle(const AGameplayAbilityWorldReticle&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayAbilityWorldReticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayAbilityWorldReticle(AGameplayAbilityWorldReticle&&); \
	NO_API AGameplayAbilityWorldReticle(const AGameplayAbilityWorldReticle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayAbilityWorldReticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayAbilityWorldReticle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayAbilityWorldReticle)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsTargetValid() { return STRUCT_OFFSET(AGameplayAbilityWorldReticle, bIsTargetValid); } \
	FORCEINLINE static uint32 __PPO__bIsTargetAnActor() { return STRUCT_OFFSET(AGameplayAbilityWorldReticle, bIsTargetAnActor); } \
	FORCEINLINE static uint32 __PPO__MasterPC() { return STRUCT_OFFSET(AGameplayAbilityWorldReticle, MasterPC); } \
	FORCEINLINE static uint32 __PPO__TargetingActor() { return STRUCT_OFFSET(AGameplayAbilityWorldReticle, TargetingActor); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_27_PROLOG \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_EVENT_PARMS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayAbilityWorldReticle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class AGameplayAbilityWorldReticle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
