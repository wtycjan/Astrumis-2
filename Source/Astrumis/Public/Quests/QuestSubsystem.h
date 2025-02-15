// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "QuestSettings.h"
#include "QuestSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRefreshQuestHud);

UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UQuestSubsystem() { }
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

public:
	UPROPERTY(BlueprintAssignable, Category = "Artractive")
	FRefreshQuestHud RefreshQuestHud;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Artractive")
	TObjectPtr<UQuestSettings> Settings;

	TArray<TSubclassOf<class UQuest>> CurrentQuests;


public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Artractive")
	const TArray<UQuest*> GetAllCurrentQuests() const;

	UFUNCTION(BlueprintCallable, Category = "Artractive")
	void RefreshHud();

	UFUNCTION(BlueprintCallable, Category = "Artractive")
	bool TryCompleteQuest(TSubclassOf<class UQuest> quest);

	UFUNCTION(BlueprintCallable, Category = "Artractive")
	void StartQuest(TSubclassOf<class UQuest> quest);

	UFUNCTION(BlueprintCallable, Category = "Artractive")
	void SetupQuests();

	UFUNCTION(BlueprintCallable, Category = "Artractive")
	void ClearQuests();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Artractive")
	bool IsQuestActive(TSubclassOf<class UQuest> quest) const;
};
