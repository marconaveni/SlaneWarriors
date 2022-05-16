
#pragma once

#include "EAnimationHunter.generated.h"

UENUM(BlueprintType, Category = "GameRules")
enum EAnimationsHunter
{
	IDLE      UMETA(DisplayName = "Idle"),
	RUN       UMETA(DisplayName = "Run"),
	JUMPSTART UMETA(DisplayName = "Jump Start"),
	JUMPLOOP  UMETA(DisplayName = "Jump Loop"),
	FALLING   UMETA(DisplayName = "Jump Falling Loop"),
	ONLANDED  UMETA(DisplayName = "Jump On landed"),
	ATKONE    UMETA(DisplayName = "Attack One"),
	ATKTWO    UMETA(DisplayName = "Attack Two"),
	ATKTHREE  UMETA(DisplayName = "Attack Three"),
	DASH      UMETA(DisplayName = "Dash"),
	HIT       UMETA(DisplayName = "Hit")
};
