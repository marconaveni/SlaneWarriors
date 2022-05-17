// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "InteractInterface.h"
#include "PlayerCharacter.generated.h"


/**
 * 
 */
UCLASS()
class SLANEWARRIORS_API APlayerCharacter : public APaperCharacter , public IInteractInterface
{
	GENERATED_BODY()

public:
	APlayerCharacter();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UParticleSystemComponent* ParticleFootStep;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UParticleSystemComponent* ParticleOnlanded;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	class UPaperFlipbookComponent* SpriteParticle;

	UPROPERTY(VisibleAnywhere, Category = "Box Capsule")
	class UBoxComponent* BouncingOffCorners;
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Character")
	float Life;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables Character")
	bool CollisionBouncingOffCorners;

	FTimerHandle TimerHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Landed(const FHitResult& Hit) override;

	//Function TimerHandle in tick
	UFUNCTION()
	void TimerHandleTick();

	//Begin Boxoverlap BouncingOffCorners
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//End Boxoverlap BouncingOffCorners
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//function called only blueprint
	UFUNCTION(BlueprintImplementableEvent)
	void ApplyDamageCharacter(FVector ActorLocation, float Value);
	
	//Interfaces Implementations
	void ApplyDamage_Implementation(FVector ActorLocation, float Value);

};
