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
 * [_nade, [0.5,0.5,0.5], 60, player, "mmf_SmokeMarker"] call mmf_fnc_handleSignalMarker
 *
 * Public: No
 */

params ["_projectile", "_color", "_timeToLive", "_unit", "_type"];
TRACE_1("fnc_handleSignalMarker",_this);

private _channel = -1;
if (isMultiplayer) then {
    _channel = 1;
};

private _marker = createMarkerLocal [format ["%1_marker", _projectile], position _projectile, _channel, _unit];
_marker setMarkerTypeLocal _type;
_marker setMarkerColorLocal _color;

if (GVAR(showGridCoordinates)) then {
    GVAR(markerPFH) = [{

        (_this select 0) params ["_projectile", "_marker"];

        private _pos = position _projectile;
        private _grid = mapGridPosition _pos;

        _marker setMarkerTextLocal _grid;
        _marker setMarkerPos _pos;

    }, GVAR(refreshRate), [_projectile, _marker]] call CBA_fnc_addPerFrameHandler;
} else {
    GVAR(markerPFH) = [{

        (_this select 0) params ["_projectile", "_marker"];

        private _pos = position _projectile;
        
        _marker setMarkerPos _pos;

    }, GVAR(refreshRate), [_projectile, _marker]] call CBA_fnc_addPerFrameHandler;
};

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
