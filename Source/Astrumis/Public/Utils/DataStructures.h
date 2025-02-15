// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "DataStructures.generated.h"

USTRUCT(BlueprintType)
struct ASTRUMIS_API FIntegerArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> Integers;
};