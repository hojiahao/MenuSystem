// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Menu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMenu() {}

// ********** Begin Cross Module References ********************************************************
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMenu();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMenu Function HostButtonClicked *****************************************
struct Z_Construct_UFunction_UMenu_HostButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HostButtonClicked constinit property declarations *********************
// ********** End Function HostButtonClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_HostButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "HostButtonClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_HostButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_HostButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_HostButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_HostButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu::execHostButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UMenu Function HostButtonClicked *******************************************

// ********** Begin Class UMenu Function JoinButtonClicked *****************************************
struct Z_Construct_UFunction_UMenu_JoinButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function JoinButtonClicked constinit property declarations *********************
// ********** End Function JoinButtonClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_JoinButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "JoinButtonClicked", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_JoinButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_JoinButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_JoinButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_JoinButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu::execJoinButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UMenu Function JoinButtonClicked *******************************************

// ********** Begin Class UMenu Function MenuSetup *************************************************
struct Z_Construct_UFunction_UMenu_MenuSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MenuSetup constinit property declarations *****************************
// ********** End Function MenuSetup constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenu_MenuSetup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenu, nullptr, "MenuSetup", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenu_MenuSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenu_MenuSetup_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenu_MenuSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenu_MenuSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenu::execMenuSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MenuSetup();
	P_NATIVE_END;
}
// ********** End Class UMenu Function MenuSetup ***************************************************

// ********** Begin Class UMenu ********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMenu;
UClass* UMenu::GetPrivateStaticClass()
{
	using TClass = UMenu;
	if (!Z_Registration_Info_UClass_UMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Menu"),
			Z_Registration_Info_UClass_UMenu.InnerSingleton,
			StaticRegisterNativesUMenu,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenu_NoRegister()
{
	return UMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Menu.h" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMenu constinit property declarations ************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMenu constinit property declarations **************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HostButtonClicked"), .Pointer = &UMenu::execHostButtonClicked },
		{ .NameUTF8 = UTF8TEXT("JoinButtonClicked"), .Pointer = &UMenu::execJoinButtonClicked },
		{ .NameUTF8 = UTF8TEXT("MenuSetup"), .Pointer = &UMenu::execMenuSetup },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenu_HostButtonClicked, "HostButtonClicked" }, // 2165485733
		{ &Z_Construct_UFunction_UMenu_JoinButtonClicked, "JoinButtonClicked" }, // 1067389646
		{ &Z_Construct_UFunction_UMenu_MenuSetup, "MenuSetup" }, // 1289687761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMenu_Statics

// ********** Begin Class UMenu Property Definitions ***********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostButton_MetaData), NewProp_HostButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinButton_MetaData), NewProp_JoinButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_HostButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenu_Statics::NewProp_JoinButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers) < 2048);
// ********** End Class UMenu Property Definitions *************************************************
UObject* (*const Z_Construct_UClass_UMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenu_Statics::ClassParams = {
	&UMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenu_Statics::Class_MetaDataParams)
};
void UMenu::StaticRegisterNativesUMenu()
{
	UClass* Class = UMenu::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMenu_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMenu()
{
	if (!Z_Registration_Info_UClass_UMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenu.OuterSingleton, Z_Construct_UClass_UMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenu.OuterSingleton;
}
UMenu::UMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMenu);
UMenu::~UMenu() {}
// ********** End Class UMenu **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h__Script_MultiplayerSessions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenu, UMenu::StaticClass, TEXT("UMenu"), &Z_Registration_Info_UClass_UMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenu), 1202761437U) },
	};
}; // Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h__Script_MultiplayerSessions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h__Script_MultiplayerSessions_1514455772{
	TEXT("/Script/MultiplayerSessions"),
	Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h__Script_MultiplayerSessions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MenuSystem_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_Menu_h__Script_MultiplayerSessions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
