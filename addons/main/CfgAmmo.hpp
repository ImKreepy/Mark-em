
class CfgAmmo {
    class SmokeShell;
    class SmokeShellRed: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellGreen: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellYellow: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellPurple: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorCiv";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellBlue: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorBlue";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class SmokeShellOrange: SmokeShell {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorOrange";
        mmf_markerType = "mmf_SmokeMarker";
    };
    
    class G_40mm_Smoke;
    class G_40mm_SmokeRed: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorRed";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class G_40mm_SmokeGreen: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorGreen";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class G_40mm_SmokeYellow: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorYellow";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class G_40mm_SmokePurple: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorCiv";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class G_40mm_SmokeBlue: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorBlue";
        mmf_markerType = "mmf_SmokeMarker";
    };
    class G_40mm_SmokeOrange: G_40mm_Smoke {
        mmf_isSignalMarker = 1;
        mmf_markerColor = "ColorOrange";
        mmf_markerType = "mmf_SmokeMarker";
    };

    class mmf_Smoke_g_ar_green: SmokeShellGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 0;
    };
    class mmf_Smoke_g_mr_green: SmokeShellGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 1;
    };
    class mmf_Smoke_ugl_ar_green: G_40mm_SmokeGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 0;
    };
    class mmf_Smoke_ugl_mr_green: G_40mm_SmokeGreen {
        mmf_isSignalMarker = 0;
        mmf_isSignalResupply = 1;
        mmf_resupplyType = 1;
    };
};
