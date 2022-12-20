// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayTag;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FActiveGameplayEffectHandle;
struct FGameplayTagContainer;
struct FGameplayEffectSpecHandle;
struct FGameplayAbilityTargetDataHandle;
class UGameplayEffect;
struct FGameplayEventData;
class UObject;
class UAnimMontage;
class UAbilitySystemComponent;
class USkeletalMeshComponent;
class AActor;
struct FGameplayAbilityActorInfo;
#ifdef GAMEPLAYABILITIES_GameplayAbility_generated_h
#error "GameplayAbility.generated.h already included, missing '#pragma once' in GameplayAbility.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityTriggerData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityTriggerData>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent); \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerActor); \
	DECLARE_FUNCTION(execMontageStop); \
	DECLARE_FUNCTION(execMontageSetNextSectionName); \
	DECLARE_FUNCTION(execMontageJumpToSection); \
	DECLARE_FUNCTION(execEndAbilityState); \
	DECLARE_FUNCTION(execCancelTaskByInstanceName); \
	DECLARE_FUNCTION(execEndTaskByInstanceName); \
	DECLARE_FUNCTION(execConfirmTaskByInstanceName); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithHandle); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithGrantedTags); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithAssetTags); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToOwner); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execK2_EndAbility); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execRemoveGrantedByEffect); \
	DECLARE_FUNCTION(execInvalidateClientPredictionKey); \
	DECLARE_FUNCTION(execGetCurrentSourceObject); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execK2_CheckAbilityCost); \
	DECLARE_FUNCTION(execK2_CheckAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbilityCost); \
	DECLARE_FUNCTION(execK2_CommitAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbility); \
	DECLARE_FUNCTION(execSetCanBeCanceled); \
	DECLARE_FUNCTION(execK2_CancelAbility); \
	DECLARE_FUNCTION(execSetShouldBlockOtherAbilities); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execK2_HasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execMakeOutgoingGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetContextFromOwner); \
	DECLARE_FUNCTION(execGetGrantedByEffectContext); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAvatarActorFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningActorFromActorInfo); \
	DECLARE_FUNCTION(execGetActorInfo);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent); \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerActor); \
	DECLARE_FUNCTION(execMontageStop); \
	DECLARE_FUNCTION(execMontageSetNextSectionName); \
	DECLARE_FUNCTION(execMontageJumpToSection); \
	DECLARE_FUNCTION(execEndAbilityState); \
	DECLARE_FUNCTION(execCancelTaskByInstanceName); \
	DECLARE_FUNCTION(execEndTaskByInstanceName); \
	DECLARE_FUNCTION(execConfirmTaskByInstanceName); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithHandle); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithGrantedTags); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithAssetTags); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToOwner); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execK2_EndAbility); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execRemoveGrantedByEffect); \
	DECLARE_FUNCTION(execInvalidateClientPredictionKey); \
	DECLARE_FUNCTION(execGetCurrentSourceObject); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execK2_CheckAbilityCost); \
	DECLARE_FUNCTION(execK2_CheckAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbilityCost); \
	DECLARE_FUNCTION(execK2_CommitAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbility); \
	DECLARE_FUNCTION(execSetCanBeCanceled); \
	DECLARE_FUNCTION(execK2_CancelAbility); \
	DECLARE_FUNCTION(execSetShouldBlockOtherAbilities); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execK2_HasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execMakeOutgoingGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetContextFromOwner); \
	DECLARE_FUNCTION(execGetGrantedByEffectContext); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAvatarActorFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningActorFromActorInfo); \
	DECLARE_FUNCTION(execGetActorInfo);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_EVENT_PARMS \
	struct GameplayAbility_eventK2_ActivateAbilityFromEvent_Parms \
	{ \
		FGameplayEventData EventData; \
	}; \
	struct GameplayAbility_eventK2_CanActivateAbility_Parms \
	{ \
		FGameplayAbilityActorInfo ActorInfo; \
		FGameplayTagContainer RelevantTags; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayAbility_eventK2_CanActivateAbility_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameplayAbility_eventK2_OnEndAbility_Parms \
	{ \
		bool bWasCancelled; \
	}; \
	struct GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms \
	{ \
		FGameplayAbilityActorInfo ActorInfo; \
		FGameplayEventData Payload; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbility(); \
	friend struct Z_Construct_UClass_UGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility*>(this); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbility(); \
	friend struct Z_Construct_UClass_UGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility*>(this); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbility(UGameplayAbility&&); \
	NO_API UGameplayAbility(const UGameplayAbility&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbility(UGameplayAbility&&); \
	NO_API UGameplayAbility(const UGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicationPolicy() { return STRUCT_OFFSET(UGameplayAbility, ReplicationPolicy); } \
	FORCEINLINE static uint32 __PPO__InstancingPolicy() { return STRUCT_OFFSET(UGameplayAbility, InstancingPolicy); } \
	FORCEINLINE static uint32 __PPO__bServerRespectsRemoteAbilityCancellation() { return STRUCT_OFFSET(UGameplayAbility, bServerRespectsRemoteAbilityCancellation); } \
	FORCEINLINE static uint32 __PPO__bRetriggerInstancedAbility() { return STRUCT_OFFSET(UGameplayAbility, bRetriggerInstancedAbility); } \
	FORCEINLINE static uint32 __PPO__CurrentActivationInfo() { return STRUCT_OFFSET(UGameplayAbility, CurrentActivationInfo); } \
	FORCEINLINE static uint32 __PPO__CurrentEventData() { return STRUCT_OFFSET(UGameplayAbility, CurrentEventData); } \
	FORCEINLINE static uint32 __PPO__NetExecutionPolicy() { return STRUCT_OFFSET(UGameplayAbility, NetExecutionPolicy); } \
	FORCEINLINE static uint32 __PPO__NetSecurityPolicy() { return STRUCT_OFFSET(UGameplayAbility, NetSecurityPolicy); } \
	FORCEINLINE static uint32 __PPO__CostGameplayEffectClass() { return STRUCT_OFFSET(UGameplayAbility, CostGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__AbilityTriggers() { return STRUCT_OFFSET(UGameplayAbility, AbilityTriggers); } \
	FORCEINLINE static uint32 __PPO__CooldownGameplayEffectClass() { return STRUCT_OFFSET(UGameplayAbility, CooldownGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__CancelAbilitiesWithTag() { return STRUCT_OFFSET(UGameplayAbility, CancelAbilitiesWithTag); } \
	FORCEINLINE static uint32 __PPO__BlockAbilitiesWithTag() { return STRUCT_OFFSET(UGameplayAbility, BlockAbilitiesWithTag); } \
	FORCEINLINE static uint32 __PPO__ActivationOwnedTags() { return STRUCT_OFFSET(UGameplayAbility, ActivationOwnedTags); } \
	FORCEINLINE static uint32 __PPO__ActivationRequiredTags() { return STRUCT_OFFSET(UGameplayAbility, ActivationRequiredTags); } \
	FORCEINLINE static uint32 __PPO__ActivationBlockedTags() { return STRUCT_OFFSET(UGameplayAbility, ActivationBlockedTags); } \
	FORCEINLINE static uint32 __PPO__SourceRequiredTags() { return STRUCT_OFFSET(UGameplayAbility, SourceRequiredTags); } \
	FORCEINLINE static uint32 __PPO__SourceBlockedTags() { return STRUCT_OFFSET(UGameplayAbility, SourceBlockedTags); } \
	FORCEINLINE static uint32 __PPO__TargetRequiredTags() { return STRUCT_OFFSET(UGameplayAbility, TargetRequiredTags); } \
	FORCEINLINE static uint32 __PPO__TargetBlockedTags() { return STRUCT_OFFSET(UGameplayAbility, TargetBlockedTags); } \
	FORCEINLINE static uint32 __PPO__ActiveTasks() { return STRUCT_OFFSET(UGameplayAbility, ActiveTasks); } \
	FORCEINLINE static uint32 __PPO__CurrentMontage() { return STRUCT_OFFSET(UGameplayAbility, CurrentMontage); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(UGameplayAbility, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bIsCancelable() { return STRUCT_OFFSET(UGameplayAbility, bIsCancelable); } \
	FORCEINLINE static uint32 __PPO__bIsBlockingOtherAbilities() { return STRUCT_OFFSET(UGameplayAbility, bIsBlockingOtherAbilities); } \
	FORCEINLINE static uint32 __PPO__bMarkPendingKillOnAbilityEnd() { return STRUCT_OFFSET(UGameplayAbility, bMarkPendingKillOnAbilityEnd); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_93_PROLOG \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_EVENT_PARMS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_96_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayAbility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
