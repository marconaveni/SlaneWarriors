// Fill out your copyright notice in the Description page of Project Settings.


#include "HunterCharacter.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "SlaneFunctionLibrary.h"




AHunterCharacter::AHunterCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	isAttack = false;
	isMoveRight = true;
	isOnLandedAnimation = false;
	isDash = false;
	isJump = false;
	CountAttack = 0;
	ComboAttack = true;
	HitboxSwordLocation = FVector(0.f , 0.f , 0.f);
	DamageHunter = false;
	AttackTrigger = 0;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	HitBoxSword = CreateDefaultSubobject<USphereComponent>(TEXT("Sword"));
	HitBoxSword->InitSphereRadius(9.0f);
	HitBoxSword->SetupAttachment(RootComponent);


}

void AHunterCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(pTimerHandle, this, &AHunterCharacter::TimerTick, 0.016f, true, 0.1f);
	
}

void AHunterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateRotationHunter();
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, UKismetStringLibrary::Conv_BoolToString(isAttack));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "");
}


void AHunterCharacter::TimerTick()
{
	UpdateAnimation();
	TickedEvent();
}

void AHunterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(InputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &AHunterCharacter::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AHunterCharacter::JumpPlayer);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AHunterCharacter::StopJumpPlayer);
	PlayerInputComponent->BindAction("Attack", IE_Pressed,this, &AHunterCharacter::AttackHunter);


}

void AHunterCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	AttackTrigger = 0;
	isJump = false;
	DamageHunter = false;
	CountAttack = 0;
	if (isAttack == false) {
		isOnLandedAnimation = true;
		USlaneFunctionLibrary::SetAnimation(this, JumpOnlanded, false, true);
		ComboAttack = true;
	}
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "onlanded");

	
}



EAnimationsHunter AHunterCharacter::GetAnimation()
{
	if(GetSprite()->GetFlipbook() == IdleAnimation)
		return EAnimationsHunter::IDLE;
	else if (GetSprite()->GetFlipbook() == RunningAnimation)
		return EAnimationsHunter::RUN;
	else if (GetSprite()->GetFlipbook() == JumpStart)
		return EAnimationsHunter::JUMPSTART;
	else if (GetSprite()->GetFlipbook() == JumpLoop)
		return EAnimationsHunter::JUMPLOOP;
	else if (GetSprite()->GetFlipbook() == JumpFallingLoop)
		return EAnimationsHunter::FALLING;
	else if (GetSprite()->GetFlipbook() == JumpOnlanded)
		return EAnimationsHunter::ONLANDED;
	else if (GetSprite()->GetFlipbook() == AttackOne)
		return EAnimationsHunter::ATKONE;
	else if (GetSprite()->GetFlipbook() == AttackTwo)
		return EAnimationsHunter::ATKTWO;
	else if (GetSprite()->GetFlipbook() == AttackThree)
		return EAnimationsHunter::ATKTHREE;
	else if (GetSprite()->GetFlipbook() == Dash)
		return EAnimationsHunter::DASH;
	else if (GetSprite()->GetFlipbook() == HitPlayer)
		return EAnimationsHunter::HIT;
	else 
		return EAnimationsHunter::IDLE;
}


void AHunterCharacter::UpdateAnimation()
{
	if (DamageHunter) {
		USlaneFunctionLibrary::SetAnimation(this, HitPlayer, true, false);
	}
	else if (isDash) {
		USlaneFunctionLibrary::SetAnimation(this, Dash, false, false);
	}
	else if (isAttack) {
		//AttackEvent();
		AttackFunction();
	}
	else if (isOnLandedAnimation) {
		if (USlaneFunctionLibrary::AnimationNotify(this, JumpOnlanded, 2))
			isOnLandedAnimation = false;
	}
	else if (GetCharacterMovement()->IsFalling()) {
		if (USlaneFunctionLibrary::AnimationNotify(this, JumpStart, 2))
			USlaneFunctionLibrary::SetAnimation(this, JumpLoop, false, false);
		else if (GetCharacterMovement()->Velocity.Z < 0)
			USlaneFunctionLibrary::SetAnimation(this, JumpFallingLoop, true, false);
	}
	else {
		const FVector PlayerVelocity = GetVelocity();
		const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

		UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
		if (GetSprite()->GetFlipbook() != DesiredAnimation)
		{
			USlaneFunctionLibrary::SetAnimation(this, DesiredAnimation, true, false);
		}

	}
}

void AHunterCharacter::UpdateRotationHunter()
{
	if (isMoveRight){
		SetActorRotation(FRotator(0.0, 0.0f, 0.0f));
	}
	else {
		SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	}	
}

void AHunterCharacter::MoveRight(float AxisValue)
{
	if (isAttack == false) {
		if (AxisValue > 0.1f) {
			isMoveRight = true;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
		else if (AxisValue < -0.1f) {
			isMoveRight = false;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
	}
	
}

void AHunterCharacter::JumpPlayer()
{
	if (isAttack == false && isJump == false) {
		Jump();
		//isJump = true;
		if (GetCharacterMovement()->CanEverJump() == true) {
			isOnLandedAnimation = false;
			USlaneFunctionLibrary::SetAnimation(this, JumpStart, false, false);
		}
	}
}

void AHunterCharacter::StopJumpPlayer()
{
	StopJumping();
}

void AHunterCharacter::AttackHunter()
{
	if (AttackTrigger == 0 && DamageHunter == false) {
		isAttack = true;
		AttackTrigger = 1;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, "acionou");
	}

	if (AttackTrigger == 1) {
		if (CountAttack == 0) {
			USlaneFunctionLibrary::SetAnimation(this, AttackOne, false, false);
			AttackTrigger = 2;
			CountAttack = 1;
		}
		else if (CountAttack == 1) {
			USlaneFunctionLibrary::SetAnimation(this, AttackTwo, false, false);
			AttackTrigger = 2;
			CountAttack = 2;
		}
		else if (CountAttack == 2) {
			USlaneFunctionLibrary::SetAnimation(this, AttackThree, false, false);
			AttackTrigger = 2;
			CountAttack = 3;
		}
	}
}

void AHunterCharacter::AttackFunction()
{
	UPaperFlipbook* FrameAttack = GetSprite()->GetFlipbook();

	if (USlaneFunctionLibrary::AnimationNotify(this, FrameAttack, 4)) {
		AttackTrigger = 1;
		//HitBoxReset();
		if (GetSprite()->GetPlaybackPositionInFrames() == 6) {
			ResetAttackHunter();
		}
	}

}

void AHunterCharacter::ResetAttackHunter()
{
	AttackTrigger = 0;
	CountAttack = 0;
	isAttack = false;
	isOnLandedAnimation = false;
}


void AHunterCharacter::ApplyDamage_Implementation(FVector ActorLocation, float Value)
{
	Super::ApplyDamage_Implementation(ActorLocation, Value);
	ResetAttackHunter();
}


