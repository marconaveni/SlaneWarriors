// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Components/SphereComponent.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	DamageEnemy = false;

	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

	pointer = CreateDefaultSubobject<USphereComponent>(TEXT("Arch"));
	pointer->InitSphereRadius(9.0f);

	SpriteParticle = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Particle"));
}

void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateRotation();
}


void AEnemyCharacter::ApplyDamage_Implementation(FVector ActorLocation, float Value)
{
	//apply damage code
}

void AEnemyCharacter::UpdateRotation()
{
	if (DamageEnemy == false) {
		const FVector PlayerVelocity = GetVelocity();
		float TravelDirection = PlayerVelocity.X;
		
		if (TravelDirection < 0.0f) {
			SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f) {
			SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
			
		}
	}

}
