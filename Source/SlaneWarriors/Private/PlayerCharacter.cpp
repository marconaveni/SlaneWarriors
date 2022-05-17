// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

/*-----------------------------------------------------
Character class Base Slanewarriors
------------------------------------------------------*/
APlayerCharacter::APlayerCharacter()
{
	SpriteParticle = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Particle"));

	ParticleFootStep = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FootStep"));

	ParticleOnlanded = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Onlanded"));

	BouncingOffCorners = CreateDefaultSubobject<UBoxComponent>(TEXT("BouncingOff"));
	BouncingOffCorners->SetBoxExtent(FVector(62.0f, 10.f, 85.0f));
	BouncingOffCorners->SetCollisionProfileName(TEXT("BouncingOffCorners"));
	BouncingOffCorners->SetupAttachment(RootComponent);


	GetCharacterMovement()->GravityScale = 4.6f;
	GetCharacterMovement()->MaxWalkSpeed = 900.0f;
	GetCharacterMovement()->MaxWalkSpeedCrouched = 600.0f;
	GetCharacterMovement()->JumpZVelocity = 1500.0f;
	GetCharacterMovement()->AirControl = 0.8f;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true; // behavior on the edge of a ledge versus inclines by setting this to true or false
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	BouncingOffCorners->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapBegin);
	BouncingOffCorners->OnComponentEndOverlap.AddDynamic(this, &APlayerCharacter::OnOverlapEnd);

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &APlayerCharacter::TimerHandleTick, 0.016f, true, 0.1f);
	SpriteParticle->SetLooping(false);
}

void APlayerCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);
}

void APlayerCharacter::TimerHandleTick()
{
	//set Bouncing off corners
	if (CollisionBouncingOffCorners) {
		GetCharacterMovement()->FallingLateralFriction = 100.0f;
		GetCharacterMovement()->BrakingDecelerationFalling = 100.0f;
	}
	else {
		GetCharacterMovement()->FallingLateralFriction = 0.0f;
		GetCharacterMovement()->BrakingDecelerationFalling = 0.0f;
	}

	//Set Particle Dust walk or landed
    FVector NewWorldLocation;
	if (GetCharacterMovement()->Velocity.X != 0 && GetCharacterMovement()->IsFalling() == false ){
		NewWorldLocation = FVector(GetActorLocation().X , GetActorLocation().Y - 1.0f , GetActorLocation().Z - 60.0f);
	}
	else {
		NewWorldLocation = FVector(GetActorLocation().X, GetActorLocation().Y - 50.0f, GetActorLocation().Z - 60.0f);
	}
	ParticleFootStep->SetWorldLocation(NewWorldLocation, false, nullptr, ETeleportType::None);

	if (!GetCharacterMovement()->IsFalling()) {
		NewWorldLocation = FVector(GetActorLocation().X, GetActorLocation().Y + 1.0f, GetActorLocation().Z - 75.0f);
		ParticleOnlanded->SetWorldLocation(NewWorldLocation, false, nullptr, ETeleportType::None);
	}
}

void APlayerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this))
	{
		CollisionBouncingOffCorners = true;
	}
}

void APlayerCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this))
	{
		CollisionBouncingOffCorners = false;
	}
}


//Interfaces Implementations
void APlayerCharacter::ApplyDamage_Implementation(FVector ActorLocation, float Value)
{
	ApplyDamageCharacter(ActorLocation, Value); //event called blueprint
}
