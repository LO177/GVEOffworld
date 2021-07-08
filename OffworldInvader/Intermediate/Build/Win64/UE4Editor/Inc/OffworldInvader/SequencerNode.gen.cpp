// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OffworldInvader/SequencerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerNode() {}
// Cross Module References
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_USequencerNode_NoRegister();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_USequencerNode();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OffworldInvader();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USequencerNode::StaticRegisterNativesUSequencerNode()
	{
	}
	UClass* Z_Construct_UClass_USequencerNode_NoRegister()
	{
		return USequencerNode::StaticClass();
	}
	struct Z_Construct_UClass_USequencerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SequencerNode.h" },
		{ "ModuleRelativePath", "SequencerNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerNode_Statics::NewProp_nodeLocation_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequencerNode" },
		{ "ModuleRelativePath", "SequencerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerNode_Statics::NewProp_nodeLocation = { "nodeLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequencerNode, nodeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USequencerNode_Statics::NewProp_nodeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerNode_Statics::NewProp_nodeLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerNode_Statics::NewProp_nodeLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencerNode_Statics::ClassParams = {
		&USequencerNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerNode_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencerNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencerNode, 3934359836);
	template<> OFFWORLDINVADER_API UClass* StaticClass<USequencerNode>()
	{
		return USequencerNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencerNode(Z_Construct_UClass_USequencerNode, &USequencerNode::StaticClass, TEXT("/Script/OffworldInvader"), TEXT("USequencerNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
