// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SequencerNode.h"
#include "Components/ActorComponent.h"
#include "SequencePath.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OFFWORLDINVADER_API USequencePath : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	int nodeAmount;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	TArray<USequencerNode*> nodes;

public:	
	// Sets default values for this component's properties
	USequencePath();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void UpdateNodeAmount();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
