// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WindDirectionalSource_generated_h
#error "WindDirectionalSource.generated.h already included, missing '#pragma once' in WindDirectionalSource.h"
#endif
#define ENGINE_WindDirectionalSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindDirectionalSource(); \
	friend struct Z_Construct_UClass_AWindDirectionalSource_Statics; \
public: \
	DECLARE_CLASS(AWindDirectionalSource, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWindDirectionalSource)


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWindDirectionalSource(); \
	friend struct Z_Construct_UClass_AWindDirectionalSource_Statics; \
public: \
	DECLARE_CLASS(AWindDirectionalSource, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWindDirectionalSource)


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWindDirectionalSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindDirectionalSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindDirectionalSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindDirectionalSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindDirectionalSource(AWindDirectionalSource&&); \
	NO_API AWindDirectionalSource(const AWindDirectionalSource&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWindDirectionalSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindDirectionalSource(AWindDirectionalSource&&); \
	NO_API AWindDirectionalSource(const AWindDirectionalSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindDirectionalSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindDirectionalSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindDirectionalSource)


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Component() { return STRUCT_OFFSET(AWindDirectionalSource, Component); }


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindDirectionalSource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWindDirectionalSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_WindDirectionalSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
