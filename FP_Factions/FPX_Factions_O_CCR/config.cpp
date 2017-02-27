class CfgPatches
{
  class FPX_Factions_O {
    name = "FPX Factions - OPFOR";
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
class CfgWorlds {
	class GenericNames {
		class hispanicMen {
			class firstNames {
				santiago = "Santiago";
				fidel = "Fidel";
				mateo = "Mateo";
				alejandro = "Alejandro";
				diego = "Diego";
				samuel = "Samuel";
				leonardo = "Leonardo";
				juan = "Juan";
				felipe = "Felipe";
				emillio = "Emillio";
				christopher = "Christopher";
				jesus = "Jesus";
				mario = "Mario";
				dante = "Dante";
				hugo = "Hugo";
				pedro = "Pedro";
				ricardo = "Ricardo";
				luis = "Luis";
				aaron = "Aaron";
			};
			class LastNames {
				garcia = "Garcia";
				rodriguez = "Rodriguez";
				martinez = "Martinez";
				cruz = "Cruz";
				ramirez = "Ramirez";
				torres = "Torres";
				sanchez = "Sanchez";
				castro = "Castro";
				sandoval = "Sandoval";
				rio = "Rio";
				mendoza = "Mendoza";
				gonzales = "Gonzales";
				morales = "Morales";
				alvarez = "Alvarez";
			};
		};
	};
};
class CfgFactionClasses
{
  class FPX_O_CCR {
    displayName = "Caribbean Communists (CCR)";
  };
};
class CfgEditorSubcategories {
  #include "CfgEditorSubcategories.hpp"
};
class CfgVehicles
{
	class eventhandlers;
	class O_Officer_F;
	class CUP_O_TK_Soldier;
	class CUP_O_TK_Crew;
	class CUP_O_Partisans_Soldier_MG;
	class CUP_O_SLA_Miltia;
	class CUP_O_SLA_Soldier_Desert;
	class I_C_Soldier_Para_2_F;
	class I_C_Soldier_Para_3_F;
	class I_C_Soldier_Camo_F;
	class CUP_O_Datsun_PK_Random;
	class CUP_B_LR_Transport_GB_W;
	class CUP_B_LR_MG_GB_W;
	class CUP_O_Ural_SLA;
	class CUP_O_Ural_Open_SLA;
	class CUP_I_BTR40_TKG;
	class CUP_I_BTR40_MG_TKG;
	class CUP_O_BRDM2_SLA;
	class CUP_O_Ural_ZU23_SLA;
	class CUP_O_BRDM2_ATGM_SLA;
	class CUP_O_BRDM2_HQ_SLA;
	class FP_Faction_GSFG70_Vehicle_BTR60;
	class CUP_I_BMP1_TK_GUE;
	class CUP_I_T55_TK_GUE;
	class I_C_Boat_Transport_02_F;
  #include "CfgVehicles.hpp"
};
class CfgWeapons
{
  class Default;
	class ItemCore: Default{};
  class VestItem;
  class Vest_NoCamo_Base;
  class str_3xlin_sn;
  class CUP_srifle_SVD;
  class srifle_LRR_F;
	class UniformItem;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class GrenadeLauncher;
  #include "CfgWeapons.hpp"
};
class cfgGroups {
	#include "CfgGroups.hpp"
};

