// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShip.h"

// Sets default values
AEnemyShip::AEnemyShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	moveSpeed = 10.f;
}

// Called when the game starts or when spawned
void AEnemyShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyShip::MoveToTargetNode()
{
	if(this->GetActorLocation() != nodeTargetLocation)
	{
		//move towards nodeTargetLocation at moveSpeed speed
	}
}

void AEnemyShip::DestroyShip()
{
	this->Destroy();
}

void AEnemyShip::SpawnExplosion()
{
	
}

void AEnemyShip::PlayExplosionEffect()
{
	
}