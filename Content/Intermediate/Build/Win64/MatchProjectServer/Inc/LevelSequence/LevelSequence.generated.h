// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef LEVELSEQUENCE_LevelSequence_generated_h
#error "LevelSequence.generated.h already included, missing '#pragma once' in LevelSequence.h"
#endif
#define LEVELSEQUENCE_LevelSequence_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveMetaDataByClass); \
	DECLARE_FUNCTION(execCopyMetaData); \
	DECLARE_FUNCTION(execFindOrAddMetaDataByClass); \
	DECLARE_FUNCTION(execFindMetaDataByClass);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveMetaDataByClass); \
	DECLARE_FUNCTION(execCopyMetaData); \
	DECLARE_FUNCTION(execFindOrAddMetaDataByClass); \
	DECLARE_FUNCTION(execFindMetaDataByClass);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequence(); \
	friend struct Z_Construct_UClass_ULevelSequence_Statics; \
public: \
	DECLARE_CLASS(ULevelSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequence) \
	virtual UObject* _getUObject() const override { return const_cast<ULevelSequence*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequence(); \
	friend struct Z_Construct_UClass_ULevelSequence_Statics; \
public: \
	DECLARE_CLASS(ULevelSequence, UMovieSceneSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequence) \
	virtual UObject* _getUObject() const override { return const_cast<ULevelSequence*>(this); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequence(ULevelSequence&&); \
	NO_API ULevelSequence(const ULevelSequence&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequence(ULevelSequence&&); \
	NO_API ULevelSequence(const ULevelSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequence); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequence)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectReferences() { return STRUCT_OFFSET(ULevelSequence, ObjectReferences); } \
	FORCEINLINE static uint32 __PPO__BindingReferences() { return STRUCT_OFFSET(ULevelSequence, BindingReferences); } \
	FORCEINLINE static uint32 __PPO__PossessedObjects_DEPRECATED() { return STRUCT_OFFSET(ULevelSequence, PossessedObjects_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DirectorClass() { return STRUCT_OFFSET(ULevelSequence, DirectorClass); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(ULevelSequence, AssetUserData); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_23_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
