#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches
{
	class FP_Factions_CSAT_NA
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};

class CfgFactionClasses
{
	class FP_Faction_CSAT_NA
	{
		displayName = "FP CSAT North Africa";
		priority = 2; 
		sidae = 0;
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
		flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
	};
};

class CfgGroups
{
	class East
	{
		class FP_Faction_CSAT_NA_Units
		{
			name = "FP CSAT North Africa";
			class Infantry 
			{
				name = "Infantry";
				class FP_O_NA_InfTeam_AT_Heavy
				{
					name = "$STR_A3_CfgGroups_East_OPF_F_Infantry_O_InfTeam_AT0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_HAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_HAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AHAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FP_OIA_NA_InfAssault
				{
					name = "$STR_A3_cfgGroups_East_OPF_F_Infantry_OIA_InfAssault0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};	
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_HeavyGunner_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_M_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_O_NA_sharpshooter_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_O_NA_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class FP_OIA_NA_InfSentry
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class FP_OIA_NA_InfSquad 
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_O_NA_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class FP_OIA_NA_InfSquad_Weapons
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_GL_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_M_F";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_O_NA_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class FP_OIA_NA_InfTeam
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FP_OIA_NA_InfTeam_AA
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AA_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AAA_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FPO_OIA_NA_InfTeam_AT
				{
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
					side = 0;
					faction = "OPF_F";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_O_NA_soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
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
	class FP_O_NA_Soldier_A_F: O_Soldier_A_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"}; 
		backpack = "B_Carryall_ocamo";
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_6(30Rnd_580x42_Mag_F), 150Rnd_762x54_Box, MAG_6(1Rnd_HE_Grenade_shell), MAG_3(10Rnd_762x54_Mag)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_6(30Rnd_580x42_Mag_F), 150Rnd_762x54_Box, MAG_6(1Rnd_HE_Grenade_shell), MAG_3(10Rnd_762x54_Mag)};	
		linkedItems[] = {"V_HarnessO_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AAR_F: O_Soldier_AAR_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_HarnessO_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_support_AMG_F: O_support_AMG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_support_AMort_F: O_support_AMort_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AHAT_F: O_Soldier_AHAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AAA_F: O_Soldier_AAA_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AAT_F: O_Soldier_AAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AR_F: O_Soldier_AR_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		linkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_medic_F: O_medic_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacVest_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_crew_F: O_crew_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};  
		linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_engineer_F: O_engineer_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacChestrig_cbr_F","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_soldier_exp_F: O_soldier_exp_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), "APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), "APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		linkedItems[] = {"V_BandollierB_cbr","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_cbr","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_GL_F: O_Soldier_GL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_GL_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_GL_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(1Rnd_SmokeRed_Grenade_shell), MAG_2(UGL_FlareWhite_F)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(1Rnd_SmokeRed_Grenade_shell), MAG_2(UGL_FlareWhite_F)};
		linkedItems[] = {"V_HarnessOGL_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_brn","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_support_Mort_F: O_support_Mort_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_support_MG_F: O_support_MG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	class FP_O_NA_support_GMG_F: O_support_GMG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	class FP_O_NA_HeavyGunner_F: O_HeavyGunner_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"}; 
		linkedItems[] = {"V_HarnessO_brn","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_soldier_M_F: O_soldier_M_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"}; 
		linkedItems[] = {"V_HarnessO_brn","H_ShemagOpen_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessO_brn","H_ShemagOpen_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AA_F: O_Soldier_AA_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Titan_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Titan_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_2(Titan_AA)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_2(Titan_AA)};
		linkedItems[] = {"V_TacVest_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_AT_F: O_Soldier_AT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Titan_short_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Titan_short_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_2(Titan_AT)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), MAG_2(Titan_AT)}; 
		linkedItems[] = {"V_TacChestrig_cbr_F","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_officer_F: O_officer_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_F, hgun_Rook40_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_F, hgun_Rook40_F, Throw, Put};
		magazines[] = {MAG_3(30Rnd_580x42_Mag_F), MAG_2(16Rnd_9x21_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_3(30Rnd_580x42_Mag_F), MAG_2(16Rnd_9x21_Mag),  SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
	};
	class FP_O_NA_sharpshooter_F: O_Sharpshooter_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {srifle_DMR_05_KHS_LP_F, hgun_Rook40_F, Throw, Put};		
		respawnWeapons[] = {srifle_DMR_05_KHS_LP_F, hgun_Rook40_F, Throw, Put};
		magazines[] = {MAG_6(10Rnd_93x64_DMR_05_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, HandGrenade, MAG_2(16Rnd_9x21_Mag)};		
		respawnMagazines[] = {MAG_6(10Rnd_93x64_DMR_05_Mag), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, HandGrenade, MAG_2(16Rnd_9x21_Mag)};
		linkedItems[] = {"V_TacVest_khk","H_ShemagOpen_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_ShemagOpen_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_O_NA_soldier_PG_F: O_soldier_PG_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ARCO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ARCO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_HelmetSpecO_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_F: O_Soldier_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacVest_brn","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_brn","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_LAT_F: O_Soldier_LAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, launch_RPG32_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, launch_RPG32_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacVest_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_O_NA_Soldier_HAT_F: O_Soldier_HAT_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Vorona_brown_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ACO_F, launch_O_Vorona_brown_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), Vorona_HEAT};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade), Vorona_HEAT};
		linkedItems[] = {"V_Chestrig_khk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_lite_F: O_Soldier_lite_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_blk_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_Chestrig_khk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_O_NA_Soldier_unarmed_F: O_Soldier_unarmed_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		linkedItems[] = {"V_TacChestrig_cbr_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_cbr_F","H_Bandanna_khk	","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	//class O_Sharpshooter_F;
	class FP_O_NA_Soldier_SL_F: O_Soldier_SL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};
		weapons[] = {arifle_CTAR_blk_ARCO_Pointer_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_blk_ARCO_Pointer_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_2(HandGrenade)};
		linkedItems[] = {"V_TacVest_oli","H_MilCap_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_MilCap_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_O_NA_Soldier_TL_F: O_Soldier_TL_F
	{
		author = "FP Mod Team";
		faction = "FP_Faction_CSAT_NA";
		model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
		uniformClass = "U_O_officer_noInsignia_hex_F";
		identityTypes[] = {"LanguagePER_F","Head_African","G_IRAN_default"};  
		weapons[] = {arifle_CTAR_GL_blk_ARCO_Pointer_F, Throw, Put};		
		respawnWeapons[] = {arifle_CTAR_GL_blk_ARCO_Pointer_F, Throw, Put};
		magazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(1Rnd_SmokeRed_Grenade_shell), MAG_2(UGL_FlareWhite_F)};		
		respawnMagazines[] = {MAG_7(30Rnd_580x42_Mag_F), SmokeShell, SmokeShellGreen, Chemlight_green, Chemlight_green, MAG_5(1Rnd_HE_Grenade_shell), MAG_2(1Rnd_Smoke_Grenade_shell), MAG_2(1Rnd_SmokeRed_Grenade_shell), MAG_2(UGL_FlareWhite_F)};
		linkedItems[] = {"V_TacVest_khk","H_Bandanna_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_Bandanna_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
};
