// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeDistanceCrossFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDistanceCrossFade() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
// End Cross Module References
class UScriptStruct* FDistanceDatum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceDatum, Z_Construct_UPackage__Script_Engine(), TEXT("DistanceDatum"), sizeof(FDistanceDatum), Get_Z_Construct_UScriptStruct_FDistanceDatum_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDistanceDatum>()
{
	return FDistanceDatum::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDistanceDatum(FDistanceDatum::StaticStruct, TEXT("/Script/Engine"), TEXT("DistanceDatum"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDistanceDatum
{
	FScriptStruct_Engine_StaticRegisterNativesFDistanceDatum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DistanceDatum")),new UScriptStruct::TCppStructOps<FDistanceDatum>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDistanceDatum;
	struct Z_Construct_UScriptStruct_FDistanceDatum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDistanceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDistanceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDistanceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDistanceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceDatum>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The FadeInDistance at which to start hearing this sound.\n\x09 * If you want to hear the sound up close then setting this to 0 might be a good option. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The FadeInDistance at which to start hearing this sound.\n       * If you want to hear the sound up close then setting this to 0 might be a good option." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart = { "FadeInDistanceStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound has faded in completely. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound has faded in completely." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd = { "FadeInDistanceEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceDatum, FadeInDistanceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound starts fading out. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound starts fading out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart = { "FadeOutDistanceStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The distance at which this sound is no longer audible. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The distance at which this sound is no longer audible." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd = { "FadeOutDistanceEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceDatum, FadeOutDistanceEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "DistanceDatum" },
		{ "Comment", "/* The volume for which this Input should be played. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "The volume for which this Input should be played." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceDatum, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeInDistanceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_FadeOutDistanceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceDatum_Statics::NewProp_Volume,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistanceDatum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DistanceDatum",
		sizeof(FDistanceDatum),
		alignof(FDistanceDatum),
		Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceDatum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceDatum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistanceDatum"), sizeof(FDistanceDatum), Get_Z_Construct_UScriptStruct_FDistanceDatum_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistanceDatum_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistanceDatum_Hash() { return 3513059999U; }
	void USoundNodeDistanceCrossFade::StaticRegisterNativesUSoundNodeDistanceCrossFade()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister()
	{
		return USoundNodeDistanceCrossFade::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossFadeInput_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossFadeInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CrossFadeInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SoundNodeDistanceCrossFade\n * \n * This node's purpose is to play different sounds based on the distance to the listener.  \n * The node mixes between the N different sounds which are valid for the distance.  One should\n * think of a SoundNodeDistanceCrossFade as Mixer node which determines the set of nodes to\n * \"mix in\" based on their distance to the sound.\n * \n * Example:\n * You have a gun that plays a fire sound.  At long distances you want a different sound than\n * if you were up close.   So you use a SoundNodeDistanceCrossFade which will calculate the distance\n * a listener is from the sound and play either:  short distance, long distance, mix of short and long sounds.\n *\n * A SoundNodeDistanceCrossFade differs from an SoundNodeAttenuation in that any sound is only going\n * be played if it is within the MinRadius and MaxRadius.  So if you want the short distance sound to be \n * heard by people close to it, the MinRadius should probably be 0\n *\n * The volume curve for a SoundNodeDistanceCrossFade will look like this:\n *\n *                          Volume (of the input) \n *    FadeInDistance.Max --> _________________ <-- FadeOutDistance.Min\n *                          /                 \\\n *                         /                   \\\n *                        /                     \\\n * FadeInDistance.Min -->/                       \\ <-- FadeOutDistance.Max\n */" },
		{ "DisplayName", "Crossfade by Distance" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDistanceCrossFade.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "SoundNodeDistanceCrossFade\n\nThis node's purpose is to play different sounds based on the distance to the listener.\nThe node mixes between the N different sounds which are valid for the distance.  One should\nthink of a SoundNodeDistanceCrossFade as Mixer node which determines the set of nodes to\n\"mix in\" based on their distance to the sound.\n\nExample:\nYou have a gun that plays a fire sound.  At long distances you want a different sound than\nif you were up close.   So you use a SoundNodeDistanceCrossFade which will calculate the distance\na listener is from the sound and play either:  short distance, long distance, mix of short and long sounds.\n\nA SoundNodeDistanceCrossFade differs from an SoundNodeAttenuation in that any sound is only going\nbe played if it is within the MinRadius and MaxRadius.  So if you want the short distance sound to be\nheard by people close to it, the MinRadius should probably be 0\n\nThe volume curve for a SoundNodeDistanceCrossFade will look like this:\n\n                         Volume (of the input)\n   FadeInDistance.Max --> _________________ <-- FadeOutDistance.Min\n                         /                 \\\n                        /                   \\\n                       /                     \\\nFadeInDistance.Min -->/                       \\ <-- FadeOutDistance.Max" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_Inner = { "CrossFadeInput", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDistanceDatum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData[] = {
		{ "Category", "CrossFade" },
		{ "Comment", "/**\n\x09 * Each input needs to have the correct data filled in so the SoundNodeDistanceCrossFade is able\n\x09 * to determine which sounds to play\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDistanceCrossFade.h" },
		{ "ToolTip", "Each input needs to have the correct data filled in so the SoundNodeDistanceCrossFade is able\nto determine which sounds to play" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput = { "CrossFadeInput", nullptr, (EPropertyFlags)0x0010000000000049, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeDistanceCrossFade, CrossFadeInput), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::NewProp_CrossFadeInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDistanceCrossFade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::ClassParams = {
		&USoundNodeDistanceCrossFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeDistanceCrossFade, 4074438645);
	template<> ENGINE_API UClass* StaticClass<USoundNodeDistanceCrossFade>()
	{
		return USoundNodeDistanceCrossFade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDistanceCrossFade(Z_Construct_UClass_USoundNodeDistanceCrossFade, &USoundNodeDistanceCrossFade::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDistanceCrossFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDistanceCrossFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
