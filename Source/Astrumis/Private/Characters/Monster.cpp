// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Monster.h"

// Sets default values
AMonster::AMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonster::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Removed due to animation stutter, source: https://www.reddit.com/r/unrealengine/comments/a0n455/listen_server_host_sees_clients_jittering_fix/
	// If we are controlled remotely, set animation timing to be driven by client's network updates. So timing and events remain in sync.
	//if (Mesh && IsReplicatingMovement() && (GetRemoteRole() == ROLE_AutonomousProxy && GetNetConnection() != nullptr))
	//{
	//	Mesh->bOnlyAllowAutonomousTickPose = true;
	//}
}

