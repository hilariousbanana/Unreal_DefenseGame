// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefenseGame/DefenseGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseGameGameMode() {}
// Cross Module References
	DEFENSEGAME_API UClass* Z_Construct_UClass_ADefenseGameGameMode_NoRegister();
	DEFENSEGAME_API UClass* Z_Construct_UClass_ADefenseGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DefenseGame();
// End Cross Module References
	void ADefenseGameGameMode::StaticRegisterNativesADefenseGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADefenseGameGameMode_NoRegister()
	{
		return ADefenseGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADefenseGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefenseGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DefenseGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DefenseGameGameMode.h" },
		{ "ModuleRelativePath", "DefenseGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefenseGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefenseGameGameMode_Statics::ClassParams = {
		&ADefenseGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADefenseGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefenseGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefenseGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefenseGameGameMode, 41091889);
	template<> DEFENSEGAME_API UClass* StaticClass<ADefenseGameGameMode>()
	{
		return ADefenseGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefenseGameGameMode(Z_Construct_UClass_ADefenseGameGameMode, &ADefenseGameGameMode::StaticClass, TEXT("/Script/DefenseGame"), TEXT("ADefenseGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
