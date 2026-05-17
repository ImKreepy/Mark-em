#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy, Sky"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"SKY_jca_flares_additions_compat_jca_ia"};
        units[] = {};
        weapons[] = {};
        ammo[] = {
            "SKY_JCA_GrenadeAmmo_SignalFlare_Base",
            "SKY_JCA_GrenadeAmmo_SignalFlare_White",
            "SKY_JCA_GrenadeAmmo_SignalFlare_Purple",
            "SKY_JCA_GrenadeAmmo_SignalFlare_Blue",
            "SKY_JCA_GrenadeAmmo_SignalFlare_Yellow"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo {
    class JCA_GrenadeAmmo_HandFlare_Base;
    class SKY_JCA_GrenadeAmmo_SignalFlare_Base: JCA_GrenadeAmmo_HandFlare_Base {
        class MMF_Config {
            type = 1;
            marker = "mmf_SmokeMarker";
            color = "";
        };
    };
    class SKY_JCA_GrenadeAmmo_SignalFlare_White: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        class MMF_Config: MMF_Config {
            color = "ColorWhite";
        };
    };
    class SKY_JCA_GrenadeAmmo_SignalFlare_Purple: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        class MMF_Config: MMF_Config {
            color = "ColorCiv";
        };
    };
    class SKY_JCA_GrenadeAmmo_SignalFlare_Blue: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        class MMF_Config: MMF_Config {
            color = "ColorBlue";
        };
    };
    class SKY_JCA_GrenadeAmmo_SignalFlare_Yellow: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };
};
