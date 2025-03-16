// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_l01/Bloque.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque() {}
// Cross Module References
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque();
	BOMBERMAN_L01_API UClass* Z_Construct_UClass_ABloque_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_l01();
// End Cross Module References
	void ABloque::StaticRegisterNativesABloque()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque);
	UClass* Z_Construct_UClass_ABloque_NoRegister()
	{
		return ABloque::StaticClass();
	}
	struct Z_Construct_UClass_ABloque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_l01,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque.h" },
		{ "ModuleRelativePath", "Bloque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Statics::ClassParams = {
		&ABloque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABloque()
	{
		if (!Z_Registration_Info_UClass_ABloque.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque.OuterSingleton, Z_Construct_UClass_ABloque_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABloque.OuterSingleton;
	}
	template<> BOMBERMAN_L01_API UClass* StaticClass<ABloque>()
	{
		return ABloque::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque);
	ABloque::~ABloque() {}
	struct Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bloque_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bloque_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABloque, ABloque::StaticClass, TEXT("ABloque"), &Z_Registration_Info_UClass_ABloque, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque), 4107725548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bloque_h_901856878(TEXT("/Script/Bomberman_l01"),
		Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bloque_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_hpvic_OneDrive_Documents_Bomberman_l01_Source_Bomberman_l01_Bloque_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
