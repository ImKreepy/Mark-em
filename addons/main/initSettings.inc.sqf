// ----- General Settings ----- //
[
    QGVAR(refreshRate),
    "SLIDER",
    [CSTRING(RefreshRate_DisplayName), CSTRING(RefreshRate_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(GeneralSettings_Category)],
    [0, 2, 0.1, 2],
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
[
    QGVAR(Customs),
    "EDITBOX",
    [CSTRING(Customs_DisplayName), CSTRING(Customs_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(CompatibilitySettings_Category)],
    "[['ClassName1','ColorClass1','MarkerType1'],['ClassName2','ColorClass2','MarkerType2']]",
    true,
    {},
    false
] call CBA_fnc_addSetting;

// ----- Resupply settings ----- //
[
    QGVAR(Primary_Count),
    "SLIDER",
    [CSTRING(Primary_Count_DisplayName), CSTRING(Primary_Count_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(ResupplySettings_Category)],
    [0, 20, 10, 0],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(Handgun_Count),
    "SLIDER",
    [CSTRING(Handgun_Count_DisplayName), CSTRING(Handgun_Count_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(ResupplySettings_Category)],
    [0, 10, 5, 0],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(Launcher_Count),
    "SLIDER",
    [CSTRING(Launcher_Count_DisplayName), CSTRING(Launcher_Count_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(ResupplySettings_Category)],
    [0, 5, 1, 0],
    true,
    {},
    false
] call CBA_fnc_addSetting;
[
    QGVAR(Medical_Items),
    "EDITBOX",
    [CSTRING(Medical_Items_DisplayName), CSTRING(Medical_Items_Description)],
    [QUOTE(PREFIX_BEAUTIFIED), CSTRING(ResupplySettings_Category)],
    "[['ACE_fieldDressing',5],['ACE_elasticBandage',5],['ACE_packingBandage',5],['ACE_quikclot',5],['ACE_epinephrine',1],['ACE_morphine',1],['ACE_splint',4],['ACE_tourniquet',4]]",
    true,
    {},
    false
] call CBA_fnc_addSetting;
