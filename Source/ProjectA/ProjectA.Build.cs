using UnrealBuildTool;

public class ProjectA : ModuleRules
{
	public ProjectA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"OnlineSubsystem",           // 온라인 기능
			"OnlineSubsystemUtils",      // 세션 생성 등에 필요
			"OnlineSubsystemSteam",      // Steam 세션
			"AdvancedSessions",          // 플러그인 - 세션
			"AdvancedSteamSessions"      // 플러그인 - Steam 연동
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Slate UI를 쓸 경우 필요
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// bEnableUndefinedIdentifierWarnings = false; // 필요시 컴파일 경고 무시
	}
}
