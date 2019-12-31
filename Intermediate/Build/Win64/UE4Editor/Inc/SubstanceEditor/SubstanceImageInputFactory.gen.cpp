// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/SubstanceImageInputFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImageInputFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImageInputFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceImageInputFactory::StaticRegisterNativesUSubstanceImageInputFactory()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImageInputFactory_NoRegister()
	{
		return USubstanceImageInputFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceImageInputFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateDefaultInstance_MetaData[];
#endif
		static void NewProp_bCreateDefaultInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateDefaultInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[];
#endif
		static void NewProp_bCreateMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceImageInputFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInputFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceImageInputFactory.h" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance_MetaData[] = {
		{ "Comment", "/** If enabled, a default instance will automatically be created for the texture */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
		{ "ToolTip", "If enabled, a default instance will automatically be created for the texture" },
	};
#endif
	void Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance_SetBit(void* Obj)
	{
		((USubstanceImageInputFactory*)Obj)->bCreateDefaultInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance = { "bCreateDefaultInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImageInputFactory), &Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial_MetaData[] = {
		{ "Comment", "/** If enabled, a material will automatically be created for the texture */" },
		{ "ModuleRelativePath", "Classes/SubstanceImageInputFactory.h" },
		{ "ToolTip", "If enabled, a material will automatically be created for the texture" },
	};
#endif
	void Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
	{
		((USubstanceImageInputFactory*)Obj)->bCreateMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImageInputFactory), &Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceImageInputFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateDefaultInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImageInputFactory_Statics::NewProp_bCreateMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceImageInputFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImageInputFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImageInputFactory_Statics::ClassParams = {
		&USubstanceImageInputFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceImageInputFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInputFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceImageInputFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImageInputFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceImageInputFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceImageInputFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImageInputFactory, 2249940870);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceImageInputFactory>()
	{
		return USubstanceImageInputFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImageInputFactory(Z_Construct_UClass_USubstanceImageInputFactory, &USubstanceImageInputFactory::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImageInputFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImageInputFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
