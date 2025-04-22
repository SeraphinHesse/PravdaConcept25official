// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pravda_Concept25 : ModuleRules
{
	public Pravda_Concept25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
