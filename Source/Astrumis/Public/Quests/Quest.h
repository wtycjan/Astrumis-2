// Copyright © 2023 Tyci. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Quest.generated.h"

UCLASS(Abstract, Blueprintable)
class ASTRUMIS_API UQuest : public UObject
{
	GENERATED_BODY()

private:
	//World reference is need since this UObject is never created in game, so default GetWorld() returns null.
	UWorld* World;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UQuest> NextQuest;

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintPure)
	bool AreQuestRequirementsMet() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent)
	int GetObjectiveProgressionCount() const;

	UFUNCTION(BlueprintNativeEvent)
	void OnQuestStarted();

	UFUNCTION(BlueprintNativeEvent)
	void OnQuestCompleted();

	UFUNCTION(BlueprintNativeEvent)
	void OnQuestFailed();

	UFUNCTION(BlueprintNativeEvent)
	void OnQuestSucceeded();

	void SetWorld(UWorld* worldReference);
	virtual class UWorld* GetWorld() const override;
};
