// Fill out your copyright notice in the Description page of Project Settings.


#include "HunterCharacter.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EnemyCharacter.h"
#include "SlaneFunctionLibrary.h"
#include "EngineUtils.h"


AHunterCharacter::AHunterCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	isAttack = false;
	isMoveRight = true;
	isOnLandedAnimation = false;
	isDash = false;
	isJump = false;
	CountAttack = 0;
	ComboAttack = true;
	HitboxSwordLocation = FVector(0.0f , 0.0f , 0.0f);
	DamageHunter = false;
	AttackTrigger = 0;
	BlockHit = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	HitBoxSword = CreateDefaultSubobject<USphereComponent>(TEXT("Sword"));
	HitBoxSword->InitSphereRadius(9.0f);
	HitBoxSword->SetupAttachment(RootComponent);

}

void AHunterCharacter::BeginPlay()
{
	Super::BeginPlay();

	HitBoxSword->OnComponentEndOverlap.AddDynamic(this, &AHunterCharacter::HitSwordOnOverlapEnd);
	HitBoxSword->OnComponentBeginOverlap.AddDynamic(this, &AHunterCharacter::HitSwordOnOverlapBegin);

	GetWorld()->GetTimerManager().SetTimer(pTimerHandle, this, &AHunterCharacter::TimerTick, 0.016f, true, 0.1f);

	
}

void AHunterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateRotationHunter();
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, UKismetStringLibrary::Conv_BoolToString(isAttack));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "");




}


void AHunterCharacter::HitSwordOnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor && (OtherActor != this))
	{
	/*	if (Cast<AEnemyCharacter>(OtherActor)) {
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "overlap");
		};*/
		
	}
}

void AHunterCharacter::HitSwordOnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor) && (OtherActor != this))
	{
		//if (Cast<AEnemyCharacter>(OtherActor) != nullptr) {
		//	/*AEnemyCharacter* enemy = Cast<AEnemyCharacter>(OtherActor);
		//	enemy->ApplyDamage_Implementation(GetActorLocation(), 1.f);
		//	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "");*/
		//}
	}
}

void AHunterCharacter::TimerTick()
{
	UpdateAnimation();
	SetFrameHitBox();
	TickedEvent();
}

void AHunterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(InputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &AHunterCharacter::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AHunterCharacter::JumpPlayer);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AHunterCharacter::StopJumpPlayer);
	PlayerInputComponent->BindAction("Attack", IE_Pressed,this, &AHunterCharacter::AttackHunter);


}

void AHunterCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	AttackTrigger = 0;
	isJump = false;
	DamageHunter = false;
	CountAttack = 0;
	if (isAttack == false) {
		isOnLandedAnimation = true;
		USlaneFunctionLibrary::SetAnimation(GetSprite(), JumpOnlanded, false, true);
		ComboAttack = true;
	}
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "onlanded");

	
}



EAnimationsHunter AHunterCharacter::GetAnimation()
{
	if(GetSprite()->GetFlipbook() == IdleAnimation)
		return EAnimationsHunter::IDLE;
	else if (GetSprite()->GetFlipbook() == RunningAnimation)
		return EAnimationsHunter::RUN;
	else if (GetSprite()->GetFlipbook() == JumpStart)
		return EAnimationsHunter::JUMPSTART;
	else if (GetSprite()->GetFlipbook() == JumpLoop)
		return EAnimationsHunter::JUMPLOOP;
	else if (GetSprite()->GetFlipbook() == JumpFallingLoop)
		return EAnimationsHunter::FALLING;
	else if (GetSprite()->GetFlipbook() == JumpOnlanded)
		return EAnimationsHunter::ONLANDED;
	else if (GetSprite()->GetFlipbook() == AttackOne)
		return EAnimationsHunter::ATKONE;
	else if (GetSprite()->GetFlipbook() == AttackTwo)
		return EAnimationsHunter::ATKTWO;
	else if (GetSprite()->GetFlipbook() == AttackThree)
		return EAnimationsHunter::ATKTHREE;
	else if (GetSprite()->GetFlipbook() == Dash)
		return EAnimationsHunter::DASH;
	else if (GetSprite()->GetFlipbook() == HitPlayer)
		return EAnimationsHunter::HIT;
	else 
		return EAnimationsHunter::IDLE;
}



