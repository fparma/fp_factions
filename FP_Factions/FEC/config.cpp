class CfgPatches
{
	class FP_Factions_FEC
	{
		units[] = {"FP_Faction_FEC_Soldier_BASE","FP_Faction_FEC_Rifleman","FP_Faction_FEC_Rifleman_AK74","FP_Faction_FEC_Rifleman_Stg58","FP_Faction_FEC_AR","FP_Faction_FEC_AAR","FP_Faction_FEC_Commander","FP_Faction_FEC_SL","FP_Faction_FEC_TL","FP_Faction_FEC_DM","FP_Faction_FEC_RAT","FP_Faction_FEC_Medic","FP_Faction_FEC_Crewman","FP_Faction_FEC_Engineer","FP_Faction_FEC_MMG","FP_Faction_FEC_AMMG","FP_Faction_FEC_MAT","FP_Faction_FEC_AMAT","FP_Faction_FEC_MANPADS","FP_Faction_FEC_AMANPADS","FP_Faction_FEC_Vehicle_LandRover","FP_Faction_FEC_Vehicle_DatsunPK","FP_Faction_FEC_Vehicle_Brdm2","FP_Faction_FEC_Vehicle_UralZU23","FP_Faction_FEC_Vehicle_DshkmUAZ","FP_Faction_FEC_Vehicle_UAZ"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_WheeledVehicles_LR", "CUP_WheeledVehicles_BRDM2", "CUP_WheeledVehicles_Datsun", "CUP_WheeledVehicles_UAZ", "CUP_WheeledVehicles_Ural"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_FEC
	{
		displayName = "FEC";
		priority = 2;
		side = 2;
		icon = "\FP_Factions\FEC\cfgfactionclasses_FEC_ca.paa";
		flag = "\FP_Factions\FEC\flag_FEC.paa";
	};
};
class CfgGroups
{
	class Indep
	{
		class FP_Faction_FEC_Units
		{
			name = "FEC Militia";
			class Infantry
			{
				name = "FEC Infantry";
				class FEC_Riflesquad
				{
					name = "Rifle Section";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class FEC_RiflesquadMarksman
				{
					name = "Rifle Section (Marksman)";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_FEC_DM";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class FEC_WeaponsSquad
				{
					name = "Machinegun Section";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AMMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class FEC_Patrol
				{
					name = "Rifle Patrol";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FEC_RifleSentry
				{
					name = "Sentries";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class FEC_PltHQ
				{
					name = "Platoon HQ";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Support
			{
				name = "FEC Attachments";
				class FEC_DoctorTeam
				{
					name = "Doctor Team";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FEC_MMGTeam
				{
					name = "MMG Team";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class FEC_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_FEC_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FEC_MATTeam
				{
					name = "MAT Team";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class FEC_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 2;
					faction = "FP_Faction_FEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_FEC_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_FEC_AMANPADS";
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
	class CUP_B_AlicePack_Khaki_Eng_FEC: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_FEC_AAR: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_75Rnd_762x39_m_rpk
			{
				magazine = "hlc_75Rnd_762x39_m_rpk";
				count = 5;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_FEC_MMG: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 4;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_FEC_MAT: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_rpg7_PG7VM_mag
			{
				magazine = "CUP_PG7VM_M";
				count = 3;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_FEC_MANPADS: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_mag_9k38_rocket
			{
				magazine = "CUP_Strela_2_M";
				count = 1;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_Exp_FEC: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_FEC_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 2;
		faction = "FP_Faction_FEC";
		genericNames = "RussianMen";
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
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_StrichTTsMKK";  
		weapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_alice_webb","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Rifleman: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Helmet","CUP_H_TK_Helmet"};
	};
	class FP_Faction_FEC_Rifleman_AK74: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla (AK74)";
		uniformClass = "FP_Uniform_Strich";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Rifleman_Stg58: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla (Stg. 58)";
		uniformClass = "FP_Uniform_TTsMKK";
		weapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	    linkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
	};
	class FP_Faction_FEC_AR: FP_Faction_FEC_Soldier_BASE
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
		displayName = "AR Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKKOlive";  
		weapons[] = {"hlc_rifle_rpk","RH_cz75","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","RH_cz75","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_O","H_mas_gue_cap_O"};
	};
	class FP_Faction_FEC_AAR: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. AR Guerilla";
		backpack = "CUP_B_AlicePack_Khaki_FEC_AAR";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_Strich";
	    linkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_FEC_Commander: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "The Commander";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFORStrich"; 
		weapons[] = {"hlc_rifle_ak104","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak104","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"CUP_V_O_TK_OfficerBelt2","H_mas_gue_cow_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_O_TK_OfficerBelt2","H_mas_gue_cow_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cow_O"};
	};
	class FP_Faction_FEC_SL: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Group Leader";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFORStrich"; 
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_O","H_mas_gue_cap_O"};
	};
	class FP_Faction_FEC_TL: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_StrichTTsMKK"; 
		weapons[] = {"hlc_rifle_aks74_GL","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_O","H_mas_gue_cap_O"};
	};
	class FP_Faction_FEC_DM: FP_Faction_FEC_Soldier_BASE
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
		displayName = "Guerilla Sharpshooter";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKKOlive"; 
		weapons[] = {"CUP_srifle_SVD_takipso","RH_cz75","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_takipso","RH_cz75","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_alice_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_O","H_mas_gue_cap_O"};
	};
	class FP_Faction_FEC_RAT: FP_Faction_FEC_Soldier_BASE
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
		displayName = "Antitank Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKK"; 
		weapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_RPG18_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_RPG18_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Helmet","CUP_H_TK_Helmet"};
	};
	class FP_Faction_FEC_Medic: FP_Faction_FEC_Soldier_BASE
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
		displayName = "Guerilla Medic";
		attendant = 1;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_StrichTTsMKK"; 
		weapons[] = {"hlc_rifle_akms","RH_cz75","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_cz75","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {="hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_cap_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_O","H_mas_gue_cap_O"};
	};
	class FP_Faction_FEC_Crewman: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla Crewman";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFOR"; 	
		weapons[] = {"CUP_arifle_Sa58V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"V_mas_gue_alice_webb","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Helmet"};
	};
	class FP_Faction_FEC_Engineer: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFOR"; 
		backpack = "CUP_B_AlicePack_Khaki_Eng_FEC";
		weapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
	};
	class FP_Faction_FEC_MMG: FP_Faction_FEC_Soldier_BASE
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
		displayName = "MMG Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKKOlive"; 
		weapons[] = {"CUP_lmg_PKM","RH_cz75","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","RH_cz75","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_alice_webb_she","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","CUP_H_TK_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Helmet","CUP_H_TK_Helmet"};
	};
	class FP_Faction_FEC_AMMG: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. MMG Guerilla";
		backpack = "CUP_B_AlicePack_Khaki_FEC_MMG";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKK"; 
		weapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_Sa58P","Throw","Put"};
		magazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","CUP_30Rnd_Sa58_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	    linkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_FEC_MAT: FP_Faction_FEC_Soldier_BASE
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
		displayName = "RPG Guerilla";
		backpack = "CUP_B_AlicePack_Khaki_FEC_MAT";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_StrichTTsMKK";
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Helmet","CUP_H_TK_Helmet"};
	};
	class FP_Faction_FEC_AMAT: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPG Guerilla";
		backpack = "CUP_B_AlicePack_Khaki_FEC_MAT";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFOR";
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	    linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_FEC_MANPADS: FP_Faction_FEC_Soldier_BASE
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
		displayName = "MANPADS Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFORStrich"; 
		backpack = "CUP_B_AlicePack_Khaki_FEC_MANPADS";
		weapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
	    linkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb_she","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"H_mas_gue_HelmetO"};
	};
	class FP_Faction_FEC_AMANPADS: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. MANPADS Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKKOlive"; 
		backpack = "CUP_B_AlicePack_Khaki_FEC_MANPADS";
		headgearProbability = 100;
		weapons[] = {"hlc_rifle_ak74","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		allowedHeadgear[] = {"CUP_H_TK_Helmet","CUP_H_TK_Helmet"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_B_LR_Transport_GB_W;
    class CUP_I_Datsun_PK;
    class CUP_I_BRDM2_NAPA;
    class CUP_O_UAZ_MG_RU;
	class CUP_O_Ural_ZU23_RU;
    class CUP_O_UAZ_Unarmed_RU;
	class FP_Faction_FEC_Vehicle_LandRover: CUP_B_LR_Transport_GB_W
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Rifleman";
		side = 2;
	};
	class FP_Faction_FEC_Vehicle_DatsunPK: CUP_I_Datsun_PK
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Rifleman_Stg58";
		side = 2;
	};
	class FP_Faction_FEC_Vehicle_Brdm2: CUP_I_BRDM2_NAPA
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Crewman";
		side = 2;
	};
	class FP_Faction_FEC_Vehicle_UralZU23: CUP_O_Ural_ZU23_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Crewman";
		side = 2;
	};
	class FP_Faction_FEC_Vehicle_DshkmUAZ: CUP_O_UAZ_MG_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Rifleman_Stg58";
		side = 2;
	};
	class FP_Faction_FEC_Vehicle_UAZ: CUP_O_UAZ_Unarmed_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_FEC";
		crew = "FP_Faction_FEC_Rifleman_Stg58";
		side = 2;
	};
};
