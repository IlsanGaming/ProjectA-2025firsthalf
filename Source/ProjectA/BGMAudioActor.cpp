#include "BGMAudioActor.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"

ABGMAudioActor::ABGMAudioActor()
{
    PrimaryActorTick.bCanEverTick = false;

    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    RootComponent = AudioComponent;

    AudioComponent->bAutoActivate = false;
    AudioComponent->bIsUISound = false;
}

void ABGMAudioActor::BeginPlay()
{
    Super::BeginPlay();

    if (BGMSound)
    {
        AudioComponent->SetSound(BGMSound);
        AudioComponent->Play();
    }
}


