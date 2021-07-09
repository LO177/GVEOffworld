// Fill out your copyright notice in the Description page of Project Settings.

#include "PathSequencer.h"
#include "EnemyShip.h"
#include "AgileEnemyShip.h"



// Sets default values
APathSequencer::APathSequencer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//UpdateSequenceAmount();

	sequenceBreakInterval = 10.f; //* DeltaTime

	World = GetWorld();
}

void APathSequencer::CacheCurrentSequenceData()
{
	currentSequenceNum = 0;
	if(sequenceStruct.sequences.Num() > 0)
	{
		currentSequence = sequenceStruct.sequences[currentSequenceNum].sequences;
		enemiesToSpawn = sequenceStruct.sequences[currentSequenceNum].EnemySpawnAmount;
	
		currentSequenceStartLocation.X = currentSequence[0].X;
		currentSequenceStartLocation.Y = currentSequence[0].Y;
		currentSequenceStartLocation.Z = currentSequence[0].Z;

		currentSequenceFirstTargetLocation.X = currentSequence[1].X;
		currentSequenceFirstTargetLocation.Y = currentSequence[1].Y;
		currentSequenceFirstTargetLocation.Z = currentSequence[1].Z;

		currentSequencSize = sequenceStruct.sequences.Num();
		
		currentSequenceEndLocation.X = currentSequence[currentSequencSize-1].X;
		currentSequenceEndLocation.Y = currentSequence[currentSequencSize-1].Y;
		currentSequenceEndLocation.Z = currentSequence[currentSequencSize-1].Z;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("warning: sequencer size is read as empty")));
	}
}

// Called when the game starts or when spawned
void APathSequencer::BeginPlay()
{
	Super::BeginPlay();

	totalSequenceAmount = sequenceStruct.sequences.Num();
	CacheCurrentSequenceData();
}

// Called every frame
void APathSequencer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ContinueSequence(DeltaTime);
	CheckSequence();
}

void APathSequencer::ContinueSequence(float DeltaTime)
{
	if(currentSequenceNum > totalSequenceAmount){
		EnemyShips.Empty();
		ConfirmVictory();
	}
	else{
		if(enemiesStillToSpawn > 0) // enemiesStillToSpawn must be set to EnemySpawnAmount
			{
				spawnCountdownTimer -= DeltaTime;
				if(spawnCountdownTimer <= 0)
				{
					
					AAgileEnemyShip* newShip = NewObject<AAgileEnemyShip>();
					FVector newShipLocation;
					FRotator newShipRotation;

					//World->SpawnActor<AAgileEnemyShip>(EnemyBlueprint, currentSequenceStartLocation, newShipRotation);
					
					newShipLocation.X = currentSequenceStartLocation.X;
					newShipLocation.Y = currentSequenceStartLocation.Y;
					newShipLocation.Z = currentSequenceStartLocation.Z;

					newShip->nodeTarget = 1;
					newShip->nodeTargetLocation.X = currentSequenceFirstTargetLocation.X;
					newShip->nodeTargetLocation.Y = currentSequenceFirstTargetLocation.Y;
					newShip->nodeTargetLocation.Z = currentSequenceFirstTargetLocation.Z;
				
					newShip->SetActorRelativeLocation(newShipLocation);
					EnemyShips.Add(newShip);

					spawnCountdownTimer = sequenceStruct.sequences[currentSequenceNum].EnemySpawnInterval;
					enemiesStillToSpawn--;
				}
			}
		else
		{
			sequenceCountdownTimer -= DeltaTime;
			if(sequenceCountdownTimer <= 0)
			{
				currentSequenceNum++;
				sequenceCountdownTimer = 10.f; // Hardcoded next sequence countdown timer after previous sequence ends
			}
			EnemyShips.Empty();
			enemiesToSpawn = sequenceStruct.sequences[currentSequenceNum].EnemySpawnAmount;
			enemiesStillToSpawn = enemiesToSpawn;
		}
	}
}

void APathSequencer::CheckSequence()
{
	for(int i = 0; i < enemiesToSpawn; i++){ // enemiesToSpawn to spawn must be set to EnemySpawnAmount
		if(EnemyShips.Num() > 0 && i < EnemyShips.Num()){
			currentEnemyShip = EnemyShips[i];

			if(currentEnemyShip->nodeTarget > sequenceStruct.sequences.Num()){
				EnemyShips[i] = nullptr;
				currentEnemyShip->Destroy();
			}
			else if(currentEnemyShip->nodeTargetLocation == sequenceStruct.sequences[currentSequenceNum].sequences[currentEnemyShip->nodeTarget]){
				currentEnemyShip->nodeTarget++;
				currentEnemyShip->nodeTargetLocation.X = sequenceStruct.sequences[currentSequenceNum].sequences[currentEnemyShip->nodeTarget].X;
				currentEnemyShip->nodeTargetLocation.Y = sequenceStruct.sequences[currentSequenceNum].sequences[currentEnemyShip->nodeTarget].Y;
				currentEnemyShip->nodeTargetLocation.Z = sequenceStruct.sequences[currentSequenceNum].sequences[currentEnemyShip->nodeTarget].Z;
			}
		}
	}
}

void APathSequencer::ConfirmVictory()
{
	
}



void APathSequencer::UpdateSequenceAmount()
{
	
	/*for(int i = 0; i < sequenceAmount; i++)
	{
		USequencePath * sequence = new USequencePath[0];
		sequences.Add(sequence);
		delete sequence;
	}*/
	//sequences.SetNum(sequenceAmount);
}

/*void APathSequencer::SequencingFunc()
{
	
}*/

/*bool APathSequencer::SequenceLooper(SequenceNode startNode, SequenceNode endNode)
{
	
}*/

 /*void UMyObject::PopulateElementClasses() {
     ElementClasses.Empty();
     ElementClasses.Emplace(TEXT("Gold"), UGoldElement::StaticClass());
     ElementClasses.Emplace(TEXT("Carbon"), UCarbonElement::StaticClass());
 
 }
 
 void UMyObject::AddElementClass(const FName& ElementName, TSubclassOf<UElement> ElementClass) {
     ElementClasses.Emplace(ElementName, ElementClass);
 
 }
 
 TSubclassOf<UElement> UMyObject::GetElementClass(const FName& ElementName) {
     if (ElementClasses.Contains(ElementName)) {
         return *ElementClasses.Find(ElementName);
 
     }
     return NULL;
 
 }
 
 UElement* UMyObject::SpawnElementClass(const FName& ElementName) {
     TSubclassOf<UElement> ElementClass = GetElementClass(ElementName);
     if (ElementClass) {
         return NewObject<UElement>(ElementClass);
 
     }
     return NULL;
 
 }
 */