// Fill out your copyright notice in the Description page of Project Settings.


#include "SlaneFunctionLibrary.h"
#include "Components/BoxComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperCharacter.h"

bool USlaneFunctionLibrary::isOverlapBox(UBoxComponent* boxCollision, AActor* actor)
{
	FVector BoxLocationX = FVector(boxCollision->GetComponentLocation().X, 0.0f, 0.0f);
	FVector ActorLocationX = FVector(actor->GetActorLocation().X, 0.0f, 0.0f);
	float BoxSizeX = boxCollision->GetScaledBoxExtent().X;

	FVector BoxLocationZ = FVector(0.0f, 0.0f, boxCollision->GetComponentLocation().Z);
	FVector ActorLocationZ = FVector(0.0f, 0.0f, actor->GetActorLocation().Z);
	float BoxSizeZ = boxCollision->GetScaledBoxExtent().Z;

	float DistanceX = FVector::Dist(BoxLocationX, ActorLocationX);
	float DistanceZ = FVector::Dist(BoxLocationZ, ActorLocationZ);

	if (DistanceX < BoxSizeX && DistanceZ < BoxSizeZ) {
		return true;
	}
	else {
		return false;
	}
}


void USlaneFunctionLibrary::SetAnimation(UPaperFlipbookComponent* Flipbook, UPaperFlipbook* Animation, bool NewLooping, bool PlayFromStart)
{
	Flipbook->SetFlipbook(Animation);
	Flipbook->SetLooping(NewLooping);
	if (PlayFromStart) {
		Flipbook->PlayFromStart();
	}
	else {
		Flipbook->Play();
	}
}

bool USlaneFunctionLibrary::AnimationNotify(UPaperFlipbookComponent* Flipbook, UPaperFlipbook* Animation, int frame)
{
	if (Flipbook->GetFlipbook() == Animation && Flipbook->GetPlaybackPositionInFrames() >= frame)
		return true;
	else
		return false;
}



