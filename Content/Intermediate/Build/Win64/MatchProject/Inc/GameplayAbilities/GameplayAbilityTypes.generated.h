// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h
#error "GameplayAbilityTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_565_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecHandleAndPredictionKey>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_514_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FServerAbilityRPCBatch>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityTaskDebugMessage>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_472_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAttributeDefaults>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityEndedData>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_337_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEventData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEventData>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityLocalAnimMontage>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityRepAnimMontage>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityActorInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h


#define FOREACH_ENUM_EREPANIMPOSITIONMETHOD(op) \
	op(ERepAnimPositionMethod::Position) \
	op(ERepAnimPositionMethod::CurrentSectionId) 

enum class ERepAnimPositionMethod;
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERepAnimPositionMethod>();

#define FOREACH_ENUM_EGAMEPLAYABILITYTRIGGERSOURCE(op) \
	op(EGameplayAbilityTriggerSource::GameplayEvent) \
	op(EGameplayAbilityTriggerSource::OwnedTagAdded) \
	op(EGameplayAbilityTriggerSource::OwnedTagPresent) 
#define FOREACH_ENUM_EGAMEPLAYABILITYREPLICATIONPOLICY(op) \
	op(EGameplayAbilityReplicationPolicy::ReplicateNo) \
	op(EGameplayAbilityReplicationPolicy::ReplicateYes) 
#define FOREACH_ENUM_EGAMEPLAYABILITYNETSECURITYPOLICY(op) \
	op(EGameplayAbilityNetSecurityPolicy::ClientOrServer) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnly) 
#define FOREACH_ENUM_EGAMEPLAYABILITYNETEXECUTIONPOLICY(op) \
	op(EGameplayAbilityNetExecutionPolicy::LocalPredicted) \
	op(EGameplayAbilityNetExecutionPolicy::LocalOnly) \
	op(EGameplayAbilityNetExecutionPolicy::ServerInitiated) \
	op(EGameplayAbilityNetExecutionPolicy::ServerOnly) 
#define FOREACH_ENUM_EGAMEPLAYABILITYINSTANCINGPOLICY(op) \
	op(EGameplayAbilityInstancingPolicy::NonInstanced) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerActor) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerExecution) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
