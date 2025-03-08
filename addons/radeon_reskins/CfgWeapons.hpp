class UniformItem;
class Uniform_Base;
class U_C_PilotJacket_black_RF: Uniform_Base {
    class ItemInfo;
};
class U_C_PilotJacket_open_black_RF: Uniform_Base {
    class ItemInfo;
};
class FP_U_pilotjacket_drive: U_C_PilotJacket_black_RF {
    author = "AMD Radeon 386";
    displayName = "Leather Jacket (Scorpion)";
    descriptionShort = "There's something inside you<br/>It's hard to explain";
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jacket_drive_co.paa","\a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"};
    class ItemInfo: ItemInfo  {
        uniformClass = "FP_U_pilotjacket_drive_Unit";
    };
};
class FP_U_pilotjacket_open_drive: U_C_PilotJacket_open_black_RF
{
    author = "AMD Radeon 386";
    displayName = "Leather Jacket (Scorpion, Open)";
    descriptionShort = "They're talking about you, boy<br/>But you're still the same";
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jacket_drive_co.paa","\a3\characters_f_gamma\guerrilla\data\ig_guerrilla3_1_co.paa"};
    class ItemInfo: ItemInfo {
        uniformClass = "FP_U_pilotjacket_open_drive_Unit";
    };
};
class FP_U_Obr88_hex: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_vanilla_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_Unit";
        containerClass = "Supply40";
        mass = 60;
    };
};
class FP_U_Obr88_rolled_hex: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_vanilla_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_ghex: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Tropic)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_tropic_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_ghex_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_ghex: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Tropic, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_tropic_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_ghex_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_hex_semi: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Semi-Arid)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_semi_arid_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_semi_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_hex_semi: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Semi-Arid, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_semi_arid_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_semi_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_hex_arid: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Arid)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_arid_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_arid_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_hex_arid_rolled: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Arid, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_arid_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_arid_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_hex_desert: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Desert)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_desert_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_desert_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_hex_desert: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Desert, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_desert_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_desert_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_hex_naval: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Oceanic)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_oceanic_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_naval_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_hex_naval: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Oceanic, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_oceanic_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_naval_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_hex_urban: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Urban)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_urban_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_hex_urban_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};
class FP_U_Obr88_rolled_hex_urban: Uniform_Base
{
    author = "AMD Radeon 386";
    scope = 2;
    displayName = "Obr.88 Uniform (Hex Urban, Rolled)";
    picture = "\A3\Ui_f\data\Map\Markers\Flags\CSAT_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsUniform\jam_obr88_hex_urban_co.paa"};
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = "FP_U_Obr88_rolled_hex_urban_Unit";
        containerClass = "Supply40";
        mass = 40;
    };
};

class H_Beret_blk;
class H_Beret_CSAT_01_F: H_Beret_blk {
    class ItemInfo;
};
class FP_H_Beret_FPA: H_Beret_CSAT_01_F {
    author = "AMD Radeon 386";
    displayName = "Beret (FPA, Red)";
    descriptionShort = "Standard issue headdress of the FPMC, with a cap<br/>badge bearing the motto that guides their conduct:<br/>""Ordo Autismus - Vigilo Retro Explosio""";
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_red_CO.paa"};
    class ItemInfo: ItemInfo {
        hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_red_CO.paa"};
    };
};
class FP_H_Beret_FPA_brn: H_Beret_CSAT_01_F
{
    author = "AMD Radeon 386";
    displayName = "Beret (FPA, Brown)";
    descriptionShort = "Worn by the FPMC special forces.";
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_brn_CO.paa"};
    class ItemInfo: ItemInfo {
        mass = 7;
        hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_brn_CO.paa"};
        uniformModel = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F";
    };
};
class FP_H_Beret_FPA_blue: H_Beret_CSAT_01_F {
    author = "AMD Radeon 386";
    displayName = "Beret (FPA, Blue)";
    descriptionShort = "Worn by the FPA Humanitarian Corps,<br/>a widely feared organization.";
    hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_blu_CO.paa"};
    class ItemInfo: ItemInfo {
        hiddenSelectionsTextures[] = {"\FP_Factions\radeon_reskins\SkinsHeadgear\H_Beret_FPA_blu_CO.paa"};
    };
};