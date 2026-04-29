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
        class mmf_Preload {
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
		dir="@Mark 'em";
		name = "Mark 'em";
        author = "Im Kreepy";
        description = CSTRING(Mod_Description);

        action = "https://github.com/ImKreepy/Mark-em";
        actionName = "GitHub";

        tooltip = "Mark 'em";
        tooltipOwned = "Mark 'em Owned";

        picture = "\ik\mmf\addons\main\logos\mmf_logotitle_512_ca.paa"; // Logo displayed in expansions menu
        logo = "\ik\mmf\addons\main\logos\mmf_logo_ca.paa"; // Image displayed on the main menu (128x)
        logoOver = "\ik\mmf\addons\main\logos\mmf_logoover_ca.paa"; // Image displayed when the mouse hovers over the image on the main menu (128x)
        logoSmall = "\ik\mmf\addons\main\logos\mmf_logo_small_ca.paa"; // Image displayed in Arsenal or 3DEN (32x)

        overview = CSTRING(Mod_Description);
        overviewText = "Mark 'em";
        overviewPicture = "\ik\mmf\addons\main\logos\mmf_logo_ca.paa";
        overviewFootnote = "\ik\mmf\addons\main\logos\mmf_logo_ca.paa";
	};
};

#include "CfgEventHandlers.hpp"

class CfgMarkers {
    class Flag;
    class mmf_SmokeMarker : Flag {
        scope = 2;
        name = "Smoke Flare";
        icon = QPATHTOF(data\mmf_flare_smoke.paa);
        texture = QPATHTOF(data\mmf_flare_smoke.paa);
        color[] = { 0, 0, 0, 1 };
        shadow = 0;
    };
    class mmf_LightMarker : mmf_SmokeMarker {
        scope = 2;
        name = "Light Flare";
        icon = QPATHTOF(data\mmf_flare_light.paa);
        texture = QPATHTOF(data\mmf_flare_light.paa);
    };
};
