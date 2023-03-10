// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
#ifdef ENGINE_GameInstance_generated_h
#error "GameInstance.generated.h already included, missing '#pragma once' in GameInstance.h"
#endif
#define ENGINE_GameInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_59_DELEGATE \
struct _Script_Engine_eventOnPawnControllerChanged_Parms \
{ \
	APawn* Pawn; \
	AController* Controller; \
}; \
static inline void FOnPawnControllerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnControllerChanged, APawn* Pawn, AController* Controller) \
{ \
	_Script_Engine_eventOnPawnControllerChanged_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.Controller=Controller; \
	OnPawnControllerChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugRemovePlayer); \
	DECLARE_FUNCTION(execDebugCreatePlayer);


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_EVENT_PARMS \
	struct GameInstance_eventHandleNetworkError_Parms \
	{ \
		TEnumAsByte<ENetworkFailure::Type> FailureType; \
		bool bIsServer; \
	}; \
	struct GameInstance_eventHandleTravelError_Parms \
	{ \
		TEnumAsByte<ETravelFailure::Type> FailureType; \
	};


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct Z_Construct_UClass_UGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstance(); \
	friend struct Z_Construct_UClass_UGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGameInstance, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstance(UGameInstance&&); \
	NO_API UGameInstance(const UGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstance)


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalPlayers() { return STRUCT_OFFSET(UGameInstance, LocalPlayers); } \
	FORCEINLINE static uint32 __PPO__OnlineSession() { return STRUCT_OFFSET(UGameInstance, OnlineSession); } \
	FORCEINLINE static uint32 __PPO__ReferencedObjects() { return STRUCT_OFFSET(UGameInstance, ReferencedObjects); } \
	FORCEINLINE static uint32 __PPO__OnPawnControllerChangedDelegates() { return STRUCT_OFFSET(UGameInstance, OnPawnControllerChangedDelegates); }


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_149_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_152_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
