// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SequencePath.h"
#include "Containers/Array.h"
#include "PathSequencer.generated.h"


//UFUNCTION([specifier1=setting1, specifier2, ...], [meta(key1="value1", key2, ...)])
//ReturnType FunctionName([Parameter1, Parameter2, ..., ParameterN1=DefaultValueN1, ParameterN2=DefaultValueN2]) [const];



USTRUCT(BlueprintType) struct FSequenceStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	int EnemySpawnAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	float EnemySpawnInterval;
		
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
    TArray<FVector> sequences;
};

USTRUCT(BlueprintType) struct FMainStruct
{
	GENERATED_USTRUCT_BODY()
		
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
    TArray<FSequenceStruct> sequences;
};

UCLASS()
class OFFWORLDINVADER_API APathSequencer : public AActor
{
	GENERATED_BODY()

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	//int sequenceAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	FMainStruct sequenceStruct;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	//TArray<FVector> sequence;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	//char sequenceName;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateaccess = "true"))
	//TArray<USequencePath*> sequences;
	
	
	
	//UFUNCTION(BlueprintCallable, meta = (AllowPrivateaccess = "true"))
	//void SequencingFunc();
	
public:	
	// Sets default values for this actor's properties
	APathSequencer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void UpdateSequenceAmount();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
