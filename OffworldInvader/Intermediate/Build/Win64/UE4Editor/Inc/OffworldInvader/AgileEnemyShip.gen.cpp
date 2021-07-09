// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OffworldInvader/AgileEnemyShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgileEnemyShip() {}
// Cross Module References
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_AAgileEnemyShip_NoRegister();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_AAgileEnemyShip();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_AEnemyShip();
	UPackage* Z_Construct_UPackage__Script_OffworldInvader();
// End Cross Module References
	void AAgileEnemyShip::StaticRegisterNativesAAgileEnemyShip()
	{
	}
	UClass* Z_Construct_UClass_AAgileEnemyShip_NoRegister()
	{
		return AAgileEnemyShip::StaticClass();
	}
	struct Z_Construct_UClass_AAgileEnemyShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAgileEnemyShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyShip,
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAgileEnemyShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AgileEnemyShip.h" },
		{ "ModuleRelativePath", "AgileEnemyShip.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAgileEnemyShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgileEnemyShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAgileEnemyShip_Statics::ClassParams = {
		&AAgileEnemyShip::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAgileEnemyShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAgileEnemyShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAgileEnemyShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAgileEnemyShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAgileEnemyShip, 3796639530);
	template<> OFFWORLDINVADER_API UClass* StaticClass<AAgileEnemyShip>()
	{
		return AAgileEnemyShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAgileEnemyShip(Z_Construct_UClass_AAgileEnemyShip, &AAgileEnemyShip::StaticClass, TEXT("/Script/OffworldInvader"), TEXT("AAgileEnemyShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAgileEnemyShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
