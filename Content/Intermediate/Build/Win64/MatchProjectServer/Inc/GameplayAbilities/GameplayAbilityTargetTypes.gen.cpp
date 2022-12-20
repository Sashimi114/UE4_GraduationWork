// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetTypes() {}
// Cross Module References
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
// End Cross Module References
	static UEnum* EAbilityGenericReplicatedEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAbilityGenericReplicatedEvent"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityGenericReplicatedEvent::Type>()
	{
		return EAbilityGenericReplicatedEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityGenericReplicatedEvent(EAbilityGenericReplicatedEvent_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EAbilityGenericReplicatedEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Hash() { return 3504812403U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityGenericReplicatedEvent"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EAbilityGenericReplicatedEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityGenericReplicatedEvent::GenericConfirm", (int64)EAbilityGenericReplicatedEvent::GenericConfirm },
				{ "EAbilityGenericReplicatedEvent::GenericCancel", (int64)EAbilityGenericReplicatedEvent::GenericCancel },
				{ "EAbilityGenericReplicatedEvent::InputPressed", (int64)EAbilityGenericReplicatedEvent::InputPressed },
				{ "EAbilityGenericReplicatedEvent::InputReleased", (int64)EAbilityGenericReplicatedEvent::InputReleased },
				{ "EAbilityGenericReplicatedEvent::GenericSignalFromClient", (int64)EAbilityGenericReplicatedEvent::GenericSignalFromClient },
				{ "EAbilityGenericReplicatedEvent::GenericSignalFromServer", (int64)EAbilityGenericReplicatedEvent::GenericSignalFromServer },
				{ "EAbilityGenericReplicatedEvent::GameCustom1", (int64)EAbilityGenericReplicatedEvent::GameCustom1 },
				{ "EAbilityGenericReplicatedEvent::GameCustom2", (int64)EAbilityGenericReplicatedEvent::GameCustom2 },
				{ "EAbilityGenericReplicatedEvent::GameCustom3", (int64)EAbilityGenericReplicatedEvent::GameCustom3 },
				{ "EAbilityGenericReplicatedEvent::GameCustom4", (int64)EAbilityGenericReplicatedEvent::GameCustom4 },
				{ "EAbilityGenericReplicatedEvent::GameCustom5", (int64)EAbilityGenericReplicatedEvent::GameCustom5 },
				{ "EAbilityGenericReplicatedEvent::GameCustom6", (int64)EAbilityGenericReplicatedEvent::GameCustom6 },
				{ "EAbilityGenericReplicatedEvent::MAX", (int64)EAbilityGenericReplicatedEvent::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** These are generic, nonpayload carrying events that are replicated between the client and server */" },
				{ "GameCustom1.Comment", "/** Custom events for game use */" },
				{ "GameCustom1.Name", "EAbilityGenericReplicatedEvent::GameCustom1" },
				{ "GameCustom1.ToolTip", "Custom events for game use" },
				{ "GameCustom2.Name", "EAbilityGenericReplicatedEvent::GameCustom2" },
				{ "GameCustom3.Name", "EAbilityGenericReplicatedEvent::GameCustom3" },
				{ "GameCustom4.Name", "EAbilityGenericReplicatedEvent::GameCustom4" },
				{ "GameCustom5.Name", "EAbilityGenericReplicatedEvent::GameCustom5" },
				{ "GameCustom6.Name", "EAbilityGenericReplicatedEvent::GameCustom6" },
				{ "GenericCancel.Comment", "/** A generic cancellation event. Not necessarily a canellation of the ability or targeting. Could be used to cancel out of a channelling portion of ability. */" },
				{ "GenericCancel.Name", "EAbilityGenericReplicatedEvent::GenericCancel" },
				{ "GenericCancel.ToolTip", "A generic cancellation event. Not necessarily a canellation of the ability or targeting. Could be used to cancel out of a channelling portion of ability." },
				{ "GenericConfirm.Comment", "/** A generic confirmation to commit the ability */" },
				{ "GenericConfirm.Name", "EAbilityGenericReplicatedEvent::GenericConfirm" },
				{ "GenericConfirm.ToolTip", "A generic confirmation to commit the ability" },
				{ "GenericSignalFromClient.Comment", "/** A generic event from the client */" },
				{ "GenericSignalFromClient.Name", "EAbilityGenericReplicatedEvent::GenericSignalFromClient" },
				{ "GenericSignalFromClient.ToolTip", "A generic event from the client" },
				{ "GenericSignalFromServer.Comment", "/** A generic event from the server */" },
				{ "GenericSignalFromServer.Name", "EAbilityGenericReplicatedEvent::GenericSignalFromServer" },
				{ "GenericSignalFromServer.ToolTip", "A generic event from the server" },
				{ "InputPressed.Comment", "/** Additional input presses of the ability (Press X to activate ability, press X again while it is active to do other things within the GameplayAbility's logic) */" },
				{ "InputPressed.Name", "EAbilityGenericReplicatedEvent::InputPressed" },
				{ "InputPressed.ToolTip", "Additional input presses of the ability (Press X to activate ability, press X again while it is active to do other things within the GameplayAbility's logic)" },
				{ "InputReleased.Comment", "/** Input release event of the ability */" },
				{ "InputReleased.Name", "EAbilityGenericReplicatedEvent::InputReleased" },
				{ "InputReleased.ToolTip", "Input release event of the ability" },
				{ "MAX.Name", "EAbilityGenericReplicatedEvent::MAX" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
				{ "ToolTip", "These are generic, nonpayload carrying events that are replicated between the client and server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EAbilityGenericReplicatedEvent",
				"EAbilityGenericReplicatedEvent::Type",
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
	static UEnum* EGameplayAbilityTargetingLocationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayAbilityTargetingLocationType"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTargetingLocationType::Type>()
	{
		return EGameplayAbilityTargetingLocationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayAbilityTargetingLocationType(EGameplayAbilityTargetingLocationType_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayAbilityTargetingLocationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Hash() { return 145037880U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayAbilityTargetingLocationType"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayAbilityTargetingLocationType::LiteralTransform", (int64)EGameplayAbilityTargetingLocationType::LiteralTransform },
				{ "EGameplayAbilityTargetingLocationType::ActorTransform", (int64)EGameplayAbilityTargetingLocationType::ActorTransform },
				{ "EGameplayAbilityTargetingLocationType::SocketTransform", (int64)EGameplayAbilityTargetingLocationType::SocketTransform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActorTransform.Comment", "/** We pull the transform from an associated actor directly */" },
				{ "ActorTransform.DisplayName", "Actor Transform" },
				{ "ActorTransform.Name", "EGameplayAbilityTargetingLocationType::ActorTransform" },
				{ "ActorTransform.ToolTip", "We pull the transform from an associated actor directly" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** What type of location calculation to use when an ability asks for our transform */" },
				{ "LiteralTransform.Comment", "/** We report an actual raw transform. This is also the final fallback if other methods fail */" },
				{ "LiteralTransform.DisplayName", "Literal Transform" },
				{ "LiteralTransform.Name", "EGameplayAbilityTargetingLocationType::LiteralTransform" },
				{ "LiteralTransform.ToolTip", "We report an actual raw transform. This is also the final fallback if other methods fail" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
				{ "SocketTransform.Comment", "/** We aim from a named socket on the player's skeletal mesh component */" },
				{ "SocketTransform.DisplayName", "Socket Transform" },
				{ "SocketTransform.Name", "EGameplayAbilityTargetingLocationType::SocketTransform" },
				{ "SocketTransform.ToolTip", "We aim from a named socket on the player's skeletal mesh component" },
				{ "ToolTip", "What type of location calculation to use when an ability asks for our transform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayAbilityTargetingLocationType",
				"EGameplayAbilityTargetingLocationType::Type",
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
	static UEnum* EGameplayTargetingConfirmation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayTargetingConfirmation"));
		}
		return Singleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTargetingConfirmation::Type>()
	{
		return EGameplayTargetingConfirmation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTargetingConfirmation(EGameplayTargetingConfirmation_StaticEnum, TEXT("/Script/GameplayAbilities"), TEXT("EGameplayTargetingConfirmation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Hash() { return 1140571530U; }
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTargetingConfirmation"), 0, Get_Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTargetingConfirmation::Instant", (int64)EGameplayTargetingConfirmation::Instant },
				{ "EGameplayTargetingConfirmation::UserConfirmed", (int64)EGameplayTargetingConfirmation::UserConfirmed },
				{ "EGameplayTargetingConfirmation::Custom", (int64)EGameplayTargetingConfirmation::Custom },
				{ "EGameplayTargetingConfirmation::CustomMulti", (int64)EGameplayTargetingConfirmation::CustomMulti },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Describes how the targeting information is confirmed */" },
				{ "Custom.Comment", "/** The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors */" },
				{ "Custom.Name", "EGameplayTargetingConfirmation::Custom" },
				{ "Custom.ToolTip", "The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors" },
				{ "CustomMulti.Comment", "/** The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors. Should not destroy upon data production */" },
				{ "CustomMulti.Name", "EGameplayTargetingConfirmation::CustomMulti" },
				{ "CustomMulti.ToolTip", "The GameplayTargeting Ability is responsible for deciding when the targeting data is ready. Not supported by all TargetingActors. Should not destroy upon data production" },
				{ "Instant.Comment", "/** The targeting happens instantly without special logic or user input deciding when to 'fire' */" },
				{ "Instant.Name", "EGameplayTargetingConfirmation::Instant" },
				{ "Instant.ToolTip", "The targeting happens instantly without special logic or user input deciding when to 'fire'" },
				{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
				{ "ToolTip", "Describes how the targeting information is confirmed" },
				{ "UserConfirmed.Comment", "/** The targeting happens when the user confirms the targeting */" },
				{ "UserConfirmed.Name", "EGameplayTargetingConfirmation::UserConfirmed" },
				{ "UserConfirmed.ToolTip", "The targeting happens when the user confirms the targeting" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
				nullptr,
				"EGameplayTargetingConfirmation",
				"EGameplayTargetingConfirmation::Type",
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

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_SingleTargetHit"), sizeof(FGameplayAbilityTargetData_SingleTargetHit), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_SingleTargetHit>()
{
	return FGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit(FGameplayAbilityTargetData_SingleTargetHit::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetData_SingleTargetHit"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_SingleTargetHit
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_SingleTargetHit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetData_SingleTargetHit")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_SingleTargetHit>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_SingleTargetHit;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitReplaced_MetaData[];
#endif
		static void NewProp_bHitReplaced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHitReplaced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with a single hit result, data is packed into the hit result */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with a single hit result, data is packed into the hit result" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_SingleTargetHit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData[] = {
		{ "Comment", "/** Hit result that stores data */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Hit result that stores data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetData_SingleTargetHit, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_SetBit(void* Obj)
	{
		((FGameplayAbilityTargetData_SingleTargetHit*)Obj)->bHitReplaced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced = { "bHitReplaced", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameplayAbilityTargetData_SingleTargetHit), &Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_bHitReplaced,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_SingleTargetHit",
		sizeof(FGameplayAbilityTargetData_SingleTargetHit),
		alignof(FGameplayAbilityTargetData_SingleTargetHit),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetData_SingleTargetHit"), sizeof(FGameplayAbilityTargetData_SingleTargetHit), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Hash() { return 499098014U; }

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_ActorArray>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_ActorArray cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FGameplayAbilityTargetData_ActorArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_ActorArray"), sizeof(FGameplayAbilityTargetData_ActorArray), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_ActorArray>()
{
	return FGameplayAbilityTargetData_ActorArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetData_ActorArray(FGameplayAbilityTargetData_ActorArray::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetData_ActorArray"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_ActorArray
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_ActorArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetData_ActorArray")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_ActorArray>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_ActorArray;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActorArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with a source location and a list of targeted actors, makes sense for AOE attacks */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with a source location and a list of targeted actors, makes sense for AOE attacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_ActorArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** We could be selecting this group of actors from any type of location, so use a generic location type */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "We could be selecting this group of actors from any type of location, so use a generic location type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetData_ActorArray, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_Inner = { "TargetActorArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Rather than targeting a single point, this type of targeting selects multiple actors. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Rather than targeting a single point, this type of targeting selects multiple actors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray = { "TargetActorArray", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetData_ActorArray, TargetActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_SourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::NewProp_TargetActorArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_ActorArray",
		sizeof(FGameplayAbilityTargetData_ActorArray),
		alignof(FGameplayAbilityTargetData_ActorArray),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetData_ActorArray"), sizeof(FGameplayAbilityTargetData_ActorArray), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Hash() { return 2489133754U; }

static_assert(std::is_polymorphic<FGameplayAbilityTargetData_LocationInfo>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityTargetData_LocationInfo cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FGameplayAbilityTargetData_LocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData_LocationInfo"), sizeof(FGameplayAbilityTargetData_LocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData_LocationInfo>()
{
	return FGameplayAbilityTargetData_LocationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo(FGameplayAbilityTargetData_LocationInfo::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetData_LocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_LocationInfo
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_LocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetData_LocationInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_LocationInfo>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData_LocationInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Target data with just a source and target location in space */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Target data with just a source and target location in space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData_LocationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Generic location data for source */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Generic location data for source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetData_LocationInfo, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Generic location data for target */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Generic location data for target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetData_LocationInfo, TargetLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_SourceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::NewProp_TargetLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"GameplayAbilityTargetData_LocationInfo",
		sizeof(FGameplayAbilityTargetData_LocationInfo),
		alignof(FGameplayAbilityTargetData_LocationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetData_LocationInfo"), sizeof(FGameplayAbilityTargetData_LocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Hash() { return 4033768164U; }
class UScriptStruct* FGameplayAbilityTargetingLocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetingLocationInfo"), sizeof(FGameplayAbilityTargetingLocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetingLocationInfo>()
{
	return FGameplayAbilityTargetingLocationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetingLocationInfo(FGameplayAbilityTargetingLocationInfo::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetingLocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetingLocationInfo
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetingLocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetingLocationInfo")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetingLocationInfo>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetingLocationInfo;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiteralTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiteralTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure that stores a location in one of several different formats */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Structure that stores a location in one of several different formats" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetingLocationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Type of location used - will determine what data is transmitted over the network and what fields are used when calculating position. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Type of location used - will determine what data is transmitted over the network and what fields are used when calculating position." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, LocationType), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTargetingLocationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** A literal world transform can be used, if one has been calculated outside of the actor using the ability. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A literal world transform can be used, if one has been calculated outside of the actor using the ability." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform = { "LiteralTransform", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, LiteralTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** A source actor is needed for Actor-based targeting, but not for Socket-based targeting. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A source actor is needed for Actor-based targeting, but not for Socket-based targeting." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Socket-based targeting requires a skeletal mesh component to check for the named socket. */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Socket-based targeting requires a skeletal mesh component to check for the named socket." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x001100000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Ability that will be using the targeting data */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Ability that will be using the targeting data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility = { "SourceAbility", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** If SourceComponent is valid, this is the name of the socket transform that will be used. If no Socket is provided, SourceComponent's transform will be used. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "If SourceComponent is valid, this is the name of the socket transform that will be used. If no Socket is provided, SourceComponent's transform will be used." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName = { "SourceSocketName", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameplayAbilityTargetingLocationInfo, SourceSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_LiteralTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::NewProp_SourceSocketName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetingLocationInfo",
		sizeof(FGameplayAbilityTargetingLocationInfo),
		alignof(FGameplayAbilityTargetingLocationInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetingLocationInfo"), sizeof(FGameplayAbilityTargetingLocationInfo), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Hash() { return 4058568377U; }
class UScriptStruct* FGameplayAbilityTargetDataHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetDataHandle"), sizeof(FGameplayAbilityTargetDataHandle), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetDataHandle>()
{
	return FGameplayAbilityTargetDataHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetDataHandle(FGameplayAbilityTargetDataHandle::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetDataHandle"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetDataHandle
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetDataHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetDataHandle")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetDataHandle>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetDataHandle;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Handle for Targeting Data. This servers two main purposes:\n*\x09\x09-Avoid us having to copy around the full targeting data structure in Blueprints\n*\x09\x09-Allows us to leverage polymorphism in the target data structure\n*\x09\x09-Allows us to implement NetSerialize and replicate by value between clients/server\n*\n*\x09\x09-Avoid using UObjects could be used to give us polymorphism and by reference passing in blueprints.\n*\x09\x09-However we would still be screwed when it came to replication\n*\n*\x09\x09-Replication by value\n*\x09\x09-Pass by reference in blueprints\n*\x09\x09-Polymophism in TargetData structure\n*/" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "Handle for Targeting Data. This servers two main purposes:\n        -Avoid us having to copy around the full targeting data structure in Blueprints\n        -Allows us to leverage polymorphism in the target data structure\n        -Allows us to implement NetSerialize and replicate by value between clients/server\n\n        -Avoid using UObjects could be used to give us polymorphism and by reference passing in blueprints.\n        -However we would still be screwed when it came to replication\n\n        -Replication by value\n        -Pass by reference in blueprints\n        -Polymophism in TargetData structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetDataHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetDataHandle",
		sizeof(FGameplayAbilityTargetDataHandle),
		alignof(FGameplayAbilityTargetDataHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetDataHandle"), sizeof(FGameplayAbilityTargetDataHandle), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Hash() { return 1710757689U; }
class UScriptStruct* FGameplayAbilityTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYABILITIES_API uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityTargetData, Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilityTargetData"), sizeof(FGameplayAbilityTargetData), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilityTargetData>()
{
	return FGameplayAbilityTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayAbilityTargetData(FGameplayAbilityTargetData::StaticStruct, TEXT("/Script/GameplayAbilities"), TEXT("GameplayAbilityTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData
{
	FScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayAbilityTargetData")),new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData>);
	}
} ScriptStruct_GameplayAbilities_StaticRegisterNativesFGameplayAbilityTargetData;
	struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A generic structure for targeting data. We want generic functions to produce this data and other generic\n *\x09""functions to consume this data.\n *\n *\x09We expect this to be able to hold specific actors/object reference and also generic location/direction/origin\n *\x09information.\n *\n *\x09Some example producers:\n *\x09\x09-Overlap/Hit collision event generates TargetData about who was hit in a melee attack\n *\x09\x09-A mouse input causes a hit trace and the actor infront of the crosshair is turned into TargetData\n *\x09\x09-A mouse input causes TargetData to be generated from the owner's crosshair view origin/direction\n *\x09\x09-An AOE/aura pulses and all actors in a radius around the instigator are added to TargetData\n *\x09\x09-Panzer Dragoon style 'painting' targeting mode\n *\x09\x09-MMORPG style ground AOE targeting style (potentially both a location on the ground and actors that were targeted)\n *\n *\x09Some example consumers:\n *\x09\x09-Apply a GameplayEffect to all actors in TargetData\n *\x09\x09-Find closest actor from all in TargetData\n *\x09\x09-Call some function on all actors in TargetData\n * \x09\x09-Filter or merge TargetDatas\n *\x09\x09-Spawn a new actor at a TargetData location\n *\n *\x09Maybe it is better to distinguish between actor list targeting vs positional targeting data?\n *\x09\x09-AOE/aura type of targeting data blurs the line\n */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetTypes.h" },
		{ "ToolTip", "A generic structure for targeting data. We want generic functions to produce this data and other generic\nfunctions to consume this data.\n\nWe expect this to be able to hold specific actors/object reference and also generic location/direction/origin\ninformation.\n\nSome example producers:\n        -Overlap/Hit collision event generates TargetData about who was hit in a melee attack\n        -A mouse input causes a hit trace and the actor infront of the crosshair is turned into TargetData\n        -A mouse input causes TargetData to be generated from the owner's crosshair view origin/direction\n        -An AOE/aura pulses and all actors in a radius around the instigator are added to TargetData\n        -Panzer Dragoon style 'painting' targeting mode\n        -MMORPG style ground AOE targeting style (potentially both a location on the ground and actors that were targeted)\n\nSome example consumers:\n        -Apply a GameplayEffect to all actors in TargetData\n        -Find closest actor from all in TargetData\n        -Call some function on all actors in TargetData\n        -Filter or merge TargetDatas\n        -Spawn a new actor at a TargetData location\n\nMaybe it is better to distinguish between actor list targeting vs positional targeting data?\n        -AOE/aura type of targeting data blurs the line" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilityTargetData",
		sizeof(FGameplayAbilityTargetData),
		alignof(FGameplayAbilityTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayAbilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayAbilityTargetData"), sizeof(FGameplayAbilityTargetData), Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Hash() { return 2979054662U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
