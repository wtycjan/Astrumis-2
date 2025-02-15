// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EMinigameType : uint8
{
	Labyrinth,
	Passwords
};

UENUM(BlueprintType)
enum class EMinigameDifficulty : uint8
{
	Easy,
	Medium,
	Hard
};

UENUM(BlueprintType)
enum class ELabyrinthDirection : uint8
{
	Up,
	Down,
	Left,
	Right
};