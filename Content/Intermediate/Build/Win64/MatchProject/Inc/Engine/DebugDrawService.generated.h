// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DebugDrawService_generated_h
#error "DebugDrawService.generated.h already included, missing '#pragma once' in DebugDrawService.h"
#endif
#define ENGINE_DebugDrawService_generated_h

#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDebugDrawService(); \
	friend struct Z_Construct_UClass_UDebugDrawService_Statics; \
public: \
	DECLARE_CLASS(UDebugDrawService, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDebugDrawService) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDebugDrawService(); \
	friend struct Z_Construct_UClass_UDebugDrawService_Statics; \
public: \
	DECLARE_CLASS(UDebugDrawService, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDebugDrawService) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugDrawService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugDrawService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugDrawService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugDrawService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugDrawService(UDebugDrawService&&); \
	NO_API UDebugDrawService(const UDebugDrawService&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDebugDrawService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDebugDrawService(UDebugDrawService&&); \
	NO_API UDebugDrawService(const UDebugDrawService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDebugDrawService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDebugDrawService); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDebugDrawService)


#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DebugDrawService."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDebugDrawService>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Debug_DebugDrawService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
