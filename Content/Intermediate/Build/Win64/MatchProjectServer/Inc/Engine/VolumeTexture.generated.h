// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VolumeTexture_generated_h
#error "VolumeTexture.generated.h already included, missing '#pragma once' in VolumeTexture.h"
#endif
#define ENGINE_VolumeTexture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeTexture(); \
	friend struct Z_Construct_UClass_UVolumeTexture_Statics; \
public: \
	DECLARE_CLASS(UVolumeTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumeTexture) \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTexture(); \
	friend struct Z_Construct_UClass_UVolumeTexture_Statics; \
public: \
	DECLARE_CLASS(UVolumeTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumeTexture) \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumeTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumeTexture(UVolumeTexture&&); \
	ENGINE_API UVolumeTexture(const UVolumeTexture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumeTexture(UVolumeTexture&&); \
	ENGINE_API UVolumeTexture(const UVolumeTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumeTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTexture)


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VolumeTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVolumeTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
