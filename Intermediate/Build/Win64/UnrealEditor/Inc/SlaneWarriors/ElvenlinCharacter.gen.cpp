// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/ElvenlinCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElvenlinCharacter() {}
// Cross Module References
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AElvenlinCharacter_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AElvenlinCharacter();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElvenlinCharacter::execUpdateRotationElvenlin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRotationElvenlin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElvenlinCharacter::execTimerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerTick();
		P_NATIVE_END;
	}
	static FName NAME_AElvenlinCharacter_TickedEvent = FName(TEXT("TickedEvent"));
	void AElvenlinCharacter::TickedEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AElvenlinCharacter_TickedEvent),NULL);
	}
	void AElvenlinCharacter::StaticRegisterNativesAElvenlinCharacter()
	{
		UClass* Class = AElvenlinCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimerTick", &AElvenlinCharacter::execTimerTick },
			{ "UpdateRotationElvenlin", &AElvenlinCharacter::execUpdateRotationElvenlin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElvenlinCharacter, nullptr, "TickedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElvenlinCharacter_TickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElvenlinCharacter_TickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElvenlinCharacter, nullptr, "TimerTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElvenlinCharacter_TimerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElvenlinCharacter_TimerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElvenlinCharacter, nullptr, "UpdateRotationElvenlin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElvenlinCharacter);
	UClass* Z_Construct_UClass_AElvenlinCharacter_NoRegister()
	{
		return AElvenlinCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AElvenlinCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxBow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBoxBow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpLoop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFallingLoop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpFallingLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpOnlanded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpOnlanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttackElvenlin_MetaData[];
#endif
		static void NewProp_isAttackElvenlin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttackElvenlin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isMoveRightElvenlin_MetaData[];
#endif
		static void NewProp_isMoveRightElvenlin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMoveRightElvenlin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageElvenlin_MetaData[];
#endif
		static void NewProp_DamageElvenlin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DamageElvenlin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElvenlinCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SlaneWarriors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElvenlinCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElvenlinCharacter_TickedEvent, "TickedEvent" }, // 2961096350
		{ &Z_Construct_UFunction_AElvenlinCharacter_TimerTick, "TimerTick" }, // 4136244699
		{ &Z_Construct_UFunction_AElvenlinCharacter_UpdateRotationElvenlin, "UpdateRotationElvenlin" }, // 3061764812
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ElvenlinCharacter.h" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitBoxBow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "//sphere collision to check position sword\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
		{ "ToolTip", "sphere collision to check position sword" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitBoxBow = { "HitBoxBow", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, HitBoxBow), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitBoxBow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitBoxBow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_RunningAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_RunningAnimation = { "RunningAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_RunningAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, JumpLoop), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpFallingLoop_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpFallingLoop = { "JumpFallingLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, JumpFallingLoop), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpFallingLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpFallingLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpOnlanded_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpOnlanded = { "JumpOnlanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, JumpOnlanded), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpOnlanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpOnlanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, Attack), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitPlayer_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitPlayer = { "HitPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElvenlinCharacter, HitPlayer), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin_MetaData[] = {
		{ "Category", "Variables Elvenlin" },
		{ "Comment", "//Variables editblueprint\n" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
		{ "ToolTip", "Variables editblueprint" },
	};
#endif
	void Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin_SetBit(void* Obj)
	{
		((AElvenlinCharacter*)Obj)->isAttackElvenlin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin = { "isAttackElvenlin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElvenlinCharacter), &Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin_MetaData[] = {
		{ "Category", "Variables Elvenlin" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin_SetBit(void* Obj)
	{
		((AElvenlinCharacter*)Obj)->isMoveRightElvenlin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin = { "isMoveRightElvenlin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElvenlinCharacter), &Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin_MetaData[] = {
		{ "Category", "Variables Elvenlin" },
		{ "ModuleRelativePath", "Public/ElvenlinCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin_SetBit(void* Obj)
	{
		((AElvenlinCharacter*)Obj)->DamageElvenlin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin = { "DamageElvenlin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElvenlinCharacter), &Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElvenlinCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitBoxBow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_IdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_RunningAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpFallingLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_JumpOnlanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_Attack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_HitPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isAttackElvenlin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_isMoveRightElvenlin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElvenlinCharacter_Statics::NewProp_DamageElvenlin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElvenlinCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElvenlinCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AElvenlinCharacter_Statics::ClassParams = {
		&AElvenlinCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElvenlinCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElvenlinCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElvenlinCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElvenlinCharacter()
	{
		if (!Z_Registration_Info_UClass_AElvenlinCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElvenlinCharacter.OuterSingleton, Z_Construct_UClass_AElvenlinCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AElvenlinCharacter.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UClass* StaticClass<AElvenlinCharacter>()
	{
		return AElvenlinCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElvenlinCharacter);
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_ElvenlinCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_ElvenlinCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AElvenlinCharacter, AElvenlinCharacter::StaticClass, TEXT("AElvenlinCharacter"), &Z_Registration_Info_UClass_AElvenlinCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElvenlinCharacter), 739057659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_ElvenlinCharacter_h_1807410760(TEXT("/Script/SlaneWarriors"),
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_ElvenlinCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_ElvenlinCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
