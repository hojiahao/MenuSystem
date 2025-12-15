// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessions_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/MultiplayerSessions",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x965152EA,
			0x5C7555C9,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSessions(Z_Construct_UPackage__Script_MultiplayerSessions, TEXT("/Script/MultiplayerSessions"), Z_Registration_Info_UPackage__Script_MultiplayerSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x965152EA, 0x5C7555C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
