#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles the creation of the map marker.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Time to live <NUMBER>
 * 2: Unit <OBJECT>
 * 3: Type <STRING>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_nade, 60, player, "mmf_SmokeMarker"] call mmf_fnc_handleSignalMarker
 *
 * Public: No
 */

params ["_projectile", "_timeToLive", "_unit", "_type"];
TRACE_1("fnc_handleSignalResupply",_this);

private _marker = createMarkerLocal [format ["%1_marker", _projectile], position _projectile, -1, _unit];
_marker setMarkerTypeLocal _type;

// Grab side for color
