#include "script_component.hpp"

if (GVAR(Vanilla_EnableFlares) isEqualTo false) then {
    private _oldArray = missionNamespace getVariable [QGVAR(grenadeExcludeList),[]];
    private _newArray = _oldArray + [];
     missionNamespace setVariable [QGVAR(grenadeExcludeList),_newArray,true];
};
if (GVAR(Vanilla_EnableSmokes) isEqualTo false) then {
    private _oldArray = missionNamespace getVariable [QGVAR(grenadeExcludeList),[]];
    private _newArray = _oldArray + ["SmokeShellRed","SmokeShellGreen","SmokeShellYellow","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange","G_40mm_SmokeRed","G_40mm_SmokeGreen","G_40mm_SmokeYellow","G_40mm_SmokePurple","G_40mm_SmokeBlue","G_40mm_SmokeOrange"];
    missionNamespace setVariable [QGVAR(grenadeExcludeList),_newArray,true];
};

["CAManBase", "fired", {

    params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile"];
    if (_weapon isNotEqualTo "Throw") exitWith {};
    if (isPlayer _unit && local _unit) then {
        ["mmf_throwGrenadePlayer", [_unit, _ammo, _projectile]] call CBA_fnc_localEvent;
    };

}, true, [], true] call CBA_fnc_addClassEventHandler;

["mmf_throwGrenadePlayer", FUNCMAIN(throwGrenade)] call CBA_fnc_addEventHandler;
