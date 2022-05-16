// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/CameraSideScroller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraSideScroller() {}
// Cross Module References
	SLANEWARRIORS_API UClass* Z_Construct_UClass_ACameraSideScroller_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_ACameraSideScroller();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ACameraSideScroller::execTimerTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerTick();
		P_NATIVE_END;
	}
	void ACameraSideScroller::StaticRegisterNativesACameraSideScroller()
	{
		UClass* Class = ACameraSideScroller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimerTick", &ACameraSideScroller::execTimerTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraSideScroller, nullptr, "TimerTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraSideScroller_TimerTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraSideScroller_TimerTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraSideScroller);
	UClass* Z_Construct_UClass_ACameraSideScroller_NoRegister()
	{
		return ACameraSideScroller::StaticClass();
	}
	struct Z_Construct_UClass_ACameraSideScroller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZoneZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZoneZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoneZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoneZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoneZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoneZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoneX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoneX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZoneX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoneX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetCamera_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftRightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftRightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCameraYaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationCameraYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftRight_MetaData[];
#endif
		static void NewProp_LeftRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraSideScroller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SlaneWarriors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraSideScroller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraSideScroller_TimerTick, "TimerTick" }, // 3245478991
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraSideScroller.h" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_ActorFollow_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "// declare variables\n" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
		{ "ToolTip", "declare variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_ActorFollow = { "ActorFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, ActorFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_ActorFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_ActorFollow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_DeadZoneZ_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "//Variables editblueprint\n" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
		{ "ToolTip", "Variables editblueprint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_DeadZoneZ = { "DeadZoneZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, DeadZoneZ), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_DeadZoneZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_DeadZoneZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneZ_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneZ = { "MaxZoneZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, MaxZoneZ), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneZ_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneZ = { "MinZoneZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, MinZoneZ), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneX_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneX = { "MaxZoneX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, MaxZoneX), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneX_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneX = { "MinZoneX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, MinZoneX), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OffsetCamera_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OffsetCamera = { "OffsetCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, OffsetCamera), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OffsetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OffsetCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRightOffset_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRightOffset = { "LeftRightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, LeftRightOffset), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_RotationCameraYaw_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_RotationCameraYaw = { "RotationCameraYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, RotationCameraYaw), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_RotationCameraYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_RotationCameraYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OverTime_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OverTime = { "OverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraSideScroller, OverTime), METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "Public/CameraSideScroller.h" },
	};
#endif
	void Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight_SetBit(void* Obj)
	{
		((ACameraSideScroller*)Obj)->LeftRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight = { "LeftRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraSideScroller), &Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraSideScroller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_ActorFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_DeadZoneZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MaxZoneX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_MinZoneX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OffsetCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_RotationCameraYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_OverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraSideScroller_Statics::NewProp_LeftRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraSideScroller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraSideScroller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraSideScroller_Statics::ClassParams = {
		&ACameraSideScroller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraSideScroller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraSideScroller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraSideScroller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraSideScroller()
	{
		if (!Z_Registration_Info_UClass_ACameraSideScroller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraSideScroller.OuterSingleton, Z_Construct_UClass_ACameraSideScroller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraSideScroller.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UClass* StaticClass<ACameraSideScroller>()
	{
		return ACameraSideScroller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraSideScroller);
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_CameraSideScroller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_CameraSideScroller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraSideScroller, ACameraSideScroller::StaticClass, TEXT("ACameraSideScroller"), &Z_Registration_Info_UClass_ACameraSideScroller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraSideScroller), 3122473912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_CameraSideScroller_h_3225834858(TEXT("/Script/SlaneWarriors"),
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_CameraSideScroller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_CameraSideScroller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
