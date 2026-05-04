class CfgMagazines {
    class 1Rnd_SmokeGreen_Grenade_shell;
    class mmf_1rnd_Smoke_ugl_ar_green: 1Rnd_SmokeGreen_Grenade_shell {
		author = AUTHOR;
		displayName = "1Rnd Smoke Ammo Resupply Green";
		picture = QPATHTOF(data\mmf_smoke_ugl_ar_green_ca.paa);
		ammo = "mmf_Smoke_ugl_ar_green";
		displayNameShort = "1Rnd Smoke Ammo Resupply";
		descriptionShort = "1Rnd Smokeshell Green, Ammo Resupply.";
    };
    class mmf_1rnd_Smoke_ugl_mr_green: mmf_1rnd_Smoke_ugl_ar_green {
		displayName = "1Rnd Smoke Medical Resupply Green";
		picture = QPATHTOF(data\mmf_smoke_ugl_mr_green_ca.paa);
		ammo = "mmf_Smoke_ugl_mr_green";
		displayNameShort = "1Rnd Smoke Medical Resupply";
		descriptionShort = "1Rnd Smokeshell Green, Medical Resupply.";
    };
    class SmokeShellGreen;
	class mmf_Smoke_g_ar_green: SmokeShellGreen {
		author = AUTHOR;
		displayName = "Smoke Ammo Resupply Green";
		picture = QPATHTOF(data\mmf_smoke_g_ar_green_ca.paa);
		ammo = "mmf_Smoke_g_ar_green";
		displayNameShort = "Smoke Ammo Resupply";
		descriptionShort = "Smoke grenade Green, Ammo Resupply.";
	};
	class mmf_Smoke_g_mr_green: mmf_Smoke_g_ar_green {
		displayName = "Smoke Medical Resupply Green";
		picture = QPATHTOF(data\mmf_smoke_g_mr_green_ca.paa);
		ammo = "mmf_Smoke_g_mr_green";
		displayNameShort = "Smoke Medical Resupply";
		descriptionShort = "Smoke grenade Green, Medical Resupply.";
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
