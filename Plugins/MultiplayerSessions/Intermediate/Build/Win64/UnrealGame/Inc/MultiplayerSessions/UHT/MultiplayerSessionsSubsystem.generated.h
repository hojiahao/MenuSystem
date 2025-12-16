// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionsSubsystem.h"

#ifdef MULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h
#error "MultiplayerSessionsSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionsSubsystem.h"
#endif
#define MULTIPLAYERSESSIONS_MultiplayerSessionsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FMultiplayerOnCreateSessionComplete ***********************************
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_13_DELEGATE \
MULTIPLAYERSESSIONS_API void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful);


// ********** End Delegate FMultiplayerOnCreateSessionComplete *************************************

// ********** Begin Class UMultiplayerSessionsSubsystem ********************************************
struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics;
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();

#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionsSubsystem(); \
	friend struct ::Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERSESSIONS_API UClass* ::Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiplayerSessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMultiplayerSessionsSubsystem)


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiplayerSessionsSubsystem(UMultiplayerSessionsSubsystem&&) = delete; \
	UMultiplayerSessionsSubsystem(const UMultiplayerSessionsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionsSubsystem) \
	NO_API virtual ~UMultiplayerSessionsSubsystem();


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_18_PROLOG
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiplayerSessionsSubsystem;

// ********** End Class UMultiplayerSessionsSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
