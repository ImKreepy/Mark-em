#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mmf_main","Weapons_F_JCA_HF_Explosives"};
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
        mmf_isSignalFlare = 1;
        mmf_markerColor = "ColorRed";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class JCA_GrenadeAmmo_SignalFlare_Green: JCA_GrenadeAmmo_HandFlare_Base {
        mmf_isSignalFlare = 1;
        mmf_markerColor = "ColorGreen";
        mmf_markerType = "mmf_SmokeMarker";
    };
};
