// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundConcurrency_generated_h
#error "SoundConcurrency.generated.h already included, missing '#pragma once' in SoundConcurrency.h"
#endif
#define ENGINE_SoundConcurrency_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundConcurrencySettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__VolumeScale() { return STRUCT_OFFSET(FSoundConcurrencySettings, VolumeScale); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundConcurrencySettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundConcurrency(); \
	friend struct Z_Construct_UClass_USoundConcurrency_Statics; \
public: \
	DECLARE_CLASS(USoundConcurrency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundConcurrency)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_INCLASS \
private: \
	static void StaticRegisterNativesUSoundConcurrency(); \
	friend struct Z_Construct_UClass_USoundConcurrency_Statics; \
public: \
	DECLARE_CLASS(USoundConcurrency, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundConcurrency)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundConcurrency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundConcurrency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundConcurrency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundConcurrency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundConcurrency(USoundConcurrency&&); \
	ENGINE_API USoundConcurrency(const USoundConcurrency&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundConcurrency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundConcurrency(USoundConcurrency&&); \
	ENGINE_API USoundConcurrency(const USoundConcurrency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundConcurrency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundConcurrency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundConcurrency)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_157_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h_160_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundConcurrency."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundConcurrency>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundConcurrency_h


#define FOREACH_ENUM_ECONCURRENCYVOLUMESCALEMODE(op) \
	op(EConcurrencyVolumeScaleMode::Default) \
	op(EConcurrencyVolumeScaleMode::Distance) \
	op(EConcurrencyVolumeScaleMode::Priority) 

enum class EConcurrencyVolumeScaleMode;
template<> ENGINE_API UEnum* StaticEnum<EConcurrencyVolumeScaleMode>();

#define FOREACH_ENUM_EMAXCONCURRENTRESOLUTIONRULE(op) \
	op(EMaxConcurrentResolutionRule::PreventNew) \
	op(EMaxConcurrentResolutionRule::StopOldest) \
	op(EMaxConcurrentResolutionRule::StopFarthestThenPreventNew) \
	op(EMaxConcurrentResolutionRule::StopFarthestThenOldest) \
	op(EMaxConcurrentResolutionRule::StopLowestPriority) \
	op(EMaxConcurrentResolutionRule::StopQuietest) \
	op(EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew) \
	op(EMaxConcurrentResolutionRule::Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
