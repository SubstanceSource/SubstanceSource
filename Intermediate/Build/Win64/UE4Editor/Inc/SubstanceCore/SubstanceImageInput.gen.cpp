// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceImageInput.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInput() {}
// Cross Module References
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceImageInput_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceImageInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	void USubstanceImageInput::StaticRegisterNativesUSubstanceImageInput()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInput_NoRegister()
	{
		return USubstanceImageInput::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceImageInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Consumers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Consumers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Consumers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLevelAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionLevelAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionLevelRGB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionLevelRGB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceImageInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceImageInput.h" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers_MetaData[] = {
		{ "Comment", "/** Graph instances that use this image input */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Graph instances that use this image input" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers = { "Consumers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, Consumers), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers_Inner = { "Consumers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** Time stamp of the loaded file */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Time stamp of the loaded file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, SourceFileTimestamp), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** Path to used to import image input */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Path to used to import image input" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, SourceFilePath), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_NumComponents_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The number of data channels this uses for GPU data */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "The number of data channels this uses for GPU data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_NumComponents = { "NumComponents", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, NumComponents), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_NumComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_NumComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Image height */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Image height" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, SizeY), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Image width */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Image width" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, SizeX), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelAlpha_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Alpha channel compression (0: disable, 1: auto, 2-99: manual) */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Alpha channel compression (0: disable, 1: auto, 2-99: manual)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelAlpha = { "CompressionLevelAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, CompressionLevelAlpha), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelRGB_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Color channels compression (0: disable, 1: auto, 2-99: manual) */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInput.h" },
		{ "ToolTip", "Color channels compression (0: disable, 1: auto, 2-99: manual)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelRGB = { "CompressionLevelRGB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImageInput, CompressionLevelRGB), METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelRGB_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelRGB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceImageInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_Consumers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_NumComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInput_Statics::NewProp_CompressionLevelRGB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceImageInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImageInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImageInput_Statics::ClassParams = {
		&USubstanceImageInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceImageInput_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInput_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceImageInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceImageInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImageInput, 1623259711);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceImageInput>()
	{
		return USubstanceImageInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInput(Z_Construct_UClass_USubstanceImageInput, &USubstanceImageInput::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceImageInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInput);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceImageInput)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
