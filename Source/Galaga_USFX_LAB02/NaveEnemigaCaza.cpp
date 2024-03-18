// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);


	//RotateToFaceOutwards = true;
	//RotationSpeed = 5;//*velocidad de rotacion 5
	//OrbitDistance = 100;//distancia maxima a su origen es 100
	//CurrentValue = 0;// empieza en 0 grados y este se modify en cada tick
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

	//float CurrentValueInRadians = FMath::DegreesToRadians<float>(CurrentValue);
	//SetRelativeLocation(FVector(OrbitDistance * FMath::Cos(CurrentValueInRadians), OrbitDistance * FMath::Sin(CurrentValueInRadians), GetRelativeLocation().Z));
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//MOvimiento de la nave
	FVector PosicionActual = GetActorLocation();
	float NuevaX = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);
}
