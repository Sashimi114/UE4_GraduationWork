// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavigationPath;
struct FLinearColor;
#ifdef NAVIGATIONSYSTEM_NavigationPath_generated_h
#error "NavigationPath.generated.h already included, missing '#pragma once' in NavigationPath.h"
#endif
#define NAVIGATIONSYSTEM_NavigationPath_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_15_DELEGATE \
struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms \
{ \
	UNavigationPath* AffectedPath; \
	TEnumAsByte<ENavPathEvent::Type> PathEvent; \
}; \
static inline void FOnNavigationPathUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnNavigationPathUpdated, UNavigationPath* AffectedPath, ENavPathEvent::Type PathEvent) \
{ \
	_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms Parms; \
	Parms.AffectedPath=AffectedPath; \
	Parms.PathEvent=PathEvent; \
	OnNavigationPathUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_SPARSE_DATA
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsStringPulled); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsPartial); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execEnableRecalculationOnInvalidation); \
	DECLARE_FUNCTION(execEnableDebugDrawing); \
	DECLARE_FUNCTION(execGetDebugString);


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsStringPulled); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execIsPartial); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execEnableRecalculationOnInvalidation); \
	DECLARE_FUNCTION(execEnableDebugDrawing); \
	DECLARE_FUNCTION(execGetDebugString);


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationPath(); \
	friend struct Z_Construct_UClass_UNavigationPath_Statics; \
public: \
	DECLARE_CLASS(UNavigationPath, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationPath)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationPath(); \
	friend struct Z_Construct_UClass_UNavigationPath_Statics; \
public: \
	DECLARE_CLASS(UNavigationPath, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationPath)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationPath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationPath(UNavigationPath&&); \
	NO_API UNavigationPath(const UNavigationPath&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationPath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationPath(UNavigationPath&&); \
	NO_API UNavigationPath(const UNavigationPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationPath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationPath)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_21_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationPath."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationPath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
