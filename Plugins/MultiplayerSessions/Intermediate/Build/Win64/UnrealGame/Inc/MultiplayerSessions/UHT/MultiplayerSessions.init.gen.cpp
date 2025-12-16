// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerSessions_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiplayerSessions;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiplayerSessions()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/MultiplayerSessions",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xCFC619C7,
			0x75D4F1C6,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_MultiplayerSessions.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiplayerSessions(Z_Construct_UPackage__Script_MultiplayerSessions, TEXT("/Script/MultiplayerSessions"), Z_Registration_Info_UPackage__Script_MultiplayerSessions, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCFC619C7, 0x75D4F1C6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
