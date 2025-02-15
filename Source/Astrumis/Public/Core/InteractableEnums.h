// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "InteractableEnums.generated.h"

UENUM(BlueprintType)
enum class EInteractingPlayers : uint8
{
	None,
	MissionControl,
	Survivor,
	Both
};