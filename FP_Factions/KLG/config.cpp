class CfgPatches
{
	class FP_Factions_KLG
	{
		units[] = {"FP_Faction_KLG_Soldier_BASE","FP_Faction_KLG_Rifleman_Mosin","FP_Faction_KLG_Rifleman_AK47","FP_Faction_KLG_Rifleman_FAL","FP_Faction_KLG_Rifleman_SKS","FP_Faction_KLG_Rifleman_DP27","FP_Faction_KLG_Rifleman_PPSH","FP_Faction_KLG_Rifleman_TT33","FP_Faction_KLG_Rifleman_RPG", "FP_Faction_KLG_Rifleman_M1", "FP_Faction_KLG_Rifleman_M1903", "FP_Faction_KLG_Rifleman_M590","FP_Faction_KLG_Rifleman_Izh18","FP_Faction_KLG_Turret_Dshkm","FP_Faction_KLG_Vehicle_Datsun_PKM","FP_Faction_KLG_Vehicle_Hilux_Dshkm","FP_Faction_KLG_Vehicle_Hilux","FP_Faction_KLG_Vehicle_Datsun","FP_Faction_KLG_Vehicle_Ikarus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fpa_main"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_KLG
	{
		displayName = "FP Kokkono Liberation Group";
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
			name = "FP Kokkono Liberation Group";
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
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit5
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
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_Mosin";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_DP27";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit7
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
						vehicle = "FP_Faction_KLG_Rifleman_TT33";
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
						vehicle = "FP_Faction_KLG_Rifleman_FAL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_KLG_Rifleman_FAL";
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
    class B_Messenger_IDAP_F;
	class B_Messenger_IDAP_F_KLG_RPG: B_Messenger_IDAP_F
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_type69_airburst_mag
			{
				magazine = "rhs_rpg7_type69_airburst_mag";
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
		uniformClass = "FP_U_Civ_01";  
		weapons[] = {"str_3xlin_sn","Throw","Put"};
		respawnWeapons[] = {"str_3xlin_sn","Throw","Put"};
		magazines[] = {"5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos"};
		respawnMagazines[] = {"5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos","5rnd_762_mos"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsgref_alice_webbing","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","ItemRadio"};
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
		uniformClass = "FP_U_Civ_02";  
		weapons[] = {"str_sks_old","Throw","Put"};
		respawnWeapons[] = {"str_sks_old","Throw","Put"};
		magazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag"};
		respawnMagazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag"};
		linkedItems[] = {"V_Pocketed_black_F","ItemWatch"};
		respawnLinkedItems[] = {"V_Pocketed_black_F","ItemWatch"};
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
		uniformClass = "FP_U_Civ_03";  
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
		linkedItems[] = {"rhsgref_alice_webbing","H_StrawHat","ItemWatch"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","H_StrawHat","ItemWatch"};
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
		uniformClass = "FP_U_Civ_04";  
		weapons[] = {"str_pul_DP","Throw","Put"};
		respawnWeapons[] = {"str_pul_DP","Throw","Put"};
		magazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar"};
		respawnMagazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar"};
		linkedItems[] = {"rhs_6sh46","H_Cap_police","ItemWatch"};
		respawnLinkedItems[] = {"rhs_6sh46","H_Cap_police","ItemWatch"};
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
		uniformClass = "FP_U_Civ_05";  
		weapons[] = {"hlc_rifle_FAL5000","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FAL5000","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal"};
		linkedItems[] = {"V_Safety_yellow_F","H_Cap_red","ItemWatch"};
		respawnLinkedItems[] = {"V_Safety_yellow_F","H_Cap_red","ItemWatch"};
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
		uniformClass = "FP_U_Civ_06";  
		weapons[] = {"str_ppsh_old","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag"};
		linkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_press_F","ItemWatch"};
		respawnLinkedItems[] = {"V_EOD_blue_F","H_PASGT_basic_blue_press_F","ItemWatch"};
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
		uniformClass = "FP_U_Civ_06";  
		weapons[] = {"rhs_weap_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_tt33","Throw","Put"};
		magazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8"};
		respawnMagazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8"};
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
		uniformClass = "FP_U_Civ_06";  
		backpack = "B_Messenger_IDAP_F_KLG_RPG";
		weapons[] = {"rhs_weap_tt33","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_tt33","rhs_weap_rpg7","Throw","Put"};
		magazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8"};
		respawnMagazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8"};
		linkedItems[] = {"ItemWatch"};
		respawnLinkedItems[] = {"ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_Izh18: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (Izh-18)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "FP_U_Civ_01";  
		weapons[] = {"rhs_weap_Izh18","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_Izh18","Throw","Put"};
		magazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck"};
		respawnMagazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck"};
		linkedItems[] = {"V_TacVest_gen_F","ItemWatch"};
		respawnLinkedItems[] = {"V_TacVest_gen_F","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_M590: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (M590)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "FP_U_Civ_02";  
		weapons[] = {"rhs_weap_M590_5RD","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_M590_5RD","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck"};
		respawnMagazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck"};
		linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_oli","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_Booniehat_oli","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_M1903: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (M1903)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "FP_U_Civ_06";  
		weapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		magazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903"};
		respawnMagazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903"};
		linkedItems[] = {"rhsgref_alice_webbing","rhssaf_bandana_digital_desert","ItemWatch"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhssaf_bandana_digital_desert","ItemWatch"};
	};
	class FP_Faction_KLG_Rifleman_M1: FP_Faction_KLG_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KLG_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Armed Civilian (M1)";
		cost = 100000;
		headgearProbability = 100;
		model = "\A3\characters_F\civil\c_poor";
		uniformClass = "FP_U_Civ_02";  
		weapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m1garand_sa43","Throw","Put"};
		magazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle"};
		respawnMagazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle"};
		linkedItems[] = {"UK3CB_V_Pouch","H_Booniehat_oli","ItemWatch"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","H_Booniehat_oli","ItemWatch"};
	};
	class UK3CB_TKC_I_Ikarus;
	class UK3CB_TKC_I_Hilux_Civ_Open;
	class UK3CB_TKC_I_Datsun_Civ_Open;
	class UK3CB_CCM_I_Hilux_Dshkm;
	class UK3CB_CCM_I_Datsun_Pkm;
	class FP_Faction_KLG_Vehicle_Ikarus: UK3CB_TKC_I_Ikarus
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Car";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
	class FP_Faction_KLG_Vehicle_Datsun: UK3CB_TKC_I_Datsun_Civ_Open
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Car";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
	class FP_Faction_KLG_Vehicle_Hilux: UK3CB_TKC_I_Hilux_Civ_Open
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Car";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
	class FP_Faction_KLG_Vehicle_Hilux_Dshkm: UK3CB_CCM_I_Hilux_Dshkm
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Car";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
	class FP_Faction_KLG_Vehicle_Datsun_PKM: UK3CB_CCM_I_Datsun_Pkm
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Car";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
	class UK3CB_TKM_I_DSHKM;
	class FP_Faction_KLG_Turret_Dshkm: UK3CB_TKM_I_DSHKM
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_KLG";
		vehicleClass = "Static";
		crew = "FP_Faction_KLG_Rifleman_TT33";
	};
};
