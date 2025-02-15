// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SubtitleData.h"
#include "ConversationData.h"
#include "SubtitleSettings.generated.h"

UCLASS()
class ASTRUMIS_API USubtitleSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FSubtitleData> Subtitles;
};
