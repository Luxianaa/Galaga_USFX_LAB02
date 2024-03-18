// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB02_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	float cantidadMunicion;
	float tipoMunicion;
	float tipoMovimiento;
	float vida;
	float Radio = 100.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // �ngulo inicial
	float Speed = 6.0f; // Velocidad de rotaci�n

public:
	FORCEINLINE float GetCantidadMunicion() const { return cantidadMunicion; }
	FORCEINLINE float GetTipoMunicion() const { return tipoMunicion; }
	FORCEINLINE float GetTipoMovimiento() const { return tipoMovimiento; }
	FORCEINLINE float GetVida() const { return vida; }
	



	FORCEINLINE void SetCantidadMunicion(float _cantidadMunicion) { cantidadMunicion = _cantidadMunicion; }
	FORCEINLINE void SetTipoMunicion(float _tipoMunicion ) { tipoMunicion = _tipoMunicion; }
	FORCEINLINE void Set(float _tipoMovimiento) { tipoMovimiento = _tipoMovimiento; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }

public:
	// Sets default values for this actor's properties
	ANaveEnemigaCaza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Herencia de NaveEnemiga
	virtual void Mover(float DeltaTime);
	
};
