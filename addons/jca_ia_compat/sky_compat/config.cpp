#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"SKY_jca_flares_additions_compat_jca_ia"};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo {
    class SKY_JCA_GrenadeAmmo_SignalFlare_Base;
        class SKY_JCA_GrenadeAmmo_SignalFlare_White: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorWhite";
        mark_markerType = "mark_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Purple: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorCIV";
        mark_markerType = "mark_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Blue: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorBlue";
        mark_markerType = "mark_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Yellow: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mark_isSignalFlare = 1;
        mark_markerColor = "ColorYellow";
        mark_markerType = "mark_SmokeMarker";
	};
};
