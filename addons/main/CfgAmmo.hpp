
class CfgAmmo {
    class GrenadeHand;
    class SmokeShell: GrenadeHand {
        class MMF_Config {
            type = 1;                       // 0 = Disabled, 1 = Marker, 2 = Ammo Resupply, 3 = Medical Resupply
            marker = "mmf_SmokeMarker";     // CfgMarker classname if the marker you want to display
            color = "ColorWhite";           // Color of the marker on the map when this ammo is used. Should correspond to the color of the smoke produced by the ammo
        };
    };
    class SmokeShellRed: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorRed";
        };
    };
    class SmokeShellGreen: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorGreen";
        };
    };
    class SmokeShellYellow: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };
    class SmokeShellPurple: SmokeShell {
        class MMF_Config {
            color = "ColorCiv";
        };
    };
    class SmokeShellBlue: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorBlue";
        };
    };
    class SmokeShellOrange: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorOrange";
        };
    };
    
    class G_40mm_Smoke: SmokeShell {
        class MMF_Config: MMF_Config {
            color = "ColorWhite";
        };
    };
    class G_40mm_SmokeRed: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorRed";
        };
    };
    class G_40mm_SmokeGreen: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorGreen";
        };
    };
    class G_40mm_SmokeYellow: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };
    class G_40mm_SmokePurple: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorCiv";
        };
    };
    class G_40mm_SmokeBlue: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorBlue";
        };
    };
    class G_40mm_SmokeOrange: G_40mm_Smoke {
        class MMF_Config: MMF_Config {
            color = "ColorOrange";
        };
    };

    class FlareCore;
    class FlareBase: FlareCore {
        class MMF_Config {
            type = 1;
            marker = "mmf_LightMarker";
            color = "ColorWhite";
        };
    };
    class F_40mm_White: FlareBase {
        class MMF_Config: MMF_Config {
            color = "ColorWhite";
        };
    };
    class F_40mm_Green: F_40mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorGreen";
        };
    };
    class F_40mm_Red: F_40mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorRed";
        };
    };
    class F_40mm_Yellow: F_40mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };
    class F_20mm_White: FlareBase {
        class MMF_Config: MMF_Config {
            color = "ColorWhite";
        };
    };
    class F_20mm_Green: F_20mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorGreen";
        };
    };
    class F_20mm_Red: F_20mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorRed";
        };
    };
    class F_20mm_Yellow: F_20mm_White {
        class MMF_Config: MMF_Config {
            color = "ColorYellow";
        };
    };

    class mmf_Smoke_g_ar_green: SmokeShellGreen {
        class MMF_Config {
            type = 2;
        };
    };
    class mmf_Smoke_g_mr_green: mmf_Smoke_g_ar_green {
        class MMF_Config: MMF_Config {
            type = 3;
        };
    };
    class mmf_Smoke_ugl_ar_green: G_40mm_SmokeGreen {
        class MMF_Config {
            type = 2;
        };
    };
    class mmf_Smoke_ugl_mr_green: mmf_Smoke_ugl_ar_green {
        class MMF_Config: MMF_Config {
            type = 3;
        };
    };
};
