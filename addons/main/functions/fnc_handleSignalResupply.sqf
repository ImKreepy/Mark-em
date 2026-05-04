#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles the creation of the map marker.
 *
 * Arguments:
 * 0: Projectile <OBJECT>
 * 1: Unit <OBJECT>
 * 2: Type <STRING>
 * 3: Color <STRING>
 *
 * Return Value:
 * None <NONE>
 *
 * Example:
 * [_nade, player, "mmf_Resupply_Ammo", "ColorWest"] call mmf_fnc_handleSignalMarker
 *
 * Public: No
 */

params ["_projectile", "_unit", "_type", "_color"];
TRACE_1("fnc_handleSignalResupply",_this);

private _channel = -1;
if (isMultiplayer) then {
    _channel = 3;
};

private _pos = getPosATL _projectile;
private _grid = mapGridPosition _pos;
private _marker = createMarkerLocal [format ["%1_marker", _projectile], _pos, _channel, _unit];
_marker setMarkerTypeLocal _type;
_marker setMarkerColorLocal _color;

private _box = "B_CargoNet_01_ammo_F" createVehicle [0,0,0];
clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;
private _para1 = "steerable_parachute_f" createVehicle [0,0,0];
_box attachTo [_para1,[0,0,0]];
private _newPos = [_pos select 0, _pos select 1, 100];
_para1 setPos _newPos;

_unit groupChat format ["Marker placed at '%1'",_grid];
_unit groupChat "Resupply incoming...";

switch (_type) do {
    case "mmf_Resupply_Ammo": {
                
        private _primary = [];
        private _handGun = [];
        private _launcher = [];
        {
            private _1 = primaryWeaponMagazine _x select 0;
            private _2 = handgunMagazine _x select 0;
            private _3 = secondaryWeaponMagazine _x select 0;
            _primary pushBack _1;
            _handGun pushBack _2;
            _launcher pushBack _3;
        } forEach units _unit;

        {
            _box addMagazineCargoGlobal [_x, GVAR(Primary_Count)];
        } forEach _primary;
        {
            _box addMagazineCargoGlobal [_x, GVAR(Handgun_Count)];
        } forEach _handGun;
        {
            _box addMagazineCargoGlobal [_x, GVAR(Launcher_Count)];
        } forEach _launcher;
    };
    case "mmf_Resupply_Medical": {
        private _array = parseSimpleArray GVAR(Medical_Items);
        private _count = count units _unit;
        {
            _x params ["_item", "_amount"];

            _amount = _amount * _count;
            _box addItemCargoGlobal [_item,_amount];
        } forEach _array;
    };
};

GVAR(resupplyPFH) = [{

    (_this select 0) params ["_box", "_marker"];

    private _boxPos = position _box;
    
    _marker setMarkerPos _boxPos;

}, GVAR(refreshRate), [_box, _marker]] call CBA_fnc_addPerFrameHandler;

[{
    params ["_object","",""];
    isTouchingGround _object;
}, {
    params ["_object","_handle","_unit"];
    [_handle] call CBA_fnc_removePerFrameHandler;

    private _pos = getPosATL _object;
    private _grid = mapGridPosition _pos;
    deleteVehicle _object;
    _unit groupChat format ["Resupply landed at '%1'",_grid];

}, [_para1,GVAR(resupplyPFH),_unit]] call CBA_fnc_waitUntilAndExecute;
