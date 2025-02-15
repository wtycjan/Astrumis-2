// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayUtilsLibrary.generated.h"

UCLASS()
class ASTRUMIS_API UGameplayUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utils|Gameplay")
	static bool AreCapsLocked();
};
