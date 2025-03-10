// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/Bomberman_l01GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_l01GameMode() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABomberman_l01GameMode();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABomberman_l01GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABomberman_l01GameMode::StaticRegisterNativesABomberman_l01GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberman_l01GameMode);
	UClass* Z_Construct_UClass_ABomberman_l01GameMode_NoRegister()
	{
		return ABomberman_l01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomberman_l01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberman_l01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_l01GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_l01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bomberman_l01GameMode.h" },
		{ "ModuleRelativePath", "Bomberman_l01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman_l01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_l01GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_l01GameMode_Statics::ClassParams = {
		&ABomberman_l01GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_l01GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberman_l01GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABomberman_l01GameMode()
	{
		if (!Z_Registration_Info_UClass_ABomberman_l01GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberman_l01GameMode.OuterSingleton, Z_Construct_UClass_ABomberman_l01GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABomberman_l01GameMode.OuterSingleton;
	}
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABomberman_l01GameMode>()
	{
		return ABomberman_l01GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_l01GameMode);
	ABomberman_l01GameMode::~ABomberman_l01GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bomberman_l01GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bomberman_l01GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABomberman_l01GameMode, ABomberman_l01GameMode::StaticClass, TEXT("ABomberman_l01GameMode"), &Z_Registration_Info_UClass_ABomberman_l01GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberman_l01GameMode), 2119900497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bomberman_l01GameMode_h_4227125999(TEXT("/Script/Bomberman_l01"),
		Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bomberman_l01GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bomberman_l01GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
