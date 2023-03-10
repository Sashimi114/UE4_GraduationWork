// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlanarReflection_generated_h
#error "PlanarReflection.generated.h already included, missing '#pragma once' in PlanarReflection.h"
#endif
#define ENGINE_PlanarReflection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInterpToggle);


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInterpToggle);


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanarReflection(); \
	friend struct Z_Construct_UClass_APlanarReflection_Statics; \
public: \
	DECLARE_CLASS(APlanarReflection, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlanarReflection)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlanarReflection(); \
	friend struct Z_Construct_UClass_APlanarReflection_Statics; \
public: \
	DECLARE_CLASS(APlanarReflection, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APlanarReflection)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlanarReflection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanarReflection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlanarReflection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanarReflection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APlanarReflection(APlanarReflection&&); \
	ENGINE_API APlanarReflection(const APlanarReflection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APlanarReflection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APlanarReflection(APlanarReflection&&); \
	ENGINE_API APlanarReflection(const APlanarReflection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APlanarReflection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanarReflection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanarReflection)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlanarReflectionComponent() { return STRUCT_OFFSET(APlanarReflection, PlanarReflectionComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlanarReflection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlanarReflection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PlanarReflection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
