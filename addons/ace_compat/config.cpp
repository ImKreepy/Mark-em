#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mmf_main","ace_grenades"};
        units[] = {};
        weapons[] = {};
        ammo[] = {
            "ACE_G_Handflare_White",
            "ACE_G_Handflare_Red",
            "ACE_G_Handflare_Green",
            "ACE_G_Handflare_Yellow"
        };
        VERSION_CONFIG;
         
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEventHandlers.hpp"

class CfgAmmo {
    class SmokeShell;
    class ACE_G_Handflare_White: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorWhite";
        mmf_markerType = "mmf_LightMarker";
    };
    class ACE_G_Handflare_Red: ACE_G_Handflare_White {
        mmf_markerColor = "ColorRed";
    };
    class ACE_G_Handflare_Green: ACE_G_Handflare_White {
        mmf_markerColor = "ColorGreen";
    };
    class ACE_G_Handflare_Yellow: ACE_G_Handflare_White {
        mmf_markerColor = "ColorYellow";
    };
};
