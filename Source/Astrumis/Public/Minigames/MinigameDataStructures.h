// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "MinigameEnums.h"
#include "MinigameDataStructures.generated.h"

USTRUCT(BlueprintType)
struct ASTRUMIS_API FMazeTraversalData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Row;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Column;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ELabyrinthDirection> Walls;
};

USTRUCT(BlueprintType)
struct ASTRUMIS_API FMazeTraversalArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMazeTraversalData> TraversalData;
};