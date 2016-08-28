class CfgPatches
{
	class FP_Factions_KLG
	{
		units[] = {"FP_Faction_KLG_Soldier_BASE","FP_Faction_KLG_Rifleman_Mosin","FP_Faction_KLG_Rifleman_AK47","FP_Faction_KLG_Rifleman_FAL","FP_Faction_KLG_Rifleman_SKS","FP_Faction_KLG_Rifleman_DP27","FP_Faction_KLG_Rifleman_PPSH","FP_Faction_KLG_Rifleman_MP133","FP_Faction_KLG_Rifleman_TT33","FP_Faction_KLG_Rifleman_RPG","FP_Faction_KLG_Vehicle_DatsunPK"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_WheeledVehicles_LR", "CUP_WheeledVehicles_BRDM2", "CUP_WheeledVehicles_Datsun", "CUP_WheeledVehicles_UAZ", "CUP_WheeledVehicles_Ural"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_KLG
	{
		displayName = "Kokkono Liberation Group";
		priority = 2;
		side = 2;
		icon = "\FP_Factions\KLG\cfgfactionclasses_KLG_ca.paa";
		flag = "\FP_Factions\KLG\flag_KLG.paa";
	};
};
class CfgGroups
{
	class Indep
	{
		class FP_Faction_KLG_Units
		{
			name = "Kokkono Liberation Group";
			class ArmedCivilians
			{
				name = "KLG Mobs";
				class KLG_Mob_7
				{
					name = "Mob (7)";
					side = 2;
					faction = "FP_Faction_KLG";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_AK47";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_FAL";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_MP133";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_Mosin";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class KLG_Mob_9
				{
					name = "Mob (9)";
					side = 2;
					faction = "FP_Faction_KLG";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_AK47";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_FAL";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_MP133";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_Mosin";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_DP27";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_SKS";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KLG_AngryCrowd
				{
					name = "Angry Crowd";
					side = 2;
					faction = "FP_Faction_KLG";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_MP133";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "PRIVATE";
						position[] = {20,-25,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_SKS";
						rank = "PRIVATE";
						position[] = {-20,-25,0};
					};
				};
				class KLG_BruiseKrew
				{
					name = "Bruise Krew";
					side = 2;
					faction = "FP_Faction_KLG";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_AK47";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_PPSH";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_PPSH";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_PPSH";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_MP133";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_MP133";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_FAL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
    class CUP_B_RPGPack_Khaki;
	class CUP_B_RPGPack_Khaki_KLG_RPG: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine = "CUP_PG7V_M";
				count = 3;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_KLG_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"Head_African","G_CIVIL_male","LanguageFRE_F"};
		faceType = "Man_A3";
		side = 2;
		faction = "FP_Faction_KLG";
        genericNames = "AfroMen";
		vehicleClass = "Men";
		vehicleClass = "fp_men_armedcivs";
	    editorSubcategory = "fp_men_armedcivs_EdSubcat";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_01";  
		weapons[] = {"str_3xlin_sn","Throw","Put"};
		respawnWeapons[] = {"str_3xlin_sn","Throw","Put"};
		magazines[] = {"5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos"};
		respawnMagazines[] = {"5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","ItemRadio"};
	};
	class FP_Faction_KLG_Rifleman_Mosin: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (Mosin)";
		cost = 100000;
		headgearProbability = 100;
	};
	class FP_Faction_KLG_Rifleman_SKS: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (SKS)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_02";  
		weapons[] = {"str_sks_old","Throw","Put"};
		respawnWeapons[] = {"str_sks_old","Throw","Put"};
		magazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag"};
		respawnMagazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag"};
		linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","H_Hat_brown","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","H_Hat_brown","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_AK47: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (AK47)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_03";  
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		linkedItems[] = {"V_mas_gue_ind_webb","rds_Profiteer_cap2","ItemWatch"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","rds_Profiteer_cap2","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_DP27: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (DP-27)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_04";  
		weapons[] = {"str_pul_DP","Throw","Put"};
		respawnWeapons[] = {"str_pul_DP","Throw","Put"};
		magazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar"};
		respawnMagazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar"};
		linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","H_Cap_police","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","H_Cap_police","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_FAL: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (FAL)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_05";  
		weapons[] = {"hlc_rifle_FAL5000","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5000","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
		linkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","H_Cap_red","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","H_Cap_red","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_MP133: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (MP133)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_04";  
		weapons[] = {"str_mp133","Throw","Put"};
		respawnWeapons[] = {"str_mp133","Throw","Put"};
		magazines[] = {"7pul_drob","7pul_drob","7pul_drob"};
		respawnMagazines[] = {"7pul_drob","7pul_drob","7pul_drob"};
		linkedItems[] = {"CUP_V_I_Carrier_Belt","rds_worker_cap4","ItemWatch"};
		respawnLinkedItems[] = {"CUP_V_I_Carrier_Belt","rds_worker_cap4","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_PPSH: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (PPSh-41)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_06";  
		weapons[] = {"str_ppsh_old","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag"};
		linkedItems[] = {"V_Press_F","H_mas_gue_HelmetO","ItemWatch"};
		respawnLinkedItems[] = {"V_Press_F","H_mas_gue_HelmetO","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_TT33: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (TT-33)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_06";  
		weapons[] = {"RH_tt33","Throw","Put"};
		respawnWeapons[] = {"RH_tt33","Throw","Put"};
		magazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		respawnMagazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		linkedItems[] = {"ItemWatch"};
		respawnLinkedItems[] = {"ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_RPG: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (RPG-7)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "LOP_U_Civ_06";  
		backpack = "CUP_B_RPGPack_Khaki_KLG_RPG";
		weapons[] = {"RH_tt33","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"RH_tt33","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		respawnMagazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		linkedItems[] = {"ItemWatch"};
		respawnLinkedItems[] = {"ItemWatch"};
	};
    class CUP_I_Datsun_PK;
	class FP_Faction_KLG_Vehicle_DatsunPK: CUP_I_Datsun_PK
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_KLG";
		crew = "FP_Faction_KLG_Rifleman_TT33";
		side = 2;
	};
};
