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
    // 사운드 재생용 컴포넌트
    UPROPERTY(VisibleAnywhere)
    class UAudioComponent* AudioComponent;

public:
    // 에디터에서 연결할 수 있도록 설정
    UPROPERTY(EditAnywhere, Category = "BGM")
    class USoundBase* BGMSound;
};
