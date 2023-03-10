// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBinding() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBinding, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBinding"), sizeof(FMovieSceneBinding), Get_Z_Construct_UScriptStruct_FMovieSceneBinding_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBinding>()
{
	return FMovieSceneBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBinding(FMovieSceneBinding::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneBinding"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBinding")),new UScriptStruct::TCppStructOps<FMovieSceneBinding>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBinding;
	struct Z_Construct_UScriptStruct_FMovieSceneBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A set of tracks bound to runtime objects\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "A set of tracks bound to runtime objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Comment", "/** Object binding guid for runtime objects */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Object binding guid for runtime objects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBinding, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData[] = {
		{ "Comment", "/** Display name */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Display name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBinding, BindingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBinding, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** The desired sorting order for this binding in Sequencer */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "The desired sorting order for this binding in Sequencer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBinding, SortingOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneBinding",
		sizeof(FMovieSceneBinding),
		alignof(FMovieSceneBinding),
		Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBinding"), sizeof(FMovieSceneBinding), Get_Z_Construct_UScriptStruct_FMovieSceneBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBinding_Hash() { return 100050233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
