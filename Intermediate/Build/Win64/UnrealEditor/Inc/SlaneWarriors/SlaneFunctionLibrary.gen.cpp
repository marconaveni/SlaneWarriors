// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/SlaneFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlaneFunctionLibrary() {}
// Cross Module References
	SLANEWARRIORS_API UClass* Z_Construct_UClass_USlaneFunctionLibrary_NoRegister();
	SLANEWARRIORS_API UClass* Z_Construct_UClass_USlaneFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USlaneFunctionLibrary::execAnimationNotify)
	{
		P_GET_OBJECT(UPaperFlipbookComponent,Z_Param_Flipbook);
		P_GET_OBJECT(UPaperFlipbook,Z_Param_Animation);
		P_GET_PROPERTY(FIntProperty,Z_Param_frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlaneFunctionLibrary::AnimationNotify(Z_Param_Flipbook,Z_Param_Animation,Z_Param_frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlaneFunctionLibrary::execSetAnimation)
	{
		P_GET_OBJECT(UPaperFlipbookComponent,Z_Param_Flipbook);
		P_GET_OBJECT(UPaperFlipbook,Z_Param_Animation);
		P_GET_UBOOL(Z_Param_NewLooping);
		P_GET_UBOOL(Z_Param_PlayFromStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlaneFunctionLibrary::SetAnimation(Z_Param_Flipbook,Z_Param_Animation,Z_Param_NewLooping,Z_Param_PlayFromStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlaneFunctionLibrary::execisOverlapBox)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_boxCollision);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlaneFunctionLibrary::isOverlapBox(Z_Param_boxCollision,Z_Param_actor);
		P_NATIVE_END;
	}
	void USlaneFunctionLibrary::StaticRegisterNativesUSlaneFunctionLibrary()
	{
		UClass* Class = USlaneFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationNotify", &USlaneFunctionLibrary::execAnimationNotify },
			{ "isOverlapBox", &USlaneFunctionLibrary::execisOverlapBox },
			{ "SetAnimation", &USlaneFunctionLibrary::execSetAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics
	{
		struct SlaneFunctionLibrary_eventAnimationNotify_Parms
		{
			UPaperFlipbookComponent* Flipbook;
			UPaperFlipbook* Animation;
			int32 frame;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_frame;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Flipbook_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventAnimationNotify_Parms, Flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Flipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Flipbook_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventAnimationNotify_Parms, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_frame = { "frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventAnimationNotify_Parms, frame), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlaneFunctionLibrary_eventAnimationNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlaneFunctionLibrary_eventAnimationNotify_Parms), &Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Flipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slane Functions" },
		{ "ModuleRelativePath", "Public/SlaneFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlaneFunctionLibrary, nullptr, "AnimationNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::SlaneFunctionLibrary_eventAnimationNotify_Parms), Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics
	{
		struct SlaneFunctionLibrary_eventisOverlapBox_Parms
		{
			UBoxComponent* boxCollision;
			AActor* actor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxCollision;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_boxCollision_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_boxCollision = { "boxCollision", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventisOverlapBox_Parms, boxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_boxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_boxCollision_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventisOverlapBox_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlaneFunctionLibrary_eventisOverlapBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlaneFunctionLibrary_eventisOverlapBox_Parms), &Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_boxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slane Functions" },
		{ "ModuleRelativePath", "Public/SlaneFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlaneFunctionLibrary, nullptr, "isOverlapBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::SlaneFunctionLibrary_eventisOverlapBox_Parms), Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics
	{
		struct SlaneFunctionLibrary_eventSetAnimation_Parms
		{
			UPaperFlipbookComponent* Flipbook;
			UPaperFlipbook* Animation;
			bool NewLooping;
			bool PlayFromStart;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flipbook;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static void NewProp_NewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewLooping;
		static void NewProp_PlayFromStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayFromStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Flipbook_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Flipbook = { "Flipbook", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventSetAnimation_Parms, Flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Flipbook_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Flipbook_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SlaneFunctionLibrary_eventSetAnimation_Parms, Animation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_NewLooping_SetBit(void* Obj)
	{
		((SlaneFunctionLibrary_eventSetAnimation_Parms*)Obj)->NewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_NewLooping = { "NewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlaneFunctionLibrary_eventSetAnimation_Parms), &Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_NewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_PlayFromStart_SetBit(void* Obj)
	{
		((SlaneFunctionLibrary_eventSetAnimation_Parms*)Obj)->PlayFromStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_PlayFromStart = { "PlayFromStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SlaneFunctionLibrary_eventSetAnimation_Parms), &Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_PlayFromStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Flipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_NewLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::NewProp_PlayFromStart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slane Functions" },
		{ "ModuleRelativePath", "Public/SlaneFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlaneFunctionLibrary, nullptr, "SetAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::SlaneFunctionLibrary_eventSetAnimation_Parms), Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlaneFunctionLibrary);
	UClass* Z_Construct_UClass_USlaneFunctionLibrary_NoRegister()
	{
		return USlaneFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USlaneFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlaneFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SlaneWarriors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlaneFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlaneFunctionLibrary_AnimationNotify, "AnimationNotify" }, // 3974337586
		{ &Z_Construct_UFunction_USlaneFunctionLibrary_isOverlapBox, "isOverlapBox" }, // 561314668
		{ &Z_Construct_UFunction_USlaneFunctionLibrary_SetAnimation, "SetAnimation" }, // 3568619309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlaneFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SlaneFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SlaneFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlaneFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlaneFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlaneFunctionLibrary_Statics::ClassParams = {
		&USlaneFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlaneFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlaneFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlaneFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USlaneFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlaneFunctionLibrary.OuterSingleton, Z_Construct_UClass_USlaneFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlaneFunctionLibrary.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UClass* StaticClass<USlaneFunctionLibrary>()
	{
		return USlaneFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlaneFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlaneFunctionLibrary, USlaneFunctionLibrary::StaticClass, TEXT("USlaneFunctionLibrary"), &Z_Registration_Info_UClass_USlaneFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlaneFunctionLibrary), 1998669048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_2881884891(TEXT("/Script/SlaneWarriors"),
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_SlaneFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