void AHunterCharacter::SetFrameHitBox()
{
	switch (GetAnimation())
	{
	case ATKONE:
		switch (GetSprite()->GetPlaybackPositionInFrames()){
		case 0:
			BlockHit = false;
			HitBoxReset();
			HitboxSwordLocation = FVector(131.0f, 0.0f, -48.0f);
			break;
		case 1:
			HitboxSwordLocation = FVector(185.0f, 0.0f, -52.0f);
			break;
		case 2:
			HitboxSwordLocation = FVector(320.0f, 0.0f, -20.0f);
			break;
		case 3:
			HitboxSwordLocation = FVector(181.0f, 0.0f, 19.0f);
			break;
		case 4:
			HitboxSwordLocation = FVector(162.0f, 0.0f, 20.0f);
			break;
		case 5:
			HitboxSwordLocation = FVector(132.0f, 0.0f, 40.0f);
			break;
		default:
			HitboxSwordLocation = FVector(0.0f, 0.0f, 0.0f);
			break;
		}

		Attacking();
		break;
	case ATKTWO:
		switch (GetSprite()->GetPlaybackPositionInFrames()) {
		case 0:
			BlockHit = false;
			HitBoxReset();
			HitboxSwordLocation = FVector(115.0f, 0.0f, 39.0f);
			break;
		case 1:
			HitboxSwordLocation = FVector(320.0f, 0.0f, 37.0f);
			break;
		case 2:
			HitboxSwordLocation = FVector(134.0f, 0.0f, -58.0f);
			break;
		case 3:
			HitboxSwordLocation = FVector(59.0f, 0.0f, -63.0f);
			break;
		case 4:
			HitboxSwordLocation = FVector(-27.0f, 0.0f, -71.0f);
			break;
		case 5:
			HitboxSwordLocation = FVector(-65.0f, 0.0f, -71.0f);
			break;
		default:
			HitboxSwordLocation = FVector(0.0f, 0.0f, 0.0f);
			break;
		}

		Attacking();
		break;
	case ATKTHREE:
		switch (GetSprite()->GetPlaybackPositionInFrames()) {
		case 0:
			BlockHit = false;
			HitBoxReset();
			HitboxSwordLocation = FVector(52.0f, 0.0f, 190.0f);
			break;
		case 1:
			HitboxSwordLocation = FVector(197.0f, 0.0f, 105.0f);
			break;
		case 2:
			HitboxSwordLocation = FVector(320.0f, 0.0f, -62.0f);
			break;
		case 3:
			HitboxSwordLocation = FVector(230.0f, 0.0f, -67.0f);
			break;
		case 4:
			HitboxSwordLocation = FVector(176.0f, 0.0f, -67.0f);
			break;
		case 5:
			HitboxSwordLocation = FVector(176.0f, 0.0f, -67.0f);
			break;
		default:
			HitboxSwordLocation = FVector(0.0f, 0.0f, 0.0f);
			break;
		}

		Attacking();
		break;
	default:
		HitBoxSword->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		break;
	}

	FLatentActionInfo LatentInfo;
	LatentInfo.CallbackTarget = this;
	UKismetSystemLibrary::MoveComponentTo(HitBoxSword, HitboxSwordLocation, FRotator(0.0f, 0.0f, 0.0f), false, false, 0.05f, false, EMoveComponentAction::Move, LatentInfo);
}

