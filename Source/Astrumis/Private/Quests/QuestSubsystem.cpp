// Copyright © 2023 Tyci. All rights reserved.


#include "Quests/QuestSubsystem.h"
#include "Quests/Quest.h"

void UQuestSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Quests Subsystem Initialized"));
}

void UQuestSubsystem::RefreshHud()
{
	RefreshQuestHud.Broadcast();
}

bool UQuestSubsystem::TryCompleteQuest(TSubclassOf<class UQuest> quest)
{
	if (!CurrentQuests.Contains(quest)) return false;

	UQuest* questReference = Cast<UQuest>(quest->GetDefaultObject());
	bool bSuccess = questReference->AreQuestRequirementsMet();
	if (bSuccess)
	{
		questReference->OnQuestSucceeded();
	}
	else
	{
		questReference->OnQuestFailed();
	}
	questReference->OnQuestCompleted();

	int indexToRemove = CurrentQuests.IndexOfByKey(quest);
	CurrentQuests.RemoveAt(indexToRemove);

	if (questReference->NextQuest != nullptr)
	{
		StartQuest(questReference->NextQuest);
	}
	RefreshHud();
	return bSuccess;
}

void UQuestSubsystem::StartQuest(TSubclassOf<class UQuest> quest)
{
	UQuest* questReference = Cast<UQuest>(quest->GetDefaultObject());
	questReference->OnQuestStarted();
	CurrentQuests.Add(quest);
	RefreshHud();
}

void UQuestSubsystem::SetupQuests()
{
	for (auto& quest : Settings->Quests)
	{
		quest->GetDefaultObject<UQuest>()->SetWorld(GetWorld());
	}
}

void UQuestSubsystem::ClearQuests()
{
	CurrentQuests.Empty();
	RefreshHud();
}

bool UQuestSubsystem::IsQuestActive(TSubclassOf<class UQuest> quest) const
{
	return CurrentQuests.Contains(quest);
}

const TArray<UQuest*> UQuestSubsystem::GetAllCurrentQuests() const
{
	TArray<UQuest*> questReferences;
	for (const auto& quest : CurrentQuests)
	{
		questReferences.Add(Cast<UQuest>(quest->GetDefaultObject()));
	}
	return questReferences;
}
