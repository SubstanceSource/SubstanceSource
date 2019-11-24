// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSTANCECORE_SubstanceSettings_generated_h
#error "SubstanceSettings.generated.h already included, missing '#pragma once' in SubstanceSettings.h"
#endif
#define SUBSTANCECORE_SubstanceSettings_generated_h

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_RPC_WRAPPERS
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend struct Z_Construct_UClass_USubstanceSettings_Statics; \
public: \
	DECLARE_CLASS(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend struct Z_Construct_UClass_USubstanceSettings_Statics; \
public: \
	DECLARE_CLASS(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceSettings(USubstanceSettings&&); \
	NO_API USubstanceSettings(const USubstanceSettings&); \
public:


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceSettings(USubstanceSettings&&); \
	NO_API USubstanceSettings(const USubstanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceSettings)


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_PRIVATE_PROPERTY_OFFSET
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_38_PROLOG
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_PRIVATE_PROPERTY_OFFSET \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_RPC_WRAPPERS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_INCLASS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_PRIVATE_PROPERTY_OFFSET \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_INCLASS_NO_PURE_DECLS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h


#define FOREACH_ENUM_EDEFAULTSUBSTANCETEXTURESIZE(op) \
	op(SIZE_16) \
	op(SIZE_32) \
	op(SIZE_64) \
	op(SIZE_128) \
	op(SIZE_256) \
	op(SIZE_512) \
	op(SIZE_1024) \
	op(SIZE_2048) \
	op(SIZE_4096) 
#define FOREACH_ENUM_ESUBSTANCEENGINETYPE(op) \
	op(SET_CPU) \
	op(SET_GPU) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
