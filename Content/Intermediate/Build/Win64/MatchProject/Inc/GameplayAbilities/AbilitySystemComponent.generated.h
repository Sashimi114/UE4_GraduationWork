// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FGameplayAbilitySpecHandle;
struct FPredictionKey;
struct FGameplayEventData;
struct FGameplayAbilityActivationInfo;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayTag;
struct FVector_NetQuantize100;
struct FServerAbilityRPCBatch;
class UGameplayAbility;
struct FGameplayTagContainer;
struct FGameplayCueParameters;
struct FGameplayEffectSpecForRPC;
struct FGameplayEffectContextHandle;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectQuery;
class UGameplayEffect;
class UAbilitySystemComponent;
struct FGameplayAttribute;
struct FGameplayEffectSpecHandle;
class UAttributeSet;
class UDataTable;
#ifdef GAMEPLAYABILITIES_AbilitySystemComponent_generated_h
#error "AbilitySystemComponent.generated.h already included, missing '#pragma once' in AbilitySystemComponent.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemComponent_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_DELEGATE \
static inline void FAbilityConfirmOrCancel_DelegateWrapper(const FMulticastScriptDelegate& AbilityConfirmOrCancel) \
{ \
	AbilityConfirmOrCancel.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_92_DELEGATE \
struct AbilitySystemComponent_eventAbilityAbilityKey_Parms \
{ \
	int32 InputID; \
}; \
static inline void FAbilityAbilityKey_DelegateWrapper(const FMulticastScriptDelegate& AbilityAbilityKey, int32 InputID) \
{ \
	AbilitySystemComponent_eventAbilityAbilityKey_Parms Parms; \
	Parms.InputID=InputID; \
	AbilityAbilityKey.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_RPC_WRAPPERS \
	virtual bool ServerCurrentMontageSetPlayRate_Validate(UAnimMontage* , float ); \
	virtual void ServerCurrentMontageSetPlayRate_Implementation(UAnimMontage* ClientAnimMontage, float InPlayRate); \
	virtual bool ServerCurrentMontageJumpToSectionName_Validate(UAnimMontage* , FName ); \
	virtual void ServerCurrentMontageJumpToSectionName_Implementation(UAnimMontage* ClientAnimMontage, FName SectionName); \
	virtual bool ServerCurrentMontageSetNextSectionName_Validate(UAnimMontage* , float , FName , FName ); \
	virtual void ServerCurrentMontageSetNextSectionName_Implementation(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); \
	virtual void ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual void ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); \
	virtual void ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey); \
	virtual void ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerCancelAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo ); \
	virtual void ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual void ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerEndAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo , FPredictionKey ); \
	virtual void ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); \
	virtual void ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate); \
	virtual bool ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey , FGameplayEventData ); \
	virtual void ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual bool ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey ); \
	virtual void ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); \
	virtual bool ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FGameplayAbilityTargetDataHandle const& , FGameplayTag , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle const& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); \
	virtual void ClientSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); \
	virtual bool ServerSetReplicatedEventWithPayload_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey , FVector_NetQuantize100 ); \
	virtual void ServerSetReplicatedEventWithPayload_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); \
	virtual bool ServerSetReplicatedEvent_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch ); \
	virtual void ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo); \
	virtual void ClientPrintDebug_Response_Implementation(TArray<FString> const& Strings, int32 GameFlags); \
	virtual bool ServerPrintDebug_RequestWithStrings_Validate(TArray<FString> const& ); \
	virtual void ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString> const& Strings); \
	virtual bool ServerPrintDebug_Request_Validate(); \
	virtual void ServerPrintDebug_Request_Implementation(); \
	virtual void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(FGameplayEffectSpecForRPC const& Spec, FPredictionKey PredictionKey); \
	virtual void NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); \
	virtual void NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execServerCurrentMontageSetPlayRate); \
	DECLARE_FUNCTION(execServerCurrentMontageJumpToSectionName); \
	DECLARE_FUNCTION(execServerCurrentMontageSetNextSectionName); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAnimMontage); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceedWithEventData); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceed); \
	DECLARE_FUNCTION(execClientActivateAbilityFailed); \
	DECLARE_FUNCTION(execClientCancelAbility); \
	DECLARE_FUNCTION(execServerCancelAbility); \
	DECLARE_FUNCTION(execClientEndAbility); \
	DECLARE_FUNCTION(execServerEndAbility); \
	DECLARE_FUNCTION(execClientTryActivateAbility); \
	DECLARE_FUNCTION(execServerTryActivateAbilityWithEventData); \
	DECLARE_FUNCTION(execServerTryActivateAbility); \
	DECLARE_FUNCTION(execOnRep_ActivateAbilities); \
	DECLARE_FUNCTION(execServerSetInputReleased); \
	DECLARE_FUNCTION(execServerSetInputPressed); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetDataCancelled); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetData); \
	DECLARE_FUNCTION(execClientSetReplicatedEvent); \
	DECLARE_FUNCTION(execServerSetReplicatedEventWithPayload); \
	DECLARE_FUNCTION(execServerSetReplicatedEvent); \
	DECLARE_FUNCTION(execOnRep_OwningActor); \
	DECLARE_FUNCTION(execTargetCancel); \
	DECLARE_FUNCTION(execTargetConfirm); \
	DECLARE_FUNCTION(execSetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execGetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execServerAbilityRPCBatch); \
	DECLARE_FUNCTION(execOnRep_ServerDebugString); \
	DECLARE_FUNCTION(execOnRep_ClientDebugString); \
	DECLARE_FUNCTION(execClientPrintDebug_Response); \
	DECLARE_FUNCTION(execServerPrintDebug_RequestWithStrings); \
	DECLARE_FUNCTION(execServerPrintDebug_Request); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilitiesByTag); \
	DECLARE_FUNCTION(execIsGameplayCueActive); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_FromSpec); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithGrantedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithAppliedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithSourceTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTags); \
	DECLARE_FUNCTION(execGetActiveEffectsWithAllTags); \
	DECLARE_FUNCTION(execGetActiveEffects); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execGetGameplayEffectMagnitude); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevelUsingQuery); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevel); \
	DECLARE_FUNCTION(execGetGameplayEffectCount); \
	DECLARE_FUNCTION(execMakeEffectContext); \
	DECLARE_FUNCTION(execMakeOutgoingSpec); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffectBySourceEffect); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffect); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execK2_InitStats);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCurrentMontageSetPlayRate_Validate(UAnimMontage* , float ); \
	virtual void ServerCurrentMontageSetPlayRate_Implementation(UAnimMontage* ClientAnimMontage, float InPlayRate); \
	virtual bool ServerCurrentMontageJumpToSectionName_Validate(UAnimMontage* , FName ); \
	virtual void ServerCurrentMontageJumpToSectionName_Implementation(UAnimMontage* ClientAnimMontage, FName SectionName); \
	virtual bool ServerCurrentMontageSetNextSectionName_Validate(UAnimMontage* , float , FName , FName ); \
	virtual void ServerCurrentMontageSetNextSectionName_Implementation(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); \
	virtual void ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual void ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); \
	virtual void ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey); \
	virtual void ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerCancelAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo ); \
	virtual void ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual void ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerEndAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo , FPredictionKey ); \
	virtual void ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); \
	virtual void ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate); \
	virtual bool ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey , FGameplayEventData ); \
	virtual void ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual bool ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey ); \
	virtual void ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); \
	virtual bool ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FGameplayAbilityTargetDataHandle const& , FGameplayTag , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle const& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); \
	virtual void ClientSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); \
	virtual bool ServerSetReplicatedEventWithPayload_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey , FVector_NetQuantize100 ); \
	virtual void ServerSetReplicatedEventWithPayload_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); \
	virtual bool ServerSetReplicatedEvent_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch ); \
	virtual void ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo); \
	virtual void ClientPrintDebug_Response_Implementation(TArray<FString> const& Strings, int32 GameFlags); \
	virtual bool ServerPrintDebug_RequestWithStrings_Validate(TArray<FString> const& ); \
	virtual void ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString> const& Strings); \
	virtual bool ServerPrintDebug_Request_Validate(); \
	virtual void ServerPrintDebug_Request_Implementation(); \
	virtual void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(FGameplayEffectSpecForRPC const& Spec, FPredictionKey PredictionKey); \
	virtual void NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); \
	virtual void NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execServerCurrentMontageSetPlayRate); \
	DECLARE_FUNCTION(execServerCurrentMontageJumpToSectionName); \
	DECLARE_FUNCTION(execServerCurrentMontageSetNextSectionName); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAnimMontage); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceedWithEventData); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceed); \
	DECLARE_FUNCTION(execClientActivateAbilityFailed); \
	DECLARE_FUNCTION(execClientCancelAbility); \
	DECLARE_FUNCTION(execServerCancelAbility); \
	DECLARE_FUNCTION(execClientEndAbility); \
	DECLARE_FUNCTION(execServerEndAbility); \
	DECLARE_FUNCTION(execClientTryActivateAbility); \
	DECLARE_FUNCTION(execServerTryActivateAbilityWithEventData); \
	DECLARE_FUNCTION(execServerTryActivateAbility); \
	DECLARE_FUNCTION(execOnRep_ActivateAbilities); \
	DECLARE_FUNCTION(execServerSetInputReleased); \
	DECLARE_FUNCTION(execServerSetInputPressed); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetDataCancelled); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetData); \
	DECLARE_FUNCTION(execClientSetReplicatedEvent); \
	DECLARE_FUNCTION(execServerSetReplicatedEventWithPayload); \
	DECLARE_FUNCTION(execServerSetReplicatedEvent); \
	DECLARE_FUNCTION(execOnRep_OwningActor); \
	DECLARE_FUNCTION(execTargetCancel); \
	DECLARE_FUNCTION(execTargetConfirm); \
	DECLARE_FUNCTION(execSetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execGetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execServerAbilityRPCBatch); \
	DECLARE_FUNCTION(execOnRep_ServerDebugString); \
	DECLARE_FUNCTION(execOnRep_ClientDebugString); \
	DECLARE_FUNCTION(execClientPrintDebug_Response); \
	DECLARE_FUNCTION(execServerPrintDebug_RequestWithStrings); \
	DECLARE_FUNCTION(execServerPrintDebug_Request); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilitiesByTag); \
	DECLARE_FUNCTION(execIsGameplayCueActive); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_FromSpec); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithGrantedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithAppliedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithSourceTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTags); \
	DECLARE_FUNCTION(execGetActiveEffectsWithAllTags); \
	DECLARE_FUNCTION(execGetActiveEffects); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execGetGameplayEffectMagnitude); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevelUsingQuery); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevel); \
	DECLARE_FUNCTION(execGetGameplayEffectCount); \
	DECLARE_FUNCTION(execMakeEffectContext); \
	DECLARE_FUNCTION(execMakeOutgoingSpec); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffectBySourceEffect); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffect); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execK2_InitStats);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_EVENT_PARMS \
	struct AbilitySystemComponent_eventClientActivateAbilityFailed_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
		int16 PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventClientActivateAbilitySucceed_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
		FPredictionKey PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventClientActivateAbilitySucceedWithEventData_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
		FPredictionKey PredictionKey; \
		FGameplayEventData TriggerEventData; \
	}; \
	struct AbilitySystemComponent_eventClientCancelAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToCancel; \
		FGameplayAbilityActivationInfo ActivationInfo; \
	}; \
	struct AbilitySystemComponent_eventClientEndAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToEnd; \
		FGameplayAbilityActivationInfo ActivationInfo; \
	}; \
	struct AbilitySystemComponent_eventClientPrintDebug_Response_Parms \
	{ \
		TArray<FString> Strings; \
		int32 GameFlags; \
	}; \
	struct AbilitySystemComponent_eventClientSetReplicatedEvent_Parms \
	{ \
		TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType; \
		FGameplayAbilitySpecHandle AbilityHandle; \
		FPredictionKey AbilityOriginalPredictionKey; \
	}; \
	struct AbilitySystemComponent_eventClientTryActivateAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueAdded_Parms \
	{ \
		FGameplayTag GameplayCueTag; \
		FPredictionKey PredictionKey; \
		FGameplayEffectContextHandle EffectContext; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueAdded_WithParams_Parms \
	{ \
		FGameplayTag GameplayCueTag; \
		FPredictionKey PredictionKey; \
		FGameplayCueParameters Parameters; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Parms \
	{ \
		FGameplayEffectSpecForRPC Spec; \
		FPredictionKey PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Parms \
	{ \
		FGameplayTag GameplayCueTag; \
		FPredictionKey PredictionKey; \
		FGameplayCueParameters GameplayCueParameters; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueExecuted_Parms \
	{ \
		FGameplayTag GameplayCueTag; \
		FPredictionKey PredictionKey; \
		FGameplayEffectContextHandle EffectContext; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueExecuted_FromSpec_Parms \
	{ \
		FGameplayEffectSpecForRPC Spec; \
		FPredictionKey PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCueExecuted_WithParams_Parms \
	{ \
		FGameplayTag GameplayCueTag; \
		FPredictionKey PredictionKey; \
		FGameplayCueParameters GameplayCueParameters; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Parms \
	{ \
		FGameplayTagContainer GameplayCueTags; \
		FPredictionKey PredictionKey; \
		FGameplayCueParameters GameplayCueParameters; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCuesExecuted_Parms \
	{ \
		FGameplayTagContainer GameplayCueTags; \
		FPredictionKey PredictionKey; \
		FGameplayEffectContextHandle EffectContext; \
	}; \
	struct AbilitySystemComponent_eventNetMulticast_InvokeGameplayCuesExecuted_WithParams_Parms \
	{ \
		FGameplayTagContainer GameplayCueTags; \
		FPredictionKey PredictionKey; \
		FGameplayCueParameters GameplayCueParameters; \
	}; \
	struct AbilitySystemComponent_eventServerAbilityRPCBatch_Parms \
	{ \
		FServerAbilityRPCBatch BatchInfo; \
	}; \
	struct AbilitySystemComponent_eventServerCancelAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToCancel; \
		FGameplayAbilityActivationInfo ActivationInfo; \
	}; \
	struct AbilitySystemComponent_eventServerCurrentMontageJumpToSectionName_Parms \
	{ \
		UAnimMontage* ClientAnimMontage; \
		FName SectionName; \
	}; \
	struct AbilitySystemComponent_eventServerCurrentMontageSetNextSectionName_Parms \
	{ \
		UAnimMontage* ClientAnimMontage; \
		float ClientPosition; \
		FName SectionName; \
		FName NextSectionName; \
	}; \
	struct AbilitySystemComponent_eventServerCurrentMontageSetPlayRate_Parms \
	{ \
		UAnimMontage* ClientAnimMontage; \
		float InPlayRate; \
	}; \
	struct AbilitySystemComponent_eventServerEndAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToEnd; \
		FGameplayAbilityActivationInfo ActivationInfo; \
		FPredictionKey PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventServerPrintDebug_RequestWithStrings_Parms \
	{ \
		TArray<FString> Strings; \
	}; \
	struct AbilitySystemComponent_eventServerSetInputPressed_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityHandle; \
	}; \
	struct AbilitySystemComponent_eventServerSetInputReleased_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityHandle; \
	}; \
	struct AbilitySystemComponent_eventServerSetReplicatedEvent_Parms \
	{ \
		TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType; \
		FGameplayAbilitySpecHandle AbilityHandle; \
		FPredictionKey AbilityOriginalPredictionKey; \
		FPredictionKey CurrentPredictionKey; \
	}; \
	struct AbilitySystemComponent_eventServerSetReplicatedEventWithPayload_Parms \
	{ \
		TEnumAsByte<EAbilityGenericReplicatedEvent::Type> EventType; \
		FGameplayAbilitySpecHandle AbilityHandle; \
		FPredictionKey AbilityOriginalPredictionKey; \
		FPredictionKey CurrentPredictionKey; \
		FVector_NetQuantize100 VectorPayload; \
	}; \
	struct AbilitySystemComponent_eventServerSetReplicatedTargetData_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityHandle; \
		FPredictionKey AbilityOriginalPredictionKey; \
		FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle; \
		FGameplayTag ApplicationTag; \
		FPredictionKey CurrentPredictionKey; \
	}; \
	struct AbilitySystemComponent_eventServerSetReplicatedTargetDataCancelled_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityHandle; \
		FPredictionKey AbilityOriginalPredictionKey; \
		FPredictionKey CurrentPredictionKey; \
	}; \
	struct AbilitySystemComponent_eventServerTryActivateAbility_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
		bool InputPressed; \
		FPredictionKey PredictionKey; \
	}; \
	struct AbilitySystemComponent_eventServerTryActivateAbilityWithEventData_Parms \
	{ \
		FGameplayAbilitySpecHandle AbilityToActivate; \
		bool InputPressed; \
		FPredictionKey PredictionKey; \
		FGameplayEventData TriggerEventData; \
	};


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilitySystemComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedAttributes=NETFIELD_REP_START, \
		ClientDebugStrings, \
		ServerDebugStrings, \
		OwnerActor, \
		AvatarActor, \
		ActivatableAbilities, \
		RepAnimMontageInfo, \
		ActiveGameplayEffects, \
		ActiveGameplayCues, \
		MinimalReplicationGameplayCues, \
		BlockedAbilityBindings, \
		MinimalReplicationTags, \
		ReplicatedPredictionKeyMap, \
		NETFIELD_REP_END=ReplicatedPredictionKeyMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilitySystemComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnedAttributes=NETFIELD_REP_START, \
		ClientDebugStrings, \
		ServerDebugStrings, \
		OwnerActor, \
		AvatarActor, \
		ActivatableAbilities, \
		RepAnimMontageInfo, \
		ActiveGameplayEffects, \
		ActiveGameplayCues, \
		MinimalReplicationGameplayCues, \
		BlockedAbilityBindings, \
		MinimalReplicationTags, \
		ReplicatedPredictionKeyMap, \
		NETFIELD_REP_END=ReplicatedPredictionKeyMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemComponent(UAbilitySystemComponent&&); \
	NO_API UAbilitySystemComponent(const UAbilitySystemComponent&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemComponent(UAbilitySystemComponent&&); \
	NO_API UAbilitySystemComponent(const UAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponent)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActivatableAbilities() { return STRUCT_OFFSET(UAbilitySystemComponent, ActivatableAbilities); } \
	FORCEINLINE static uint32 __PPO__AllReplicatedInstancedAbilities() { return STRUCT_OFFSET(UAbilitySystemComponent, AllReplicatedInstancedAbilities); } \
	FORCEINLINE static uint32 __PPO__RepAnimMontageInfo() { return STRUCT_OFFSET(UAbilitySystemComponent, RepAnimMontageInfo); } \
	FORCEINLINE static uint32 __PPO__bCachedIsNetSimulated() { return STRUCT_OFFSET(UAbilitySystemComponent, bCachedIsNetSimulated); } \
	FORCEINLINE static uint32 __PPO__bPendingMontageRep() { return STRUCT_OFFSET(UAbilitySystemComponent, bPendingMontageRep); } \
	FORCEINLINE static uint32 __PPO__LocalAnimMontageInfo() { return STRUCT_OFFSET(UAbilitySystemComponent, LocalAnimMontageInfo); } \
	FORCEINLINE static uint32 __PPO__ActiveGameplayEffects() { return STRUCT_OFFSET(UAbilitySystemComponent, ActiveGameplayEffects); } \
	FORCEINLINE static uint32 __PPO__ActiveGameplayCues() { return STRUCT_OFFSET(UAbilitySystemComponent, ActiveGameplayCues); } \
	FORCEINLINE static uint32 __PPO__MinimalReplicationGameplayCues() { return STRUCT_OFFSET(UAbilitySystemComponent, MinimalReplicationGameplayCues); } \
	FORCEINLINE static uint32 __PPO__BlockedAbilityBindings() { return STRUCT_OFFSET(UAbilitySystemComponent, BlockedAbilityBindings); } \
	FORCEINLINE static uint32 __PPO__MinimalReplicationTags() { return STRUCT_OFFSET(UAbilitySystemComponent, MinimalReplicationTags); }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_86_PROLOG \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_EVENT_PARMS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_INCLASS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h


#define FOREACH_ENUM_EGAMEPLAYEFFECTREPLICATIONMODE(op) \
	op(EGameplayEffectReplicationMode::Minimal) \
	op(EGameplayEffectReplicationMode::Mixed) \
	op(EGameplayEffectReplicationMode::Full) 

enum class EGameplayEffectReplicationMode : uint8;
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectReplicationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
