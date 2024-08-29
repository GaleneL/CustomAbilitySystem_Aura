// Copyright Eduardo Velez


#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase()
{
 	PrimaryActorTick.bCanEverTick = false;

	// Setting up the weapon of all characters to the hand mesh and removing the
	// collision of the socket/hand
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
