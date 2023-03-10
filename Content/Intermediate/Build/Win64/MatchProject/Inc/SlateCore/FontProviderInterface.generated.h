// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_FontProviderInterface_generated_h
#error "FontProviderInterface.generated.h already included, missing '#pragma once' in FontProviderInterface.h"
#endif
#define SLATECORE_FontProviderInterface_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_SPARSE_DATA
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontProviderInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLATECORE_API UFontProviderInterface(UFontProviderInterface&&); \
	SLATECORE_API UFontProviderInterface(const UFontProviderInterface&); \
public:


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATECORE_API UFontProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLATECORE_API UFontProviderInterface(UFontProviderInterface&&); \
	SLATECORE_API UFontProviderInterface(const UFontProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATECORE_API, UFontProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontProviderInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontProviderInterface)


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFontProviderInterface(); \
	friend struct Z_Construct_UClass_UFontProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UFontProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlateCore"), SLATECORE_API) \
	DECLARE_SERIALIZER(UFontProviderInterface)


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFontProviderInterface() {} \
public: \
	typedef UFontProviderInterface UClassType; \
	typedef IFontProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IFontProviderInterface() {} \
public: \
	typedef UFontProviderInterface UClassType; \
	typedef IFontProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_12_PROLOG
#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_SPARSE_DATA \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_SPARSE_DATA \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATECORE_API UClass* StaticClass<class UFontProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_FontProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
