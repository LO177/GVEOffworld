// Fill out your copyright notice in the Description page of Project Settings.


#include "PathSequencer.h"

// Sets default values
APathSequencer::APathSequencer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UpdateSequenceAmount();
}

// Called when the game starts or when spawned
void APathSequencer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APathSequencer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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