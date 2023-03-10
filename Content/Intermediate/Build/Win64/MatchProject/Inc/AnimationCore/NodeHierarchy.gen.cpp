// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/NodeHierarchy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeHierarchy() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FNodeHierarchyWithUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeHierarchyWithUserData>()
{
	return FNodeHierarchyWithUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyWithUserData(FNodeHierarchyWithUserData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyWithUserData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyWithUserData")),new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyWithUserData;
	struct Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeHierarchyWithUserData, Hierarchy), Z_Construct_UScriptStruct_FNodeHierarchyData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::NewProp_Hierarchy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeHierarchyWithUserData",
		sizeof(FNodeHierarchyWithUserData),
		alignof(FNodeHierarchyWithUserData),
		Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyWithUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyWithUserData"), sizeof(FNodeHierarchyWithUserData), Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_Hash() { return 92808406U; }
class UScriptStruct* FNodeHierarchyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyData, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeHierarchyData>()
{
	return FNodeHierarchyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeHierarchyData(FNodeHierarchyData::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeHierarchyData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeHierarchyData")),new UScriptStruct::TCppStructOps<FNodeHierarchyData>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeHierarchyData;
	struct Z_Construct_UScriptStruct_FNodeHierarchyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeNameToIndexMapping_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NodeNameToIndexMapping_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeNameToIndexMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NodeNameToIndexMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Hierarchy of nodes */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Hierarchy of nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeHierarchyData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNodeObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Node hierarchy data */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Node hierarchy data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeHierarchyData, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData[] = {
		{ "Comment", "/** Node transform data */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Node transform data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeHierarchyData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_ValueProp = { "NodeNameToIndexMapping", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_Key_KeyProp = { "NodeNameToIndexMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData[] = {
		{ "Comment", "/** Transient look up mapping from name to index to array */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "Transient look up mapping from name to index to array" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping = { "NodeNameToIndexMapping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeHierarchyData, NodeNameToIndexMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_Transforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::NewProp_NodeNameToIndexMapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeHierarchyData",
		sizeof(FNodeHierarchyData),
		alignof(FNodeHierarchyData),
		Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeHierarchyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeHierarchyData"), sizeof(FNodeHierarchyData), Get_Z_Construct_UScriptStruct_FNodeHierarchyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeHierarchyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_Hash() { return 4009325500U; }
class UScriptStruct* FNodeObject::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeObject_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeObject, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeObject>()
{
	return FNodeObject::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeObject(FNodeObject::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeObject"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeObject")),new UScriptStruct::TCppStructOps<FNodeObject>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeObject;
	struct Z_Construct_UScriptStruct_FNodeObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A node in a named hierarchy */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "A node in a named hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeObject>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of this node */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "The name of this node" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeObject, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData[] = {
		{ "Comment", "/** The name of this node's parent */" },
		{ "ModuleRelativePath", "Public/NodeHierarchy.h" },
		{ "ToolTip", "The name of this node's parent" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeObject, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeObject_Statics::NewProp_ParentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeObject",
		sizeof(FNodeObject),
		alignof(FNodeObject),
		Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeObject()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeObject_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeObject"), sizeof(FNodeObject), Get_Z_Construct_UScriptStruct_FNodeObject_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeObject_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeObject_Hash() { return 1147495284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
