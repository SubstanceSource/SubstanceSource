// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/SubstanceImageInputThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInputThumbnailRenderer() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceImageInputThumbnailRenderer::StaticRegisterNativesUSubstanceImageInputThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_NoRegister()
	{
		return USubstanceImageInputThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubstanceImageInputThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInputThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImageInputThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::ClassParams = {
		&USubstanceImageInputThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceImageInputThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceImageInputThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImageInputThumbnailRenderer, 1588231859);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceImageInputThumbnailRenderer>()
	{
		return USubstanceImageInputThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInputThumbnailRenderer(Z_Construct_UClass_USubstanceImageInputThumbnailRenderer, &USubstanceImageInputThumbnailRenderer::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImageInputThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInputThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
