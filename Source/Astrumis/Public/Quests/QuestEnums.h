// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EQuestType : uint8
{
	GoTo,
	Wait,
	SwitchCamera,
	Interact
};