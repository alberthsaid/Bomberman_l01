// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman_l01GameMode.h"
#include "Bomberman_l01Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Kismet/GameplayStatics.h"

ABomberman_l01GameMode::ABomberman_l01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberman_l01GameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector PosicionInicial(-1600.0f, 40.0f, 120.0f);
	FRotator RotacionInicial(0.0f, 0.0f, 0.0f);

	ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), PosicionInicial, RotacionInicial);
}