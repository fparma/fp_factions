class CfgPatches
{
	class FP_Factions_FEC
	{
		units[]= 
		{
			"FP_Faction_FEC_Soldier_BASE",
			"FP_Faction_FEC_Rifleman",
			"FP_Faction_FEC_Rifleman_AK74",
			"FP_Faction_FEC_Rifleman_Stg58",
			"FP_Faction_FEC_AR",
			"FP_Faction_FEC_AAR",
			"FP_Faction_FEC_Commander",
			"FP_Faction_FEC_SL",
			"FP_Faction_FEC_TL",
			"FP_Faction_FEC_DM",
			"FP_Faction_FEC_RAT",
			"FP_Faction_FEC_Medic",
			"FP_Faction_FEC_Crewman",
			"FP_Faction_FEC_Engineer",
			"FP_Faction_FEC_MMG",
			"FP_Faction_FEC_AMMG",
			"FP_Faction_FEC_MAT",
			"FP_Faction_FEC_AMAT",
			"FP_Faction_FEC_MANPADS",
			"FP_Faction_FEC_AMANPADS",
			"FP_Faction_FEC_Meha_Rifleman",
			"FP_Faction_FEC_Meha_AAR",
			"FP_Faction_FEC_Meha_RAT",
			"FP_Faction_FEC_Meha_AR",
			"FP_Faction_FEC_Meha_MG",
			"FP_Faction_FEC_Meha_DM",
			"FP_Faction_FEC_Meha_AT",
			"FP_Faction_FEC_Meha_MANPADS",
			"FP_Faction_FEC_Meha_SL",
			"FP_Faction_FEC_Meha_Medic",
			"FP_Faction_FEC_Grom_Scout",
			"FP_Faction_FEC_Grom_RAT",
			"FP_Faction_FEC_Grom_TL",
			"FP_Faction_FEC_Grom_SL",
			"FP_Faction_FEC_Grom_MG",
			"FP_Faction_FEC_Grom_Engineer",
			"FP_Faction_FEC_Grom_Sniper",
			"FP_Faction_FEC_Grom_AT",
			"FP_Faction_FEC_BMP1",
			"FP_Faction_FEC_BMP2",
			"FP_Faction_FEC_T72BA",
			"FP_Faction_FEC_T72BM",
			"FP_Faction_FEC_T80BV",
			"FP_Faction_FEC_T80UM",
			"FP_Faction_FEC_Ural",
			"FP_Faction_FEC_Ural_Repair",
			"FP_Faction_FEC_Ural_Ammo",
			"FP_Faction_FEC_Ural_Fuel"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_FEC
	{
		displayName = "FP Freedom East Corps";
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
			name = "FP Freedom East Corps";
			class Infantry
			{
				name = "FEC Militia";
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
	class rhs_sidor;
	class rhs_sidor_Eng_FEC: rhs_sidor
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
	class rhs_sidor_FEC_AAR: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100rnd_korob_rpd
			{
				magazine = "100rnd_korob_rpd";
				count = 5;
			};
		};
	};
	class rhs_sidor_FEC_MMG: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 4;
			};
		};
	};
	class rhs_sidor_FEC_MAT: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine = "MRAWS_HEAT_F";
				count = 3;
			};
		};
	};
	class rhs_sidor_FEC_MANPADS: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket_2
			{
				magazine = "rhs_mag_9k38_rocket";
				count = 1;
			};
		};
	};
	class rhs_sidor_Exp_FEC: rhs_sidor
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
		identityTypes[] = {"LanguageCZ","Head_Euro"};
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
		uniformClass = "FP_Uniform_M88_Czechrain_Mix";  
		weapons[] = {"rhs_weap_savz58p","Throw","Put"};
		editorSubcategory = "fp_men_reserves_EdSubcat";
		respawnWeapons[] = {"rhs_weap_savz58p","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
	};
	class FP_Faction_FEC_Rifleman_AK74: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla (AK74)";
		uniformClass = "FP_Uniform_M88_Czechrain";
		weapons[] = {"rhs_weap_ak74n","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Rifleman_Stg58: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla (Stg. 58)";
		uniformClass = "FP_Uniform_M88_TTsMKK";
		weapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	    linkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
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
		uniformClass = "FP_Uniform_M88_Tochka";  
		weapons[] = {"str_rpd","str_ngn","Throw","Put"};
		respawnWeapons[] = {"str_rpd","str_ngn","Throw","Put"};
		magazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_fieldcap_khk","rhs_fieldcap_khk"};
	};
	class FP_Faction_FEC_AAR: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. AR Guerilla";
		backpack = "rhs_sidor_FEC_AAR";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_Czechrain";
	    linkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
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
		uniformClass = "FP_Uniform_M88_Tochka"; 
		weapons[] = {"arifle_AKS_F","RH_Bull","Throw","Put"};
		respawnWeapons[] = {"arifle_AKM_F","RH_Bull","Throw","Put"};
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RH_6Rnd_454_Mag","RH_6Rnd_454_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RH_6Rnd_454_Mag","RH_6Rnd_454_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_Pocketed_coyote_F","H_Hat_Safari_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Pocketed_coyote_F","H_Hat_Safari_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Hat_Safari_sand_F"};
	};
	class FP_Faction_FEC_SL: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Group Leader";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_Czechrain_Mix"; 
		weapons[] = {"rhs_weap_ak74n","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74n","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacChestrig_grn_F","rhssaf_booniehat_digital","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhssaf_booniehat_digital","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhssaf_booniehat_digital","rhssaf_booniehat_digital"};
	};
	class FP_Faction_FEC_TL: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Section Leader";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_Czechrain_Mix"; 
		weapons[] = {"rhs_weap_ak103_gp25","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_gp25","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
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
		uniformClass = "FP_Uniform_M88_TTsMKK_Mix"; 
		weapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Binocular","Throw","Put"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 150000;
		linkedItems[] = {"vest_chicom_sks","patrolcap_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","patrolcap_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"patrolcap_tan"};
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
		uniformClass = "FP_Uniform_M88_TTsMKK"; 
		weapons[] = {"rhs_weap_savz58v_black","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_black","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
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
		uniformClass = "FP_Uniform_M88_Tochka_Mix"; 
		weapons[] = {"rhs_weap_akm","str_ngn","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","str_ngn","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_TacChestrig_grn_F","patrolcap_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","patrolcap_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"patrolcap_black","patrolcap_black"};
	};
	class FP_Faction_FEC_Crewman: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla Crewman";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_TTsMKK_Mix"; 	
		weapons[] = {"rhs_weap_savz58v_black","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_black","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
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
		uniformClass = "FP_Uniform_M88_Tochka_Mix"; 
		backpack = "rhs_sidor_Eng_FEC";
		weapons[] = {"rhs_weap_savz61","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz61","Throw","Put"};
		magazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_TacChestrig_grn_F","patrolcap_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","patrolcap_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"patrolcap_black"};
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
		uniformClass = "FP_Uniform_M88_TTsMKK";
		weapons[] = {"LMG_Zafir_F","str_ngn","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F","str_ngn","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
	};
	class FP_Faction_FEC_AMMG: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. MMG Guerilla";
		backpack = "rhs_sidor_FEC_MMG";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_TTsMKK"; 
		weapons[] = {"rhs_weap_m38","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	    linkedItems[] = {"rhsgref_alice_webbing","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhs_ushanka"};
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
		backpack = "rhs_sidor_FEC_MAT";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_Czechrain_Mix";
		weapons[] = {"rhs_weap_akm","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","MRAWS_HEAT_F","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","MRAWS_HEAT_F","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
	};
	class FP_Faction_FEC_AMAT: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. RPG Guerilla";
		backpack = "rhs_sidor_FEC_MAT";
		headgearProbability = 100;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_Czechrain_Mix";
		weapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		magazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	    linkedItems[] = {"V_TacChestrig_grn_F","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhs_ushanka"};
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
		uniformClass = "FP_Uniform_M88_Czechrain_Mix"; 
		backpack = "rhs_sidor_FEC_MANPADS";
		weapons[] = {"rhs_weap_akm","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
	    linkedItems[] = {"rhs_6sh92_vsr","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr","rhs_ushanka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhs_ushanka"};
	};
	class FP_Faction_FEC_AMANPADS: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. MANPADS Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_M88_TTsMKK_Mix"; 
		backpack = "rhs_sidor_FEC_MANPADS";
		headgearProbability = 100;
		weapons[] = {"rhs_weap_ak74n","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD","FP_Helmet_M76","rhsgref_helmet_pasgt_olive"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_FEC_Meha_Rifleman: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		editorSubcategory = "EdSubcat_Personnel";
		cost = 100000;
		headgearProbability = 100;
		uniformClass = "FP_Uniform_M88_TTsMKK"; 
		weapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD"};
	    linkedItems[] = {"rhs_6b2_chicom","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_chicom","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Meha_AAR: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Ammo Bearer";
		backpack = "rhs_sidor_FEC_AAR";
	};
	class FP_Faction_FEC_Meha_RAT: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Rifleman (AT)";
		weapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","rhs_weap_rpg75","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","rhs_weap_rpg75","Throw","Put"};
	};
	class FP_Faction_FEC_Meha_AR: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Autorifleman";
		weapons[] = {"FP_RPD","Throw","Put"};
		respawnWeapons[] = {"FP_RPD","Throw","Put"};
		icon = "iconManMG";
		magazines[] = {"FP_RPD_100rnd","FP_RPD_100rnd","FP_RPD_100rnd","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"FP_RPD_100rnd","FP_RPD_100rnd","FP_RPD_100rnd","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
	    linkedItems[] = {"rhs_6b2_RPK","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_RPK","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Meha_MG: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Machine Gunner";
		weapons[] = {"rhs_weap_mg42","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_mg42","Throw","Put"};
		backpack = "FP_b_sov_ammobag";
		magazines[] = {"rhsgref_296Rnd_792x57_SmK_belt","rhsgref_296Rnd_792x57_SmK_belt","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhsgref_296Rnd_792x57_SmK_belt","rhsgref_296Rnd_792x57_SmK_belt","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		icon = "iconManMG";
	    linkedItems[] = {"rhs_6b2_RPK","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_RPK","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Meha_DM: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Marksman";
		weapons[] = {"rhs_weap_asval_FP_PSO","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_asval_FP_PSO","Throw","Put"};
		magazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
	    linkedItems[] = {"rhs_6b2_SVD","FP_GOR_H_Booniehat_tochka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_SVD","FP_GOR_H_Booniehat_tochka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_GOR_H_Booniehat_tochka"};
	};
	class FP_Faction_FEC_Meha_AT: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "AT Specialist";
		weapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","launch_RPG32_green_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","launch_RPG32_green_F","Throw","Put"};
		icon = "iconManAT";
		backpack = "rhs_rpg_6b3";
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","RPG32_F","RPG32_F","RPG32_HE_F","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","RPG32_F","RPG32_F","RPG32_HE_F","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
	    linkedItems[] = {"rhs_6b2_lifchik","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_lifchik","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Meha_MANPADS: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "AA Specialist";
		weapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","launch_B_Titan_tna_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_rail_black_FP_CCO","launch_B_Titan_tna_F","Throw","Put"};
		icon = "iconManAT";
		backpack = "B_Carryall_oli";
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","Titan_AA","Titan_AA","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","Titan_AA","Titan_AA","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
	    linkedItems[] = {"rhs_6b2_holster","FP_GOR_H_Booniehat_tochka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_holster","FP_GOR_H_Booniehat_tochka","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_GOR_H_Booniehat_tochka"};
	};
	class FP_Faction_FEC_Meha_SL: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Squad Leader";
		weapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
	    linkedItems[] = {"rhs_6b3_R148","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b3_R148","FP_Helmet_M76_Cover_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_Helmet_M76_Cover_OD"};
		icon = "iconManLeader";
	};
	class FP_Faction_FEC_Meha_Medic: FP_Faction_FEC_Meha_Rifleman
	{
		displayName = "Medic";
	    linkedItems[] = {"rhs_6b2_chicom","FP_Helmet_M76","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b2_chicom","FP_Helmet_M76","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_Helmet_M76"};
		backpack = "B_FieldPack_cbr_Medic";
		icon = "iconManMedic";
	};
	class FP_Faction_FEC_Grom_Scout: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grom Scout";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		cost = 100000;
		headgearProbability = 100;
		model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_122_base_gloves.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_tochka_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_tochka_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
		uniformClass = "FP_GOR_rhs_uniform_6sh122_gloves_tochka"; 
		weapons[] = {"FP_AN94_rail_CCO","Throw","Put"};
		respawnWeapons[] = {"FP_AN94_rail_CCO","Throw","Put"};
		magazines[] = {"FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		allowedHeadgear[] = {"FP_GOR_6b7_1m_ess_bala_atacsfg"};
	    linkedItems[] = {"FP_GOR_rhs_6b45_rifleman_atacsfg","FP_GOR_6b7_1m_ess_bala_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6b45_rifleman_atacsfg","FP_GOR_6b7_1m_ess_bala_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Grom_RAT: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom Scout (AT)";
		weapons[] = {"FP_AN94_rail_CCO","rhs_weap_rpg75","Throw","Put"};
		respawnWeapons[] = {"FP_AN94_rail_CCO","rhs_weap_rpg75","Throw","Put"};
	};
	class FP_Faction_FEC_Grom_TL: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom Team Leader";
		icon = "iconManLeader";
		weapons[] = {"FP_AN94_GP_rail_CCO","rhs_weap_rpg75","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_AN94_GP_rail_CCO","rhs_weap_rpg75","Binocular","Throw","Put"};
		magazines[] = {"FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		allowedHeadgear[] = {"FP_GOR_6b7_1m_bala2_atacsfg"};
		linkedItems[] = {"FP_GOR_rhs_6b45_grn_atacsfg","FP_GOR_6b7_1m_bala2_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6b45_grn_atacsfg","FP_GOR_6b7_1m_bala2_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Grom_SL: FP_Faction_FEC_Grom_TL
	{
		displayName = "Grom Squad Leader";
		icon = "iconManOfficer";
		allowedHeadgear[] = {"FP_GOR_6b7_1m_atacsfg"};
		linkedItems[] = {"FP_GOR_rhs_6b45_off_atacsfg","FP_GOR_6b7_1m_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6b45_off_atacsfg","FP_GOR_6b7_1m_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Grom_MG: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom Machine Gunner";
		weapons[] = {"FP_M63A_DRUM","Throw","Put"};
		respawnWeapons[] = {"FP_M63A_DRUM","Throw","Put"};
		magazines[] = {"FP_m63amag","FP_m63amag","FP_m63amag","FP_m63amag","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"FP_m63amag","FP_m63amag","FP_m63amag","FP_m63amag","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		allowedHeadgear[] = {"FP_GOR_6b7_1m_ess_bala_atacsfg"};
	    linkedItems[] = {"FP_GOR_rhs_6b45_mg_atacsfg","FP_GOR_6b7_1m_ess_bala_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6b45_mg_atacsfg","FP_GOR_6b7_1m_ess_bala_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Grom_Engineer: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom Saboteur";
		uniformClass = "FP_GOR_rhs_uniform_6sh122_gloves_tochka"; 
		backpack = "rhs_sidor_Eng_FEC";
	};
	class FP_Faction_FEC_Grom_Sniper: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom Sniper";
		uniformClass = "FP_GOR_rhs_uniform_6sh122_gloves_tochka";
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_F","Throw","Put"};
	    magazines[] = {"ACE_5Rnd_127x99_AMAX_Mag","ACE_5Rnd_127x99_AMAX_Mag","ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_API_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"ACE_5Rnd_127x99_AMAX_Mag","ACE_5Rnd_127x99_AMAX_Mag","ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_API_Mag","ACE_5Rnd_127x99_API_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"}; 
	    linkedItems[] = {"FP_GOR_rhs_6sh117_svd_atacsfg","FP_GOR_H_Booniehat_atacsfg_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_svd_atacsfg","FP_GOR_H_Booniehat_atacsfg_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_FEC_Grom_AT: FP_Faction_FEC_Grom_Scout
	{
		displayName = "Grom AT Specialist";
		weapons[] = {"FP_AN94_rail_CCO","launch_O_Vorona_green_F","Throw","Put"};
		respawnWeapons[] = {"FP_AN94_rail_CCO","launch_O_Vorona_green_F","Throw","Put"};
		magazines[] = {"Vorona_HEAT","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		respawnMagazines[] = {"Vorona_HEAT","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","FP_GOR_rhs_30Rnd_545x39_7N24_AK","rhs_mag_m67","rhs_mag_m67","SmokeShell"};
		allowedHeadgear[] = {"FP_GOR_6b7_1m_bala1_atacsfg"};
	    linkedItems[] = {"FP_GOR_rhs_6sh117_val_atacsfg","FP_GOR_6b7_1m_bala1_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_rhs_6sh117_val_atacsfg","FP_GOR_6b7_1m_bala1_atacsfg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_bmp2d_msv;
	class FP_Faction_FEC_BMP2: rhs_bmp2d_msv
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "BMP-2D";
		editorSubcategory = "EdSubcat_APCs";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\bmp\FEC_BMP_01_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_02_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_03_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_04_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"
		};
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
	};
	class rhs_bmp1p_msv;
	class FP_Faction_FEC_BMP1: rhs_bmp1p_msv
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "BMP-1P";
		editorSubcategory = "EdSubcat_APCs";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\bmp\FEC_BMP_01_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_02_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_03_co.paa",
			"\FP_Factions\FEC\data\bmp\FEC_BMP_04_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
			"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
	};
	class rhs_t72ba_tv;
	class FP_Faction_FEC_T72BA: rhs_t72ba_tv 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "T-72BA";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\t72\FEC_t72_01_era_co.paa",
			"\FP_Factions\FEC\data\t72\FEC_t72_02_era_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class rhs_t72bc_tv;
	class FP_Faction_FEC_T72BM: rhs_t72bc_tv 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "T-72BM";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\t72\FEC_t72_01_era_co.paa",
			"\FP_Factions\FEC\data\t72\FEC_t72_02_era_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class rhs_t80bv;
	class FP_Faction_FEC_T80BV: rhs_t80bv
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "T-80BV";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\t80\FEC_t80bv_hull_co.paa",
			"\FP_Factions\FEC\data\t80\FEC_t80bv_turret_co.paa",
			"",
			"rhsafrf\addons\rhs_t80\data\searchlightopen_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
	};
	class rhs_t80um;
	class FP_Faction_FEC_T80UM: rhs_t80um
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "T-80UM";
		editorSubcategory = "EdSubcat_Tanks";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		typicalCargo[] = {"FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman","FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
			{
				"\FP_Factions\FEC\data\t80\FEC_t80um_01_co.paa",
				"\FP_Factions\FEC\data\t80\FEC_t80um_02_co.paa",
				"\FP_Factions\FEC\data\t80\FEC_t80um_03_co.paa"
			};
	};
	class RHS_Ural_MSV_01;
	class FP_Faction_FEC_Ural: RHS_Ural_MSV_01 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Ural";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		editorSubcategory = "EdSubcat_Cars";
		typicalCargo[] = {"FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\ural\FEC_ural_cabin_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Repair_MSV_01;
	class FP_Faction_FEC_Ural_Repair: RHS_Ural_Repair_MSV_01 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Ural";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		editorSubcategory = "EdSubcat_Cars";
		typicalCargo[] = {"FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\ural\FEC_ural_cabin_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Ammo_MSV_01;
	class FP_Faction_FEC_Ural_Ammo: RHS_Ural_Ammo_MSV_01 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Ural (Ammo)";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		editorSubcategory = "EdSubcat_Cars";
		typicalCargo[] = {"FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\ural\FEC_ural_cabin_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
		};
	};
	class RHS_Ural_Fuel_MSV_01;
	class FP_Faction_FEC_Ural_Fuel: RHS_Ural_Fuel_MSV_01 
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "Ural (Fuel)";
		crew = "FP_Faction_FEC_Crewman";
		faction = "FP_Faction_FEC";
		editorSubcategory = "EdSubcat_Cars";
		typicalCargo[] = {"FP_Faction_FEC_Crewman"};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\FEC\data\ural\FEC_ural_cabin_co.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
		};
	};
};
