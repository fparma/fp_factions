class CfgPatches
{
	class FP_Factions_IDF
	{
		units[] = {"FP_Faction_IDF_Soldier_BASE","FP_Faction_IDF_Rifleman","FP_Faction_IDF_AR","FP_Faction_IDF_AAR","FP_Faction_IDF_SL","FP_Faction_IDF_TL","FP_Faction_IDF_DM","FP_Faction_IDF_RAT","FP_Faction_IDF_Medic","FP_Faction_IDF_Crewman","FP_Faction_IDF_Engineer","FP_Faction_IDF_MMG","FP_Faction_IDF_AMMG","FP_Faction_IDF_MAT","FP_Faction_IDF_AMAT","FP_Faction_IDF_MANPADS","FP_Faction_IDF_AMANPADS","FP_Faction_IDF_Vehicle_Bardehlas","FP_Faction_IDF_Vehicle_Namer","FP_Faction_IDF_Vehicle_HumveeM2","FP_Faction_IDF_Vehicle_Humvee"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RH_m4", "A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_IDF
	{
		displayName = "Israeli Defence Force";
		priority = 2;
		side = 1;
		icon = "\FP_Factions\IDF\cfgFactionClasses_israel_ca.paa";
		flag = "\FP_Factions\IDF\flag_israel.paa";
	};
};
class CfgGroups
{
	class West
	{
		class FP_Faction_IDF_Units
		{
			name = "IDF";
			class Infantry
			{
				name = "IDF Infantry";
				class IDF_Riflesquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_IDF_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IDF_WeaponsSquad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_IDF_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IDF_Patrol
				{
					name = "Rifle Patrol";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IDF_RifleSentry
				{
					name = "Sentries";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class IDF_PltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
				};
			};
			class Mechanized
			{
				name = "IDF Mechanized Infantry";
				class IDF_MechRiflesquad
				{
					name = "Mechanized Rifle Squad (Namer)";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_IDF_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Vehicle_Namer";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class IDF_MechWeaponsSquad
				{
					name = "Mechanized Weapons Squad (Bardehlas)";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_IDF_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Vehicle_Bardehlas";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class IDF_MechPltHQ
				{
					name = "Mechanized Platoon HQ (Bardehlas)";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Vehicle_Bardehlas";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
				class IDF_MANPADSTeam
				{
					name = "Mechanized MANPADS Team (Bardehlas)";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Vehicle_Bardehlas";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class Support
			{
				name = "IDF Company Attachments";
				class IDF_DoctorTeam
				{
					name = "Doctor Team";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IDF_MMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class IDF_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_IDF_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IDF_MATTeam
				{
					name = "MAT Team";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class IDF_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 1;
					faction = "FP_Faction_IDF";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_IDF_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_IDF_AMANPADS";
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
	class B_FieldPack_khk;
	class B_Carryall_cbr_Eng_IDF: B_Carryall_cbr
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
	class B_FieldPack_khk_AAR_IDF: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 5;
			};
		};
	};
	class B_FieldPack_khk_MMG_IDF: B_FieldPack_khk
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
	class B_FieldPack_khk_MAT_IDF: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_FieldPack_cbr_MANPADS_IDF: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_launch_FIM92Stinger
			{
				magazine = "CUP_launch_FIM92Stinger";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_Exp_IDF: B_Carryall_cbr
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
	class FP_Faction_IDF_Soldier_BASE: B_Soldier_F
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
		faction = "FP_Faction_IDF";
		genericNames = "HebrewMen";
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
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "FP_Uniform_OliveBrown";  
		weapons[] = {"arifle_TRG21_F_IDF","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_IDF_Rifleman: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_IDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_AR: FP_Faction_IDF_Soldier_BASE
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
		weapons[] = {"LMG_Zafir_F_IDF","RH_g17","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F_IDF","RH_g17","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_AAR: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "B_FieldPack_khk_AAR_IDF";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_IDF_SL: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"arifle_TRG21_GL_F_IDF","RH_g17","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG21_GL_F_IDF","RH_g17","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_TL: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"arifle_TRG21_GL_F_IDF","RH_g17","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_GL_F_IDF","RH_g17","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_DM: FP_Faction_IDF_Soldier_BASE
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
		weapons[] = {"srifle_EBR_F_IDF","RH_g17","Throw","Put"};
		respawnWeapons[] = {"srifle_EBR_F_IDF","RH_g17","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_RAT: FP_Faction_IDF_Soldier_BASE
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
		weapons[] = {"arifle_TRG21_F_IDF","CUP_launch_M136","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG21_F_IDF","CUP_launch_M136","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_Medic: FP_Faction_IDF_Soldier_BASE
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
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_Crewman: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"arifle_TRG20_F","RH_g17","Throw","Put"};
		respawnWeapons[] = {"arifle_TRG20_F","RH_g17","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"FP_Carrier_CoyotePatchless","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_HelmetCrew_I"};
	};
	class FP_Faction_IDF_Engineer: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_MMG: FP_Faction_IDF_Soldier_BASE
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
		weapons[] = {"CUP_lmg_M240","RH_g17","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M240","RH_g17","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","RH_17Rnd_9x19_g17","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		backpack = "B_FieldPack_khk_MMG_IDF";
		icon = "iconManMG";
		linkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_Carrier_CoyotePatchless","IDF_Helmet_Mitsnefet_1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_AMMG: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "B_FieldPack_khk_MMG_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_IDF_MAT: FP_Faction_IDF_Soldier_BASE
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
		backpack = "B_FieldPack_khk_MAT_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","launch_B_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","launch_B_Titan_short_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_AMAT: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "B_FieldPack_khk_MAT_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_IDF_MANPADS: FP_Faction_IDF_Soldier_BASE
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
		backpack = "B_FieldPack_cbr_MANPADS_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
	};
	class FP_Faction_IDF_AMANPADS: FP_Faction_IDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS_IDF";
		weapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle_IDF","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"IDF_Helmet_Mitsnefet_2","IDF_Helmet_Mitsnefet_1"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_I_M113_RACS;
    class B_APC_Tracked_01_rcws_F;
    class CUP_B_HMMWV_Crows_M2_USA;
	class CUP_B_HMMWV_Unarmed_USA;
	class FP_Faction_IDF_Vehicle_Bardehlas: CUP_I_M113_RACS
	{
	    displayName = "Bardehlas";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_IDF";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_IDF_Crewman";
		side = 1;
	};
	class FP_Faction_IDF_Vehicle_Namer: B_APC_Tracked_01_rcws_F
	{
	    displayName = "Namer";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_IDF";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_IDF_Crewman";
	};
	class FP_Faction_IDF_Vehicle_HumveeM2: CUP_B_HMMWV_Crows_M2_USA
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_IDF";
		vehicleClass = "Car";
		crew = "FP_Faction_IDF_Rifleman";
	};
	class FP_Faction_IDF_Vehicle_Humvee: CUP_B_HMMWV_Unarmed_USA
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_IDF";
		vehicleClass = "Car";
		crew = "FP_Faction_IDF_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class arifle_TRG21_F;
	class arifle_TRG21_F_IDF: arifle_TRG21_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "IDF_optic_Mars";
				slot = "CowsSlot";
			};
		};
	};
	class arifle_TRG21_GL_F;
	class arifle_TRG21_GL_F_IDF: arifle_TRG21_GL_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "IDF_optic_Mars";
				slot = "CowsSlot";
			};
		};
	};
	class rhs_weap_m4_carryhandle;
	class rhs_weap_m4_carryhandle_IDF: rhs_weap_m4_carryhandle
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "IDF_optic_Mars";
				slot = "CowsSlot";
			};
		};
	};
	class LMG_Zafir_F;
	class LMG_Zafir_F_IDF: LMG_Zafir_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "IDF_optic_Mars";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_EBR_F;
	class srifle_EBR_F_IDF: srifle_EBR_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG3_3d";
				slot = "CowsSlot";
			};
		};
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class HebrewMen
		{
			class FirstNames
			{
				abraham="Abraham";
				adam="Adam";
				adir="Adir";
				amnon="Amnon";
				binyamin="Binyamin";
				baruch="Baruch";
				chaim="Chaim";
				chayim="Chayim";
				daniel="Daniel";
				dar="Dar";
				david="David";
				efraim="Efraim";
				ehud="Ehud";
				elijah="Elijah";
				eli="Eli";
				gideon="Gideon";
				gilad="Gilad";
				hadar="Hadar";
				hayyim="Hayyim";
				idan="Idan";
				immanuel="Immanuel";
				itamar="Itamar";
				jaron="Jaron";
				kfir="Kfir";
				keshet="Keshet";
				lavi="Lavi";
				levi="Levi";
				liron="Liron";
				malachi="Malachi";
				matan="Matan";
				mattithyahu="Mattithyahu";
				mordecai="Mordecai";
				meyer="Meyer";
				netanyahu="Netanyahu";
				noah="Noah";
				noam="Noam";
				reuben="Reuben";
				orly="Orly";
				tomer="Tomer";
				uzi="Uzi";
				uriel="Uriel";
				yaakov="Yaakov";
				yisrael="Yis'rael";
				yonatan="Yonatan";
				yonah="Yonah";
				zohar="Zohar";
			};
			class LastNames
			{
				abraham="Abraham";
				adam="Adam";
				adir="Adir";
				amnon="Amnon";
				binyamin="Binyamin";
				baruch="Baruch";
				chaim="Chaim";
				chayim="Chayim";
				daniel="Daniel";
				dar="Dar";
				david="David";
				efraim="Efraim";
				ehud="Ehud";
				elijah="Elijah";
				eli="Eli";
				gideon="Gideon";
				gilad="Gilad";
				hadar="Hadar";
				hayyim="Hayyim";
				idan="Idan";
				immanuel="Immanuel";
				itamar="Itamar";
				jaron="Jaron";
				kfir="Kfir";
				keshet="Keshet";
				lavi="Lavi";
				levi="Levi";
				liron="Liron";
				malachi="Malachi";
				matan="Matan";
				mattithyahu="Mattithyahu";
				mordecai="Mordecai";
				meyer="Meyer";
				netanyahu="Netanyahu";
				noah="Noah";
				noam="Noam";
				reuben="Reuben";
				orly="Orly";
				tomer="Tomer";
				uzi="Uzi";
				uriel="Uriel";
				yaakov="Yaakov";
				yisrael="Yis'rael";
				yonatan="Yonatan";
				yonah="Yonah";
				zohar="Zohar";
			};
		};
	};
};


