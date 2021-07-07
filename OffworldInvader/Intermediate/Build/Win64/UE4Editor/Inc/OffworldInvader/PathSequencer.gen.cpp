// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OffworldInvader/PathSequencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathSequencer() {}
// Cross Module References
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_APathSequencer_NoRegister();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_APathSequencer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OffworldInvader();
// End Cross Module References
	void APathSequencer::StaticRegisterNativesAPathSequencer()
	{
	}
	UClass* Z_Construct_UClass_APathSequencer_NoRegister()
	{
		return APathSequencer::StaticClass();
	}
	struct Z_Construct_UClass_APathSequencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathSequencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathSequencer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathSequencer.h" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathSequencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathSequencer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathSequencer_Statics::ClassParams = {
		&APathSequencer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APathSequencer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APathSequencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathSequencer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathSequencer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathSequencer, 550777664);
	template<> OFFWORLDINVADER_API UClass* StaticClass<APathSequencer>()
	{
		return APathSequencer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathSequencer(Z_Construct_UClass_APathSequencer, &APathSequencer::StaticClass, TEXT("/Script/OffworldInvader"), TEXT("APathSequencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathSequencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
