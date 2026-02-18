// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ProjectFPS2Character.h"
#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTFPS2_API AShooterAI : public AAIController
{
	GENERATED_BODY()

protected: 
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* EnemyAIBehaviorTree;

	AProjectFPS2Character* PlayerCharacter;
	AProjectFPS2Character* MyCharacter;

	void StartBehaviorTree(AProjectFPS2Character* Player);
};
