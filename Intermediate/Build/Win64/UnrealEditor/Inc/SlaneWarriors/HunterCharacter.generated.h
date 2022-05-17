// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SLANEWARRIORS_HunterCharacter_generated_h
#error "HunterCharacter.generated.h already included, missing '#pragma once' in HunterCharacter.h"
#endif
#define SLANEWARRIORS_HunterCharacter_generated_h

#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_SPARSE_DATA
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAttackHunter); \
	DECLARE_FUNCTION(execGetAnimation); \
	DECLARE_FUNCTION(execTimerTick); \
	DECLARE_FUNCTION(execHitSwordOnOverlapEnd); \
	DECLARE_FUNCTION(execHitSwordOnOverlapBegin);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAttackHunter); \
	DECLARE_FUNCTION(execGetAnimation); \
	DECLARE_FUNCTION(execTimerTick); \
	DECLARE_FUNCTION(execHitSwordOnOverlapEnd); \
	DECLARE_FUNCTION(execHitSwordOnOverlapBegin);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_EVENT_PARMS \
	struct HunterCharacter_eventAttackHitResult_Parms \
	{ \
		FHitResult OutHit; \
	};


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_CALLBACK_WRAPPERS
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHunterCharacter(); \
	friend struct Z_Construct_UClass_AHunterCharacter_Statics; \
public: \
	DECLARE_CLASS(AHunterCharacter, APlayerCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlaneWarriors"), NO_API) \
	DECLARE_SERIALIZER(AHunterCharacter)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHunterCharacter(); \
	friend struct Z_Construct_UClass_AHunterCharacter_Statics; \
public: \
	DECLARE_CLASS(AHunterCharacter, APlayerCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlaneWarriors"), NO_API) \
	DECLARE_SERIALIZER(AHunterCharacter)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHunterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHunterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHunterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHunterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHunterCharacter(AHunterCharacter&&); \
	NO_API AHunterCharacter(const AHunterCharacter&); \
public:


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHunterCharacter(AHunterCharacter&&); \
	NO_API AHunterCharacter(const AHunterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHunterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHunterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHunterCharacter)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_13_PROLOG \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_EVENT_PARMS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_RPC_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_CALLBACK_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_INCLASS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_CALLBACK_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLANEWARRIORS_API UClass* StaticClass<class AHunterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
