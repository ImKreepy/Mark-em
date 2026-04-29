[
    QGVAR(refreshRate),
    "SLIDER",
    [CSTRING(RefreshRate_DisplayName), CSTRING(RefreshRate_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), "General"],
    [0, 2, 0.1, 1],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(durationHardCap_enabled),
    "CHECKBOX",
    [CSTRING(durationHardCap_enabled_DisplayName), CSTRING(durationHardCap_enabled_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), "General"],
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(durationHardCap),
    "TIME",
    [CSTRING(durationHardCap_DisplayName), CSTRING(durationHardCap_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), "General"],
    [0, 360, 60],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(showGridCoordinates),
    "CHECKBOX",
    [CSTRING(showGridCoordinates_DisplayName), CSTRING(showGridCoordinates_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), "General"],
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;
