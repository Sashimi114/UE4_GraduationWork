// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayCueParameters;
#ifdef GAMEPLAYABILITIES_GameplayCueInterface_generated_h
#error "GameplayCueInterface.generated.h already included, missing '#pragma once' in GameplayCueInterface.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueInterface_generated_h

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMinimalGameplayCueReplicationProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(FMinimalGameplayCueReplicationProxy, Owner); }


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FMinimalGameplayCueReplicationProxy>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCueTag_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayCueTag>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGameplayCueContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(FActiveGameplayCueContainer, Owner); } \
	typedef FFastArraySerializer Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FActiveGameplayCueContainer>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGameplayCue_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FActiveGameplayCue>();

#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_SPARSE_DATA
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForwardGameplayCueToParent);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForwardGameplayCueToParent);


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_EVENT_PARMS \
	struct GameplayCueInterface_eventBlueprintCustomHandler_Parms \
	{ \
		TEnumAsByte<EGameplayCueEvent::Type> EventType; \
		FGameplayCueParameters Parameters; \
	};


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(UGameplayCueInterface&&); \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const UGameplayCueInterface&); \
public:


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYABILITIES_API UGameplayCueInterface(UGameplayCueInterface&&); \
	GAMEPLAYABILITIES_API UGameplayCueInterface(const UGameplayCueInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueInterface)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayCueInterface(); \
	friend struct Z_Construct_UClass_UGameplayCueInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayCueInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), GAMEPLAYABILITIES_API) \
	DECLARE_SERIALIZER(UGameplayCueInterface)


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayCueInterface() {} \
public: \
	typedef UGameplayCueInterface UClassType; \
	typedef IGameplayCueInterface ThisClass; \
	static void Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters Parameters); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayCueInterface() {} \
public: \
	typedef UGameplayCueInterface UClassType; \
	typedef IGameplayCueInterface ThisClass; \
	static void Execute_BlueprintCustomHandler(UObject* O, EGameplayCueEvent::Type EventType, FGameplayCueParameters Parameters); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_16_PROLOG \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_EVENT_PARMS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_SPARSE_DATA \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayCueInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
