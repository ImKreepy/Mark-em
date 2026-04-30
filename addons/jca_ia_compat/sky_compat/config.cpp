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
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorWhite";
        mmf_markerType = "mmf_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Purple: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorCIV";
        mmf_markerType = "mmf_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Blue: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorBlue";
        mmf_markerType = "mmf_SmokeMarker";
	};
	class SKY_JCA_GrenadeAmmo_SignalFlare_Yellow: SKY_JCA_GrenadeAmmo_SignalFlare_Base {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
        mmf_markerType = "mmf_SmokeMarker";
	};
};
