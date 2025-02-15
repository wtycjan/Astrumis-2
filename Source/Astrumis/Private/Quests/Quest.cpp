// Copyright © 2023 Tyci. All rights reserved.


#include "Quests/Quest.h"

bool UQuest::AreQuestRequirementsMet_Implementation() const
{
	return GetObjectiveProgressionCount() <= 0;
}

void UQuest::OnQuestStarted_Implementation()
{

}

void UQuest::OnQuestCompleted_Implementation()
{

}

void UQuest::OnQuestFailed_Implementation()
{

}

void UQuest::OnQuestSucceeded_Implementation()
{

}

void UQuest::SetWorld(UWorld* worldReference)
{
	this->World = worldReference;
}

class UWorld* UQuest::GetWorld() const
{
	return World;
}
