class CfgPatches
{
  class FPX_Factions_O_NorthVN {
    name = "FPX Factions - OPFOR";
    units[] = {
      #include "CfgPatches_Units.hpp"
    };
    weapons[] = {};
    requiredAddons[] = {
      "A3_Characters_F",
	  "A3_Characters_F_Exp",
      "A3_Weapons_F",
	  "A3_Weapons_F_Exp",
      "CUP_Creatures_People_Core"
    };
    authors[] = {"Versten", "Croguy"};
  };
};

class CfgFactionClasses
{
  class FPX_O_NVA {
    displayName = "North Vietnam (NVA)";
  };
};
class CfgEditorSubcategories {
  #include "CfgEditorSubcategories.hpp"
};
class CfgVehicles
{
	class O_T_Officer_F;
	class O_Officer_F;
	class CUP_I_GUE_Soldier_Scout;
	class CUP_O_Ural_SLA;
	class CUP_O_UAZ_Unarmed_SLA;
	class CUP_O_UAZ_MG_SLA; 
	class CUP_O_UAZ_SPG9_SLA;
	class CUP_O_BRDM2_SLA;
	class CUP_O_BRDM2_HQ_SLA;
	class CUP_I_BTR40_MG_TKG;
	class CUP_I_BTR40_TKG;
	class CUP_O_Ural_ZU23_SLA;
	class CUP_I_T34_NAPA;
	class CUP_O_T55_SLA;
	class CUP_O_BM21_SLA;
	class I_G_Boat_Transport_01_F;
	class CUP_C_Fishing_Boat_Chernarus;
	class CUP_O_2b14_82mm_SLA;
	class CUP_O_DSHKM_SLA;
	class CUP_O_DSHKM_MiniTripod_SLA;
	class CUP_O_ZU23_SLA;
	class CUP_O_SPG9_SLA;
	class fp_mim23;
	class FP_Faction_GSFG85_Rifleman;
	class CUP_O_TK_INS_Soldier_FNFAL;
	class CUP_O_TK_INS_Commander;
	class O_G_Soldier_M_F;
  	#include "CfgVehicles.hpp"
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default{};
	class VestItem;
	class Vest_NoCamo_Base;
	class UniformItem;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class GrenadeLauncher;
	class str_3xlin_sn;
	class hlc_rifle_akmgl;
 	#include "CfgWeapons.hpp"
};
class CfgGroups {
	#include "CfgGroups.hpp"
};

