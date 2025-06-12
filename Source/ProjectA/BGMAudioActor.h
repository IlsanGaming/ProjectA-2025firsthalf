#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGMAudioActor.generated.h"

UCLASS()
class PROJECTA_API ABGMAudioActor : public AActor
{
    GENERATED_BODY()

public:
    ABGMAudioActor();

protected:
    virtual void BeginPlay() override;

private:
    // ���� ����� ������Ʈ
    UPROPERTY(VisibleAnywhere)
    class UAudioComponent* AudioComponent;

public:
    // �����Ϳ��� ������ �� �ֵ��� ����
    UPROPERTY(EditAnywhere, Category = "BGM")
    class USoundBase* BGMSound;
};
