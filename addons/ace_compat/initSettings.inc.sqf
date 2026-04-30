[
    QGVAR(EnableFlares),
    "CHECKBOX",
    [CSTRING(EnableFlares_DisplayName), CSTRING(EnableFlares_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), ECSTRING(main,CompatibilitySettings_Category)],
    true,
    true,
    {},
    true
] call CBA_fnc_addSetting;
