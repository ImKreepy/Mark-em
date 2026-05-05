class CfgMagazines {
    class 1Rnd_SmokeGreen_Grenade_shell;
    class mmf_1rnd_Smoke_ugl_ar_green: 1Rnd_SmokeGreen_Grenade_shell {
		author = AUTHOR;
		displayName = "Ammo Resupply Smoke Round (Green)";
		picture = QPATHTOF(data\mmf_smoke_ugl_ar_green_ca.paa);
		ammo = "mmf_Smoke_ugl_ar_green";
		displayNameShort = "Ammo Resupply Smoke Round";
		descriptionShort = "Type: Resupply<br />Rounds: 1<br />Used in: UGL";
    };
    class mmf_1rnd_Smoke_ugl_mr_green: mmf_1rnd_Smoke_ugl_ar_green {
		displayName = "Ammo Resupply Smoke Round (Green)";
		picture = QPATHTOF(data\mmf_smoke_ugl_mr_green_ca.paa);
		ammo = "mmf_Smoke_ugl_mr_green";
		displayNameShort = "Ammo Resupply Smoke Round";
    };
    class SmokeShellGreen;
	class mmf_Smoke_g_ar_green: SmokeShellGreen {
		author = AUTHOR;
		displayName = "M18 Ammo Resupply Smoke (Green)";
		picture = QPATHTOF(data\mmf_smoke_g_ar_green_ca.paa);
		ammo = "mmf_Smoke_g_ar_green";
		displayNameShort = "M18 Ammo Resupply Smoke";
		descriptionShort = "Type: Resupply<br />Rounds: 1<br />Used in: Hand";
	};
	class mmf_Smoke_g_mr_green: mmf_Smoke_g_ar_green {
		displayName = "M18 Ammo Resupply Smoke (Green)";
		picture = QPATHTOF(data\mmf_smoke_g_mr_green_ca.paa);
		ammo = "mmf_Smoke_g_mr_green";
		displayNameShort = "M18 Ammo Resupply Smoke";
	};
};
class CfgMagazineWells {
    class CBA_40mm_M203 {
        ADDON[] = {"mmf_1rnd_Smoke_ugl_ar_green","mmf_1rnd_Smoke_ugl_mr_green"};
    };
    class UGL_40x36 {
        ADDON[] = {"mmf_1rnd_Smoke_ugl_ar_green","mmf_1rnd_Smoke_ugl_mr_green"};
    };
};
