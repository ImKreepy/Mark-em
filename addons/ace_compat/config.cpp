#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mark_main","ace_grenades"};
        units[] = {};
        weapons[] = {};
        ammo[] = {
            "ACE_40mm_Flare_white",
            "ACE_40mm_Flare_red",
            "ACE_40mm_Flare_green",
            "ACE_F_Hand_Red",
            "ACE_F_Hand_Green",
            "ACE_F_Hand_Yellow",
            "ACE_G_Handflare_White",
            "ACE_G_Handflare_Red",
            "ACE_G_Handflare_Green",
            "ACE_G_Handflare_Yellow"
        };
        VERSION_CONFIG;
         
        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo {
    class F_40mm_White;
    class ACE_40mm_Flare_white: F_40mm_White {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorWhite";
        mark_markerType = "mark_LightMarker";
    };
    class ACE_40mm_Flare_red: ACE_40mm_Flare_white {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorRed";
        mark_markerType = "mark_LightMarker";
    };
    class ACE_40mm_Flare_green: ACE_40mm_Flare_white {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorGreen";
        mark_markerType = "mark_LightMarker";
    };
    
    class F_20mm_Red;
    class ACE_F_Hand_Red: F_20mm_Red {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorRed";
        mark_markerType = "mark_LightMarker";
    };

    class F_20mm_Green;
    class ACE_F_Hand_Green: F_20mm_Green {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorGreen";
        mark_markerType = "mark_LightMarker";
    };

    class F_20mm_Yellow;
    class ACE_F_Hand_Yellow: F_20mm_Yellow {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorYellow";
        mark_markerType = "mark_LightMarker";
    };

    class SmokeShell;
    class ACE_G_Handflare_White: SmokeShell {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorWhite";
        mark_markerType = "mark_LightMarker";
    };
    class ACE_G_Handflare_Red: ACE_G_Handflare_White {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorRed";
        mark_markerType = "mark_LightMarker";
    };
    class ACE_G_Handflare_Green: ACE_G_Handflare_White {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorGreen";
        mark_markerType = "mark_LightMarker";
    };
    class ACE_G_Handflare_Yellow: ACE_G_Handflare_White {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorYellow";
        mark_markerType = "mark_LightMarker";
    };
};
