// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameEngine_generated_h
#error "GameEngine.generated.h already included, missing '#pragma once' in GameEngine.h"
#endif
#define ENGINE_GameEngine_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEngine(); \
	friend struct Z_Construct_UClass_UGameEngine_Statics; \
public: \
	DECLARE_CLASS(UGameEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGameEngine(); \
	friend struct Z_Construct_UClass_UGameEngine_Statics; \
public: \
	DECLARE_CLASS(UGameEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEngine(UGameEngine&&); \
	NO_API UGameEngine(const UGameEngine&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEngine(UGameEngine&&); \
	NO_API UGameEngine(const UGameEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEngine)


#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameEngine."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
