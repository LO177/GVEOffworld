// Copyright Epic Games, Inc. All Rights Reserved.

#include "OffworldInvaderPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

AOffworldInvaderPawn::AOffworldInvaderPawn()
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/Flying/Meshes/UFO.UFO"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	// Create static mesh component
	
	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh0"));
	//RootMesh->SetStaticMesh(ConstructorStatics.RootMesh.Get());
	RootComponent = RootMesh;
	
	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh0"));
	PlaneMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());	// Set static mesh
	//RootComponent = PlaneMesh;

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);	// Attach SpringArm to RootComponent
	SpringArm->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	SpringArm->SocketOffset = FVector(0.f,0.f,60.f);
	SpringArm->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm->CameraLagSpeed = 15.f;

	// Create camera component 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);	// Attach the camera
	Camera->bUsePawnControlRotation = false; // Don't rotate camera with controller

	// Set handling parameters
	Acceleration = 500.f;
	TurnSpeed = 100.f;
	MaxSpeed = 8000.f;
	MinSpeed = 500.f;
	CurrentForwardSpeed = 500.f;

	CurrentXYSpeed = 0.f;
	CurrentZSpeed = 0.f;
}

void AOffworldInvaderPawn::Tick(float DeltaSeconds)
{
	// Calculate change in rotation this frame
	FRotator DeltaRotation;
	//DeltaRotation.Pitch = CurrentPitchSpeed * DeltaSeconds;
	//DeltaRotation.Yaw = CurrentYawSpeed * DeltaSeconds;
	//DeltaRotation.Roll = CurrentRollSpeed * DeltaSeconds;

	// Roll dependant on Yaw
	//const FRotator LocalRotate = FRotator(0.0f, DeltaRotation.Yaw, DeltaRotation.Roll);
	const FVector LocalMove = FVector(0.f, CurrentXYSpeed, CurrentZSpeed);//FRotationMatrix(LocalRotate * CurrentForwardSpeed * DeltaSeconds).GetUnitAxis(EAxis::X);//FVector(CurrentForwardSpeed * DeltaSeconds, 0.f, 0.f);

	// Move plan forwards (with sweep so we stop when we collide with things)
	RootMesh->AddLocalOffset(LocalMove, true);

	/*if(HorizontalDirection > 0)
		DeltaRotation.Yaw = FMath::FInterpTo(PlaneMesh->GetRelativeRotation().Yaw, 45.f, GetWorld()->GetDeltaSeconds(), 2.f);
	else if(HorizontalDirection < 0)
		DeltaRotation.Yaw = FMath::FInterpTo(PlaneMesh->GetRelativeRotation().Yaw, -45.f, GetWorld()->GetDeltaSeconds(), 2.f);*/

	/*if(HorizontalDirection > 0)
		DeltaRotation.Yaw = FMath::Lerp(45.f, -45.f, PlaneMesh->GetRelativeRotation().Yaw);
	else if(HorizontalDirection < 0)
		DeltaRotation.Yaw = FMath::Lerp(-45.f, 45.f, PlaneMesh->GetRelativeRotation().Yaw);*/
	//if(PlaneMesh->GetRelativeRotation().Yaw < 45.f && PlaneMesh->GetRelativeRotation().Yaw > -45.f)
	HorizontalDirection = LerpNormalise(HorizontalDirection);
	VerticalDirection = LerpNormalise(VerticalDirection);
	
	DeltaRotation.Yaw = (FMath::Lerp(0.f, 22.5f, HorizontalDirection) *2);
	DeltaRotation.Pitch = (FMath::Lerp(0.f, 22.5f, VerticalDirection) *2);
	if(HorizontalDirection == 0.5f)
	{
		DeltaRotation.Yaw = 0.f;
	}
	if(VerticalDirection == 0.5f)
	{
		DeltaRotation.Pitch = 0.f;
	}
	
	DeltaRotation.Roll = 0.f;
	/*else if(PlaneMesh->GetRelativeRotation().Yaw >= 45.f || PlaneMesh->GetRelativeRotation().Yaw <= -45.f)
		DeltaRotation.Yaw = FMath::Lerp(45.f, -45.f, HorizontalDirection);*/

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("GetRelativeRotation Yaw: %f"), PlaneMesh->GetRelativeRotation().Yaw));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("GetRelativeRotation Pitch: %f"), PlaneMesh->GetRelativeRotation().Pitch));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("GetRelativeRotation Roll: %f"), PlaneMesh->GetRelativeRotation().Roll));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("HorizontalDirection: %f"), HorizontalDirection));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("DeltaRotation Yaw: %f"), DeltaRotation.Yaw));

	///
	
	//PlaneMesh->AddLocalRotation(DeltaRotation);

	PlaneMesh->SetRelativeRotation_Direct(DeltaRotation);

	/*PlaneMesh->GetRelativeLocation();
	
	PlaneMesh->GetRelativeRotation().Yaw;
	PlaneMesh->GetRelativeRotation().Pitch;

	FRotator foundTargetRotation = UKismetArrayLibrary::FindLookAtRotation(PlaneMesh->GetRelativeLocation(), );

	PlaneMesh

	PlaneMesh->AddLocalRotation(DeltaRotation);*/
	
	// Rotate plane
	/*if(PlaneMesh->GetRelativeRotation().Yaw < 45.f && PlaneMesh->GetRelativeRotation().Yaw > -45.f){
		PlaneMesh->AddLocalRotation(DeltaRotation);
	}
	else{
		//DeltaRotation.Pitch = 0.f;
		DeltaRotation.Yaw = 0.f;
		//DeltaRotation.Roll = 0.f;

		//DeltaRotation.Pitch = CurrentPitchSpeed * DeltaSeconds;
		DeltaRotation.Yaw = CurrentYawSpeed * DeltaSeconds;
		//DeltaRotation.Roll = CurrentRollSpeed * DeltaSeconds;
		
		if(HorizontalDirection < 0 && PlaneMesh->GetRelativeRotation().Yaw >= 45.f){
			PlaneMesh->AddLocalRotation(DeltaRotation);
		}
		else if(HorizontalDirection > 0 && PlaneMesh->GetRelativeRotation().Yaw <= -45.f){
			PlaneMesh->AddLocalRotation(DeltaRotation);
		}
		else{
			FRotator clampedRotation;

			clampedRotation.Pitch = PlaneMesh->GetRelativeRotation().Pitch * DeltaRotation.Pitch;
			clampedRotation.Yaw = PlaneMesh->GetRelativeRotation().Yaw >= 45.f ? (45.f) : (-45.f);
			clampedRotation.Roll = PlaneMesh->GetRelativeRotation().Roll * DeltaRotation.Roll;
		
			PlaneMesh->SetRelativeRotation_Direct(clampedRotation);
		}
	}*/

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Hor/Yaw Rotation: %f"), PlaneMesh->GetRelativeRotation().Yaw));
		
	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void AOffworldInvaderPawn::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along the surface when we collide.
	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));
}


void AOffworldInvaderPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    // Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("Thrust", this, &AOffworldInvaderPawn::ThrustInput);
	PlayerInputComponent->BindAxis("MoveUp_MouseY", this, &AOffworldInvaderPawn::MoveUpInput);
	PlayerInputComponent->BindAxis("MoveRight_MouseX", this, &AOffworldInvaderPawn::MoveRightInput);
}

void AOffworldInvaderPawn::ThrustInput(float Val)
{
	// Is there any input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
	// If input is not held down, reduce speed
	float CurrentAcc = bHasInput ? (Val * Acceleration) : (-0.5f * Acceleration);
	// Calculate new speed
	float NewForwardSpeed = CurrentForwardSpeed + (GetWorld()->GetDeltaSeconds() * CurrentAcc);
	// Clamp between MinSpeed and MaxSpeed
	CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);
}

void AOffworldInvaderPawn::MoveUpInput(float Val)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Ver Val: %f"), Val));
	VerticalDirection = Val;
	
	// Target pitch speed is based in input
	float TargetPitchSpeed = (Val * TurnSpeed); // * -1.f

	// When steering, we decrease pitch slightly
	TargetPitchSpeed += (FMath::Abs(CurrentYawSpeed) * -0.2f);

	// Smoothly interpolate to target pitch speed
	//if(PlaneMesh->GetRelativeRotation().Pitch < 45.f && PlaneMesh->GetRelativeRotation().Pitch > -45.f)
		CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
	//else
	//	CurrentPitchSpeed = 0.f;
	
	

	// Is there any up/down input?
	bIsTurningVertically = FMath::Abs(Val) > 0.2f;

	// If turning, nothing happens
	// If not turning, roll to reverse current roll value.
	//TargetRollSpeed = NoMovementInput() ? (0.f) : (GetActorRotation().Roll * -2.f);

	if(Val > 0)
		CurrentZSpeed = 100.f;
	else if(Val < 0)
		CurrentZSpeed = -100.f;
	else
		CurrentZSpeed = 0.f;
}

void AOffworldInvaderPawn::MoveRightInput(float Val)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Hor Val: %f"), Val));
	HorizontalDirection = Val;

	// Is there any left/right input?
	bIsTurningHorizontally = FMath::Abs(Val) > 0.2f;
	
	// Target yaw speed is based on input
	float TargetYawSpeed = (Val * TurnSpeed);

	
	
	// Smoothly interpolate to target yaw speed
	//if(PlaneMesh->GetRelativeRotation().Yaw < 45.f && PlaneMesh->GetRelativeRotation().Yaw > -45.f)
		CurrentYawSpeed = FMath::FInterpTo(CurrentYawSpeed, TargetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
	//else
	//	CurrentYawSpeed = 0.f;

	//if(bIsTurningHorizontally)
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Val: %f"), Val));

	// If turning, yaw value is used to influence roll
	// If not turning, roll to reverse current roll value.
	//TargetRollSpeed = NoMovementInput() ? (CurrentYawSpeed * 0.5f) : (GetActorRotation().Roll * -2.f);

	// Smoothly interpolate roll speedB
	//CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);

	if(Val > 0)
		CurrentXYSpeed = 100.f;
	else if(Val < 0)
		CurrentXYSpeed = -100.f;
	else
		CurrentXYSpeed = 0.f;
	//(Val > 0) ? FMath::Clamp(0.0f, CurrentForwardSpeed, MaxSpeed) : FMath::Clamp(0.0f, 0.0f, 0.0f);
}

bool AOffworldInvaderPawn::NoMovementInput()
{
	if(!(bIsTurningHorizontally) && !(bIsTurningVertically))
		return false;
	else
		return true;
}

float AOffworldInvaderPawn::LerpNormalise(float valueToLerpNormalise){
	valueToLerpNormalise = (valueToLerpNormalise + 1.f) / 2.f;
	if(valueToLerpNormalise >= 1.f)
	{
		valueToLerpNormalise = 1.f;
	}
	else if(valueToLerpNormalise <= -1.f)
	{
		valueToLerpNormalise = -1.f;
	}

	return valueToLerpNormalise;
}