// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubtitleData.h"
#include "ConversationData.generated.h"


UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API UConversationData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FSubtitleData> Subtitles;
};
