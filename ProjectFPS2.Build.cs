// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectFPS2 : ModuleRules
{
	public ProjectFPS2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"Niagara"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProjectFPS2",
			"ProjectFPS2/Variant_Platforming",
			"ProjectFPS2/Variant_Platforming/Animation",
			"ProjectFPS2/Variant_Combat",
			"ProjectFPS2/Variant_Combat/AI",
			"ProjectFPS2/Variant_Combat/Animation",
			"ProjectFPS2/Variant_Combat/Gameplay",
			"ProjectFPS2/Variant_Combat/Interfaces",
			"ProjectFPS2/Variant_Combat/UI",
			"ProjectFPS2/Variant_SideScrolling",
			"ProjectFPS2/Variant_SideScrolling/AI",
			"ProjectFPS2/Variant_SideScrolling/Gameplay",
			"ProjectFPS2/Variant_SideScrolling/Interfaces",
			"ProjectFPS2/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
