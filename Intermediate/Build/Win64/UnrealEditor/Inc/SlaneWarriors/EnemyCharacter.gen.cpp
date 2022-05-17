// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AEnemyCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static FName NAME_AEnemyCharacter_ApplyDamageEnemy = FName(TEXT("ApplyDamageEnemy"));
	void AEnemyCharacter::ApplyDamageEnemy(FVector ActorLocation, float Value)
	{
		EnemyCharacter_eventApplyDamageEnemy_Parms Parms;
		Parms.ActorLocation=ActorLocation;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AEnemyCharacter_ApplyDamageEnemy),&Parms);
	}
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
	}
	struct Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventApplyDamageEnemy_Parms, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnemyCharacter_eventApplyDamageEnemy_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "ApplyDamageEnemy", nullptr, nullptr, sizeof(EnemyCharacter_eventApplyDamageEnemy_Parms), Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter);
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Life_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Life;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEnemy_MetaData[];
#endif
		static void NewProp_DamageEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DamageEnemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SlaneWarriors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_ApplyDamageEnemy, "ApplyDamageEnemy" }, // 2217585288
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_pointer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_pointer = { "pointer", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, pointer), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_pointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SpriteParticle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SpriteParticle = { "SpriteParticle", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, SpriteParticle), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SpriteParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SpriteParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Life_MetaData[] = {
		{ "Category", "Variables Enemy" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Life = { "Life", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyCharacter, Life), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Life_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy_MetaData[] = {
		{ "Category", "Variables Enemy" },
		{ "ModuleRelativePath", "Public/EnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy_SetBit(void* Obj)
	{
		((AEnemyCharacter*)Obj)->DamageEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy = { "DamageEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SpriteParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_Life,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_DamageEnemy,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AEnemyCharacter, IInteractInterface), false },  // 3467033698
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EnemyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 2770245823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EnemyCharacter_h_2777701571(TEXT("/Script/SlaneWarriors"),
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
