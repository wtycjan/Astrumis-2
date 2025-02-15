// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SubtitleData.h"
#include "SubtitleSettings.h"
#include "ConversationData.h"
#include "SubtitlesSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API USubtitlesSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Artractive")
	TObjectPtr<USubtitleSettings> Settings;
	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayDialogue(USoundCue* audio, APlayerController* playerController);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayConversation(TSubclassOf<class UConversationData> conversation, APlayerController* playerController);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSubtitleData& GetSubtitleForAudio(USoundCue* audio) const;
};
