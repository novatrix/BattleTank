// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))//, hidecategories = ("Collision"))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	void UTankTurret::TurretRotate(float RotationRelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxDegreePerSecond = 20;

	/* UPROPERTY(EditAnywhere, Category = Setup)
		float MaxRotationDegree = 40;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MinRotationDegree = 0;
	*/
};
