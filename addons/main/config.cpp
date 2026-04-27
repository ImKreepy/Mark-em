#include "script_component.hpp"

class CfgPatches {
    class MAIN_ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        url = ECSTRING(main,URL);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","cba_xeh",};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

         
    };
};

class CfgAddons {
    class PreloadAddons {
        class mark_Preload {
            list[] = {
                "cba_main",
                "cba_xeh",
                QUOTE(MAIN_ADDON)
            };
        };
    };
};


class CfgMods {
    class Mod_Base;
	class Markem: Mod_Base {
		dir="@Mark'em";
		name = "Mark'em";
        author = "Im Kreepy";
        description = CSTRING(Mod_Description);

        action = "https://github.com/ImKreepy/Mark'em";
        actionName = "GitHub";

        tooltip = "Mark'em";
        tooltipOwned = "Mark'em Owned";

        picture = "\ik\mark\addons\main\logos\mark_logotitle_512_ca.paa"; // Logo displayed in expansions menu
        logo = "\ik\mark\addons\main\logos\mark_logo_ca.paa"; // Image displayed on the main menu (128x)
        logoOver = "\ik\mark\addons\main\logos\mark_logoover_ca.paa"; // Image displayed when the mouse hovers over the image on the main menu (128x)
        logoSmall = "\ik\mark\addons\main\logos\mark_logo_small_ca.paa"; // Image displayed in Arsenal or 3DEN (32x)

        overview = CSTRING(Mod_Description);
        overviewText = "Mark'em";
        overviewPicture = "\ik\mark\addons\main\logos\mark_logo_ca.paa";
        overviewFootnote = "\ik\mark\addons\main\logos\mark_logo_ca.paa";
	};
};

#include "CfgEventHandlers.hpp"

class CfgMarkers {
    class Flag;
    class mark_SmokeMarker : Flag {
        scope = 2;
        name = "Smoke Flare";
        icon = QPATHTOF(data\mark_flare_smoke.paa);
        texture = QPATHTOF(data\mark_flare_smoke.paa);
        color[] = { 0, 0, 0, 1 };
        shadow = 0;
    };
    class mark_LightMarker : mark_SmokeMarker {
        scope = 2;
        name = "Light Flare";
        icon = QPATHTOF(data\mark_flare_light.paa);
        texture = QPATHTOF(data\mark_flare_light.paa);
    };
};
