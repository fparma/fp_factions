class CfgPatches
{
	class FP_Factions_FEC
	{
		units[] = {"FP_Faction_FEC_Soldier_BASE","FP_Faction_FEC_Rifleman","FP_Faction_FEC_Rifleman_AK74","FP_Faction_FEC_Rifleman_Stg58","FP_Faction_FEC_AR","FP_Faction_FEC_AAR","FP_Faction_FEC_Commander","FP_Faction_FEC_SL","FP_Faction_FEC_TL","FP_Faction_FEC_DM","FP_Faction_FEC_RAT","FP_Faction_FEC_Medic","FP_Faction_FEC_Crewman","FP_Faction_FEC_Engineer","FP_Faction_FEC_MMG","FP_Faction_FEC_AMMG","FP_Faction_FEC_MAT","FP_Faction_FEC_AMAT","FP_Faction_FEC_MANPADS","FP_Faction_FEC_AMANPADS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_FEC
	{
		displayName = "FP FEC";
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
			name = "FP FEC Militia";
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
		uniformClass = "FP_Uniform_StrichTTsMKK";  
		weapons[] = {"rhs_weap_savz58p","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58p","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		allowedHeadgear[] = {"rhs_6b26_green","rhs_6b26_green"};
	};
	class FP_Faction_FEC_Rifleman_AK74: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_FEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla (AK74)";
		uniformClass = "FP_Uniform_Strich";
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
		uniformClass = "FP_Uniform_TTsMKK";
		weapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_STG58F","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_B_fal","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	    linkedItems[] = {"rhsgref_alice_webbing","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhssaf_helmet_m59_85_oakleaf"};
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
		uniformClass = "FP_Uniform_Strich";
	    linkedItems[] = {"rhsgref_alice_webbing","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhssaf_helmet_m59_85_oakleaf"};
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
		weapons[] = {"hlc_rifle_aek971worn","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aek971worn","Throw","Put"};
		magazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","hlc_45Rnd_545x39_t_rpk","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
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
		uniformClass = "FP_Uniform_LithOPFORStrich"; 
		weapons[] = {"rhs_weap_ak74n","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74n","Throw","Put"};
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
		uniformClass = "FP_Uniform_StrichTTsMKK"; 
		weapons[] = {"rhs_weap_ak103_gp25","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak103_gp25","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_30Rnd_762x39mm_polymer","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_M1951","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhsgref_hat_M1951","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhsgref_hat_M1951","rhsgref_hat_M1951"};
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
		weapons[] = {"hlc_rifle_FN3011_FP_kern","str_ngn","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_FN3011_FP_kern","str_ngn","Throw","Put"};
		magazines[] = {"hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_B_fal","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 150000;
		linkedItems[] = {"rhsgref_alice_webbing","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_fieldcap_khk","rhs_fieldcap_khk"};
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
		weapons[] = {"rhs_weap_savz58v_black","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_black","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b26_green","rhs_6b26_green"};
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
		weapons[] = {"hlc_rifle_akm","str_ngn","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","str_ngn","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","7Rnd_nagan_rev","7Rnd_nagan_rev","7Rnd_nagan_rev","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_TacChestrig_grn_F","UK3CB_TKP_O_H_Patrolcap_Blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","UK3CB_TKP_O_H_Patrolcap_Blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKP_O_H_Patrolcap_Blk","UK3CB_TKP_O_H_Patrolcap_Blk"};
	};
	class FP_Faction_FEC_Crewman: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerilla Crewman";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_LithOPFOR"; 	
		weapons[] = {"rhs_weap_savz58v_black","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz58v_black","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","rhs_6b26_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b26_green"};
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
		backpack = "rhs_sidor_Eng_FEC";
		weapons[] = {"rhs_weap_savz61","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_savz61","Throw","Put"};
		magazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_TacChestrig_grn_F","UK3CB_TKP_O_H_Patrolcap_Blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","UK3CB_TKP_O_H_Patrolcap_Blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKP_O_H_Patrolcap_Blk"};
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
		allowedHeadgear[] = {"rhs_6b26_green","rhs_6b26_green"};
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
		uniformClass = "FP_Uniform_TTsMKK"; 
		weapons[] = {"rhs_weap_m38","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	    linkedItems[] = {"rhsgref_alice_webbing","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_01"};
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
		uniformClass = "FP_Uniform_StrichTTsMKK";
		weapons[] = {"hlc_rifle_akm","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","MRAWS_HEAT_F","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","MRAWS_HEAT_F","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b26_green","rhs_6b26_green"};
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
		uniformClass = "FP_Uniform_LithOPFOR";
		weapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		magazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	    linkedItems[] = {"V_TacChestrig_grn_F","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_01"};
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
		backpack = "rhs_sidor_FEC_MANPADS";
		weapons[] = {"hlc_rifle_akm","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","rhs_weap_igla","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
	    linkedItems[] = {"rhsgref_alice_webbing","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhsgref_alice_webbing","UK3CB_H_Ushanka_Cap_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_01"};
	};
	class FP_Faction_FEC_AMANPADS: FP_Faction_FEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. MANPADS Guerilla";
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_TTsMKKOlive"; 
		backpack = "rhs_sidor_FEC_MANPADS";
		headgearProbability = 100;
		weapons[] = {"rhs_weap_ak74n","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		allowedHeadgear[] = {"rhs_6b26_green","rhs_6b26_green"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
};
