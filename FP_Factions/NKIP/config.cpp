class CfgPatches
{
	class FP_Factions_NKIA
	{
		units[] = {"FP_Faction_NKIA_Soldier_BASE","FP_Faction_NKIA_Rifleman","FP_Faction_NKIA_Rifleman_M16","FP_Faction_NKIA_Rifleman_M14","FP_Faction_NKIA_Rifleman_Mauser","FP_Faction_NKIA_Militiaman_PKM","FP_Faction_NKIA_Militiaman_DP","FP_Faction_NKIA_CellLeader","FP_Faction_NKIA_TL","FP_Faction_NKIA_Sharpshooter","FP_Faction_NKIA_Militiaman_RPG","FP_Faction_NKIA_Turret_SPG9","FP_Faction_NKIA_Turret_NSV","FP_Faction_NKIA_Vehicle_T34","FP_Faction_NKIA_Vehicle_V3S_Open","FP_Faction_NKIA_Vehicle_Hilux_Zu23","FP_Faction_NKIA_Vehicle_Hilux_Dshkm","FP_Faction_NKIA_Vehicle_Hilux_Rocket_Arty","FP_Faction_NKIA_Vehicle_Datsun_PKM"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"FP_UniformsEverywhereElse","rhssaf_t_headgear_beret"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_NKIA
	{
		displayName = "FP NKIA";
		priority = 2;
		side = 2;
		icon = "\FP_Factions\NKIP\cfgFactionClasses_nkia_ca.paa";
		flag = "\FP_Factions\NKIP\flag_nkia.paa";
	};
};
class CfgGroups
{
	class Indep
	{
		class FP_Faction_NKIA_Units
		{
			name = "FP NKIA";
			class Infantry
			{
				name = "NKIA Militia";
				class NKIA_Group_8
				{
					name = "Militia Group (8)";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M16";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Militiaman_PKM";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M14";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M16";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_Mauser";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class NKIA_Group_4
				{
					name = "Militia Group (4)";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Militiaman_DP";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M14";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class NKIA_Cell_Leadership
				{
					name = "Militia Cell Command";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_CellLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_TL";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Sharpshooter";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Militiaman_PKM";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
				};
				class NKIA_Patrol
				{
					name = "Militia Patrol";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M16";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_Mauser";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M14";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NKIA_ATTeam
				{
					name = "Militia Tankhunters";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Militiaman_RPG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Militiaman_RPG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_Mauser";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class NKIA_Sentries
				{
					name = "Sentries";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_M14";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_Mauser";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class NKIA_SniperTeam
				{
					name = "Sniper Team";
					side = 2;
					faction = "FP_Faction_NKIA";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Sharpshooter";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_NKIA_Rifleman_Mauser";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
    class rhs_rpg_empty;
	class rhs_rpg_full_NKIA_rockets: rhs_rpg_empty
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7V_mag
			{
				magazine = "rhs_rpg7_PG7V_mag";
				count = 2;
			};
			class _xx_rhs_rpg7_OG7V_mag
			{
				magazine = "rhs_rpg7_OG7V_mag";
				count = 2;
			};
		};
	};	
	class B_Soldier_F;
	class FP_Faction_NKIA_Soldier_BASE: B_Soldier_F
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
		faction = "FP_Faction_NKIA";
		genericNames = "TakistaniMen";
		vehicleClass = "fp_men_militia";
	    editorSubcategory = "fp_men_militia_EdSubcat";
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
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "m93_6c";  
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_f1"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_f1"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKM_O_H_Turban_02_1"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKM_O_H_Turban_02_1"};
	};
	class FP_Faction_NKIA_Rifleman: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_NKIA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (AKM)";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKM_O_H_Turban_02_1","UK3CB_TKM_O_H_Turban_02_1"};
	};
	class FP_Faction_NKIA_Rifleman_M16: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_NKIA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (M16)";
		cost = 100000;
		headgearProbability = 100;
		uniformClass = "m93_irn";  
		weapons[] = {"FP_M16A1","Throw","Put"};
		respawnWeapons[] = {"FP_M16A1","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","rhs_mag_f1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","rhs_mag_f1"};
		linkedItems[] = {"rhsgref_chestrig","UK3CB_TKM_O_H_Turban_02_1"};
		respawnLinkedItems[] = {"rhsgref_chestrig","UK3CB_TKM_O_H_Turban_02_1"};
		allowedHeadgear[] = {"UK3CB_TKM_O_H_Turban_02_1","UK3CB_TKM_O_H_Turban_02_1"};
	};
	class FP_Faction_NKIA_Rifleman_M14: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_NKIA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (M14)";
		cost = 100000;
		headgearProbability = 100;
		uniformClass = "m93_6cm";  
		weapons[] = {"hlc_rifle_M14","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","rhs_mag_f1"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","rhs_mag_f1"};
		linkedItems[] = {"rhsgref_alice_webbing","H_ShemagOpen_khk"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","H_ShemagOpen_khk"};
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_NKIA_Rifleman_Mauser: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_NKIA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (Mauser)";
		cost = 100000;
		headgearProbability = 100;
		uniformClass = "m93_khk";  
		weapons[] = {"rhs_weap_kar98k","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_kar98k","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhs_mag_f1"};
		respawnMagazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhs_mag_f1"};
		linkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKC_H_Turban_04_1"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKC_H_Turban_04_1"};
		allowedHeadgear[] = {"UK3CB_TKC_H_Turban_04_1","UK3CB_TKC_H_Turban_04_1"};
	};
	class FP_Faction_NKIA_Militiaman_PKM: FP_Faction_NKIA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (PKM)";
		uniformClass = "m93_cd";
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"rhsgref_alice_webbing","UK3CB_TKM_B_H_Turban_02_1","ItemWatch"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","UK3CB_TKM_B_H_Turban_02_1","ItemWatch"};
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKM_B_H_Turban_02_1","UK3CB_TKM_B_H_Turban_02_1"};
	};
	class FP_Faction_NKIA_Militiaman_DP: FP_Faction_NKIA_Militiaman_PKM
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (DP)";
		uniformClass = "m93_od";
		headgearProbability = 100;
		weapons[] = {"str_pul_DP","Throw","Put"};
		respawnWeapons[] = {"str_pul_DP","Throw","Put"};
		magazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_f1"};
		respawnMagazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_f1"};
		linkedItems[] = {"rhsgref_chestrig","UK3CB_H_Shemag_red"};
		respawnLinkedItems[] = {"rhsgref_chestrig","UK3CB_H_Shemag_red"};
		allowedHeadgear[] = {"UK3CB_H_Shemag_red","UK3CB_H_Shemag_red"};
	};
	class FP_Faction_NKIA_CellLeader: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Cell Leader";
		uniformClass = "m93_dg";
		weapons[] = {"rhs_weap_ak104","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"rhs_weap_ak104","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm","rhs_75Rnd_762x39mm","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"UK3CB_V_Pouch","UK3CB_H_Beret_Officer","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","UK3CB_H_Beret_Officer","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 80;
		allowedHeadgear[] = {"UK3CB_H_Beret_Officer","UK3CB_H_Beret_Officer"};
	};
	class FP_Faction_NKIA_TL: FP_Faction_NKIA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		uniformClass = "m93_6cm";
		weapons[] = {"rhs_weap_m3a1","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m3a1","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhsgref_30rnd_1143x23_M1T_2mag_SMG","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"UK3CB_V_Chestrig_TKA_OLI","UK3CB_TKC_H_Turban_05_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"UK3CB_V_Chestrig_TKA_OLI","UK3CB_TKC_H_Turban_05_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"UK3CB_TKC_H_Turban_05_1","UK3CB_TKC_H_Turban_05_1"};
	};
	class FP_Faction_NKIA_Sharpshooter: FP_Faction_NKIA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Sharpshooter";
		uniformClass = "m93_dg";
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 150000;
		linkedItems[] = {"UK3CB_V_Pouch","UK3CB_H_Mil_Turban_Wrap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","UK3CB_H_Mil_Turban_Wrap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"UK3CB_H_Mil_Turban_Wrap","UK3CB_H_Mil_Turban_Wrap"};
	};
	class FP_Faction_NKIA_Militiaman_RPG: FP_Faction_NKIA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (RPG)";
		uniformClass = "m93_dg";
		backpack = "rhs_rpg_full_NKIA_rockets";
		weapons[] = {"FP_UZI","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"FP_UZI","rhs_weap_rpg7","Throw","Put"};
		magazines[] = {"FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B"};
		respawnMagazines[] = {"FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		linkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKM_I_H_Turban_02_1"};
		respawnLinkedItems[] = {"UK3CB_V_Pouch","UK3CB_TKM_I_H_Turban_02_1"};
		allowedHeadgear[] = {"UK3CB_TKM_I_H_Turban_02_1","UK3CB_TKM_I_H_Turban_02_1"};
	};
	class UK3CB_TKM_O_Datsun_Pkm;
	class UK3CB_TKM_O_Hilux_Rocket_Arty;
	class UK3CB_TKM_O_Hilux_Dshkm;
	class UK3CB_TKM_O_Hilux_Zu23;
	class UK3CB_TKM_O_V3S_Open;
	class FP_Faction_NKIA_Vehicle_Datsun_PKM: UK3CB_TKM_O_Datsun_Pkm
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Car";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class FP_Faction_NKIA_Vehicle_Hilux_Rocket_Arty: UK3CB_TKM_O_Hilux_Rocket_Arty
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Car";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class FP_Faction_NKIA_Vehicle_Hilux_Dshkm: UK3CB_TKM_O_Hilux_Dshkm
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Car";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class FP_Faction_NKIA_Vehicle_Hilux_Zu23: UK3CB_TKM_O_Hilux_Zu23
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Car";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class FP_Faction_NKIA_Vehicle_V3S_Open: UK3CB_TKM_O_V3S_Open
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Car";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class UK3CB_TKM_O_T34;
	class FP_Faction_NKIA_Vehicle_T34: UK3CB_TKM_O_T34
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		category = "Armored";
		vehicleClass = "Armored";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class UK3CB_TKM_O_NSV;
	class UK3CB_TKM_O_SPG9;
	class FP_Faction_NKIA_Turret_NSV: UK3CB_TKM_O_NSV
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Static";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
	class FP_Faction_NKIA_Turret_SPG9: UK3CB_TKM_O_SPG9
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_NKIA";
		vehicleClass = "Static";
		side = 2;
		crew = "FP_Faction_NKIA_Rifleman";
	};
};