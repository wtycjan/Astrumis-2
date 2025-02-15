// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MinigameSettings.h"
#include "MinigameSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API UMinigameSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<UMinigameSettings> Settings;

public:
	UMinigameSubsystem() { }
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
};
