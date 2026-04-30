#include "script_component.hpp"

if (GVAR(EnableFlares) isEqualTo false) then {
    private _oldArray = missionNamespace getVariable [QEGVAR(main,grenadeExcludeList),[]];
    private _newArray = _oldArray + ["ACE_40mm_Flare_white", "ACE_40mm_Flare_red","ACE_40mm_Flare_green","ACE_F_Hand_Red","ACE_F_Hand_Green","ACE_F_Hand_Yellow","ACE_G_Handflare_White","ACE_G_Handflare_Red","ACE_G_Handflare_Green","ACE_G_Handflare_Yellow"];
    missionNamespace setVariable [QEGVAR(main,grenadeExcludeList),_newArray,true];
};