void AHunterCharacter::Attacking()
{
	if (BlockHit == false) {

		
		FHitResult OutHit;
		FVector start = GetActorLocation();
		FVector End = HitBoxSword->GetComponentLocation();

		FCollisionQueryParams CollisionParams; //Array de colisoes de atores

		for (TActorIterator<APlayerCharacter> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
		{
			UE_LOG(LogTemp, Warning, TEXT("atores ignorados: %s"), *ActorIterator->GetName());
			CollisionParams.AddIgnoredActor(*ActorIterator);
		}

		if (GetWorld()->LineTraceSingleByChannel(OutHit, start, End, ECC_Visibility, CollisionParams)) {
			DrawDebugLine(GetWorld(), start, End, FColor::Red);
			if (OutHit.bBlockingHit) {
				BlockHit = true;
				if (Cast<AEnemyCharacter>(OutHit.GetActor()) != nullptr) {
					
					AEnemyCharacter* enemy = Cast<AEnemyCharacter>(OutHit.GetActor());
					enemy->ApplyDamage_Implementation(GetActorLocation(), 1.f);
					AttackHitResult(OutHit);// called event blueprint

					//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::SanitizeFloat(enemy->Life));
					//DrawDebugLine(GetWorld(), OutHit.Location, End, FColor::Green);
				}
				else {
					AttackHitResult(OutHit);
					//DrawDebugLine(GetWorld(), OutHit.Location, End, FColor::Green);
				}
			}
		}

	}
}


void AHunterCharacter::UpdateAnimation()
{
	if (DamageHunter) {
		USlaneFunctionLibrary::SetAnimation(GetSprite(), HitPlayer, true, false);
	}
	else if (isDash) {
		USlaneFunctionLibrary::SetAnimation(GetSprite(), Dash, false, false);
	}
	else if (isAttack) {
		//AttackEvent();
		AttackFunction();
	}
	else if (isOnLandedAnimation) {
		if (USlaneFunctionLibrary::AnimationNotify(GetSprite(), JumpOnlanded, 2))
			isOnLandedAnimation = false;
	}
	else if (GetCharacterMovement()->IsFalling()) {
		if (USlaneFunctionLibrary::AnimationNotify(GetSprite(), JumpStart, 2))
			USlaneFunctionLibrary::SetAnimation(GetSprite(), JumpLoop, false, false);
		else if (GetCharacterMovement()->Velocity.Z < 0)
			USlaneFunctionLibrary::SetAnimation(GetSprite(), JumpFallingLoop, true, false);
	}
	else {
		const FVector PlayerVelocity = GetVelocity();
		const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

		UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
		if (GetSprite()->GetFlipbook() != DesiredAnimation)
		{
			USlaneFunctionLibrary::SetAnimation(GetSprite(), DesiredAnimation, true, false);
		}

	}
}

void AHunterCharacter::UpdateRotationHunter()
{
	if (isMoveRight){
		SetActorRotation(FRotator(0.0, 0.0f, 0.0f));
	}
	else {
		SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	}	
}

void AHunterCharacter::MoveRight(float AxisValue)
{
	if (isAttack == false) {
		if (AxisValue > 0.1f) {
			isMoveRight = true;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
		else if (AxisValue < -0.1f) {
			isMoveRight = false;
			AddMovementInput(FVector(1.f, 0.f, 0.f), AxisValue, false);
		}
	}
	
}

void AHunterCharacter::JumpPlayer()
{
	if (isAttack == false && isJump == false) {
		Jump();
		//isJump = true;
		if (GetCharacterMovement()->CanEverJump() == true) {
			isOnLandedAnimation = false;
			USlaneFunctionLibrary::SetAnimation(GetSprite(), JumpStart, false, false);
		}
	}
}

void AHunterCharacter::StopJumpPlayer()
{
	StopJumping();
}

void AHunterCharacter::AttackHunter()
{
	if (AttackTrigger == 0 && DamageHunter == false) {
		isAttack = true;
		AttackTrigger = 1;
	}

	if (AttackTrigger == 1) {
		if (CountAttack == 0) {
			USlaneFunctionLibrary::SetAnimation(GetSprite(), AttackOne, false, false);
			AttackTrigger = 2;
			CountAttack = 1;
		}
		else if (CountAttack == 1) {
			USlaneFunctionLibrary::SetAnimation(GetSprite(), AttackTwo, false, false);
			AttackTrigger = 2;
			CountAttack = 2;
		}
		else if (CountAttack == 2) {
			USlaneFunctionLibrary::SetAnimation(GetSprite(), AttackThree, false, false);
			AttackTrigger = 2;
			CountAttack = 3;
		}
	}
}

void AHunterCharacter::AttackFunction()
{
	UPaperFlipbook* FrameAttack = GetSprite()->GetFlipbook();

	if (USlaneFunctionLibrary::AnimationNotify(GetSprite(), FrameAttack, 4)) {
		AttackTrigger = 1;
		if (GetSprite()->GetPlaybackPositionInFrames() == 6) {
			ResetAttackHunter();
		}
	}

}


void AHunterCharacter::ResetAttackHunter()
{
	AttackTrigger = 0;
	CountAttack = 0;
	isAttack = false;
	isOnLandedAnimation = false;
}


void AHunterCharacter::ApplyDamage_Implementation(FVector ActorLocation, float Value)
{
	Super::ApplyDamage_Implementation(ActorLocation, Value);
	ResetAttackHunter();
}


