// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube.h"
#include "SlaneFunctionLibrary.h"

// Sets default values
ACube::ACube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	rotate = 0.f;

}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator newrotate = GetActorRotation();
	newrotate.Yaw += rotate;
	SetActorRotation(newrotate);
	
}

