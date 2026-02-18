// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectFPS2GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectFPS2Character.h"
#include "ShooterAI.h"

AProjectFPS2GameMode::AProjectFPS2GameMode()
{
	// stub
}

void AProjectFPS2GameMode::BeginPlay()
{
	Super::BeginPlay();
	AProjectFPS2Character* Player = Cast<AProjectFPS2Character>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	TArray<AActor*> ShooterAIActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), ShooterAIActors);
	/*for (int32 LoopIndex = 0; LoopIndex < ShooterAIActors.Num(); LoopIndex++)
	{
		AActor* ShooterAIActor = ShooterAIActors[LoopIndex];
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);
		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
		}
	}*/

	for (AActor* ShooterAIActor : ShooterAIActors)
	{
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);
		if (ShooterAI)
		{
			ShooterAI->StartBehaviorTree(Player);
		}
	}

}
