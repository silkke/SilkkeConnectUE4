// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SilkkeConnector : ModuleRules
{
    public SilkkeConnector(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NetworkFile", "HTTP" });

		PrivateDependencyModuleNames.AddRange(new string[] { "PakFile", "StreamingFile", "NetworkFile" });
	}
}
