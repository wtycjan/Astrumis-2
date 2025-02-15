// Copyright © 2023 Tyci. All rights reserved.


#include "Core/UISubsystem.h"

void UUISubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("UI Subsystem Initialized"));
}