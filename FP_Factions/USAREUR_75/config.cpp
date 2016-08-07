class CfgPatches
{
	class FP_Factions_USAREUR75
	{
		units[] = {"FP_Faction_USAREUR75_Soldier_BASE","FP_Faction_USAREUR75_Rifleman","FP_Faction_USAREUR75_AR","FP_Faction_USAREUR75_AAR","FP_Faction_USAREUR75_SL","FP_Faction_USAREUR75_TL","FP_Faction_USAREUR75_RTO","FP_Faction_USAREUR75_Grenadier","FP_Faction_USAREUR75_DM","FP_Faction_USAREUR75_RAT","FP_Faction_USAREUR75_Medic","FP_Faction_USAREUR75_Crewman","FP_Faction_USAREUR75_Vehicle_M113","FP_Faction_USAREUR75_Vehicle_M60A1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F", "cwr2_M60_tank", "CUP_TrackedVehicles_M113"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_USAREUR75
	{
		displayName = "USA (1975)";
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
		class FP_Faction_USAREUR75_Units
		{
			name = "USA (1975)";
			class Infantry
			{
				name = "USA (1960) Infantry";
				class USAREUR75_Riflesquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR75_WeaponsSquad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AAR";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AAR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR75_Patrol
				{
					name = "Rifle Patrol";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR75_RifleSentry
				{
					name = "Sentries";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class USAREUR75_PltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RTO";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RTO";
						rank = "PRIVATE";
						position[] = {10, 4,0};
					};
				};
			};
		    class Mechanized
			{
				name = "USA (1975) Mechanized Infantry";
				class USAREUR75_MechRiflesquad
				{
					name = "Mechanized Rifle Squad (M113)";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR75_MechWeaponsSquad
				{
					name = "Mechanized Weapons Squad (M113)";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AAR";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_TL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AAR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR75_MechPltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_RTO";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_Vehicle_M113";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
			};
			class Support
			{
				name = "USA (1975) Company Attachments";
				class USAREUR75_MMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "FP_Faction_USAREUR75";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR75_AAR";
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
	class CUP_B_AlicePack_Khaki_AAR_USAREUR75: CUP_B_AlicePack_Khaki
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
	class FP_Faction_USAREUR75_Soldier_BASE: B_Soldier_F
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
		faction = "FP_Faction_USAREUR75";
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
		weapons[] = {"RH_M16a1","Throw","Put"};
		respawnWeapons[] = {"RH_M16a1","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR75_Rifleman: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_USAREUR75_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_AR: FP_Faction_USAREUR75_Soldier_BASE
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
		displayName = "Automagic Rifleman";
		weapons[] = {"hlc_lmg_m60","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_m60","RH_m1911","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_B_M60E4","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"usm_vest_LBE_mg","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_mg","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_AAR: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_AlicePack_Khaki_AAR_USAREUR75";
		headgearProbability = 100;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR75_SL: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"RH_M16a1","RH_m1911","Throw","Put","Binocular"};
		respawnWeapons[] = {"RH_M16a1","RH_m1911","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
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
	class FP_Faction_USAREUR75_TL: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"RH_M16a1","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"RH_M16a1","RH_m1911","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_RTO: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "RTO";
		weapons[] = {"RH_M16a1","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"RH_M16a1","RH_m1911","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		linkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "usm_pack_st138_prc77";
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_Grenadier: FP_Faction_USAREUR75_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {"CUP_glaunch_M79","RH_m1911","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","RH_m1911","Throw","Put"};
		magazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203"};
		respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","RH_7Rnd_45cal_m1911","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203"};
		cost = 150000;
		linkedItems[] = {"usm_vest_LBE_rm","usm_bdu_boonie_odg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","usm_bdu_boonie_odg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"usm_bdu_boonie_odg"};
	};
	class FP_Faction_USAREUR75_DM: FP_Faction_USAREUR75_Soldier_BASE
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
		linkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_LBE_rm","fp_helmet_m1_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_RAT: FP_Faction_USAREUR75_Soldier_BASE
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
		weapons[] = {"RH_M16a1","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"RH_M16a1","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_Medic: FP_Faction_USAREUR75_Soldier_BASE
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
		weapons[] = {"RH_M16a1","Throw","Put"};
		respawnWeapons[] = {"RH_M16a1","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"fp_helmet_m1_camo"};
	};
	class FP_Faction_USAREUR75_Crewman: FP_Faction_USAREUR75_Soldier_BASE
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
	class CUP_B_M113_USA;
	class FP_Faction_USAREUR75_Vehicle_M113: CUP_B_M113_USA
	{
	    displayName = "M113 Gavin (M2)";
		author = "FP Mod Team";
		faction = "FP_Faction_USAREUR75";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR75_Crewman";
	};
	class cwr2_M60A1;
	class FP_Faction_USAREUR75_Vehicle_M60A1: cwr2_M60A1
	{
	    displayName = "M60A1";
		author = "FP Mod Team";
		faction = "FP_Faction_USAREUR75";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR75_Crewman";
	};
};



