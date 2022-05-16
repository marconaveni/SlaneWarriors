// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APaperCharacter;
class UPaperFlipbook;
class UBoxComponent;
class AActor;
#ifdef SLANEWARRIORS_SlaneFunctionLibrary_generated_h
#error "SlaneFunctionLibrary.generated.h already included, missing '#pragma once' in SlaneFunctionLibrary.h"
#endif
#define SLANEWARRIORS_SlaneFunctionLibrary_generated_h

#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_SPARSE_DATA
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimationNotify); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execisOverlapBox);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimationNotify); \
	DECLARE_FUNCTION(execSetAnimation); \
	DECLARE_FUNCTION(execisOverlapBox);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlaneFunctionLibrary(); \
	friend struct Z_Construct_UClass_USlaneFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USlaneFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlaneWarriors"), NO_API) \
	DECLARE_SERIALIZER(USlaneFunctionLibrary)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSlaneFunctionLibrary(); \
	friend struct Z_Construct_UClass_USlaneFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USlaneFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlaneWarriors"), NO_API) \
	DECLARE_SERIALIZER(USlaneFunctionLibrary)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlaneFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlaneFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlaneFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlaneFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlaneFunctionLibrary(USlaneFunctionLibrary&&); \
	NO_API USlaneFunctionLibrary(const USlaneFunctionLibrary&); \
public:


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlaneFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlaneFunctionLibrary(USlaneFunctionLibrary&&); \
	NO_API USlaneFunctionLibrary(const USlaneFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlaneFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlaneFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlaneFunctionLibrary)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_12_PROLOG
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_INCLASS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLANEWARRIORS_API UClass* StaticClass<class USlaneFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
