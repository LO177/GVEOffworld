// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OffworldInvader/SequencePath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencePath() {}
// Cross Module References
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_USequencePath_NoRegister();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_USequencePath();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OffworldInvader();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_USequencerNode_NoRegister();
// End Cross Module References
	void USequencePath::StaticRegisterNativesUSequencePath()
	{
	}
	UClass* Z_Construct_UClass_USequencePath_NoRegister()
	{
		return USequencePath::StaticClass();
	}
	struct Z_Construct_UClass_USequencePath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nodeAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencePath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencePath_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SequencePath.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SequencePath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencePath_Statics::NewProp_nodes_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequencePath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SequencePath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequencePath_Statics::NewProp_nodes = { "nodes", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencePath, nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencePath_Statics::NewProp_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencePath_Statics::NewProp_nodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USequencePath_Statics::NewProp_nodes_Inner = { "nodes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USequencerNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencePath_Statics::NewProp_nodeAmount_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequencePath" },
		{ "ModuleRelativePath", "SequencePath.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USequencePath_Statics::NewProp_nodeAmount = { "nodeAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencePath, nodeAmount), METADATA_PARAMS(Z_Construct_UClass_USequencePath_Statics::NewProp_nodeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencePath_Statics::NewProp_nodeAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencePath_Statics::NewProp_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencePath_Statics::NewProp_nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencePath_Statics::NewProp_nodeAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencePath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencePath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencePath_Statics::ClassParams = {
		&USequencePath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencePath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencePath_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequencePath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencePath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencePath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencePath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencePath, 3404060343);
	template<> OFFWORLDINVADER_API UClass* StaticClass<USequencePath>()
	{
		return USequencePath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencePath(Z_Construct_UClass_USequencePath, &USequencePath::StaticClass, TEXT("/Script/OffworldInvader"), TEXT("USequencePath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencePath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
