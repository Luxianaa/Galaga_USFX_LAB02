// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);



}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	//Mover(DeltaTime);
	Angulo += Speed * DeltaTime;

	// Calcula las nuevas posiciones en x y y
	float NewX = GetActorLocation().X + Radio * FMath::Cos(Angulo)* DeltaTime;
	float NewY = GetActorLocation().Y + Radio * FMath::Sin(Angulo)* DeltaTime;

	// Establece la nueva posición
	FVector NewLocation = FVector(NewX, NewY, GetActorLocation().Z);
	SetActorLocation(NewLocation);
}

//void ANaveEnemigaCaza::Mover(float DeltaTime)
//{
//	//Movimiento de la nave
//	FVector PosicionActual = GetActorLocation();
//	float NuevaX = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
//	float NuevaY = FMath::RandRange(0.0f, 0.0f) * DeltaTime;
//	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);
//
//	SetActorLocation(NuevaPosicion);
//}
