// Copyright © 2023 Tyci. All rights reserved.


#include "Subtitles/SubtitlesSubsystem.h"

const FSubtitleData& USubtitlesSubsystem::GetSubtitleForAudio(USoundCue* audio) const
{
	return *Settings->Subtitles.FindByPredicate([audio](const auto& subtitle)
	{
		return subtitle.DialogueAudio == audio;
	});
}
