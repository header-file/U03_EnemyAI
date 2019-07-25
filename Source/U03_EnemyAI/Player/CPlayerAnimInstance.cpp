#include "CPlayerAnimInstance.h"
#include "Global.h"
#include "Player/CPlayer.h"

void UCPlayerAnimInstance::NativeInitializeAnimation()
{
	player = Cast<ACPlayer>(TryGetPawnOwner());
}

void UCPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (player == NULL) return;

	Speed = player->GetVelocity().Size();
	bDead = player->bDead;
}