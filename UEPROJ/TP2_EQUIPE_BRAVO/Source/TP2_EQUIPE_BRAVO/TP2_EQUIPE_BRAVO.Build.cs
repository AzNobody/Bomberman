// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP2_EQUIPE_BRAVO : ModuleRules
{
	public TP2_EQUIPE_BRAVO(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
