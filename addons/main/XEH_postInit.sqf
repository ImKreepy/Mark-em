#include "script_component.hpp"

if (GVAR(Vanilla_EnableFlares) isEqualTo false) then {
    missionNamespace getVariable [QEGVAR(main,grenadeExcludeList),[]];
    missionNamespace setVariable [QEGVAR(main,grenadeExcludeList),[],true];
};
if (GVAR(Vanilla_EnableSmokes) isEqualTo false) then {
    missionNamespace getVariable [QEGVAR(main,grenadeExcludeList),[]];
    missionNamespace setVariable [QEGVAR(main,grenadeExcludeList),[],true];
};

["CAManBase", "fired", {

    params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile"];
    if (_weapon isNotEqualTo "Throw") exitWith {};
    if (isPlayer _unit) then {
        ["mmf_throwGrenadePlayer", [_unit, _ammo, _projectile]] call CBA_fnc_localEvent;
    };

}, true, [], true] call CBA_fnc_addClassEventHandler;

["mmf_throwGrenadePlayer", FUNCMAIN(throwGrenade)] call CBA_fnc_addEventHandler;
