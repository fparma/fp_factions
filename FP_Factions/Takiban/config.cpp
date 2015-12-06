class CfgPatches
{
	class FP_Factions_Takiban
	{
		units[] = {"FP_Faction_Takiban_Soldier_BASE","FP_Faction_Takiban_Rifleman","FP_Faction_Takiban_Rifleman_G3","FP_Faction_Takiban_Assaulter","FP_Faction_Takiban_AR","FP_Faction_Takiban_AAR","FP_Faction_Takiban_SL","FP_Faction_Takiban_TL","FP_Faction_Takiban_DM","FP_Faction_Takiban_RAT","FP_Faction_Takiban_Medic","FP_Faction_Takiban_Crewman","FP_Faction_Takiban_Engineer","FP_Faction_Takiban_MMG","FP_Faction_Takiban_AMMG","FP_Faction_Takiban_MAT","FP_Faction_Takiban_AMAT","FP_Faction_Takiban_MANPADS","FP_Faction_Takiban_AMANPADS","FP_Faction_Takiban_Vehicle_UAZ496","FP_Faction_Takiban_Vehicle_LandRoverSPG9","FP_Faction_Takiban_Vehicle_DatsunPK","FP_Faction_Takiban_Vehicle_UralZU23"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_Takiban
	{
		displayName = "Takiban";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\Takiban\cfgfactionclasses_takiban_ca.paa";
		flag = "\FP_Factions\Takiban\flag_takiban.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_Takiban_Units
		{
			name = "Takiban";
			class Infantry
			{
				name = "Takiban Infantry";
				class Takiban_Riflesquad_4
				{
					name = "Rifle Section (4)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Takiban_Riflesquad_6
				{
					name = "Rifle Section (6)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class Takiban_Riflesquad_8
				{
					name = "Rifle Section (8)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class Takiban_AssaultGroup_6
				{
					name = "Assault Section (6)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AAR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class Takiban_AssaultGroup_8
				{
					name = "Assault Section (8)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AAR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Assaulter";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
				};
				class Takiban_VetRiflesquad_6
				{
					name = "Veteran Rifle Section (6)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMAT";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class Takiban_VetRiflesquad_8
				{
					name = "Veteran Rifle Section (8)";
					side = 0;
					faction = "FP_Faction_Takiban";
					name = "Veteran Rifle Section (6)";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMAT";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MMG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class Takiban_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Takiban_RifleSentry
				{
					name = "Sentries";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman_G3";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class Takiban_PltHQ
				{
					name = "Cell HQ";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Support
			{
				name = "Takiban Attachments";
				class Takiban_MMGTeam
				{
					name = "MMG Team";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class Takiban_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Takiban_MATTeam
				{
					name = "MAT Team";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class Takiban_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 0;
					faction = "FP_Faction_Takiban";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_Takiban_AMANPADS";
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
	class CUP_B_AlicePack_Khaki_Eng_Takiban: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_Takiban_AAR: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 5;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_Takiban_MMG: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_Takiban_MAT: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_Takiban_MANPADS: CUP_B_AlicePack_Khaki
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
	class CUP_B_AlicePack_Khaki_Exp_Takiban: CUP_B_AlicePack_Khaki
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
	class FP_Faction_Takiban_Soldier_BASE: B_Soldier_F
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
		side = 0;
		faction = "FP_Faction_Takiban";
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
		model = "\lop_m_wep_uniforms\loc_opfor01.p3d";
		uniformClass = "LOP_U_Mil_01";  
		weapons[] = {"hlc_rifle_ak74_dirty","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_Takiban_Rifleman: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_Takiban_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Fighter";
		cost = 100000;
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2";  
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_Rifleman_G3: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_Takiban_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Fighter (G3A3)";
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2";  
		weapons[] = {"hlc_rifle_g3a3","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_Takiban_Assaulter: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_Takiban_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assaulter";
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2";  
		weapons[] = {"hlc_rifle_aks74u","RH_mak","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_aks74u","RH_mak","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_Takiban_AR: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "RPK Fighter";
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2";  
		weapons[] = {"hlc_rifle_rpk74","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk74","RH_mak","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_AAR: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPK Fighter";
		backpack = "CUP_B_AlicePack_Khaki_Takiban_AAR";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\loc_opfor04.p3d";
		uniformClass = "LOP_U_Mil_03"; 
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_Takiban_SL: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Cell Leader";
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04"; 
		weapons[] = {"hlc_rifle_aks74u","RH_mak","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_aks74u","RH_mak","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_TL: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Group Leader";
		model = "\lop_m_wep_uniforms\loc_opfor01.p3d";
		uniformClass = "LOP_U_Mil_01"; 
		weapons[] = {"hlc_rifle_aks74_GL","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74_GL","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_DM: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "Sniper";
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02"; 
		weapons[] = {"CUP_srifle_SVD_takipso","RH_mak","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_takipso","RH_mak","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_RAT: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "RKG Carrier";
		model = "\lop_m_wep_uniforms\loc_opfor04.p3d";
		uniformClass = "LOP_U_Mil_03"; 
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_Medic: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "Bonesetter";
		attendant = 1;
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04"; 
		weapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {="hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_Crewman: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Driver";
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2"; 	
		weapons[] = {"hlc_rifle_ak74_dirty2","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_Engineer: FP_Faction_Takiban_Soldier_BASE
	{
		author = "Toadie";
		scope = 2;
		scopeCurator = 2;
		displayName = "Fighter Technician";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04"; 
		backpack = "CUP_B_AlicePack_Khaki_Eng_Takiban";
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_ShemagOpen_khk","H_ShemagOpen_khk"};
	};
	class FP_Faction_Takiban_MMG: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "Heavy Gunner";
		model = "\lop_m_wep_uniforms\loc_opfor04.p3d";
		uniformClass = "LOP_U_Mil_03"; 
		weapons[] = {"CUP_lmg_PKM","RH_mak","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","RH_mak","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","CUP_H_TK_Lungee","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_AMMG: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Heavy Gunner";
		backpack = "CUP_B_AlicePack_Khaki_Takiban_MMG";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\loc_opfor03.p3d";
		uniformClass = "LOP_U_Mil_02_2"; 
		weapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","Throw","Put"};
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_Takiban_MAT: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "RPG Carrier";
		backpack = "CUP_B_AlicePack_Khaki_Takiban_MAT";
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04";
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_AMAT: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPG Carrier";
		backpack = "CUP_B_AlicePack_Khaki_Takiban_MAT";
		headgearProbability = 100;
		model = "\lop_m_wep_uniforms\loc_opfor04.p3d";
		uniformClass = "LOP_U_Mil_03";
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_Takiban_MANPADS: FP_Faction_Takiban_Soldier_BASE
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
		displayName = "Strela Gunner";
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04"; 
		backpack = "CUP_B_AlicePack_Khaki_Takiban_MANPADS";
		weapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ak74_dirty2","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","SmokeShell","SmokeShell"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
	};
	class FP_Faction_Takiban_AMANPADS: FP_Faction_Takiban_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Strela Gunner";
		model = "\lop_m_wep_uniforms\loc_opfor05.p3d";
		uniformClass = "LOP_U_Mil_04"; 
		backpack = "CUP_B_AlicePack_Khaki_Takiban_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_Lungee","CUP_H_TK_Lungee"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_O_Ural_ZU23_SLA;
    class CUP_I_Datsun_PK_TK;
    class CUP_O_LR_SPG9_TKM;
	class CUP_O_UAZ_Open_TKA;
	class FP_Faction_Takiban_Vehicle_UralZU23: CUP_O_Ural_ZU23_SLA
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_Takiban";
		crew = "FP_Faction_Takiban_Rifleman";
	};
	class FP_Faction_Takiban_Vehicle_DatsunPK: CUP_I_Datsun_PK_TK
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_Takiban";
		crew = "FP_Faction_Takiban_Crewman";
		side = 0;
	};
	class FP_Faction_Takiban_Vehicle_LandRoverSPG9: CUP_O_LR_SPG9_TKM
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_Takiban";
		crew = "FP_Faction_Takiban_Crewman";
	};
	class FP_Faction_Takiban_Vehicle_UAZ496: CUP_O_UAZ_Open_TKA
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_Takiban";
		crew = "FP_Faction_Takiban_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class CUP_srifle_SVD;
	class CUP_srifle_SVD_takipso: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "CUP_optic_PSO_1";
				slot = "CowsSlot";
			};
		};
	};
};


