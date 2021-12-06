class CfgPatches
{
	class FP_Factions_IRI
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_IRI
	{
		displayName = "FP Iran";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\ROK\cfgFactionClasses_southkorea_ca.paa";
		flag = "\FP_Factions\ROK\flag_southkorea.paa";
	};
};
class CfgVehicles
{
	class O_Soldier_A_F;
	class O_Soldier_AAR_F;
	class O_support_AMG_F;
	class O_support_AMort_F;
	class O_Soldier_AHAT_F;
	class O_Soldier_AAA_F;
	class O_Soldier_AAT_F;
	class O_Soldier_AR_F;
	class O_medic_F;
	class O_crew_F;
	class O_engineer_F;
	class O_soldier_exp_F;
	class O_Fighter_Pilot_F;
	class O_Soldier_GL_F;
	class O_support_GMG_F;
	class O_support_MG_F;
	class O_support_Mort_F;
	class O_HeavyGunner_F;
	class O_helicrew_F;
	class O_helipilot_F;
	class O_soldier_M_F;
	class O_soldier_mine_F;
	class O_Soldier_AA_F;
	class O_Soldier_AT_F;
	class O_officer_F;
	class O_soldier_PG_F;
	class O_Pilot_F;
	class O_soldier_repair_F;
	class O_Soldier_F;
	class O_Soldier_LAT_F;
	class O_Soldier_HAT_F;
	class O_Soldier_lite_F;
	class O_Soldier_unarmed_F;
	class O_Sharpshooter_F;
	class O_Soldier_SL_F;
	class O_Survivor_F;
	class O_Soldier_TL_F;
	class O_soldier_UAV_F;
	class O_soldier_UAV_06_F;
	class O_soldier_UAV_06_medical_F;
	class FP_O_Iran_Soldier_A_F: O_Soldier_A_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AAR_F: O_Soldier_AAR_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_support_AMG_F: O_support_AMG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_support_AMort_F: O_support_AMort_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AHAT_F: O_Soldier_AHAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AAA_F: O_Soldier_AAA_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AAT_F: O_Soldier_AAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AR_F: O_Soldier_AR_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_mg_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_mg_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_medic_F: O_medic_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_crew_F: O_crew_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_engineer_F: O_engineer_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_soldier_exp_F: O_soldier_exp_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_Fighter_Pilot_F;
	class FP_O_Iran_Soldier_GL_F: O_Soldier_GL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_grn_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_grn_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_support_GMG_F;
	//class O_support_MG_F;
	class FP_O_Iran_support_Mort_F: O_support_Mort_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_HeavyGunner_F: O_HeavyGunner_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn"; 
		weapons[] = {"FP_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"FP_MMG_01_tan_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		linkedItems[] = {"FP_GOR_rhs_6sh117_mg_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_mg_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_helicrew_F;
	//class O_helipilot_F;
	class FP_O_Iran_soldier_M_F: O_soldier_M_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn"; 
		weapons[] = {"FP_GOR_srifle_DMR_01_DMS_BI_F_black","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"FP_GOR_srifle_DMR_01_DMS_BI_F_black","hgun_Rook40_F","Throw","Put"};
		linkedItems[] = {"FP_GOR_rhs_6sh117_svd_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_svd_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_soldier_mine_F;
	class FP_O_Iran_Soldier_AA_F: O_Soldier_AA_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_AT_F: O_Soldier_AT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_officer_F;
	class FP_O_Iran_soldier_PG_F: O_soldier_PG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_Pilot_F;
	//class O_soldier_repair_F;
	class FP_O_Iran_Soldier_F: O_Soldier_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_LAT_F: O_Soldier_LAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_F_black","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_F","launch_RPG32_F_black","hgun_Rook40_F","Throw","Put"};
	};
	class FP_O_Iran_Soldier_HAT_F: O_Soldier_HAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_Iran_Soldier_lite_F: O_Soldier_lite_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"rhsgref_alice_webbing","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_O_Iran_Soldier_unarmed_F: O_Soldier_unarmed_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_rifleman_desert","pasgt_irn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	//class O_Sharpshooter_F;
	class FP_O_Iran_Soldier_SL_F: O_Soldier_SL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_nco_desert","pasgt_irn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_nco_desert","pasgt_irn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_Survivor_F;
	class FP_O_Iran_Soldier_TL_F: O_Soldier_TL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_IRI";
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93.p3d";
		uniformClass = "m93_irn";  
		linkedItems[] = {"FP_GOR_rhs_6sh117_nco_desert","pasgt_irn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_nco_desert","pasgt_irn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	//class O_soldier_UAV_F;
	//class O_soldier_UAV_06_F;
	//class O_soldier_UAV_06_medical_F;
};

class CfgWeapons
{
	class FP_GOR_srifle_DMR_01_F_black;
	class FP_GOR_srifle_DMR_01_DMS_BI_F_black: FP_GOR_srifle_DMR_01_F_black
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_dms";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_02_f_blk";
			};
		};		
	};
	class MMG_01_tan_F;
	class FP_MMG_01_tan_ARCO_LP_F: MMG_01_tan_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_02_f_hex";
			};
		};		
	};	
};