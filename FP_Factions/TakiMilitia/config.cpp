class CfgPatches
{
	class FP_Factions_TakiMilitia
	{
		units[] = {"FP_Faction_TakiMilitia_Soldier_BASE","FP_Faction_TakiMilitia_Rifleman","FP_Faction_TakiMilitia_Rifleman_FAL","FP_Faction_TakiMilitia_Rifleman_LeeEnfield","FP_Faction_TakiMilitia_Grenadier","FP_Faction_TakiMilitia_AR","FP_Faction_TakiMilitia_AAR","FP_Faction_TakiMilitia_SL","FP_Faction_TakiMilitia_TL","FP_Faction_TakiMilitia_DM","FP_Faction_TakiMilitia_RAT","FP_Faction_TakiMilitia_Medic","FP_Faction_TakiMilitia_Crewman","FP_Faction_TakiMilitia_Engineer","FP_Faction_TakiMilitia_MMG","FP_Faction_TakiMilitia_AMMG","FP_Faction_TakiMilitia_MAT","FP_Faction_TakiMilitia_AMAT","FP_Faction_TakiMilitia_MANPADS","FP_Faction_TakiMilitia_AMANPADS","FP_Faction_TakiMilitia_Vehicle_LandRover","FP_Faction_TakiMilitia_Vehicle_DatsunPK"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_TakiMilitia
	{
		displayName = "Takistani Militia";
		priority = 2;
		side = 2;
		icon = "\FP_Factions\TakiMilitia\cfgfactionclasses_TakiMilitia_ca.paa";
		flag = "\FP_Factions\TakiMilitia\flag_TakiMilitia.paa";
	};
};
class CfgGroups
{
	class Indep
	{
		class FP_Faction_TakiMilitia_Units
		{
			name = "Takistani Militia";
			class Infantry
			{
				name = "Takistani Militia Infantry";
				class TakiMilitia_Riflesquad
				{
					name = "Rifle Section";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class TakiMilitia_RiflesquadMarksman
				{
					name = "Rifle Section (Marksman)";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_DM";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class TakiMilitia_WeaponsSquad
				{
					name = "Machinegun Section";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AMMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class TakiMilitia_Patrol
				{
					name = "Rifle Patrol";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class TakiMilitia_RifleSentry
				{
					name = "Sentries";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class TakiMilitia_PltHQ
				{
					name = "Platoon HQ";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Support
			{
				name = "TakiMilitia Attachments";
				class TakiMilitia_DoctorTeam
				{
					name = "Doctor Team";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class TakiMilitia_MMGTeam
				{
					name = "MMG Team";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class TakiMilitia_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class TakiMilitia_MATTeam
				{
					name = "MAT Team";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class TakiMilitia_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 2;
					faction = "FP_Faction_TakiMilitia";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_TakiMilitia_AMANPADS";
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
	class CUP_B_AlicePack_Khaki_Eng_TakiMilitia: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_TakiMilitia_AAR: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_TakiMilitia_MMG: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_TakiMilitia_MAT: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_rpg7_PG7VL_mag
			{
				magazine = "CUP_PG7V_M";
				count = 3;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_TakiMilitia_MANPADS: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_Exp_TakiMilitia: CUP_B_AlicePack_Khaki
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
	class FP_Faction_TakiMilitia_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
		faceType = "Man_A3";
		side = 2;
		faction = "FP_Faction_TakiMilitia";
		genericNames = "TakistaniMen";
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
		model = "\lop_m_wep_uniforms\tak_civil01.p3d";
		uniformClass = "LOP_U_Afg_civ_01";  
		weapons[] = {"hlc_rifle_ak47","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_TakiMilitia_Rifleman: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_TakiMilitia_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_Rifleman_FAL: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_TakiMilitia_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (FAL)";
		weapons[] = {"hlc_rifle_L1A1SLR","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_L1A1SLR","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_TakiMilitia_Rifleman_LeeEnfield: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_TakiMilitia_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militiaman (Lee-Enfield)";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_TakiMilitia_AR: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "RPK Militiaman";
		model = "\lop_m_wep_uniforms\tak_civil02.p3d";
		uniformClass = "LOP_U_Afg_civ_02";  
		weapons[] = {"hlc_rifle_rpk","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","RH_tt33","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_AAR: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPK Militiaman";
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_AAR";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\tak_civil03.p3d";
		uniformClass = "LOP_U_Afg_civ_03"; 
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_TakiMilitia_SL: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Group Leader";
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04"; 
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_TL: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		model = "\lop_m_wep_uniforms\tak_civil01.p3d";
		uniformClass = "LOP_U_Afg_civ_01"; 
		weapons[] = {"hlc_rifle_akm2","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","RH_tt33","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_DM: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "Militia Marksman";
		model = "\lop_m_wep_uniforms\tak_civil02.p3d";
		uniformClass = "LOP_U_Afg_civ_02"; 
		weapons[] = {"CUP_srifle_LeeEnfield_rail_takiscope","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield_rail_takiscope","RH_tt33","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_Grenadier: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Grenadier";
		model = "\lop_m_wep_uniforms\tak_civil02.p3d";
		uniformClass = "LOP_U_Afg_civ_02"; 
		weapons[] = {"CUP_glaunch_M79","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","RH_tt33","Throw","Put"};
		magazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","SmokeShell","SmokeShell"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_RAT: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "RKG Militiaman";
		model = "\lop_m_wep_uniforms\tak_civil03.p3d";
		uniformClass = "LOP_U_Afg_civ_03"; 
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3E","FP_HandGrenade_RKG3E","FP_HandGrenade_RKG3E","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3E","FP_HandGrenade_RKG3E","FP_HandGrenade_RKG3E","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_Medic: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "Militia Witchdoctor";
		attendant = 1;
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04"; 
		weapons[] = {"hlc_rifle_akms","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_tt33","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {="hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_Crewman: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Driver";
		model = "\lop_m_wep_uniforms\tak_civil02.p3d";
		uniformClass = "LOP_U_Afg_civ_02"; 	
		weapons[] = {"hlc_rifle_akm","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","RH_tt33","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_Engineer: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Mechanic";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04"; 
		backpack = "CUP_B_AlicePack_Khaki_Eng_TakiMilitia";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_mas_gue_cap_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_cap_I","H_mas_gue_cap_I"};
	};
	class FP_Faction_TakiMilitia_MMG: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "Militia Gunner";
		model = "\lop_m_wep_uniforms\tak_civil01.p3d";
		uniformClass = "LOP_U_Afg_civ_01"; 
		weapons[] = {"CUP_lmg_PKM","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","RH_tt33","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","FP_Helmet_Pakol","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_AMMG: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Militia Gunner";
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_MMG";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\tak_civil02.p3d";
		uniformClass = "LOP_U_Afg_civ_02"; 
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_TakiMilitia_MAT: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "RPG Militiaman";
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_MAT";
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04";
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_AMAT: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPG Militiaman";
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_MAT";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\tak_civil03.p3d";
		uniformClass = "LOP_U_Afg_civ_03";
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_TakiMilitia_MANPADS: FP_Faction_TakiMilitia_Soldier_BASE
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
		displayName = "Strela Militiaman";
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04"; 
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_MANPADS";
		weapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
	};
	class FP_Faction_TakiMilitia_AMANPADS: FP_Faction_TakiMilitia_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Strela Militiaman";
		model = "\lop_m_wep_uniforms\tak_civil06.p3d";
		uniformClass = "LOP_U_Afg_civ_04"; 
		backpack = "CUP_B_AlicePack_Khaki_TakiMilitia_MANPADS";
		headgearProbability = 100;
		weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		allowedHeadgear[] = {"FP_Helmet_Pakol","FP_Helmet_Pakol"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_B_LR_Transport_GB_D;
    class CUP_I_Datsun_PK_TK;
	class FP_Faction_TakiMilitia_Vehicle_LandRover: CUP_B_LR_Transport_GB_D
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_TakiMilitia";
		crew = "FP_Faction_TakiMilitia_Rifleman";
		side = 2;
	};
	class FP_Faction_TakiMilitia_Vehicle_DatsunPK: CUP_I_Datsun_PK_TK
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_TakiMilitia";
		crew = "FP_Faction_TakiMilitia_Crewman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class CUP_srifle_LeeEnfield_rail;
	class CUP_srifle_LeeEnfield_rail_takiscope: CUP_srifle_LeeEnfield_rail
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_old";
				slot = "CowsSlot";
			};
		};
	};
};



