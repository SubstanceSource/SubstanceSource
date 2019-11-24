// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceTexture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceTexture2D() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubChannelType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
	SUBSTANCECORE_API UFunction* Z_Construct_UFunction_USubstanceTexture2D_GetChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	static UEnum* ESubChannelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubChannelType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubChannelType"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubChannelType>()
	{
		return ESubChannelType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubChannelType(ESubChannelType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubChannelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubChannelType_Hash() { return 1995665916U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubChannelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubChannelType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubChannelType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Channel_Diffuse", (int64)Channel_Diffuse },
				{ "Channel_Ambient", (int64)Channel_Ambient },
				{ "Channel_BaseColor", (int64)Channel_BaseColor },
				{ "Channel_Metallic", (int64)Channel_Metallic },
				{ "Channel_Roughness", (int64)Channel_Roughness },
				{ "Channel_Emissive", (int64)Channel_Emissive },
				{ "Channel_Normal", (int64)Channel_Normal },
				{ "Channel_Mask", (int64)Channel_Mask },
				{ "Channel_Opacity", (int64)Channel_Opacity },
				{ "Channel_Refraction", (int64)Channel_Refraction },
				{ "Channel_AmbientOcclusion", (int64)Channel_AmbientOcclusion },
				{ "Channel_Glossiness", (int64)Channel_Glossiness },
				{ "Channel_Height", (int64)Channel_Height },
				{ "Channel_Displacement", (int64)Channel_Displacement },
				{ "Channel_Reflection", (int64)Channel_Reflection },
				{ "Channel_Invalid", (int64)Channel_Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Channel_Ambient.Name", "Channel_Ambient" },
				{ "Channel_AmbientOcclusion.Name", "Channel_AmbientOcclusion" },
				{ "Channel_BaseColor.Name", "Channel_BaseColor" },
				{ "Channel_Diffuse.Name", "Channel_Diffuse" },
				{ "Channel_Displacement.Name", "Channel_Displacement" },
				{ "Channel_Emissive.Name", "Channel_Emissive" },
				{ "Channel_Glossiness.Name", "Channel_Glossiness" },
				{ "Channel_Height.Name", "Channel_Height" },
				{ "Channel_Invalid.Name", "Channel_Invalid" },
				{ "Channel_Mask.Name", "Channel_Mask" },
				{ "Channel_Metallic.Name", "Channel_Metallic" },
				{ "Channel_Normal.Name", "Channel_Normal" },
				{ "Channel_Opacity.Name", "Channel_Opacity" },
				{ "Channel_Reflection.Name", "Channel_Reflection" },
				{ "Channel_Refraction.Name", "Channel_Refraction" },
				{ "Channel_Roughness.Name", "Channel_Roughness" },
				{ "Comment", "//Note:: These are the current set of channels that we support in UE4 and not all\n//substance channel output types are listed here.\n" },
				{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
				{ "ToolTip", "Note:: These are the current set of channels that we support in UE4 and not all\nsubstance channel output types are listed here." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"ESubChannelType",
				"ESubChannelType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceTexture2D::StaticRegisterNativesUSubstanceTexture2D()
	{
		UClass* Class = USubstanceTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannel", &USubstanceTexture2D::execGetChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics
	{
		struct SubstanceTexture2D_eventGetChannel_Parms
		{
			TEnumAsByte<ESubChannelType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceTexture2D_eventGetChannel_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubChannelType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns a list of all of the input identifiers */" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "Returns a list of all of the input identifiers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceTexture2D, nullptr, "GetChannel", nullptr, nullptr, sizeof(SubstanceTexture2D_eventGetChannel_Parms), Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceTexture2D_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceTexture2D_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister()
	{
		return USubstanceTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCooked_MetaData[];
#endif
		static void NewProp_bCooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2DDynamic,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceTexture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceTexture2D_GetChannel, "GetChannel" }, // 3909029662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SubstanceTexture2D.h" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData[] = {
		{ "Comment", "/** Whether or not this is a cook asset */" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "Whether or not this is a cook asset" },
	};
#endif
	void Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit(void* Obj)
	{
		((USubstanceTexture2D*)Obj)->bCooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked = { "bCooked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USubstanceTexture2D), &Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Graph that will update this texture */" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "Graph that will update this texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceTexture2D, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams = {
		&USubstanceTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceTexture2D, 1642623681);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceTexture2D>()
	{
		return USubstanceTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceTexture2D(Z_Construct_UClass_USubstanceTexture2D, &USubstanceTexture2D::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceTexture2D);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceTexture2D)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
