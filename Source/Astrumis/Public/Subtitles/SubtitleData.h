// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundCue.h"
#include "SubtitleData.generated.h"

USTRUCT(BlueprintType)
struct ASTRUMIS_API FSubtitleData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundCue* DialogueAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SpeakerName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SpokenText;
};