// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATCHPROJECT_MatchProjectCharacter_generated_h
#error "MatchProjectCharacter.generated.h already included, missing '#pragma once' in MatchProjectCharacter.h"
#endif
#define MATCHPROJECT_MatchProjectCharacter_generated_h

#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_SPARSE_DATA
#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_RPC_WRAPPERS
#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMatchProjectCharacter(); \
	friend struct Z_Construct_UClass_AMatchProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMatchProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MatchProject"), NO_API) \
	DECLARE_SERIALIZER(AMatchProjectCharacter)


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMatchProjectCharacter(); \
	friend struct Z_Construct_UClass_AMatchProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMatchProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MatchProject"), NO_API) \
	DECLARE_SERIALIZER(AMatchProjectCharacter)


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMatchProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMatchProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatchProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatchProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatchProjectCharacter(AMatchProjectCharacter&&); \
	NO_API AMatchProjectCharacter(const AMatchProjectCharacter&); \
public:


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMatchProjectCharacter(AMatchProjectCharacter&&); \
	NO_API AMatchProjectCharacter(const AMatchProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMatchProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMatchProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMatchProjectCharacter)


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMatchProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMatchProjectCharacter, FollowCamera); }


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_9_PROLOG
#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_SPARSE_DATA \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_RPC_WRAPPERS \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_INCLASS \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_SPARSE_DATA \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MatchProject_Source_MatchProject_MatchProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATCHPROJECT_API UClass* StaticClass<class AMatchProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MatchProject_Source_MatchProject_MatchProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
