// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLANEWARRIORS_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define SLANEWARRIORS_InteractInterface_generated_h

#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_SPARSE_DATA
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_RPC_WRAPPERS \
	virtual void ApplyDamage_Implementation(FVector ActorLocation, float Value) {}; \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyDamage_Implementation(FVector ActorLocation, float Value) {}; \
 \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_EVENT_PARMS \
	struct InteractInterface_eventApplyDamage_Parms \
	{ \
		FVector ActorLocation; \
		float Value; \
	};


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_CALLBACK_WRAPPERS
#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLANEWARRIORS_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLANEWARRIORS_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLANEWARRIORS_API UInteractInterface(UInteractInterface&&); \
	SLANEWARRIORS_API UInteractInterface(const UInteractInterface&); \
public:


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLANEWARRIORS_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SLANEWARRIORS_API UInteractInterface(UInteractInterface&&); \
	SLANEWARRIORS_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLANEWARRIORS_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SlaneWarriors"), SLANEWARRIORS_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyDamage(UObject* O, FVector ActorLocation, float Value); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	static void Execute_ApplyDamage(UObject* O, FVector ActorLocation, float Value); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_10_PROLOG \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_EVENT_PARMS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_RPC_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_CALLBACK_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_SPARSE_DATA \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_CALLBACK_WRAPPERS \
	FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLANEWARRIORS_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SlaneWarriors_Source_SlaneWarriors_Public_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
