// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTypes() {}
// Cross Module References
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
// End Cross Module References
	static UEnum* ERepAnimPositionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ERepAnimPositionMethod"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERepAnimPositionMethod>()
	{
		return ERepAnimPositionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERepAnimPositionMethod(ERepAnimPositionMethod_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("ERepAnimPositionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Hash() { return 3441473096U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERepAnimPositionMethod"), 0, Get_Z_Construct_UEnum_GameplayAbilities_ERepAnimPositionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERepAnimPositionMethod::Position", (int64)ERepAnimPositionMethod::Position },
				{ "ERepAnimPositionMethod::CurrentSectionId", (int64)ERepAnimPositionMethod::CurrentSectionId },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id */" },
				{ "CurrentSectionId.Comment", "// reps the position in the montage to keep the client in sync (heavier, quantized, more precise)\n" },
				{ "CurrentSectionId.Name", "ERepAnimPositionMethod::CurrentSectionId" },
				{ "CurrentSectionId.ToolTip", "reps the position in the montage to keep the client in sync (heavier, quantized, more precise)" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "Position.Name", "ERepAnimPositionMethod::Position" },
				{ "ToolTip", "Enum used by the Ability Rep Anim Montage struct to rep the quantized position or the current section id" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"ERepAnimPositionMethod",
				"ERepAnimPositionMethod",
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
	static UEnum* EGameplayAbilityTriggerSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityTriggerSource"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTriggerSource::Type>()
	{
		return EGameplayAbilityTriggerSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityTriggerSource(EGameplayAbilityTriggerSource_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityTriggerSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Hash() { return 1084418006U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityTriggerSource"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityTriggerSource::GameplayEvent", (int64)EGameplayAbilityTriggerSource::GameplayEvent },
				{ "EGameplayAbilityTriggerSource::OwnedTagAdded", (int64)EGameplayAbilityTriggerSource::OwnedTagAdded },
				{ "EGameplayAbilityTriggerSource::OwnedTagPresent", (int64)EGameplayAbilityTriggerSource::OwnedTagPresent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\x09""Defines what type of trigger will activate the ability, paired to a tag */" },
				{ "GameplayEvent.Comment", "// Triggered from a gameplay event, will come with payload\n" },
				{ "GameplayEvent.Name", "EGameplayAbilityTriggerSource::GameplayEvent" },
				{ "GameplayEvent.ToolTip", "Triggered from a gameplay event, will come with payload" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "OwnedTagAdded.Comment", "// Triggered if the ability's owner gets a tag added, triggered once whenever it's added\n" },
				{ "OwnedTagAdded.Name", "EGameplayAbilityTriggerSource::OwnedTagAdded" },
				{ "OwnedTagAdded.ToolTip", "Triggered if the ability's owner gets a tag added, triggered once whenever it's added" },
				{ "OwnedTagPresent.Comment", "// Triggered if the ability's owner gets tag added, removed when the tag is removed\n" },
				{ "OwnedTagPresent.Name", "EGameplayAbilityTriggerSource::OwnedTagPresent" },
				{ "OwnedTagPresent.ToolTip", "Triggered if the ability's owner gets tag added, removed when the tag is removed" },
				{ "ToolTip", "Defines what type of trigger will activate the ability, paired to a tag" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityTriggerSource",
				"EGameplayAbilityTriggerSource::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayAbilityReplicationPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityReplicationPolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityReplicationPolicy::Type>()
	{
		return EGameplayAbilityReplicationPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityReplicationPolicy(EGameplayAbilityReplicationPolicy_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityReplicationPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Hash() { return 293400152U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityReplicationPolicy"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityReplicationPolicy::ReplicateNo", (int64)EGameplayAbilityReplicationPolicy::ReplicateNo },
				{ "EGameplayAbilityReplicationPolicy::ReplicateYes", (int64)EGameplayAbilityReplicationPolicy::ReplicateYes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** How an ability replicates state/events to everyone on the network */" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "ReplicateNo.Comment", "// We don't replicate the instance of the ability to anyone.\n" },
				{ "ReplicateNo.DisplayName", "Do Not Replicate" },
				{ "ReplicateNo.Name", "EGameplayAbilityReplicationPolicy::ReplicateNo" },
				{ "ReplicateNo.ToolTip", "We don't replicate the instance of the ability to anyone." },
				{ "ReplicateYes.Comment", "// We replicate the instance of the ability to the owner.\n" },
				{ "ReplicateYes.DisplayName", "Replicate" },
				{ "ReplicateYes.Name", "EGameplayAbilityReplicationPolicy::ReplicateYes" },
				{ "ReplicateYes.ToolTip", "We replicate the instance of the ability to the owner." },
				{ "ToolTip", "How an ability replicates state/events to everyone on the network" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityReplicationPolicy",
				"EGameplayAbilityReplicationPolicy::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayAbilityNetSecurityPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetSecurityPolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetSecurityPolicy::Type>()
	{
		return EGameplayAbilityNetSecurityPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityNetSecurityPolicy(EGameplayAbilityNetSecurityPolicy_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityNetSecurityPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Hash() { return 98449593U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityNetSecurityPolicy"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityNetSecurityPolicy::ClientOrServer", (int64)EGameplayAbilityNetSecurityPolicy::ClientOrServer },
				{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution },
				{ "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination },
				{ "EGameplayAbilityNetSecurityPolicy::ServerOnly", (int64)EGameplayAbilityNetSecurityPolicy::ServerOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClientOrServer.Comment", "// No security requirements. Client or server can trigger execution and termination of this ability freely.\n" },
				{ "ClientOrServer.DisplayName", "Client Or Server" },
				{ "ClientOrServer.Name", "EGameplayAbilityNetSecurityPolicy::ClientOrServer" },
				{ "ClientOrServer.ToolTip", "No security requirements. Client or server can trigger execution and termination of this ability freely." },
				{ "Comment", "/** What protections does this ability have? Should the client be allowed to request changes to the execution of the ability? */" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "ServerOnly.Comment", "// Server controls both execution and termination of this ability. A client making any requests will be ignored.\n" },
				{ "ServerOnly.DisplayName", "Server Only" },
				{ "ServerOnly.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnly" },
				{ "ServerOnly.ToolTip", "Server controls both execution and termination of this ability. A client making any requests will be ignored." },
				{ "ServerOnlyExecution.Comment", "// A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability.\n" },
				{ "ServerOnlyExecution.DisplayName", "Server Only Execution" },
				{ "ServerOnlyExecution.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution" },
				{ "ServerOnlyExecution.ToolTip", "A client requesting execution of this ability will be ignored by the server. Clients can still request that the server cancel or end this ability." },
				{ "ServerOnlyTermination.Comment", "// A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability.\n" },
				{ "ServerOnlyTermination.DisplayName", "Server Only Termination" },
				{ "ServerOnlyTermination.Name", "EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination" },
				{ "ServerOnlyTermination.ToolTip", "A client requesting cancellation or ending of this ability will be ignored by the server. Clients can still request execution of the ability." },
				{ "ToolTip", "What protections does this ability have? Should the client be allowed to request changes to the execution of the ability?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityNetSecurityPolicy",
				"EGameplayAbilityNetSecurityPolicy::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayAbilityNetExecutionPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityNetExecutionPolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetExecutionPolicy::Type>()
	{
		return EGameplayAbilityNetExecutionPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityNetExecutionPolicy(EGameplayAbilityNetExecutionPolicy_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityNetExecutionPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Hash() { return 3277513828U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityNetExecutionPolicy"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityNetExecutionPolicy::LocalPredicted", (int64)EGameplayAbilityNetExecutionPolicy::LocalPredicted },
				{ "EGameplayAbilityNetExecutionPolicy::LocalOnly", (int64)EGameplayAbilityNetExecutionPolicy::LocalOnly },
				{ "EGameplayAbilityNetExecutionPolicy::ServerInitiated", (int64)EGameplayAbilityNetExecutionPolicy::ServerInitiated },
				{ "EGameplayAbilityNetExecutionPolicy::ServerOnly", (int64)EGameplayAbilityNetExecutionPolicy::ServerOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\" */" },
				{ "LocalOnly.Comment", "// This ability will only run on the client or server that has local control\n" },
				{ "LocalOnly.DisplayName", "Local Only" },
				{ "LocalOnly.Name", "EGameplayAbilityNetExecutionPolicy::LocalOnly" },
				{ "LocalOnly.ToolTip", "This ability will only run on the client or server that has local control" },
				{ "LocalPredicted.Comment", "// Part of this ability runs predictively on the local client if there is one\n" },
				{ "LocalPredicted.DisplayName", "Local Predicted" },
				{ "LocalPredicted.Name", "EGameplayAbilityNetExecutionPolicy::LocalPredicted" },
				{ "LocalPredicted.ToolTip", "Part of this ability runs predictively on the local client if there is one" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "ServerInitiated.Comment", "// This ability is initiated by the server, but will also run on the local client if one exists\n" },
				{ "ServerInitiated.DisplayName", "Server Initiated" },
				{ "ServerInitiated.Name", "EGameplayAbilityNetExecutionPolicy::ServerInitiated" },
				{ "ServerInitiated.ToolTip", "This ability is initiated by the server, but will also run on the local client if one exists" },
				{ "ServerOnly.Comment", "// This ability will only run on the server\n" },
				{ "ServerOnly.DisplayName", "Server Only" },
				{ "ServerOnly.Name", "EGameplayAbilityNetExecutionPolicy::ServerOnly" },
				{ "ServerOnly.ToolTip", "This ability will only run on the server" },
				{ "ToolTip", "Where does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\"" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityNetExecutionPolicy",
				"EGameplayAbilityNetExecutionPolicy::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayAbilityInstancingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityInstancingPolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInstancingPolicy::Type>()
	{
		return EGameplayAbilityInstancingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityInstancingPolicy(EGameplayAbilityInstancingPolicy_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityInstancingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Hash() { return 4161713605U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityInstancingPolicy"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityInstancingPolicy::NonInstanced", (int64)EGameplayAbilityInstancingPolicy::NonInstanced },
				{ "EGameplayAbilityInstancingPolicy::InstancedPerActor", (int64)EGameplayAbilityInstancingPolicy::InstancedPerActor },
				{ "EGameplayAbilityInstancingPolicy::InstancedPerExecution", (int64)EGameplayAbilityInstancingPolicy::InstancedPerExecution },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n\x09 *\x09How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\n\x09 *\x09""Ability cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc.\n\x09 */" },
				{ "InstancedPerActor.Comment", "// Each actor gets their own instance of this ability. State can be saved, replication is possible.\n" },
				{ "InstancedPerActor.Name", "EGameplayAbilityInstancingPolicy::InstancedPerActor" },
				{ "InstancedPerActor.ToolTip", "Each actor gets their own instance of this ability. State can be saved, replication is possible." },
				{ "InstancedPerExecution.Comment", "// We instance this ability each time it is executed. Replication possible but not recommended.\n" },
				{ "InstancedPerExecution.Name", "EGameplayAbilityInstancingPolicy::InstancedPerExecution" },
				{ "InstancedPerExecution.ToolTip", "We instance this ability each time it is executed. Replication possible but not recommended." },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
				{ "NonInstanced.Comment", "// This ability is never instanced. Anything that executes the ability is operating on the CDO.\n" },
				{ "NonInstanced.Name", "EGameplayAbilityInstancingPolicy::NonInstanced" },
				{ "NonInstanced.ToolTip", "This ability is never instanced. Anything that executes the ability is operating on the CDO." },
				{ "ToolTip", "How the ability is instanced when executed. This limits what an ability can do in its implementation. For example, a NonInstanced\nAbility cannot have state. It is probably unsafe for an InstancedPerActor ability to have latent actions, etc." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityInstancingPolicy",
				"EGameplayAbilityInstancingPolicy::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandleAndPredictionKey"), sizeof(FGameplayAbilitySpecHandleAndPredictionKey), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandleAndPredictionKey>()
{
	return FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey(FGameplayAbilitySpecHandleAndPredictionKey::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilitySpecHandleAndPredictionKey"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandleAndPredictionKey
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandleAndPredictionKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilitySpecHandleAndPredictionKey")),new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandleAndPredictionKey>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilitySpecHandleAndPredictionKey;
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionKeyAtCreation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PredictionKeyAtCreation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used as a key for storing internal ability data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Used as a key for storing internal ability data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandleAndPredictionKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation = { "PredictionKeyAtCreation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_AbilityHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::NewProp_PredictionKeyAtCreation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecHandleAndPredictionKey",
		sizeof(FGameplayAbilitySpecHandleAndPredictionKey),
		alignof(FGameplayAbilitySpecHandleAndPredictionKey),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilitySpecHandleAndPredictionKey"), sizeof(FGameplayAbilitySpecHandleAndPredictionKey), Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Hash() { return 2015497224U; }
class UScriptStruct* FServerAbilityRPCBatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAbilityRPCBatch, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ServerAbilityRPCBatch"), sizeof(FServerAbilityRPCBatch), Get_Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FServerAbilityRPCBatch>()
{
	return FServerAbilityRPCBatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAbilityRPCBatch(FServerAbilityRPCBatch::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("ServerAbilityRPCBatch"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFServerAbilityRPCBatch
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFServerAbilityRPCBatch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ServerAbilityRPCBatch")),new UScriptStruct::TCppStructOps<FServerAbilityRPCBatch>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFServerAbilityRPCBatch;
	struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPressed_MetaData[];
#endif
		static void NewProp_InputPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InputPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ended_MetaData[];
#endif
		static void NewProp_Ended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Started_MetaData[];
#endif
		static void NewProp_Started_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Started;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility.  */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "This struct holds state to batch server RPC calls: ServerTryActivateAbility, ServerSetReplicatedTargetData, ServerEndAbility." },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAbilityRPCBatch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAbilityRPCBatch, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->InputPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed = { "InputPressed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->Ended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended = { "Ended", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData[] = {
		{ "Comment", "/** Safety bool to make sure ServerTryActivate was called exactly one time in a batch */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Safety bool to make sure ServerTryActivate was called exactly one time in a batch" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit(void* Obj)
	{
		((FServerAbilityRPCBatch*)Obj)->Started = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started = { "Started", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerAbilityRPCBatch), &Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_AbilitySpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_PredictionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_TargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_InputPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Ended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::NewProp_Started,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ServerAbilityRPCBatch",
		sizeof(FServerAbilityRPCBatch),
		alignof(FServerAbilityRPCBatch),
		Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAbilityRPCBatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAbilityRPCBatch"), sizeof(FServerAbilityRPCBatch), Get_Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Hash() { return 2213015090U; }
class UScriptStruct* FAbilityTaskDebugMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityTaskDebugMessage"), sizeof(FAbilityTaskDebugMessage), Get_Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityTaskDebugMessage>()
{
	return FAbilityTaskDebugMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityTaskDebugMessage(FAbilityTaskDebugMessage::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("AbilityTaskDebugMessage"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityTaskDebugMessage
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityTaskDebugMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AbilityTaskDebugMessage")),new UScriptStruct::TCppStructOps<FAbilityTaskDebugMessage>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityTaskDebugMessage;
	struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Debug message emitted by ability tasks */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Debug message emitted by ability tasks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityTaskDebugMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask = { "FromTask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityTaskDebugMessage, FromTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityTaskDebugMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_FromTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AbilityTaskDebugMessage",
		sizeof(FAbilityTaskDebugMessage),
		alignof(FAbilityTaskDebugMessage),
		Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityTaskDebugMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityTaskDebugMessage"), sizeof(FAbilityTaskDebugMessage), Get_Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Hash() { return 2765190851U; }
class UScriptStruct* FAttributeDefaults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAttributeDefaults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeDefaults, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeDefaults"), sizeof(FAttributeDefaults), Get_Z_Construct_UScriptStruct_FAttributeDefaults_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeDefaults>()
{
	return FAttributeDefaults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributeDefaults(FAttributeDefaults::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("AttributeDefaults"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFAttributeDefaults
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFAttributeDefaults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributeDefaults")),new UScriptStruct::TCppStructOps<FAttributeDefaults>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFAttributeDefaults;
	struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStartingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultStartingTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to initialize default values for attributes */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Used to initialize default values for attributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeDefaults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeDefaults, Attributes), Z_Construct_UClass_UAttributeSet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData[] = {
		{ "Category", "AttributeTest" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable = { "DefaultStartingTable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeDefaults, DefaultStartingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeDefaults_Statics::NewProp_DefaultStartingTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AttributeDefaults",
		sizeof(FAttributeDefaults),
		alignof(FAttributeDefaults),
		Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeDefaults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributeDefaults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributeDefaults"), sizeof(FAttributeDefaults), Get_Z_Construct_UScriptStruct_FAttributeDefaults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributeDefaults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributeDefaults_Hash() { return 4286476859U; }
class UScriptStruct* FAbilityEndedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAbilityEndedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityEndedData, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityEndedData"), sizeof(FAbilityEndedData), Get_Z_Construct_UScriptStruct_FAbilityEndedData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityEndedData>()
{
	return FAbilityEndedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityEndedData(FAbilityEndedData::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("AbilityEndedData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityEndedData
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityEndedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AbilityEndedData")),new UScriptStruct::TCppStructOps<FAbilityEndedData>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFAbilityEndedData;
	struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityThatEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityThatEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateEndAbility_MetaData[];
#endif
		static void NewProp_bReplicateEndAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateEndAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[];
#endif
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Ability Ended Data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability Ended Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityEndedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData[] = {
		{ "Comment", "/** Ability that ended, normally instance but could be CDO */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability that ended, normally instance but could be CDO" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded = { "AbilityThatEnded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityEndedData, AbilityThatEnded), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData[] = {
		{ "Comment", "/** Specific ability spec that ended */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Specific ability spec that ended" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle = { "AbilitySpecHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityEndedData, AbilitySpecHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData[] = {
		{ "Comment", "/** Rather to replicate the ability to ending */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Rather to replicate the ability to ending" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit(void* Obj)
	{
		((FAbilityEndedData*)Obj)->bReplicateEndAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility = { "bReplicateEndAbility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData[] = {
		{ "Comment", "/** True if this was cancelled deliberately, false if it ended normally */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "True if this was cancelled deliberately, false if it ended normally" },
	};
#endif
	void Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((FAbilityEndedData*)Obj)->bWasCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAbilityEndedData), &Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilityThatEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_AbilitySpecHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bReplicateEndAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityEndedData_Statics::NewProp_bWasCancelled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityEndedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AbilityEndedData",
		sizeof(FAbilityEndedData),
		alignof(FAbilityEndedData),
		Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityEndedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityEndedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityEndedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityEndedData"), sizeof(FAbilityEndedData), Get_Z_Construct_UScriptStruct_FAbilityEndedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityEndedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityEndedData_Hash() { return 1416191084U; }
class UScriptStruct* FGameplayEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEventData, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEventData"), sizeof(FGameplayEventData), Get_Z_Construct_UScriptStruct_FGameplayEventData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEventData>()
{
	return FGameplayEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayEventData(FGameplayEventData::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayEventData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEventData
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayEventData")),new UScriptStruct::TCppStructOps<FGameplayEventData>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayEventData;
	struct Z_Construct_UScriptStruct_FGameplayEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalObject2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalObject2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EventMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Metadata for a tag-based Gameplay Event, that can activate other abilities or run ability-specific logic" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tag of the event that triggered this */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tag of the event that triggered this" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The instigator of the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The instigator of the event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The target of the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The target of the event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** An optional ability-specific object to be passed though the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "An optional ability-specific object to be passed though the event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** A second optional ability-specific object to be passed though the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "A second optional ability-specific object to be passed though the event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2 = { "OptionalObject2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, OptionalObject2), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Polymorphic context information */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Polymorphic context information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, ContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tags that the instigator has */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tags that the instigator has" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** Tags that the target has */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Tags that the target has" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The magnitude of the triggering event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The magnitude of the triggering event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude = { "EventMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, EventMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayAbilityTriggerPayload" },
		{ "Comment", "/** The polymorphic target information for the event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The polymorphic target information for the event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayEventData, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_OptionalObject2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_ContextHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_InstigatorTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_EventMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEventData_Statics::NewProp_TargetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEventData",
		sizeof(FGameplayEventData),
		alignof(FGameplayEventData),
		Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayEventData"), sizeof(FGameplayEventData), Get_Z_Construct_UScriptStruct_FGameplayEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayEventData_Hash() { return 477744690U; }
class UScriptStruct* FGameplayAbilityLocalAnimMontage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityLocalAnimMontage"), sizeof(FGameplayAbilityLocalAnimMontage), Get_Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityLocalAnimMontage>()
{
	return FGameplayAbilityLocalAnimMontage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityLocalAnimMontage(FGameplayAbilityLocalAnimMontage::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityLocalAnimMontage"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityLocalAnimMontage
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityLocalAnimMontage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityLocalAnimMontage")),new UScriptStruct::TCppStructOps<FGameplayAbilityLocalAnimMontage>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityLocalAnimMontage;
	struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayBit_MetaData[];
#endif
		static void NewProp_PlayBit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlayBit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatingAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimatingAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Data about montages that were played locally (all montages in case of server. predictive montages in case of client). Never replicated directly." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityLocalAnimMontage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Comment", "/** What montage is being played */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "What montage is being played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit_MetaData[] = {
		{ "Comment", "/** Rather the montage is actively playing */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Rather the montage is actively playing" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit_SetBit(void* Obj)
	{
		((FGameplayAbilityLocalAnimMontage*)Obj)->PlayBit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit = { "PlayBit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayAbilityLocalAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "Comment", "/** Prediction key that started the montage play */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Prediction key that started the montage play" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData[] = {
		{ "Comment", "/** The ability, if any, that instigated this montage */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The ability, if any, that instigated this montage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility = { "AnimatingAbility", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityLocalAnimMontage, AnimatingAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PlayBit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_PredictionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::NewProp_AnimatingAbility,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityLocalAnimMontage",
		sizeof(FGameplayAbilityLocalAnimMontage),
		alignof(FGameplayAbilityLocalAnimMontage),
		Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityLocalAnimMontage"), sizeof(FGameplayAbilityLocalAnimMontage), Get_Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Hash() { return 1451599504U; }
class UScriptStruct* FGameplayAbilityRepAnimMontage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityRepAnimMontage"), sizeof(FGameplayAbilityRepAnimMontage), Get_Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityRepAnimMontage>()
{
	return FGameplayAbilityRepAnimMontage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityRepAnimMontage(FGameplayAbilityRepAnimMontage::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityRepAnimMontage"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityRepAnimMontage
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityRepAnimMontage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityRepAnimMontage")),new UScriptStruct::TCppStructOps<FGameplayAbilityRepAnimMontage>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityRepAnimMontage;
	struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSectionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextSectionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepPosition_MetaData[];
#endif
		static void NewProp_bRepPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsStopped_MetaData[];
#endif
		static void NewProp_IsStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcePlayBit_MetaData[];
#endif
		static void NewProp_ForcePlayBit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForcePlayBit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipPositionCorrection_MetaData[];
#endif
		static void NewProp_SkipPositionCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipPositionCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipPlayRate_MetaData[];
#endif
		static void NewProp_bSkipPlayRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionIdToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SectionIdToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data about montages that is replicated to simulated clients */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Data about montages that is replicated to simulated clients" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityRepAnimMontage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Comment", "/** AnimMontage ref */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "AnimMontage ref" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Comment", "/** Play Rate */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Play Rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Montage position */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Montage position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Comment", "/** Montage current blend time */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Montage current blend time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData[] = {
		{ "Comment", "/** NextSectionID */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "NextSectionID" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID = { "NextSectionID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, NextSectionID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData[] = {
		{ "Comment", "/** flag indicating we should serialize the position or the current section id */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "flag indicating we should serialize the position or the current section id" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->bRepPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition = { "bRepPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData[] = {
		{ "Comment", "/** Bit set when montage has been stopped. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Bit set when montage has been stopped." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->IsStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped = { "IsStopped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit_MetaData[] = {
		{ "Comment", "/** Bit flipped every time a new Montage is played. To trigger replication when the same montage is played again. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Bit flipped every time a new Montage is played. To trigger replication when the same montage is played again." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->ForcePlayBit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit = { "ForcePlayBit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData[] = {
		{ "Comment", "/** Stops montage position from replicating at all to save bandwidth */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Stops montage position from replicating at all to save bandwidth" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->SkipPositionCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection = { "SkipPositionCorrection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData[] = {
		{ "Comment", "/** Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Stops PlayRate from replicating to save bandwidth. PlayRate will be assumed to be 1.f." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit(void* Obj)
	{
		((FGameplayAbilityRepAnimMontage*)Obj)->bSkipPlayRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate = { "bSkipPlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FGameplayAbilityRepAnimMontage), &Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData[] = {
		{ "Comment", "/** The current section Id used by the montage. Will only be valid if bRepPosition is false */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The current section Id used by the montage. Will only be valid if bRepPosition is false" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay = { "SectionIdToPlay", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityRepAnimMontage, SectionIdToPlay), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_NextSectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bRepPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_IsStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_ForcePlayBit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SkipPositionCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_bSkipPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_PredictionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::NewProp_SectionIdToPlay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityRepAnimMontage",
		sizeof(FGameplayAbilityRepAnimMontage),
		alignof(FGameplayAbilityRepAnimMontage),
		Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityRepAnimMontage"), sizeof(FGameplayAbilityRepAnimMontage), Get_Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Hash() { return 4032896633U; }
class UScriptStruct* FGameplayAbilityActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityActorInfo"), sizeof(FGameplayAbilityActorInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityActorInfo>()
{
	return FGameplayAbilityActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityActorInfo(FGameplayAbilityActorInfo::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActorInfo
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityActorInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityActorInfo>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityActorInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AvatarActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedAnimInstanceTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AffectedAnimInstanceTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""FGameplayAbilityActorInfo\n *\n *\x09""Cached data associated with an Actor using an Ability.\n *\x09\x09-Initialized from an AActor* in InitFromActor\n *\x09\x09-Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n *\x09\x09-These are generally passed around as pointers to support polymorphism.\n *\x09\x09-Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created.\n *\n */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "FGameplayAbilityActorInfo\n\nCached data associated with an Actor using an Ability.\n        -Initialized from an AActor* in InitFromActor\n        -Abilities use this to know what to actor upon. E.g., instead of being coupled to a specific actor class.\n        -These are generally passed around as pointers to support polymorphism.\n        -Projects can override UAbilitySystemGlobals::AllocAbilityActorInfo to override the default struct type that is created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The actor that owns the abilities, shouldn't be null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The actor that owns the abilities, shouldn't be null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The physical representation of the owner, used for targeting and animation. This will often be null! */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The physical representation of the owner, used for targeting and animation. This will often be null!" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** PlayerController associated with the owning actor. This will often be null! */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "PlayerController associated with the owning actor. This will often be null!" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Ability System component associated with the owner actor, shouldn't be null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Ability System component associated with the owner actor, shouldn't be null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Skeletal mesh of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Skeletal mesh of the avatar actor. Often null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Anim instance of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Anim instance of the avatar actor. Often null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** Movement component of the avatar actor. Often null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "Movement component of the avatar actor. Often null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x001400000008001c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "Comment", "/** The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTypes.h" },
		{ "ToolTip", "The linked Anim Instance that this component will play montages in. Use NAME_None for the main anim instance." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag = { "AffectedAnimInstanceTag", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityActorInfo, AffectedAnimInstanceTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_OwnerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AvatarActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::NewProp_AffectedAnimInstanceTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityActorInfo",
		sizeof(FGameplayAbilityActorInfo),
		alignof(FGameplayAbilityActorInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityActorInfo"), sizeof(FGameplayAbilityActorInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Hash() { return 4021348836U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
