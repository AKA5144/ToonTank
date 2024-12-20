#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/PlayerController.h"
#include "Tank.generated.h"

UCLASS()
class TOONTANKS_API ATank : public APawn
{
    GENERATED_BODY()

public:
    // Sets default values for this pawn's properties
    ATank();
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* TankBody;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UStaticMeshComponent* TankTurret;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    USpringArmComponent* SpringArm;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    UCameraComponent* Camera;
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;



    // Rotate the turret towards the mouse position
    void RotateTurretTowardsMouse();

private:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

};
