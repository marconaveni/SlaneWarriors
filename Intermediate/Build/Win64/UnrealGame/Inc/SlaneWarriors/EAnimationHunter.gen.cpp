// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlaneWarriors/Public/EAnimationHunter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnimationHunter() {}
// Cross Module References
	SLANEWARRIORS_API UEnum* Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter();
	UPackage* Z_Construct_UPackage__Script_SlaneWarriors();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationsHunter;
	static UEnum* EAnimationsHunter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimationsHunter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimationsHunter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter, Z_Construct_UPackage__Script_SlaneWarriors(), TEXT("EAnimationsHunter"));
		}
		return Z_Registration_Info_UEnum_EAnimationsHunter.OuterSingleton;
	}
	template<> SLANEWARRIORS_API UEnum* StaticEnum<EAnimationsHunter>()
	{
		return EAnimationsHunter_StaticEnum();
	}
	struct Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enumerators[] = {
		{ "IDLE", (int64)IDLE },
		{ "RUN", (int64)RUN },
		{ "JUMPSTART", (int64)JUMPSTART },
		{ "JUMPLOOP", (int64)JUMPLOOP },
		{ "FALLING", (int64)FALLING },
		{ "ONLANDED", (int64)ONLANDED },
		{ "ATKONE", (int64)ATKONE },
		{ "ATKTWO", (int64)ATKTWO },
		{ "ATKTHREE", (int64)ATKTHREE },
		{ "DASH", (int64)DASH },
		{ "HIT", (int64)HIT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enum_MetaDataParams[] = {
		{ "ATKONE.DisplayName", "Attack One" },
		{ "ATKONE.Name", "ATKONE" },
		{ "ATKTHREE.DisplayName", "Attack Three" },
		{ "ATKTHREE.Name", "ATKTHREE" },
		{ "ATKTWO.DisplayName", "Attack Two" },
		{ "ATKTWO.Name", "ATKTWO" },
		{ "BlueprintType", "true" },
		{ "Category", "GameRules" },
		{ "DASH.DisplayName", "Dash" },
		{ "DASH.Name", "DASH" },
		{ "FALLING.DisplayName", "Jump Falling Loop" },
		{ "FALLING.Name", "FALLING" },
		{ "HIT.DisplayName", "Hit" },
		{ "HIT.Name", "HIT" },
		{ "IDLE.DisplayName", "Idle" },
		{ "IDLE.Name", "IDLE" },
		{ "JUMPLOOP.DisplayName", "Jump Loop" },
		{ "JUMPLOOP.Name", "JUMPLOOP" },
		{ "JUMPSTART.DisplayName", "Jump Start" },
		{ "JUMPSTART.Name", "JUMPSTART" },
		{ "ModuleRelativePath", "Public/EAnimationHunter.h" },
		{ "ONLANDED.DisplayName", "Jump On landed" },
		{ "ONLANDED.Name", "ONLANDED" },
		{ "RUN.DisplayName", "Run" },
		{ "RUN.Name", "RUN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlaneWarriors,
		nullptr,
		"EAnimationsHunter",
		"EAnimationsHunter",
		Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter()
	{
		if (!Z_Registration_Info_UEnum_EAnimationsHunter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationsHunter.InnerSingleton, Z_Construct_UEnum_SlaneWarriors_EAnimationsHunter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimationsHunter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EAnimationHunter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EAnimationHunter_h_Statics::EnumInfo[] = {
		{ EAnimationsHunter_StaticEnum, TEXT("EAnimationsHunter"), &Z_Registration_Info_UEnum_EAnimationsHunter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 837323191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EAnimationHunter_h_4005392348(TEXT("/Script/SlaneWarriors"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EAnimationHunter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SlaneWarriors_Source_SlaneWarriors_Public_EAnimationHunter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
