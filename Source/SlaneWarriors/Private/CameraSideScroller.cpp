// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraSideScroller.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/LatentActionManager.h"


// Sets default values
ACameraSideScroller::ACameraSideScroller()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetConstraintAspectRatio(true);



	DeadZoneZ = 600.f;
	MaxZoneZ = 100000.f;
	MinZoneZ = -100000.f;
	MaxZoneX = 100000.f;
	MinZoneX = -100000.f;
	OffsetCamera = 2000.f;
    LeftRightOffset = 0.f;
    RotationCameraYaw = FRotator(0.f,-90.f,0.f);
    OverTime = 0.16f;
    LeftRight = true;
    FollowZ = 0.f;
}

// Called when the game starts or when spawned
void ACameraSideScroller::BeginPlay()
{
	Super::BeginPlay();

	//Find the actor that handles control for the local player.
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

	//Smoothly transition to our actor on begin play.
	OurPlayerController->SetViewTargetWithBlend(this, 0.f);


	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ACameraSideScroller::TimerTick, 0.016f, true, 0.1f);
	
}

// Called every frame
void ACameraSideScroller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ACameraSideScroller::TimerTick()
{
	
	if (ActorFollow != nullptr)
	{
		LeftRightOffset = XFollow();
		FollowX = ActorFollow->GetActorLocation().X + LeftRightOffset;
		FollowX = FMath::Clamp(FollowX, MinZoneX, MaxZoneX);
		FollowZ = FMath::Clamp(ZFollow(), MinZoneZ, MaxZoneZ);

		FLatentActionInfo LatentInfo;
		LatentInfo.CallbackTarget = this;
		UKismetSystemLibrary::MoveComponentTo(Camera, FVector(FollowX, OffsetCamera, FollowZ),RotationCameraYaw, false, false, OverTime, false, EMoveComponentAction::Move, LatentInfo);
		
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, .016f, FColor::Red, "Error: select Actor to Follow");
	}

}

float ACameraSideScroller::XFollow()
{
	if (LeftRight) {
		LeftRightOffset = LeftRightOffset + 10;	
	}
	else {
		LeftRightOffset = LeftRightOffset - 10;
	}
	
	return  FMath::Clamp(LeftRightOffset, -400, 400);
	
}

float ACameraSideScroller::ZFollow()
{
	if ((ActorFollow->GetActorLocation().Z - DeadZoneZ) > GetActorLocation().Z) {
		return ActorFollow->GetActorLocation().Z - DeadZoneZ;
	}
	else if ((ActorFollow->GetActorLocation().Z + DeadZoneZ) < GetActorLocation().Z) {
		return ActorFollow->GetActorLocation().Z + DeadZoneZ;
	}
	else {
		return FollowZ;
	}
	
}

