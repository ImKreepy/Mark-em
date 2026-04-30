// ----- General Settings ----- //
[
    QGVAR(refreshRate),
    "SLIDER",
    [CSTRING(RefreshRate_DisplayName), CSTRING(RefreshRate_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(GeneralSettings_Category)],
    [0, 2, 0.1, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(durationHardCap_enabled),
    "CHECKBOX",
    [CSTRING(durationHardCap_enabled_DisplayName), CSTRING(durationHardCap_enabled_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(GeneralSettings_Category)],
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(durationHardCap),
    "TIME",
    [CSTRING(durationHardCap_DisplayName), CSTRING(durationHardCap_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(GeneralSettings_Category)],
    [0, 360, 60],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(showGridCoordinates),
    "CHECKBOX",
    [CSTRING(showGridCoordinates_DisplayName), CSTRING(showGridCoordinates_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(GeneralSettings_Category)],
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;

// ----- Compatibility Settings ----- //
[
    QGVAR(Vanilla_EnableSmokes),
    "CHECKBOX",
    [CSTRING(Vanilla_EnableSmokes_DisplayName), CSTRING(Vanilla_EnableSmokes_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(CompatibilitySettings_Category)],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
[
    QGVAR(Vanilla_EnableFlares),
    "CHECKBOX",
    [CSTRING(Vanilla_EnableFlares_DisplayName), CSTRING(Vanilla_EnableFlares_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(CompatibilitySettings_Category)],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
