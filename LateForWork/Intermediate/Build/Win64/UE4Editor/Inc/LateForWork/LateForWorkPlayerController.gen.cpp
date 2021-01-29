// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LateForWork/LateForWorkPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLateForWorkPlayerController() {}
// Cross Module References
	LATEFORWORK_API UClass* Z_Construct_UClass_ALateForWorkPlayerController_NoRegister();
	LATEFORWORK_API UClass* Z_Construct_UClass_ALateForWorkPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_LateForWork();
// End Cross Module References
	void ALateForWorkPlayerController::StaticRegisterNativesALateForWorkPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ALateForWorkPlayerController_NoRegister()
	{
		return ALateForWorkPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALateForWorkPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALateForWorkPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_LateForWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALateForWorkPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LateForWorkPlayerController.h" },
		{ "ModuleRelativePath", "LateForWorkPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALateForWorkPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALateForWorkPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALateForWorkPlayerController_Statics::ClassParams = {
		&ALateForWorkPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALateForWorkPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALateForWorkPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALateForWorkPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALateForWorkPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALateForWorkPlayerController, 3666253366);
	template<> LATEFORWORK_API UClass* StaticClass<ALateForWorkPlayerController>()
	{
		return ALateForWorkPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALateForWorkPlayerController(Z_Construct_UClass_ALateForWorkPlayerController, &ALateForWorkPlayerController::StaticClass, TEXT("/Script/LateForWork"), TEXT("ALateForWorkPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALateForWorkPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
