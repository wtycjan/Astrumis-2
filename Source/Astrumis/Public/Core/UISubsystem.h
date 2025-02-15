// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UISubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API UUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUISubsystem() { }
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
};
