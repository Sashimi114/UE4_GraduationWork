// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBranchingPointNotifyPayload;
class UAnimMontage;
class USkeletalMeshComponent;
class UPlayMontageCallbackProxy;
#ifdef ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h
#error "PlayMontageCallbackProxy.generated.h already included, missing '#pragma once' in PlayMontageCallbackProxy.h"
#endif
#define ANIMGRAPHRUNTIME_PlayMontageCallbackProxy_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_11_DELEGATE \
struct _Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms \
{ \
	FName NotifyName; \
}; \
static inline void FOnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMontagePlayDelegate, FName NotifyName) \
{ \
	_Script_AnimGraphRuntime_eventOnMontagePlayDelegate_Parms Parms; \
	Parms.NotifyName=NotifyName; \
	OnMontagePlayDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_SPARSE_DATA
#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage);


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage);


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UPlayMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UPlayMontageCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(UPlayMontageCallbackProxy&&); \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const UPlayMontageCallbackProxy&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(UPlayMontageCallbackProxy&&); \
	ANIMGRAPHRUNTIME_API UPlayMontageCallbackProxy(const UPlayMontageCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UPlayMontageCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMontageCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMontageCallbackProxy)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_13_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayMontageCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UPlayMontageCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_PlayMontageCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
