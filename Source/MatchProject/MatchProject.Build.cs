// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MatchProject : ModuleRules
{
	public MatchProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay"
		, "GameplayAbilities", "GameplayTags", "GameplayTasks" 
		, "HTTP", "WebSockets" });

		PublicSystemIncludePaths.Add(System.IO.Path.Combine(ModuleDirectory, "gs2-unreal-engine-sdk/"));
	}
}
