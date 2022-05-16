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

void USlaneFunctionLibrary::SetAnimation(APaperCharacter* PaperCharacter, UPaperFlipbook* Animation, bool NewLooping, bool PlayFromStart)
{
	if (PaperCharacter != nullptr)
	{
		PaperCharacter->GetSprite()->SetFlipbook(Animation);
		PaperCharacter->GetSprite()->SetLooping(NewLooping);
		if (PlayFromStart) {
			PaperCharacter->GetSprite()->PlayFromStart();
		}
		else {
			PaperCharacter->GetSprite()->Play();
		}
	}
}

bool USlaneFunctionLibrary::AnimationNotify(APaperCharacter* PaperCharacter, UPaperFlipbook* Animation, int frame)
{
	if (PaperCharacter->GetSprite()->GetFlipbook() == Animation && PaperCharacter->GetSprite()->GetPlaybackPositionInFrames() >= frame)
		return true;
	else
		return false;
}

