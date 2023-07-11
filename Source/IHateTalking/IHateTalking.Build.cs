// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IHateTalking : ModuleRules
{
    public IHateTalking(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
    }
}
