// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAnimationHunter.h"
#include "PlayerCharacter.h"
#include "HunterCharacter.generated.h"

/**
 *
 */
UCLASS()
class SLANEWARRIORS_API AHunterCharacter : public APlayerCharacter
{
	GENERATED_BODY()



public:
	// Sets default values for this character's properties
	AHunterCharacter();

protected:

	//sphere collision to check position sword
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* HitBoxSword;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* RunningAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpFallingLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* JumpOnlanded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* AttackOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* AttackTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* AttackThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* Dash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* HitPlayer;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TEnumAsByte<EAnimationsHunter> AnimationHunter;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	virtual void Landed(const FHitResult& Hit) override;

	//Variables editblueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool isAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool isMoveRight;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool isOnLandedAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool isDash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool isJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	int CountAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool ComboAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	FVector HitboxSwordLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	bool DamageHunter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Hunter")
	int AttackTrigger;


	FTimerHandle pTimerHandle;

	UFUNCTION()
	void TimerTick();

	//function called only blueprint
	UFUNCTION(BlueprintImplementableEvent)
	void TickedEvent();

	//function called only blueprint
	UFUNCTION(BlueprintImplementableEvent)
	void AttackEvent();

	//function called only blueprint
	UFUNCTION(BlueprintImplementableEvent)
	void HitBoxReset();

	UFUNCTION(BlueprintPure)
	EAnimationsHunter GetAnimation();

	UFUNCTION(BlueprintCallable, Category = "Hunter Functions")
	void ResetAttackHunter();

	//functions called only cpp
	void UpdateRotationHunter();

	void UpdateAnimation();

	void MoveRight(float AxisValue);

	void JumpPlayer();

	void StopJumpPlayer();

	void AttackHunter();

	void AttackFunction();

	//Interfaces Implementations
	virtual void ApplyDamage_Implementation(FVector ActorLocation, float Value) override;

};
