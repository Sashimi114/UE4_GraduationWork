// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerBox_generated_h
#error "TriggerBox.generated.h already included, missing '#pragma once' in TriggerBox.h"
#endif
#define ENGINE_TriggerBox_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBox(); \
	friend struct Z_Construct_UClass_ATriggerBox_Statics; \
public: \
	DECLARE_CLASS(ATriggerBox, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerBox)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerBox(); \
	friend struct Z_Construct_UClass_ATriggerBox_Statics; \
public: \
	DECLARE_CLASS(ATriggerBox, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerBox)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerBox(ATriggerBox&&); \
	NO_API ATriggerBox(const ATriggerBox&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerBox(ATriggerBox&&); \
	NO_API ATriggerBox(const ATriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBox)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
