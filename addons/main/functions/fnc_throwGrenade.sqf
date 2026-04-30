#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Unified handling of throwing.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Ammo <STRING>
 * 2: Projectile <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [player, "SmokeShellRed", "projectile"] call mmf_fnc_throwGrenade
 *
 * Public: No
 */

params ["_unit", "_ammo", "_projectile"];
TRACE_1("fnc_throwGrenade",_this);

private _excludeList = GVAR(grenadeExcludeList);
if (_ammo in _excludeList) exitWith {};

private _cfg = configFile >> "CfgAmmo" >> _ammo;
private _fuzeTime = getNumber (_cfg >> "explosionTime");
private _timeToLive = getNumber (_cfg >> "timeToLive");

if (getNumber (_cfg >> "mmf_isSignalMarker") isEqualTo 1) then {

    private _color = getText (_cfg >> "mmf_markerColor");
    private _type = getText (_cfg >> "mmf_markerType");

    [FUNC(handleSignalMarker), [_projectile, _color, _timeToLive, _unit, _type], _fuzeTime] call CBA_fnc_waitAndExecute;
};

if (getNumber (_cfg >> "mmf_isSignalResupply") isEqualTo 1) then {

    private _type = getText (_cfg >> "mmf_resupplyType");

    [FUNC(handleSignalResupply), [_projectile, _timeToLive, _unit, _type], _fuzeTime] call CBA_fnc_waitAndExecute;
};
