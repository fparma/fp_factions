class CfgPatches
{
	class FP_Factions_PLA
	{
		units[] = {"FP_Faction_PLA_Soldier_BASE","FP_Faction_PLA_Rifleman","FP_Faction_PLA_AR","FP_Faction_PLA_AAR","FP_Faction_PLA_SL","FP_Faction_PLA_TL","FP_Faction_PLA_DM","FP_Faction_PLA_RAT","FP_Faction_PLA_Medic","FP_Faction_PLA_Crewman","FP_Faction_PLA_Engineer","FP_Faction_PLA_MMG","FP_Faction_PLA_AMMG","FP_Faction_PLA_MAT","FP_Faction_PLA_AMAT","FP_Faction_PLA_MANPADS","FP_Faction_PLA_AMANPADS","FP_Faction_PLA_Vehicle_WZ449","FP_Faction_PLA_Vehicle_BJ212","FP_Faction_PLA_Vehicle_ZBD05"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","rhs_c_weapons","FP_communitymods","PLA_weapons"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_PLA
	{
		displayName = "People's Liberation Army";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\PLA\cfgFactionClasses_china_ca.paa";
		flag = "\FP_Factions\PLA\flag_china.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_PLA_Units
		{
			name = "PLA(Universal)";
			class Infantry
			{
				name = "PLA Infantry";
				class PLA_Riflesquad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PLA_WeaponsSquad
				{
					name = "Weapons Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PLA_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_ATTeam
				{
					name = "Antitank Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_RifleSentry
				{
					name = "Sentry Duty Dudes";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class Support
			{
				name = "PLA Company Attachments";
				class PLA_DoctorTeam
				{
					name = "Doctor Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_MMGTeam
				{
					name = "MMG Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class PLA_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_PLA_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PLA_MATTeam
				{
					name = "MAT Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class PLA_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AMANPADS";
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
	class B_Kitbag_sgg;
	class B_Carryall_cbr_Eng: B_Carryall_cbr
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
	class B_Kitbag_sgg_AAR: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_75Rnd_58x42_QBB
			{
				magazine = "75Rnd_58x42_QBB";
				count = 5;
			};
		};
	};
	class B_Kitbag_sgg_MMG: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine = "rhs_100Rnd_762x54mmR";
				count = 4;
			};
		};
	};
	class B_Kitbag_sgg_MAT: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VL_mag
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 3;
			};
		};
	};
	class B_FieldPack_cbr_MANPADS: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
			{
				magazine = "rhs_mag_9k38_rocket";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_Exp: B_Carryall_cbr
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
	class Man;
	class SoldierEB: Man{};
	class O_Soldier_base_F: SoldierEB
	{
		class Eventhandlers;
	};
	class FP_Faction_PLA_Soldier_BASE: O_Soldier_base_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageRUS", "Head_Asian", "rhs_scarf"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_PLA";
		genericNames = "ChineseMen";
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
		uniformClass = "FP_Uniform_Type07Universal";  
		weapons[] = {"PLA_QBZ95","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_PLA_Rifleman: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_PLA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Conscript Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AR: FP_Faction_PLA_Soldier_BASE
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
		weapons[] = {"PLA_QBB95","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"PLA_QBB95","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","75Rnd_58x42_QBB","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AAR: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "B_Kitbag_sgg_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_SL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"PLA_QBZ95_GL","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		respawnWeapons[] = {"PLA_QBZ95_GL","rhs_weap_makarov_pmm","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","FH_L5_30Rnd_556x45_Tracer","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","FH_L5_30Rnd_556x45_Tracer","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_TL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"PLA_QBZ95_GL","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95_GL","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","MiniGrenade","MiniGrenade","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","MiniGrenade","MiniGrenade","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","1Rnd_HE_GL1","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_DM: FP_Faction_PLA_Soldier_BASE
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
		weapons[] = {"rhs_weap_svdp_plapso","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_plapso","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07UniESS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_RAT: FP_Faction_PLA_Soldier_BASE
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
		backpack = "B_FieldPack_cbr_RPG_AT";
		weapons[] = {"PLA_QBZ95","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_Medic: FP_Faction_PLA_Soldier_BASE
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
		weapons[] = {"PLA_QBZ95","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_Crewman: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"PLA_QBZ95B","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95B","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacVest_camo","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_tsh4"};
	};
	class FP_Faction_PLA_Engineer: FP_Faction_PLA_Soldier_BASE
	{
		author = "Toadie";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"PLA_QBZ95","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_MMG: FP_Faction_PLA_Soldier_BASE
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
		weapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pmm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pmm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_9x18_12_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMMG: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "B_Kitbag_sgg_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_MAT: FP_Faction_PLA_Soldier_BASE
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
		backpack = "B_Kitbag_sgg_MAT";
		weapons[] = {"PLA_QBZ95","rhs_weap_rpg7_plapgo","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","rhs_weap_rpg7_plapgo","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMAT: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "B_Kitbag_sgg_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_MANPADS: FP_Faction_PLA_Soldier_BASE
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
		backpack = "B_FieldPack_cbr_MANPADS";
		weapons[] = {"PLA_QBZ95","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"PLA_QBZ95","rhs_weap_igla","Throw","Put"};
		magazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","30Rnd_58x42_QBZ","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMANPADS: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07UniESS","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class rhs_btr80a_msv;
    class rhs_bmp3_late_msv;
    class rhs_uaz_open_vdv;
	class FP_Faction_PLA_Vehicle_WZ449: rhs_btr80a_msv
	{
	    displayName = "WZ-449";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_PLA";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_PLA_Crewman";
	};
	class FP_Faction_PLA_Vehicle_ZBD05: rhs_bmp3_late_msv
	{
	    displayName = "ZBD-05";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_PLA";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_PLA_Crewman";
	};
	class FP_Faction_PLA_Vehicle_BJ212: rhs_uaz_open_vdv
	{
	    displayName = "BJ-212";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_PLA";
		vehicleClass = "Car";
		crew = "FP_Faction_PLA_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class rhs_weap_svdp;
	class rhs_weap_svdp_plapso: rhs_weap_svdp
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhs_acc_pso1m2";
				slot = "CowsSlot";
			};
		};
	};
	class rhs_weap_rpg7;
	class rhs_weap_rpg7_plapgo: rhs_weap_rpg7
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhs_acc_pgo7v";
				slot = "CowsSlot";
			};
		};
	};
};
class CfgWorlds
{
	class GenericNames
	{
		class ChineseMen
		{
			class FirstNames
			{
				ah="Ah";
				an="An";
				bai="Bai";
				bao="Bao";
				bo="Bo";
				chang="Chang";
				chao="Chao";
				chen="Chen";
				cheng="Cheng";
				chin="Chin";
				chun="Chun";
				da="Da";
				dong="Dong";
				fu="Fu";
				gang="Gang";
				guo="Guo";
				hai="Hai";
				he="He";
				heng="Heng";
				hong="Hong";
				hua="Hua";
				huan="Huan";
				huang="Huang";
				hui="Hui";
				jia="Jia";
				jian="Jian";
				jiang="Jiang";
				jin="Jin";
				jing="Jing";
				jun="Jun";
				kun="Kun";
				li="Li";
				lim="Lim";
				ming="Ming";
				ning="Ning";
				qiang="Qiang";
				qing="Qing";
				xiaoping="Xiaoping";
				qiu="Qiu";
				rong="Rong";
				yi="Yi";
				yin="Yin";
				xun="Xun";
				ya="Ya";
				zhong="Zhong";
				zhou="Zhou";
			};
			class LastNames
			{
				ah="Ah";
				an="An";
				bai="Bai";
				bao="Bao";
				bo="Bo";
				chang="Chang";
				chao="Chao";
				chen="Chen";
				cheng="Cheng";
				chin="Chin";
				chun="Chun";
				da="Da";
				dong="Dong";
				fu="Fu";
				gang="Gang";
				guo="Guo";
				hai="Hai";
				he="He";
				heng="Heng";
				hong="Hong";
				hua="Hua";
				huan="Huan";
				huang="Huang";
				hui="Hui";
				jia="Jia";
				jian="Jian";
				jiang="Jiang";
				jin="Jin";
				jing="Jing";
				jun="Jun";
				kun="Kun";
				li="Li";
				lim="Lim";
				ming="Ming";
				ning="Ning";
				qiang="Qiang";
				qing="Qing";
				xiaoping="Xiaoping";
				qiu="Qiu";
				rong="Rong";
				yi="Yi";
				yin="Yin";
				xun="Xun";
				ya="Ya";
				zhong="Zhong";
				zhou="Zhou";
			};
		};
	};
};


