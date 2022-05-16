// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraSideScroller.generated.h"

UCLASS()
class SLANEWARRIORS_API ACameraSideScroller : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;
	


public:	
	// Sets default values for this actor's properties
	ACameraSideScroller();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	AActor* ActorFollow;

	//Variables editblueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float DeadZoneZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float MaxZoneZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float MinZoneZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float MaxZoneX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float MinZoneX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float OffsetCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float LeftRightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	FRotator RotationCameraYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	float OverTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings")
	bool LeftRight;

	FTimerHandle TimerHandle;

	UFUNCTION()
	void TimerTick();

	float FollowZ;

	float FollowX;

	float XFollow();

	float ZFollow();

};
