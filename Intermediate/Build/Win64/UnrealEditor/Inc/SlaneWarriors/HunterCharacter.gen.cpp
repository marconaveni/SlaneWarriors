// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/HunterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHunterCharacter() {}
// Cross Module References
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AHunterCharacter_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_AHunterCharacter();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SLANEWARRIORS_API UEnum* Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AHunterCharacter::execResetAttackHunter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttackHunter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHunterCharacter::execGetAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAnimationsHunter>*)Z_Param__Result=P_THIS->GetAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHunterCharacter::execTimerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHunterCharacter::execHitSwordOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitSwordOnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHunterCharacter::execHitSwordOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitSwordOnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AHunterCharacter_AttackEvent = FName(TEXT("AttackEvent"));
	void AHunterCharacter::AttackEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHunterCharacter_AttackEvent),NULL);
	}
	static FName NAME_AHunterCharacter_AttackHitResult = FName(TEXT("AttackHitResult"));
	void AHunterCharacter::AttackHitResult(FHitResult OutHit)
	{
		HunterCharacter_eventAttackHitResult_Parms Parms;
		Parms.OutHit=OutHit;
		ProcessEvent(FindFunctionChecked(NAME_AHunterCharacter_AttackHitResult),&Parms);
	}
	static FName NAME_AHunterCharacter_HitBoxReset = FName(TEXT("HitBoxReset"));
	void AHunterCharacter::HitBoxReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHunterCharacter_HitBoxReset),NULL);
	}
	static FName NAME_AHunterCharacter_TickedEvent = FName(TEXT("TickedEvent"));
	void AHunterCharacter::TickedEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHunterCharacter_TickedEvent),NULL);
	}
	void AHunterCharacter::StaticRegisterNativesAHunterCharacter()
	{
		UClass* Class = AHunterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimation", &AHunterCharacter::execGetAnimation },
			{ "HitSwordOnOverlapBegin", &AHunterCharacter::execHitSwordOnOverlapBegin },
			{ "HitSwordOnOverlapEnd", &AHunterCharacter::execHitSwordOnOverlapEnd },
			{ "ResetAttackHunter", &AHunterCharacter::execResetAttackHunter },
			{ "TimerTick", &AHunterCharacter::execTimerTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "AttackEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_AttackEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_AttackEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventAttackHitResult_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::NewProp_OutHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "AttackHitResult", nullptr, nullptr, sizeof(HunterCharacter_eventAttackHitResult_Parms), Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_AttackHitResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_AttackHitResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics
	{
		struct HunterCharacter_eventGetAnimation_Parms
		{
			TEnumAsByte<EAnimationsHunter> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventGetAnimation_Parms, ReturnValue), Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter, METADATA_PARAMS(nullptr, 0) }; // 837323191
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "GetAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::HunterCharacter_eventGetAnimation_Parms), Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_GetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_GetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "HitBoxReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_HitBoxReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_HitBoxReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics
	{
		struct HunterCharacter_eventHitSwordOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((HunterCharacter_eventHitSwordOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HunterCharacter_eventHitSwordOnOverlapBegin_Parms), &Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Begin HitSword overlap \n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "Begin HitSword overlap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "HitSwordOnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::HunterCharacter_eventHitSwordOnOverlapBegin_Parms), Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics
	{
		struct HunterCharacter_eventHitSwordOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HunterCharacter_eventHitSwordOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//End HitSword overlap \n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "End HitSword overlap" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "HitSwordOnOverlapEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::HunterCharacter_eventHitSwordOnOverlapEnd_Parms), Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hunter Functions" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "ResetAttackHunter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//function called only blueprint\n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "function called only blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "TickedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_TickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_TickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHunterCharacter, nullptr, "TimerTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHunterCharacter_TimerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHunterCharacter_TimerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHunterCharacter);
	UClass* Z_Construct_UClass_AHunterCharacter_NoRegister()
	{
		return AHunterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHunterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxSword_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBoxSword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpStart;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackThree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttack_MetaData[];
#endif
		static void NewProp_isAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isMoveRight_MetaData[];
#endif
		static void NewProp_isMoveRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMoveRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOnLandedAnimation_MetaData[];
#endif
		static void NewProp_isOnLandedAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnLandedAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDash_MetaData[];
#endif
		static void NewProp_isDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isJump_MetaData[];
#endif
		static void NewProp_isJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountAttack_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboAttack_MetaData[];
#endif
		static void NewProp_ComboAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ComboAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitboxSwordLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitboxSwordLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageHunter_MetaData[];
#endif
		static void NewProp_DamageHunter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DamageHunter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockHit_MetaData[];
#endif
		static void NewProp_BlockHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BlockHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHunterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SlaneWarriors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHunterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHunterCharacter_AttackEvent, "AttackEvent" }, // 1583559724
		{ &Z_Construct_UFunction_AHunterCharacter_AttackHitResult, "AttackHitResult" }, // 2582783855
		{ &Z_Construct_UFunction_AHunterCharacter_GetAnimation, "GetAnimation" }, // 3300763397
		{ &Z_Construct_UFunction_AHunterCharacter_HitBoxReset, "HitBoxReset" }, // 3668994232
		{ &Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapBegin, "HitSwordOnOverlapBegin" }, // 935440608
		{ &Z_Construct_UFunction_AHunterCharacter_HitSwordOnOverlapEnd, "HitSwordOnOverlapEnd" }, // 240395458
		{ &Z_Construct_UFunction_AHunterCharacter_ResetAttackHunter, "ResetAttackHunter" }, // 3677532061
		{ &Z_Construct_UFunction_AHunterCharacter_TickedEvent, "TickedEvent" }, // 1655009679
		{ &Z_Construct_UFunction_AHunterCharacter_TimerTick, "TimerTick" }, // 1150352962
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HunterCharacter.h" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitBoxSword_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "//sphere collision to check position sword\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "sphere collision to check position sword" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitBoxSword = { "HitBoxSword", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, HitBoxSword), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitBoxSword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitBoxSword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_IdleAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_RunningAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_RunningAnimation = { "RunningAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_RunningAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpStart_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpStart = { "JumpStart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, JumpStart), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpLoop_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpLoop = { "JumpLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, JumpLoop), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpFallingLoop_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpFallingLoop = { "JumpFallingLoop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, JumpFallingLoop), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpFallingLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpFallingLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpOnlanded_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpOnlanded = { "JumpOnlanded", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, JumpOnlanded), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpOnlanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpOnlanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackOne_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackOne = { "AttackOne", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, AttackOne), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTwo_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTwo = { "AttackTwo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, AttackTwo), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackThree_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackThree = { "AttackThree", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, AttackThree), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackThree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackThree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_Dash_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_Dash = { "Dash", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, Dash), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_Dash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_Dash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitPlayer_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitPlayer = { "HitPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, HitPlayer), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "Comment", "//Variables editblueprint\n" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
		{ "ToolTip", "Variables editblueprint" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->isAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack = { "isAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->isMoveRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight = { "isMoveRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->isOnLandedAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation = { "isOnLandedAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->isDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash = { "isDash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->isJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump = { "isJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_CountAttack_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_CountAttack = { "CountAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, CountAttack), METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_CountAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_CountAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->ComboAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack = { "ComboAttack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitboxSwordLocation_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitboxSwordLocation = { "HitboxSwordLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, HitboxSwordLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitboxSwordLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitboxSwordLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->DamageHunter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter = { "DamageHunter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTrigger_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTrigger = { "AttackTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHunterCharacter, AttackTrigger), METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit_MetaData[] = {
		{ "Category", "Variables Hunter" },
		{ "ModuleRelativePath", "Public/HunterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit_SetBit(void* Obj)
	{
		((AHunterCharacter*)Obj)->BlockHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit = { "BlockHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHunterCharacter), &Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHunterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitBoxSword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_IdleAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_RunningAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpFallingLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_JumpOnlanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_Dash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isMoveRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isOnLandedAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_isJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_CountAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_ComboAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_HitboxSwordLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_DamageHunter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_AttackTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHunterCharacter_Statics::NewProp_BlockHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHunterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHunterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHunterCharacter_Statics::ClassParams = {
		&AHunterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHunterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHunterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHunterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHunterCharacter()
	{
		if (!Z_Registration_Info_UClass_AHunterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHunterCharacter.OuterSingleton, Z_Construct_UClass_AHunterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHunterCharacter.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UClass* StaticClass<AHunterCharacter>()
	{
		return AHunterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHunterCharacter);
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHunterCharacter, AHunterCharacter::StaticClass, TEXT("AHunterCharacter"), &Z_Registration_Info_UClass_AHunterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHunterCharacter), 349751996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_3285102439(TEXT("/Script/SlaneWarriors"),
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_HunterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
