#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mark_main","Weapons_F_JCA_HF_Explosives"};
        units[] = {};
        weapons[] = {};
        ammo[] = {
            "JCA_GrenadeAmmo_SignalFlare_Red",
            "JCA_GrenadeAmmo_SignalFlare_Green"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo {
    class JCA_GrenadeAmmo_HandFlare_Base;
    class JCA_GrenadeAmmo_SignalFlare_Red: JCA_GrenadeAmmo_HandFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorRed";
        mark_markerType = "mark_SmokeMarker";
    };
    class JCA_GrenadeAmmo_SignalFlare_Green: JCA_GrenadeAmmo_HandFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorGreen";
        mark_markerType = "mark_SmokeMarker";
    };
};
