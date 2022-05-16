// Fill out your copyright notice in the Description page of Project Settings.


#include "ElvenlinCharacter.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SphereComponent.h"
#include "SlaneFunctionLibrary.h"

AElvenlinCharacter::AElvenlinCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	isAttackElvenlin = false;
	isMoveRightElvenlin = true;

	HitBoxBow = CreateDefaultSubobject<USphereComponent>(TEXT("Arch"));
	HitBoxBow->InitSphereRadius(9.0f);
	HitBoxBow->SetupAttachment(RootComponent);

}

void AElvenlinCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(eTimerHandle, this, &AElvenlinCharacter::TimerTick, 0.016f, true, 0.1f);
}

void AElvenlinCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateRotationElvenlin();
}

void AElvenlinCharacter::TimerTick()
{
	UpdateAnimation();
	TickedEvent();
}

void AElvenlinCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(InputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &AElvenlinCharacter::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AElvenlinCharacter::JumpPlayer);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AElvenlinCharacter::StopJumpPlayer);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AElvenlinCharacter::AttackBow);
}

void AElvenlinCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	DamageElvenlin = false;
	if (isAttackElvenlin == false) {
		USlaneFunctionLibrary::SetAnimation(this, JumpOnlanded, false, true);
	}
}




void AElvenlinCharacter::UpdateAnimation()
{
	if (DamageElvenlin) {
		USlaneFunctionLibrary::SetAnimation(this, HitPlayer, true, false);
	}
	else if (isAttackElvenlin) {
		if (GetSprite()->GetFlipbook() == Attack) {
			if (USlaneFunctionLibrary::AnimationNotify(this, Attack, 5)) {
				isAttackElvenlin = false;
			}
		}
		else {
			USlaneFunctionLibrary::SetAnimation(this, Attack, true, false);
		}
	}
	else if (USlaneFunctionLibrary::AnimationNotify(this, JumpOnlanded, 1) == false && GetSprite()->GetFlipbook() == JumpOnlanded) {

	}
	else if (GetCharacterMovement()->IsFalling()) {
		if (GetCharacterMovement()->Velocity.Z < 0)
			USlaneFunctionLibrary::SetAnimation(this, JumpFallingLoop, true, false);
		else {
			USlaneFunctionLibrary::SetAnimation(this, JumpLoop, true, false);
		}
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

void AElvenlinCharacter::UpdateRotationElvenlin()
{

	if (isMoveRightElvenlin)
	{
		SetActorRotation(FRotator(0.0, 0.0f, 0.0f));
	}
	else
	{
		SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	}

}

void AElvenlinCharacter::MoveRight(float AxisValue)
{
	if (isAttackElvenlin == false) {
		if (AxisValue > 0.1f) {
			isMoveRightElvenlin = true;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
		else if (AxisValue < -0.1f) {
			isMoveRightElvenlin = false;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
		
	}	
}

void AElvenlinCharacter::JumpPlayer()
{
	Jump();
}

void AElvenlinCharacter::StopJumpPlayer()
{
	StopJumping();
}

void AElvenlinCharacter::AttackBow()
{
	if (isAttackElvenlin == false) {
		isAttackElvenlin = true;
	}
}
