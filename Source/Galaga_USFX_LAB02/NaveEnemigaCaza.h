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

	//UPROPERTY()
	// bool RotateToFaceOutwards;//indica la direccion de rotacion

	//UPROPERTY()
	// float RotationSpeed;//numero de grados que gira en cada Tick

	//UPROPERTY()
	// float OrbitDistance;//a que distancia se movera de su origen

	// float CurrentValue;//posicion de rotacion acu

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Mover(float DeltaTime);
	
};
