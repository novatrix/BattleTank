// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"

void UTankTurret::TurretRotate(float RotationRelativeSpeed)
{
	RotationRelativeSpeed = FMath::Clamp<float>(RotationRelativeSpeed, -1, 1);
	auto RotationChange = RotationRelativeSpeed * MaxDegreePerSecond * GetWorld()->DeltaTimeSeconds;
	auto Rotation = RelativeRotation.Yaw + RotationChange;

	SetRelativeRotation(FRotator(0, Rotation, 0));
}


