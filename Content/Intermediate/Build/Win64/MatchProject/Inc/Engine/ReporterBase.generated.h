// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReporterBase_generated_h
#error "ReporterBase.generated.h already included, missing '#pragma once' in ReporterBase.h"
#endif
#define ENGINE_ReporterBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReporterBase(); \
	friend struct Z_Construct_UClass_UReporterBase_Statics; \
public: \
	DECLARE_CLASS(UReporterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReporterBase)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUReporterBase(); \
	friend struct Z_Construct_UClass_UReporterBase_Statics; \
public: \
	DECLARE_CLASS(UReporterBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReporterBase)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReporterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReporterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReporterBase(UReporterBase&&); \
	NO_API UReporterBase(const UReporterBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReporterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReporterBase(UReporterBase&&); \
	NO_API UReporterBase(const UReporterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReporterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterBase)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReporterBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReporterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Debug_ReporterBase_h


#define FOREACH_ENUM_EREPORTERLINESTYLE(op) \
	op(EReporterLineStyle::Line) \
	op(EReporterLineStyle::Dash) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
