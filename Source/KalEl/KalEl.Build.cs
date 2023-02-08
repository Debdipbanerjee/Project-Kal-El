// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KalEl : ModuleRules
{
	public KalEl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
