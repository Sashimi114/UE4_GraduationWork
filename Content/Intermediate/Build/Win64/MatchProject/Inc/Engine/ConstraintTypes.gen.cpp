// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintBaseParams();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
// End Cross Module References

static_assert(std::is_polymorphic<FTwistConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FTwistConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");

class UScriptStruct* FTwistConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTwistConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwistConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("TwistConstraint"), sizeof(FTwistConstraint), Get_Z_Construct_UScriptStruct_FTwistConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTwistConstraint>()
{
	return FTwistConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTwistConstraint(FTwistConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("TwistConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTwistConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFTwistConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TwistConstraint")),new UScriptStruct::TCppStructOps<FTwistConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTwistConstraint;
	struct Z_Construct_UScriptStruct_FTwistConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistMotion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwistConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Angular roll constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angular roll constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwistConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Symmetric angle of roll along the X-axis. */" },
		{ "DisplayName", "Twist Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Symmetric angle of roll along the X-axis." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees = { "TwistLimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTwistConstraint, TwistLimitDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Swing1 limit is used.*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Swing1 limit is used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion = { "TwistMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTwistConstraint, TwistMotion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistLimitDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwistConstraint_Statics::NewProp_TwistMotion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwistConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FConstraintBaseParams,
		&NewStructOps,
		"TwistConstraint",
		sizeof(FTwistConstraint),
		alignof(FTwistConstraint),
		Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwistConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTwistConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TwistConstraint"), sizeof(FTwistConstraint), Get_Z_Construct_UScriptStruct_FTwistConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTwistConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTwistConstraint_Hash() { return 1760351776U; }

static_assert(std::is_polymorphic<FConeConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FConeConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");

class UScriptStruct* FConeConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConeConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConeConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("ConeConstraint"), sizeof(FConeConstraint), Get_Z_Construct_UScriptStruct_FConeConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConeConstraint>()
{
	return FConeConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConeConstraint(FConeConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("ConeConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConeConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFConeConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConeConstraint")),new UScriptStruct::TCppStructOps<FConeConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConeConstraint;
	struct Z_Construct_UScriptStruct_FConeConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing1Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Swing1Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing2Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Swing2Motion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConeConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Cone constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Cone constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConeConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConeConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Angle of movement along the XY plane. This defines the first symmetric angle of the cone. */" },
		{ "DisplayName", "Swing 1 Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angle of movement along the XY plane. This defines the first symmetric angle of the cone." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees = { "Swing1LimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConeConstraint, Swing1LimitDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Angle of movement along the XZ plane. This defines the second symmetric angle of the cone. */" },
		{ "DisplayName", "Swing 2 Limit" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Angle of movement along the XZ plane. This defines the second symmetric angle of the cone." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees = { "Swing2LimitDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConeConstraint, Swing2LimitDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Swing1 limit is used.*/" },
		{ "DisplayName", "Swing 1 Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Swing1 limit is used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion = { "Swing1Motion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConeConstraint, Swing1Motion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Indicates whether the Swing2 limit is used.*/" },
		{ "DisplayName", "Swing 2 Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates whether the Swing2 limit is used." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion = { "Swing2Motion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConeConstraint, Swing2Motion), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1LimitDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2LimitDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing1Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConeConstraint_Statics::NewProp_Swing2Motion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConeConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FConstraintBaseParams,
		&NewStructOps,
		"ConeConstraint",
		sizeof(FConeConstraint),
		alignof(FConeConstraint),
		Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConeConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConeConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConeConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConeConstraint"), sizeof(FConeConstraint), Get_Z_Construct_UScriptStruct_FConeConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConeConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConeConstraint_Hash() { return 830381276U; }

static_assert(std::is_polymorphic<FLinearConstraint>() == std::is_polymorphic<FConstraintBaseParams>(), "USTRUCT FLinearConstraint cannot be polymorphic unless super FConstraintBaseParams is polymorphic");

class UScriptStruct* FLinearConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLinearConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearConstraint, Z_Construct_UPackage__Script_Engine(), TEXT("LinearConstraint"), sizeof(FLinearConstraint), Get_Z_Construct_UScriptStruct_FLinearConstraint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLinearConstraint>()
{
	return FLinearConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinearConstraint(FLinearConstraint::StaticStruct, TEXT("/Script/Engine"), TEXT("LinearConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLinearConstraint
{
	FScriptStruct_Engine_StaticRegisterNativesFLinearConstraint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LinearConstraint")),new UScriptStruct::TCppStructOps<FLinearConstraint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLinearConstraint;
	struct Z_Construct_UScriptStruct_FLinearConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_XMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_YMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZMotion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Distance constraint */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Distance constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The distance allowed between between the two joint reference frames. Distance applies on all axes enabled (one axis means line, two axes implies circle, three axes implies sphere) */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "The distance allowed between between the two joint reference frames. Distance applies on all axes enabled (one axis means line, two axes implies circle, three axes implies sphere)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearConstraint, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along the X-axis. Free implies no constraint at all. Locked implies no movement along X is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "X Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along the X-axis. Free implies no constraint at all. Locked implies no movement along X is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion = { "XMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearConstraint, XMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along the Y-axis. Free implies no constraint at all. Locked implies no movement along Y is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "Y Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along the Y-axis. Free implies no constraint at all. Locked implies no movement along Y is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion = { "YMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearConstraint, YMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Indicates the linear constraint applied along theZX-axis. Free implies no constraint at all. Locked implies no movement along Z is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided. */" },
		{ "DisplayName", "Z Motion" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Indicates the linear constraint applied along theZX-axis. Free implies no constraint at all. Locked implies no movement along Z is allowed. Limited implies the distance in the joint along all active axes must be less than the Distance provided." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion = { "ZMotion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinearConstraint, ZMotion), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_XMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_YMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearConstraint_Statics::NewProp_ZMotion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinearConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FConstraintBaseParams,
		&NewStructOps,
		"LinearConstraint",
		sizeof(FLinearConstraint),
		alignof(FLinearConstraint),
		Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinearConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinearConstraint"), sizeof(FLinearConstraint), Get_Z_Construct_UScriptStruct_FLinearConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLinearConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinearConstraint_Hash() { return 2122989787U; }
class UScriptStruct* FConstraintBaseParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConstraintBaseParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintBaseParams, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintBaseParams"), sizeof(FConstraintBaseParams), Get_Z_Construct_UScriptStruct_FConstraintBaseParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintBaseParams>()
{
	return FConstraintBaseParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConstraintBaseParams(FConstraintBaseParams::StaticStruct, TEXT("/Script/Engine"), TEXT("ConstraintBaseParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConstraintBaseParams
{
	FScriptStruct_Engine_StaticRegisterNativesFConstraintBaseParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConstraintBaseParams")),new UScriptStruct::TCppStructOps<FConstraintBaseParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConstraintBaseParams;
	struct Z_Construct_UScriptStruct_FConstraintBaseParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Restitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftConstraint_MetaData[];
#endif
		static void NewProp_bSoftConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftConstraint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintBaseParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Stiffness of the soft constraint. Only used when Soft Constraint is on. */" },
		{ "editcondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Stiffness of the soft constraint. Only used when Soft Constraint is on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBaseParams, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Damping of the soft constraint. Only used when Soft Constraint is on. */" },
		{ "editcondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Damping of the soft constraint. Only used when Soft Constraint is on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBaseParams, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Controls the amount of bounce when the constraint is violated. A restitution value of 1 will bounce back with the same velocity the limit was hit. A value of 0 will stop dead." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBaseParams, Restitution), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Determines how close to the limit we have to get before turning the joint on. Larger value will be more expensive, but will do a better job not violating constraints. A smaller value will be more efficient, but easier to violate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance = { "ContactDistance", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintBaseParams, ContactDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Whether we want to use a soft constraint (spring). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintTypes.h" },
		{ "ToolTip", "Whether we want to use a soft constraint (spring)." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_SetBit(void* Obj)
	{
		((FConstraintBaseParams*)Obj)->bSoftConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint = { "bSoftConstraint", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintBaseParams), &Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_Restitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_ContactDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::NewProp_bSoftConstraint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintBaseParams",
		sizeof(FConstraintBaseParams),
		alignof(FConstraintBaseParams),
		Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintBaseParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConstraintBaseParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConstraintBaseParams"), sizeof(FConstraintBaseParams), Get_Z_Construct_UScriptStruct_FConstraintBaseParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConstraintBaseParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConstraintBaseParams_Hash() { return 2838989328U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
