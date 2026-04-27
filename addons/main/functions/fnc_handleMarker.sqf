#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles the creation of the map marker.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Time to live <NUMBER>
 * 2: Color <ARRAY>
 * 3: Unit <OBJECT>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_nade, [0.5,0.5,0.5], 60, player, "mark_SmokeMarker"] call mark_fnc_handleMarker
 *
 * Public: No
 */

params ["_projectile", "_color", "_timeToLive", "_unit", "_type"];
TRACE_1("fnc_handleMarker",_this);

private _marker = createMarkerLocal [format ["%1_marker", _projectile], position _projectile, -1, _unit];
_marker setMarkerTypeLocal _type;
_marker setMarkerColorLocal _color;

GVAR(markerPFH) = [{

    (_this select 0) params ["_projectile", "_marker"];

    _marker setMarkerPos position _projectile;

}, GVAR(refreshRate), [_projectile, _marker]] call CBA_fnc_addPerFrameHandler;

private _killPFH = _timeToLive;
if (GVAR(durationHardCap_enabled)) then {
    _killPFH = _timeToLive min GVAR(durationHardCap);
};

[{
    (_this select 0) params ["_handle"];
    [_handle] call CBA_fnc_removePerFrameHandler
}, [GVAR(markerPFH)], _killPFH] call CBA_fnc_waitAndExecute;

[{
    (_this select 0) params ["_marker"];
    deleteMarker _marker;
}, [_marker], _timeToLive] call CBA_fnc_waitAndExecute;
