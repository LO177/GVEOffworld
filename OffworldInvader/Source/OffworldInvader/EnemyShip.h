// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyShip.generated.h"

UCLASS()
class OFFWORLDINVADER_API AEnemyShip : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyShip();

	void DestroyShip();
	void SpawnExplosion();
	void PlayExplosionEffect();
	void MoveToTargetNode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float moveSpeed;

	int nodeTarget;
	FVector nodeTargetLocation;
};
