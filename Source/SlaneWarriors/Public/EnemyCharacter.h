// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "InteractInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SLANEWARRIORS_API AEnemyCharacter : public APaperCharacter, public IInteractInterface
{
	GENERATED_BODY()

public:

	AEnemyCharacter();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* pointer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UPaperFlipbookComponent* SpriteParticle;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Enemy")
    float Life;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Enemy")
	bool DamageEnemy;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Interfaces Implementations
	void ApplyDamage_Implementation(FVector ActorLocation, float Value);

private:

	void UpdateRotation();
	
};
