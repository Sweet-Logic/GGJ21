// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LateForWork/LateForWorkGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLateForWorkGameMode() {}
// Cross Module References
	LATEFORWORK_API UClass* Z_Construct_UClass_ALateForWorkGameMode_NoRegister();
	LATEFORWORK_API UClass* Z_Construct_UClass_ALateForWorkGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LateForWork();
// End Cross Module References
	void ALateForWorkGameMode::StaticRegisterNativesALateForWorkGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALateForWorkGameMode_NoRegister()
	{
		return ALateForWorkGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALateForWorkGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALateForWorkGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LateForWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALateForWorkGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LateForWorkGameMode.h" },
		{ "ModuleRelativePath", "LateForWorkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALateForWorkGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALateForWorkGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALateForWorkGameMode_Statics::ClassParams = {
		&ALateForWorkGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALateForWorkGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALateForWorkGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALateForWorkGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALateForWorkGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALateForWorkGameMode, 1406546039);
	template<> LATEFORWORK_API UClass* StaticClass<ALateForWorkGameMode>()
	{
		return ALateForWorkGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALateForWorkGameMode(Z_Construct_UClass_ALateForWorkGameMode, &ALateForWorkGameMode::StaticClass, TEXT("/Script/LateForWork"), TEXT("ALateForWorkGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALateForWorkGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
