// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	 
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaBloque->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBloqueAcero(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

if (ObjetoMallaBloqueAcero.Succeeded())
{
	MallaBloque->SetStaticMesh(ObjetoMallaBloqueAcero.Object);

	MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	MallaBloque->SetWorldScale3D(FVector(3.0f, 0.25f, 3.0f));
}
//movimiento hacia arriba
DireccionMovimiento = FVector(0, 0, 1);
VelocidadMovimiento = 100.0f;
AlturaMaxima = 300.0f;
AlturaMinima = 0.0f;

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();

	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PosicionActual = GetActorLocation();

	PosicionActual += DireccionMovimiento * VelocidadMovimiento * DeltaTime;

	if (PosicionActual.Z >= PosicionInicial.Z + AlturaMaxima)
	{
		DireccionMovimiento.Z = -1;
	}
	else if (PosicionActual.Z <= PosicionInicial.Z + AlturaMinima)
	{
		DireccionMovimiento.Z = 1;
	}
	SetActorLocation(PosicionActual);
}

