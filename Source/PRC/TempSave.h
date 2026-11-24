#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TempSave.generated.h"

UCLASS()
class PRC_API UTempSave : public USaveGame
{
	GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Category = "Save")
    int32 OriginalScore = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Save")
    float OriginalHp = 100.f;

    UPROPERTY(BlueprintReadWrite, Category = "Save")
    TArray<FString> OrignalInventory;
};
