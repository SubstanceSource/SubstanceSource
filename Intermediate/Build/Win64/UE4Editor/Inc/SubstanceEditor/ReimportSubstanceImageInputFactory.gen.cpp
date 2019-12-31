// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/ReimportSubstanceImageInputFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSubstanceImageInputFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void UReimportSubstanceImageInputFactory::StaticRegisterNativesUReimportSubstanceImageInputFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory_NoRegister()
	{
		return UReimportSubstanceImageInputFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReimportPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubstanceImageInputFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ReimportSubstanceImageInputFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSubstanceImageInputFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ReimportSubstanceImageInputFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths = { "ReimportPaths", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReimportSubstanceImageInputFactory, ReimportPaths), METADATA_PARAMS(Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths_Inner = { "ReimportPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::NewProp_ReimportPaths_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSubstanceImageInputFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::ClassParams = {
		&UReimportSubstanceImageInputFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSubstanceImageInputFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportSubstanceImageInputFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSubstanceImageInputFactory, 3764824177);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<UReimportSubstanceImageInputFactory>()
	{
		return UReimportSubstanceImageInputFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSubstanceImageInputFactory(Z_Construct_UClass_UReimportSubstanceImageInputFactory, &UReimportSubstanceImageInputFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("UReimportSubstanceImageInputFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceImageInputFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
