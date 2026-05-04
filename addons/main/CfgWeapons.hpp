class CfgWeapons {
    class GrenadeLauncher;
	class Throw: GrenadeLauncher {
        muzzles[] += {
            "mmf_Smoke_g_ar_green_muzzle",
            "mmf_Smoke_g_mr_green_muzzle"
        };
        class ThrowMuzzle;
        class mmf_Smoke_g_ar_green_muzzle: ThrowMuzzle {
            displayName = "Smoke Ammo Resupply Green";
            magazines[] = {
                "mmf_Smoke_g_ar_green"
            };
        };
        class mmf_Smoke_g_mr_green_muzzle: ThrowMuzzle {
            displayName = "Smoke Medical Resupply Green";
            magazines[] = {
                "mmf_Smoke_g_mr_green"
            };
        };
    };
};
