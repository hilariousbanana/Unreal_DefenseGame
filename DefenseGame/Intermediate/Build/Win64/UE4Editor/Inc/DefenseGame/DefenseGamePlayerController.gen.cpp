// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefenseGame/DefenseGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseGamePlayerController() {}
// Cross Module References
	DEFENSEGAME_API UClass* Z_Construct_UClass_ADefenseGamePlayerController_NoRegister();
	DEFENSEGAME_API UClass* Z_Construct_UClass_ADefenseGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DefenseGame();
// End Cross Module References
	void ADefenseGamePlayerController::StaticRegisterNativesADefenseGamePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ADefenseGamePlayerController_NoRegister()
	{
		return ADefenseGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ADefenseGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefenseGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DefenseGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefenseGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DefenseGamePlayerController.h" },
		{ "ModuleRelativePath", "DefenseGamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefenseGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefenseGamePlayerController_Statics::ClassParams = {
		&ADefenseGamePlayerController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADefenseGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefenseGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefenseGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefenseGamePlayerController, 1516302204);
	template<> DEFENSEGAME_API UClass* StaticClass<ADefenseGamePlayerController>()
	{
		return ADefenseGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefenseGamePlayerController(Z_Construct_UClass_ADefenseGamePlayerController, &ADefenseGamePlayerController::StaticClass, TEXT("/Script/DefenseGame"), TEXT("ADefenseGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
