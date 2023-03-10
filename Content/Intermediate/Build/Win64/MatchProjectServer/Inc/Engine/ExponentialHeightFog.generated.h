// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExponentialHeightFog_generated_h
#error "ExponentialHeightFog.generated.h already included, missing '#pragma once' in ExponentialHeightFog.h"
#endif
#define ENGINE_ExponentialHeightFog_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExponentialHeightFog(); \
	friend struct Z_Construct_UClass_AExponentialHeightFog_Statics; \
public: \
	DECLARE_CLASS(AExponentialHeightFog, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AExponentialHeightFog) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAExponentialHeightFog(); \
	friend struct Z_Construct_UClass_AExponentialHeightFog_Statics; \
public: \
	DECLARE_CLASS(AExponentialHeightFog, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AExponentialHeightFog) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AExponentialHeightFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExponentialHeightFog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AExponentialHeightFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExponentialHeightFog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AExponentialHeightFog(AExponentialHeightFog&&); \
	ENGINE_API AExponentialHeightFog(const AExponentialHeightFog&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AExponentialHeightFog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AExponentialHeightFog(AExponentialHeightFog&&); \
	ENGINE_API AExponentialHeightFog(const AExponentialHeightFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AExponentialHeightFog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExponentialHeightFog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExponentialHeightFog)


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Component() { return STRUCT_OFFSET(AExponentialHeightFog, Component); }


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ExponentialHeightFog."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AExponentialHeightFog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ExponentialHeightFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
