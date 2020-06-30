// Some copyright should be here...

using UnrealBuildTool;

public class PakUtilities : ModuleRules
{
	public PakUtilities(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[] { "PakUtilities/Public" });
		PrivateIncludePaths.AddRange(new string[] { "PakUtilities/Private" });

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"NetworkFile",
				"HTTP"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"PakFile",
				"StreamingFile",
				"NetworkFile"
			});
	}
}
