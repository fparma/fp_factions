class CfgPatches
{
	class FP_Factions_USAREUR60
	{
		units[] = {"FP_Faction_USAREUR60_Soldier_BASE","FP_Faction_USAREUR60_Rifleman","FP_Faction_USAREUR60_AR","FP_Faction_USAREUR60_AAR","FP_Faction_USAREUR60_SL","FP_Faction_USAREUR60_TL","FP_Faction_USAREUR60_RTO","FP_Faction_USAREUR60_DM","FP_Faction_USAREUR60_RAT","FP_Faction_USAREUR60_Medic","FP_Faction_USAREUR60_Crewman","FP_Faction_USAREUR60_AR","FP_Faction_USAREUR60_AAR","FP_Faction_USAREUR60_Vehicle_M113"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_USAREUR60
	{
		displayName = "USA (1960)";
		priority = 2;
		side = 1;
		icon = "\FP_Factions\USAREUR_60\cfgFactionClasses_usa_ca.paa";
		flag = "\FP_Factions\USAREUR_60\flag_usa.paa";
	};
};
class CfgGroups
{
	class West
	{
		class FP_Faction_USAREUR60_Units
		{
			name = "USA (1960)";
			class Infantry
			{
				name = "USAREUR 1960 Infantry";
				class USAREUR60_Riflesquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR60_WeaponsSquad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AAR";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AAR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR60_Patrol
				{
					name = "Rifle Patrol";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR60_RifleSentry
				{
					name = "Sentries";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class USAREUR60_PltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RTO";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {10, 4,0};
					};
				};
			};
		    class Mechanized
			{
				name = "USA (1960) Mechanized Infantry";
				class USAREUR60_MechRiflesquad
				{
					name = "Mechanized Rifle Squad (M113)";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR60_MechWeaponsSquad
				{
					name = "Mechanized Weapons Squad (M113)";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AAR";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_TL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AAR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR60_MechPltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_RTO";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
			};
			class Support
			{
				name = "USA (1960) Company Attachments";
				class USAREUR60_ARTeam
				{
					name = "AR Team";
					side = 1;
					faction = "FP_Faction_USAREUR60";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR60_AAR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
	class CUP_B_AlicePack_Khaki;
	class CUP_B_AlicePack_Khaki_AAR_USAREUR60: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 5;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_AR_USAREUR60: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_B_M60E4
			{
				magazine = "hlc_100Rnd_762x51_B_M60E4";
				count = 4;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_USAREUR60_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_CIVIL_male"};
		faceType = "Man_A3";
		side = 1;
		faction = "FP_Faction_USAREUR60";
		genericNames = "NATOMen";
		vehicleClass = "Men";
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
		modelSides[] = {1,2,3};
		model = "\us_military_units\usm_uniform_bdu.p3d";
		uniformClass = "usm_bdu_odg";  
		weapons[] = {"hlc_rifle_M14","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR60_Rifleman: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_USAREUR60_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_AR: FP_Faction_USAREUR60_Soldier_BASE
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
		displayName = "Automatic Rifleman";
		weapons[] = {"hlc_rifle_M14_Bipod","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14_Bipod","RH_m1911","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_AAR: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_AlicePack_Khaki_AAR_USAREUR60";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR60_SL: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put","Binocular"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"usm_vest_LBE_rm","usm_bdu_8point_odg","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","usm_bdu_8point_odg","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"usm_bdu_8point_odg"};
	};
	class FP_Faction_USAREUR60_TL: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_RTO: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "RTO";
		weapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","RH_m1911","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		linkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		backpack = "usm_pack_st138_prc77";
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_DM: FP_Faction_USAREUR60_Soldier_BASE
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
		displayName = "Designated Marksman";
		weapons[] = {"hlc_rifle_M14_Bipod_USAREUR60_marksman","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14_Bipod_USAREUR60_marksman","RH_m1911","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 150000;
		linkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_RAT: FP_Faction_USAREUR60_Soldier_BASE
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
		displayName = "Rifleman Antitank";
		weapons[] = {"hlc_rifle_M14","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_Medic: FP_Faction_USAREUR60_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"hlc_rifle_M14","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_Crewman: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"sfp_kpistm45","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"sfp_kpistm45","RH_m1911","Throw","Put"};
		magazines[] = {"sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","sfp_36Rnd_9mm_kpistm45","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"usm_vest_LBE_rm","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_HelmetCrew_I"};
	};
	class FP_Faction_USAREUR60_AR: FP_Faction_USAREUR60_Soldier_BASE
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
		displayName = "AR Gunner";
		weapons[] = {"hlc_lmg_m60","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_m60","RH_m1911","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
	};
	class FP_Faction_USAREUR60_AAR: FP_Faction_USAREUR60_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "AR Assistant";
		backpack = "CUP_B_AlicePack_Khaki_AR_USAREUR60";
		weapons[] = {"hlc_rifle_M14","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M14","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14","SmokeShell","SmokeShell"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetI"};
		linkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_mg","H_mas_gue_HelmetI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_B_M113_USA;
	class FP_Faction_USAREUR60_Vehicle_M113: CUP_B_M113_USA
	{
	    displayName = "M113 Gavin (M2)";
		author = "FP Mod Team";
		faction = "FP_Faction_USAREUR60";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR60_Crewman";
		transportAmmo = 0;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class hlc_rifle_M14_Bipod;
	class hlc_rifle_M14_Bipod_USAREUR60_marksman: hlc_rifle_M14_Bipod
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "hlc_optic_artel_m14";
				slot = "CowsSlot";
			};
		};
	};
};



