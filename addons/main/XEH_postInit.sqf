#include "script_component.hpp"

["CAManBase", "fired", {

    params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile"];
    if (_weapon isNotEqualTo "Throw") exitWith {};
    if (local _unit) then {

        private _cfg = configFile >> "CfgAmmo" >> _ammo;
        if (getNumber (_cfg >> "mmf_isSignalFlare") isEqualTo 1) then {

            private _fuzeTime = getNumber (_cfg >> "explosionTime");
            private _timeToLive = getNumber (_cfg >> "timeToLive");
            private _color = getText (_cfg >> "mmf_markerColor");
            private _type = getText (_cfg >> "mmf_markerType");

            [FUNCMAIN(handleMarker), [_projectile, _color, _timeToLive, _unit, _type], _fuzeTime] call CBA_fnc_waitAndExecute;
        };
    };

}, true, [], true] call CBA_fnc_addClassEventHandler;
