// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "AgileEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class OFFWORLDINVADER_API AAgileEnemyShip : public AEnemyShip
{
	GENERATED_BODY()

		
	public:	
	// Sets default values for this actor's properties
	AAgileEnemyShip();

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MoveTowards(FVector nodePosition);
};
