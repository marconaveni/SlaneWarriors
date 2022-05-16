// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerCharacter.h"
#include "ElvenlinCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SLANEWARRIORS_API AElvenlinCharacter : public APlayerCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AElvenlinCharacter();

protected:

	//sphere collision to check position sword
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* HitBoxBow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunningAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpFallingLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpOnlanded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* HitPlayer;

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Variables editblueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Elvenlin")
	bool isAttackElvenlin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Elvenlin")
	bool isMoveRightElvenlin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Elvenlin")
	bool DamageElvenlin;

	FTimerHandle eTimerHandle;

	UFUNCTION()
	void TimerTick();

	//function called only blueprint
	UFUNCTION(BlueprintImplementableEvent)
	void TickedEvent();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Landed(const FHitResult& Hit) override;

	UFUNCTION()
	void UpdateRotationElvenlin();

	void UpdateAnimation();

	void MoveRight(float AxisValue);

	void JumpPlayer();

	void StopJumpPlayer();

	void AttackBow();

};
