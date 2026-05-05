#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy","Grave"};
        url = ECSTRING(main,url);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mmf_main","Weapons_F_JCA_HF_Explosives"};
        units[] = {};
        weapons[] = {};
        magazines[] = {
            "mmf_jca_signalFlare_ar_green",
            "mmf_jca_signalFlare_mr_green"
        };
        ammo[] = {
            "JCA_GrenadeAmmo_SignalFlare_Red",
            "JCA_GrenadeAmmo_SignalFlare_Green",
            "mmf_jca_signalFlare_ar_green",
            "mmf_jca_signalFlare_mr_green"
        };
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

class CfgAmmo {
    class JCA_GrenadeAmmo_HandFlare_Base;
    class JCA_GrenadeAmmo_SignalFlare_Red: JCA_GrenadeAmmo_HandFlare_Base {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class JCA_GrenadeAmmo_SignalFlare_Green: JCA_GrenadeAmmo_HandFlare_Base {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class JCA_GrenadeAmmo_HandFlare_Green;
    class mmf_jca_signalFlare_ar_green: JCA_GrenadeAmmo_HandFlare_Green {
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 0;
    };
    class mmf_jca_signalFlare_mr_green: mmf_jca_signalFlare_ar_green {
        mmf_resupplyType = 1;
    };
};

class CfgMagazines {
    class JCA_HandFlare_Green;
	class mmf_jca_signalFlare_ar_green: JCA_HandFlare_Green {
		scope = 2;
		author = AUTHOR;
		displayName = "Ammo Resupply Hand Flare (Green)";
		displayNameShort = "Ammo Resupply Hand Flare";
		descriptionShort = "Type: Resupply<br />Rounds: 1<br />Used in: Hand";
		picture = QPATHTOF(data\mmf_jca_signalFlare_ar_green_ca.paa);
		ammo = "mmf_jca_signalFlare_ar_green";
	};
	class mmf_jca_signalFlare_mr_green: mmf_jca_signalFlare_ar_green {
		displayName = "Medical Resupply Hand Flare (Green)";
		displayNameShort = "Medical Resupply Hand Flare";
		picture = QPATHTOF(data\mmf_jca_signalFlare_mr_green_ca.paa);
		ammo = "mmf_jca_signalFlare_mr_green";
	};
};

class CfgWeapons {
    class GrenadeLauncher;
	class Throw: GrenadeLauncher {
        muzzles[] += {
            "mmf_jca_signalFlare_ar_green_muzzle",
            "mmf_jca_signalFlare_mr_green_muzzle"
        };
        class ThrowMuzzle;
        class mmf_jca_signalFlare_ar_green_muzzle: ThrowMuzzle {
            displayName = "Ammo Resupply Hand Flare (Green)";
            magazines[] = {
                "mmf_jca_signalFlare_ar_green"
            };
        };
        class mmf_jca_signalFlare_mr_green_muzzle: ThrowMuzzle {
            displayName = "Medical Resupply Hand Flare (Green)";
            magazines[] = {
                "mmf_jca_signalFlare_mr_green"
            };
        };
    };
};
