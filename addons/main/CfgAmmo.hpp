
class CfgAmmo {
    class GrenadeHand;
    class SmokeShell: GrenadeHand {
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellRed: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
    };
    class SmokeShellGreen: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
    };
    class SmokeShellYellow: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
    };
    class SmokeShellPurple: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorCiv";
    };
    class SmokeShellBlue: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorBlue";
    };
    class SmokeShellOrange: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorOrange";
    };
    
    class G_40mm_Smoke;
    class G_40mm_SmokeRed: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
    };
    class G_40mm_SmokeGreen: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
    };
    class G_40mm_SmokeYellow: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
    };
    class G_40mm_SmokePurple: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorCiv";
    };
    class G_40mm_SmokeBlue: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorBlue";
    };
    class G_40mm_SmokeOrange: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorOrange";
    };

    class FlareCore;
    class FlareBase: FlareCore {
        mmf_markerType = "mmf_LightMarker";
    };
    class F_40mm_White: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorWhite";
    };
    class F_40mm_Green: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
    };
    class F_40mm_Red: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
    };
    class F_40mm_Yellow: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
    };
    class F_20mm_White: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorWhite";
    };
    class F_20mm_Green: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
    };
    class F_20mm_Red: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
    };
    class F_20mm_Yellow: FlareBase {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
    };

    class mmf_Smoke_g_ar_green: SmokeShellGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 0;
    };
    class mmf_Smoke_g_mr_green: mmf_Smoke_g_ar_green {
        mmf_resupplyType = 1;
    };
    class mmf_Smoke_ugl_ar_green: G_40mm_SmokeGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 0;
    };
    class mmf_Smoke_ugl_mr_green: mmf_Smoke_ugl_ar_green {
        mmf_resupplyType = 1;
    };
};
