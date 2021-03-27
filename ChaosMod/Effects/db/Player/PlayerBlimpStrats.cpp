/*
	Effect by Last0xygen
*/

#include <stdafx.h>

static void OnStart()
{
	Vehicle veh = CreatePoolVehicle(GET_HASH_KEY("blimp"), -377.276, 1055.06, 340.962, 80);
	SET_VEHICLE_ENGINE_ON(veh, true, true, false);
	Ped player = PLAYER_PED_ID();
	SET_ENTITY_INVINCIBLE(player, true);
	SET_PED_INTO_VEHICLE(player, veh, -1);
	SET_VEHICLE_FORWARD_SPEED(veh, 36);
	TASK_LEAVE_VEHICLE(player, veh, 4160);
	WAIT(3000);
	SET_ENTITY_INVINCIBLE(player, false);
}

static RegisterEffect registerEffect(EFFECT_PLAYER_BLIMP_STRATS, OnStart, nullptr, nullptr, EffectInfo
    {
        .Name = "Blimp Strats",
        .Id = "player_blimp_strats",
	.EffectGroupType = EffectGroupType::TELEPORT
    }
);
