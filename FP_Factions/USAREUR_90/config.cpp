class CfgPatches
{
	class FP_Factions_USAREUR90
	{
		units[] = {"FP_Faction_USAREUR90_Soldier_BASE","FP_Faction_USAREUR90_Rifleman","FP_Faction_USAREUR90_AR","FP_Faction_USAREUR90_AAR","FP_Faction_USAREUR90_SL","FP_Faction_USAREUR90_TL","FP_Faction_USAREUR90_DM","FP_Faction_USAREUR90_RAT","FP_Faction_USAREUR90_Medic","FP_Faction_USAREUR90_Crewman","FP_Faction_USAREUR90_Engineer","FP_Faction_USAREUR90_MMG","FP_Faction_USAREUR90_AMMG","FP_Faction_USAREUR90_MAT","FP_Faction_USAREUR90_AMAT","FP_Faction_USAREUR90_MANPADS","FP_Faction_USAREUR90_AMANPADS","FP_Faction_USAREUR90_Vehicle_Gavin","FP_Faction_USAREUR90_Vehicle_M163","FP_Faction_USAREUR90_Vehicle_HumveeM2","FP_Faction_USAREUR90_Vehicle_Humvee"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_USAREUR90
	{
		displayName = "USAREUR (1990)";
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
		class FP_Faction_USAREUR90_Units
		{
			name = "USAREUR (1990)";
			class Infantry
			{
				name = "USAREUR 1990 Infantry";
				class USAREUR90_Riflesquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_WeaponsSquad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_Patrol
				{
					name = "Rifle Patrol";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_RifleSentry
				{
					name = "Sentries";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class USAREUR90_PltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
				};
			};
			class Mechanized
			{
				name = "USAREUR 1990 Mechanized Infantry";
				class USAREUR90_MechRiflesquad
				{
					name = "Mechanized Rifle Squad (M113)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechWeaponsSquad
				{
					name = "Mechanized Weapons Squad (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechPltHQ
				{
					name = "Mechanized Platoon HQ (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
				class USAREUR90_MANPADSTeam
				{
					name = "Mechanized MANPADS Team (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class Support
			{
				name = "USAREUR 1990 Company Attachments";
				class USAREUR90_DoctorTeam
				{
					name = "Medical Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MATTeam
				{
					name = "MAT Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS";
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
	class B_Carryall_cbr;
	class CUP_B_AlicePack_Khaki;
	class B_Carryall_cbr_Eng_USAREUR90: B_Carryall_cbr
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
	class CUP_B_AlicePack_Khaki_AAR_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_200rnd_556x45_M_SAW
			{
				magazine = "hlc_200rnd_556x45_M_SAW";
				count = 5;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_MMG_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 4;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_MAT_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VL_mag
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_FieldPack_cbr_MANPADS_USAREUR90: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
			{
				magazine = "CUP_launch_FIM92Stinger";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_Exp_USAREUR90: B_Carryall_cbr
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
	class FP_Faction_USAREUR90_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		faceType = "Man_A3";
		side = 1;
		faction = "FP_Faction_USAREUR90";
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
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_m81";  
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_Rifleman: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_USAREUR90_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_AR: FP_Faction_USAREUR90_Soldier_BASE
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
		weapons[] = {"hlc_lmg_minimi","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimi","RH_m9","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_AAR: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_AlicePack_Khaki_AAR_USAREUR90";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_SL: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"RH_M16A2gl","RH_m9","Throw","Put","Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","RH_m9","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","FH_L5_30Rnd_556x45_Tracer","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","FH_L5_30Rnd_556x45_Tracer","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_TL: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"RH_M16A2gl","RH_m9","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","RH_m9","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_DM: FP_Faction_USAREUR90_Soldier_BASE
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
		weapons[] = {"hlc_rifle_M21_USAREUR90_marksman","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M21_USAREUR90_marksman","RH_m9","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_RAT: FP_Faction_USAREUR90_Soldier_BASE
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
		weapons[] = {"RH_M16A2","CUP_launch_M136","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","CUP_launch_M136","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_Medic: FP_Faction_USAREUR90_Soldier_BASE
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
		weapons[] = {"RH_m4","Throw","Put"};
		respawnWeapons[] = {"RH_m4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_Crewman: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"RH_m4","RH_m9","Throw","Put"};
		respawnWeapons[] = {"RH_m4","RH_m9","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_mas_gue_alice_webb2","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_HelmetCrew_I"};
	};
	class FP_Faction_USAREUR90_Engineer: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng_USAREUR90";
		weapons[] = {"RH_m4","Throw","Put"};
		respawnWeapons[] = {"RH_m4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_MMG: FP_Faction_USAREUR90_Soldier_BASE
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
		displayName = "MMG Gunner";
		weapons[] = {"CUP_lmg_M240","RH_m9","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M240","RH_m9","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_alice_webb2","FP_Helmet_M81","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_AMMG: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "CUP_B_AlicePack_Khaki_MMG_USAREUR90";
		weapons[] = {"RH_m4","Throw","Put"};
		respawnWeapons[] = {"RH_m4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_MAT: FP_Faction_USAREUR90_Soldier_BASE
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
		displayName = "MAT Gunner";
		backpack = "CUP_B_AlicePack_Khaki_MAT_USAREUR90";
		weapons[] = {"RH_m4","launch_B_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"RH_m4","launch_B_Titan_short_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_AMAT: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "CUP_B_AlicePack_Khaki_MAT_USAREUR90";
		weapons[] = {"RH_m4","Throw","Put"};
		respawnWeapons[] = {"RH_m4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_MANPADS: FP_Faction_USAREUR90_Soldier_BASE
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
		displayName = "MANPADS Gunner";
		backpack = "B_FieldPack_khk_MANPADS_USAREUR90";
		weapons[] = {"RH_m4","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"RH_m4","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
	};
	class FP_Faction_USAREUR90_AMANPADS: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_khk_MANPADS_USAREUR90";
		weapons[] = {"RH_m4","Throw","Put"};
		respawnWeapons[] = {"RH_m4","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M81","FP_Helmet_M81"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_B_M113_USA;
    class CUP_B_M163_USA;
    class CUP_B_HMMWV_M2_USMC;
	class CUP_B_HMMWV_Unarmed_USMC;
	class FP_Faction_USAREUR90_Vehicle_Gavin: CUP_B_M113_USA
	{
	    displayName = "Gavin";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
		transportAmmo = 0;
	};
	class FP_Faction_USAREUR90_Vehicle_M163: CUP_B_M163_USA
	{
	    displayName = "M163 PIVADS";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_HumveeM2: CUP_B_HMMWV_M2_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		vehicleClass = "Car";
		crew = "FP_Faction_USAREUR90_Rifleman";
	};
	class FP_Faction_USAREUR90_Vehicle_Humvee: CUP_B_HMMWV_Unarmed_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		vehicleClass = "Car";
		crew = "FP_Faction_USAREUR90_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class hlc_rifle_M21;
	class hlc_rifle_M21_USAREUR90_marksman: hlc_rifle_M21
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "hlc_optic_LRT_m14";
				slot = "CowsSlot";
			};
		};
	};
};