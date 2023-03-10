// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSet_generated_h
#error "AnimSet.generated.h already included, missing '#pragma once' in AnimSet.h"
#endif
#define ENGINE_AnimSet_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSetMeshLinkup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSetMeshLinkup>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSet(); \
	friend struct Z_Construct_UClass_UAnimSet_Statics; \
public: \
	DECLARE_CLASS(UAnimSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSet)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSet(); \
	friend struct Z_Construct_UClass_UAnimSet_Statics; \
public: \
	DECLARE_CLASS(UAnimSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimSet)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimSet(UAnimSet&&); \
	ENGINE_API UAnimSet(const UAnimSet&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimSet(UAnimSet&&); \
	ENGINE_API UAnimSet(const UAnimSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimSet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSet)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LinkupCache() { return STRUCT_OFFSET(UAnimSet, LinkupCache); } \
	FORCEINLINE static uint32 __PPO__BoneUseAnimTranslation() { return STRUCT_OFFSET(UAnimSet, BoneUseAnimTranslation); } \
	FORCEINLINE static uint32 __PPO__ForceUseMeshTranslation() { return STRUCT_OFFSET(UAnimSet, ForceUseMeshTranslation); } \
	FORCEINLINE static uint32 __PPO__UseTranslationBoneNames() { return STRUCT_OFFSET(UAnimSet, UseTranslationBoneNames); } \
	FORCEINLINE static uint32 __PPO__ForceMeshTranslationBoneNames() { return STRUCT_OFFSET(UAnimSet, ForceMeshTranslationBoneNames); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_40_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
