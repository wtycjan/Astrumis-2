// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MinigameEnums.h"
#include "Utils/DataStructures.h"
#include "MinigameDataStructures.h"
#include "MinigameSettings.generated.h"

UCLASS()
class ASTRUMIS_API UMinigameSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GuitarHero")
	TMap<EMinigameDifficulty, FFloatRange> CircleSpawningTimerPerDifficulty;

	//Speed = DeltaTime / THIS
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GuitarHero")
	TMap<EMinigameDifficulty, float> CircleMovementSpeedTimeDividerPerDifficulty;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GuitarHero")
	TMap<EMinigameDifficulty, int> CirclesSpawnedPerDifficulty;

	//Percentages of slider values
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GuitarHero")
	FFloatRange CirclePressAcceptanceRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Passwords")
	TMap<FString, int> RandomPasswordCountPerMapName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Labyrinth")
	TArray<FIntegerArray> PointCoordinatesPerMaze;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Labyrinth")
	TArray<FMazeTraversalArray> TraversalOptionsPerMaze;
};
