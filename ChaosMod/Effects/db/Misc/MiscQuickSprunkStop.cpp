/*
    Effect by Last0xygen, modified
*/

#include <stdafx.h>

static void OnStart()
{
	static Hash objectHash = "prop_vend_soda_02"_hash;
	Ped player             = PLAYER_PED_ID();
	Vector3 pos            = GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(player, 0, 5, 0);
	Object obj             = CreatePoolProp(objectHash, pos.x, pos.y, pos.z, false);
	PLACE_OBJECT_ON_GROUND_PROPERLY(obj);
	SET_ENTITY_ROTATION(obj, GET_ENTITY_PITCH(player), -GET_ENTITY_ROLL(player), GET_ENTITY_HEADING(player), 0, true);
}

// clang-format off
REGISTER_EFFECT(OnStart, nullptr, nullptr, EffectInfo
    {
        .Name = "Quick Sprunk Stop",
        .Id = "misc_quick_sprunk_stop",
        .EffectGroupType = EEffectGroupType::SpawnGeneric
    }
);