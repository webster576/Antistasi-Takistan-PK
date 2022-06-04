/*
    Author: [Håkon]
    [Description]
        Initilizes the LTC system for the individual client

    Arguments:
    0. <nil>

    Return Value:
    <nil>

    Scope: Clients
    Environment: Any
    Public: [Yes]
    Dependencies:

    Example: [] call A3A_fnc_initLootToCrate;

    License: MIT License
*/
//check if action already on player
if ((actionIDs Player) findIf {
    _params = player actionParams _x;
    (_params#0) isEqualTo (localize "$STR_antistasi_loot_to_crate")
} != -1) exitWith {};

//add load actions
player addAction [
    localize "$STR_antistasi_loot_to_crate",
    {
        [cursorObject, clientOwner] remoteExecCall ["A3A_fnc_canLoot", 2];
    },
    nil,
    1.5,
    true,
    true,
    "",
    "(
        ((typeof cursorObject) in [NATOSurrenderCrate, CSATSurrenderCrate])
        and (cursorObject distance _this < 3)
        and (attachedTo cursorObject isEqualTo objNull)
    )"
];

player addAction [
    localize "$STR_antistasi_loot_from_crate_to_vehicle",
    {
        [cursorObject, clientOwner] remoteExecCall ["A3A_fnc_canTransfer", 2];
    },
    nil,
    1.5,
    true,
    true,
    "",
    "(
        ((typeof cursorObject) in [NATOSurrenderCrate, CSATSurrenderCrate])
        and (cursorObject distance _this < 3)
        and (attachedTo cursorObject isEqualTo objNull)
    )"
];

//add carry actions
player addAction [
    localize "$STR_antistasi_carry_crate",
    {
        [cursorObject, true] call A3A_fnc_carryCrate;
    },
    nil,
    1.5,
    true,
    true,
    "",
    "(
        ((typeof cursorObject) in [NATOSurrenderCrate, CSATSurrenderCrate])
        and (cursorObject distance _this < 3)
        and (([_this] call A3A_fnc_countAttachedObjects) isEqualTo 0)
        and (attachedTo cursorObject isEqualTo objNull)
    )"
];

player addAction [
    localize "$STR_antistasi_drop_crate",
    {
        [nil, false] call A3A_fnc_carryCrate;
    },
    nil,
    1.5,
    true,
    true,
    "",
    "(
        (_this getVariable ['carryingCrate', false])
    )"
];

nil;
