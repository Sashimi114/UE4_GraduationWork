// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_UserDefinedEnum_generated_h
#error "UserDefinedEnum.generated.h already included, missing '#pragma once' in UserDefinedEnum.h"
#endif
#define ENGINE_UserDefinedEnum_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedEnum, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedEnum(); \
	friend struct Z_Construct_UClass_UUserDefinedEnum_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedEnum) \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedEnum(); \
	friend struct Z_Construct_UClass_UUserDefinedEnum_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedEnum) \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedEnum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedEnum(UUserDefinedEnum&&); \
	NO_API UUserDefinedEnum(const UUserDefinedEnum&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedEnum(UUserDefinedEnum&&); \
	NO_API UUserDefinedEnum(const UUserDefinedEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedEnum)


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UserDefinedEnum."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UUserDefinedEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_UserDefinedEnum_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
