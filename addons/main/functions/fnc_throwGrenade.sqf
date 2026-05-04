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
private _isCustom = false;
private _custom = [];
{
    private _customType = _x select 0;
    if (_ammo isEqualTo _customType) exitWith {
        _isCustom = true;
        _custom = _x;
    };
} forEach parseSimpleArray GVAR(Customs);

private _cfg = configFile >> "CfgAmmo" >> _ammo;
private _fuzeTime = getNumber (_cfg >> "explosionTime");
private _timeToLive = getNumber (_cfg >> "timeToLive");

if (getNumber (_cfg >> "mmf_isSignalMarker") isEqualTo 1) then {

    private _color = getText (_cfg >> "mmf_markerColor");
    private _type = getText (_cfg >> "mmf_markerType");

    [FUNC(handleSignalMarker), [_projectile, _color, _timeToLive, _unit, _type], _fuzeTime] call CBA_fnc_waitAndExecute;
};

if (_isCustom) then {
    _custom params ["_class","_color","_type"];
    [FUNC(handleSignalMarker), [_projectile, _color, _timeToLive, _unit, _type], _fuzeTime] call CBA_fnc_waitAndExecute;
};

if (getNumber (_cfg >> "mmf_isSignalResupply") isEqualTo 1) then {

    private _type = getNumber (_cfg >> "mmf_resupplyType");
    private _side = side _unit;
    private _color = [_side, true] call BIS_fnc_sideColor;
    private _chat = "";
    switch (_type) do {
        case 0: {
            _type = "mmf_Resupply_Ammo";
            _chat = "Ammo Resupply"
        };
        case 1: {
            _type = "mmf_Resupply_Medical";
            _chat = "Medical Resupply"
        };
    };

    _unit groupChat format ["I have requsted a %1",_chat];
    [FUNC(handleSignalResupply), [_projectile, _unit, _type, _color], 5] call CBA_fnc_waitAndExecute;
};
