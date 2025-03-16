// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMAN_L01_API ABloque : public AActor
{
     GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* MallBloque;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UPROPERTY(EditAnyWHere);
	float VelocidadMovimiento;

	UPROPERTY(EditAnywhere)
	float AlturaMaxima;

	UPROPERTY(EditAnywhere)
	float AlturaMinima;

	FVector DireccionMovimiento;
	FVector PosicionInicial;

};
