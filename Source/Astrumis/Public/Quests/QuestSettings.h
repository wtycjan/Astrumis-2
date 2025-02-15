// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Quest.h"
#include "QuestSettings.generated.h"

UCLASS()
class ASTRUMIS_API UQuestSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<TSubclassOf<class UQuest>> Quests;
};
