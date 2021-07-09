// Fill out your copyright notice in the Description page of Project Settings.


#include "AgileEnemyShip.h"

// Sets default values
AAgileEnemyShip::AAgileEnemyShip()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//moveSpeed = 10.f;
}

// Called when the game starts or when spawned
void AAgileEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgileEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AAgileEnemyShip::MoveTowards(FVector nodePosition)
{
	
}

