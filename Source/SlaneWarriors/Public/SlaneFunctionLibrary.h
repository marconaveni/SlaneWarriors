// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlaneFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SLANEWARRIORS_API USlaneFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = "Slane Functions")
	static bool isOverlapBox(class UBoxComponent* boxCollision, class AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Slane Functions")
	static void SetAnimation(class UPaperFlipbookComponent* Flipbook, class UPaperFlipbook* Animation, bool NewLooping, bool PlayFromStart);

	UFUNCTION(BlueprintPure, Category = "Slane Functions")
    static bool AnimationNotify(class UPaperFlipbookComponent* Flipbook,class UPaperFlipbook* Animation, int frame);
	
};
