// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSubstanceInstanceDesc;
struct FSubstanceFloatInputDesc;
struct FSubstanceIntInputDesc;
struct FLinearColor;
#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInstanceDesc>();

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceFloatInputDesc>();

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceIntInputDesc>();

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInputDesc>();

#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInputImg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetInputImg(Z_Param_InputName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceDesc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceInstanceDesc*)Z_Param__Result=P_THIS->GetInstanceDesc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceFloatInputDesc*)Z_Param__Result=P_THIS->GetFloatInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceIntInputDesc*)Z_Param__Result=P_THIS->GetIntInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputBool(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetInputColor(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetInputString(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetInputFloat(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputInt(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_UBOOL(Z_Param_Bool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputBool(Z_Param_Identifier,Z_Param_Bool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputString(Z_Param_Identifier,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=P_THIS->GetInputType(Z_Param_InputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputNames(); \
		P_NATIVE_END; \
	}


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputImg) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_GET_OBJECT(UObject,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetInputImg(Z_Param_InputName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceDesc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceInstanceDesc*)Z_Param__Result=P_THIS->GetInstanceDesc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceFloatInputDesc*)Z_Param__Result=P_THIS->GetFloatInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntInputDesc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubstanceIntInputDesc*)Z_Param__Result=P_THIS->GetIntInputDesc(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInputBool(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetInputColor(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetInputString(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetInputFloat(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputInt(Z_Param_Identifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputBool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_UBOOL(Z_Param_Bool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputBool(Z_Param_Identifier,Z_Param_Bool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputColor) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputString(Z_Param_Identifier,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Identifier); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=P_THIS->GetInputType(Z_Param_InputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputNames(); \
		P_NATIVE_END; \
	}


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance, NO_API)


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ARCHIVESERIALIZER


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ARCHIVESERIALIZER


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public:


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance)


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_104_PROLOG
#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PRIVATE_PROPERTY_OFFSET \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_INCLASS_NO_PURE_DECLS \
	C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceGraphInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID C__UE4Workspace_Marketplace_Substance_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h


#define FOREACH_ENUM_ESUBSTANCEINPUTTYPE(op) \
	op(SIT_Float) \
	op(SIT_Float2) \
	op(SIT_Float3) \
	op(SIT_Float4) \
	op(SIT_Integer) \
	op(SIT_Image) \
	op(SIT_Unused_6) \
	op(SIT_Unused_7) \
	op(SIT_Integer2) \
	op(SIT_Integer3) \
	op(SIT_Integer4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
