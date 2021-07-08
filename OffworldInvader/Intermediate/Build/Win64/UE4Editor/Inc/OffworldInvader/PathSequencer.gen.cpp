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
	OFFWORLDINVADER_API UScriptStruct* Z_Construct_UScriptStruct_FMainStruct();
	UPackage* Z_Construct_UPackage__Script_OffworldInvader();
	OFFWORLDINVADER_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_APathSequencer_NoRegister();
	OFFWORLDINVADER_API UClass* Z_Construct_UClass_APathSequencer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FMainStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OFFWORLDINVADER_API uint32 Get_Z_Construct_UScriptStruct_FMainStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainStruct, Z_Construct_UPackage__Script_OffworldInvader(), TEXT("MainStruct"), sizeof(FMainStruct), Get_Z_Construct_UScriptStruct_FMainStruct_Hash());
	}
	return Singleton;
}
template<> OFFWORLDINVADER_API UScriptStruct* StaticStruct<FMainStruct>()
{
	return FMainStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainStruct(FMainStruct::StaticStruct, TEXT("/Script/OffworldInvader"), TEXT("MainStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OffworldInvader_StaticRegisterNativesFMainStruct
{
	FScriptStruct_OffworldInvader_StaticRegisterNativesFMainStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MainStruct")),new UScriptStruct::TCppStructOps<FMainStruct>);
	}
} ScriptStruct_OffworldInvader_StaticRegisterNativesFMainStruct;
	struct Z_Construct_UScriptStruct_FMainStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sequences_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMainStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMainStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "MainStruct" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences = { "sequences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainStruct, sequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences_Inner = { "sequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSequenceStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMainStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainStruct_Statics::NewProp_sequences_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMainStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
		nullptr,
		&NewStructOps,
		"MainStruct",
		sizeof(FMainStruct),
		alignof(FMainStruct),
		Z_Construct_UScriptStruct_FMainStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMainStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMainStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMainStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMainStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OffworldInvader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainStruct"), sizeof(FMainStruct), Get_Z_Construct_UScriptStruct_FMainStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMainStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainStruct_Hash() { return 2286145470U; }
class UScriptStruct* FSequenceStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OFFWORLDINVADER_API uint32 Get_Z_Construct_UScriptStruct_FSequenceStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceStruct, Z_Construct_UPackage__Script_OffworldInvader(), TEXT("SequenceStruct"), sizeof(FSequenceStruct), Get_Z_Construct_UScriptStruct_FSequenceStruct_Hash());
	}
	return Singleton;
}
template<> OFFWORLDINVADER_API UScriptStruct* StaticStruct<FSequenceStruct>()
{
	return FSequenceStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSequenceStruct(FSequenceStruct::StaticStruct, TEXT("/Script/OffworldInvader"), TEXT("SequenceStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OffworldInvader_StaticRegisterNativesFSequenceStruct
{
	FScriptStruct_OffworldInvader_StaticRegisterNativesFSequenceStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SequenceStruct")),new UScriptStruct::TCppStructOps<FSequenceStruct>);
	}
} ScriptStruct_OffworldInvader_StaticRegisterNativesFSequenceStruct;
	struct Z_Construct_UScriptStruct_FSequenceStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemySpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemySpawnAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//UFUNCTION([specifier1=setting1, specifier2, ...], [meta(key1=\"value1\", key2, ...)])\n//ReturnType FunctionName([Parameter1, Parameter2, ..., ParameterN1=DefaultValueN1, ParameterN2=DefaultValueN2]) [const];\n" },
		{ "ModuleRelativePath", "PathSequencer.h" },
		{ "ToolTip", "UFUNCTION([specifier1=setting1, specifier2, ...], [meta(key1=\"value1\", key2, ...)])\nReturnType FunctionName([Parameter1, Parameter2, ..., ParameterN1=DefaultValueN1, ParameterN2=DefaultValueN2]) [const];" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequenceStruct" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences = { "sequences", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequenceStruct, sequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences_Inner = { "sequences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnInterval_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequenceStruct" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnInterval = { "EnemySpawnInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequenceStruct, EnemySpawnInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnAmount_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "SequenceStruct" },
		{ "ModuleRelativePath", "PathSequencer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnAmount = { "EnemySpawnAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequenceStruct, EnemySpawnAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_sequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceStruct_Statics::NewProp_EnemySpawnAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OffworldInvader,
		nullptr,
		&NewStructOps,
		"SequenceStruct",
		sizeof(FSequenceStruct),
		alignof(FSequenceStruct),
		Z_Construct_UScriptStruct_FSequenceStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSequenceStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OffworldInvader();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SequenceStruct"), sizeof(FSequenceStruct), Get_Z_Construct_UScriptStruct_FSequenceStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSequenceStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSequenceStruct_Hash() { return 1556281030U; }
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sequenceStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sequenceStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathSequencer_Statics::NewProp_sequenceStruct_MetaData[] = {
		{ "AllowPrivateaccess", "true" },
		{ "Category", "PathSequencer" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = \"true\"))\n//int sequenceAmount;\n" },
		{ "ModuleRelativePath", "PathSequencer.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = \"true\"))\nint sequenceAmount;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathSequencer_Statics::NewProp_sequenceStruct = { "sequenceStruct", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathSequencer, sequenceStruct), Z_Construct_UScriptStruct_FMainStruct, METADATA_PARAMS(Z_Construct_UClass_APathSequencer_Statics::NewProp_sequenceStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APathSequencer_Statics::NewProp_sequenceStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathSequencer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathSequencer_Statics::NewProp_sequenceStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathSequencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathSequencer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathSequencer_Statics::ClassParams = {
		&APathSequencer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APathSequencer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APathSequencer_Statics::PropPointers),
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
	IMPLEMENT_CLASS(APathSequencer, 3842226400);
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
