// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Rock.SM_Rock'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

void ANaveEnemigaCaza::BeginPlay()
{
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
}
