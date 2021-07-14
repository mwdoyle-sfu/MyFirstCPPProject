// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyFirstCPPProject : ModuleRules
{
	public MyFirstCPPProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
