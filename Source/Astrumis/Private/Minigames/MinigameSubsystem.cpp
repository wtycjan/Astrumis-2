// Copyright © 2023 Tyci. All rights reserved.


#include "Minigames/MinigameSubsystem.h"

void UMinigameSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Minigame Subsystem Initialized"));
}