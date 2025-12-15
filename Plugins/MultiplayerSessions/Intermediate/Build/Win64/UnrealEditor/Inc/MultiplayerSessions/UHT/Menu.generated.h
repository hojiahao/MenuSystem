// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Menu.h"

#ifdef MULTIPLAYERSESSIONS_Menu_generated_h
#error "Menu.generated.h already included, missing '#pragma once' in Menu.h"
#endif
#define MULTIPLAYERSESSIONS_Menu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMenu ********************************************************************
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMenuSetup);


struct Z_Construct_UClass_UMenu_Statics;
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMenu_NoRegister();

#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenu(); \
	friend struct ::Z_Construct_UClass_UMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTIPLAYERSESSIONS_API UClass* ::Z_Construct_UClass_UMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), Z_Construct_UClass_UMenu_NoRegister) \
	DECLARE_SERIALIZER(UMenu)


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenu(UMenu&&) = delete; \
	UMenu(const UMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenu) \
	NO_API virtual ~UMenu();


#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_12_PROLOG
#define FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_INCLASS_NO_PURE_DECLS \
	FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenu;

// ********** End Class UMenu **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
