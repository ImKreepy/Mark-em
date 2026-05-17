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
        class MMF_Config {
            type = 1;
            marker = "mmf_SmokeMarker";
            color = "ColorWhite";
        };
    };
    class ACE_G_Handflare_Red: ACE_G_Handflare_White {
        class MMF_Config: MMF_Config {
            color = "ColorRed";
        };
    };
    class ACE_G_Handflare_Green: ACE_G_Handflare_White {
        class MMF_Config: MMF_Config {
            color = "ColorGreen";
        };
    };
    class ACE_G_Handflare_Yellow: ACE_G_Handflare_White {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };
};
