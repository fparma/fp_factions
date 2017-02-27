class CfgPatches
{
  class FPX_Factions_I {
    name = "FPX Factions - INDFOR";
    units[] = {
      #include "CfgPatches_Units.hpp"
    };
    weapons[] = {};
    requiredAddons[] = {
      "A3_Characters_F",
      "A3_Weapons_F"
    };
    authors[] = {"Versten", "Croguy"};
  };
};
class CfgFactionClasses
{
  class FPX_I_BEC {
    displayName = "Black Element (BEC)";
  };
};
class CfgEditorSubcategories {
  #include "CfgEditorSubcategories.hpp"
};
class CfgVehicles
{
	//class CUP_C_C_Functionary_01;
	class eventhandlers;
	class I_Soldier_F;
	class I_G_Soldier_GL_F;
	class I_G_Soldier_exp_F;
	class I_Soldier_03_F;
	class I_Heli_light_03_unarmed_F;
	class I_helipilot_F;
	class B_Heli_Light_01_F;
	class CUP_I_Datsun_PK_TK;
	class CUP_I_SUV_ION;
	class CUP_I_SUV_Armored_ION;
	class CUP_I_UH60L_RACS;
	class CUP_I_UH60L_FFV_RACS;
	class CUP_I_UH60L_Unarmed_RACS;
	class CUP_I_UH60L_Unarmed_FFV_RACS;

  #include "CfgVehicles.hpp"
};
class CfgWeapons
{
  class Default;
	class ItemCore: Default{};
  class VestItem;
  class Vest_NoCamo_Base;
  /*class V_PlateCarrier1_rgr : Vest_NoCamo_Base {
    class ItemInfo;
  };
  class V_PlateCarrier2_rgr : Vest_NoCamo_Base {
    class ItemInfo;
  };*/
  class U_IG_Guerrilla_2_1;
  //class CUP_U_C_Suit_01;
  class U_IG_Guerrilla_6_1;
  class srifle_DMR_05_blk_F;
  /*class rhs_weap_m16a4_carryhandle;
  class rhs_weap_m4a1_carryhandle;
  class CUP_lmg_m249_pip1;*/

  #include "CfgWeapons.hpp"
};
class cfgGroups {
	#include "CfgGroups.hpp"
};

