class CfgPatches
{
	class FP_Factions_KPA
	{
		units[] = {"FP_Faction_KPA_Soldier_BASE","FP_Faction_KPA_Rifleman","FP_Faction_KPA_AR","FP_Faction_KPA_AAR","FP_Faction_KPA_SL","FP_Faction_KPA_TL","FP_Faction_KPA_DM","FP_Faction_KPA_RAT","FP_Faction_KPA_Medic","FP_Faction_KPA_Crewman","FP_Faction_KPA_Engineer","FP_Faction_KPA_MMG","FP_Faction_KPA_AMMG","FP_Faction_KPA_MAT","FP_Faction_KPA_AMAT","FP_Faction_KPA_MANPADS","FP_Faction_KPA_AMANPADS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_KPA
	{
		displayName = "FP Korean People's Army (North Korea)";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\KPA\cfgFactionClasses_northkorea_ca.paa";
		flag = "\FP_Factions\KPA\flag_northkorea.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_KPA_Units
		{
			name = "Korean People's Army (North Korea)";
			class Infantry
			{
				name = "Infantry";
				class KPA_Riflesquad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_WeaponsSquad
				{
					name = "Weapons Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_ATTeam
				{
					name = "Antitank Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_RifleSentry
				{
					name = "Sentries";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class Support
			{
				name = "Attachments";
				class KPA_DoctorTeam
				{
					name = "Doctor Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_MMGTeam
				{
					name = "MMG Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class KPA_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_MATTeam
				{
					name = "MAT Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class KPA_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 0;
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMANPADS";
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
	class UK3CB_O_G_T34;
	class FP_Faction_KPA_T34: UK3CB_O_G_T34
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class UK3CB_O_G_BTR40;
	class UK3CB_O_G_BTR40_MG; 
	class FP_Faction_KPA_BTR40: UK3CB_O_G_BTR40
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BTR40_MG: UK3CB_O_G_BTR40_MG
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
	};	
	class UK3CB_O_G_T55;
	class FP_Faction_KPA_Chonmaho: UK3CB_O_G_T55
	{
		class TextureSources
		{
			class KPA_T55_Green
			{
				author="CSLeader";
				displayname = "KPA Green";				
				textures[] = {"\fp_factions\KPA\data\t55\t55_body_kpa_co.paa","\fp_factions\KPA\data\t55\t55_tower_kpa_co.paa"};
				factions[] = {"FP_Faction_KPA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_KPA_Crewman";
		displayName = "Ch'ŏnma-ho";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fp_factions\KPA\data\t55\t55_body_kpa_co.paa","\fp_factions\KPA\data\t55\t55_tower_kpa_co.paa"};
	};
	class rhsgref_nat_uaz;
	class rhsgref_nat_uaz_open;
	class rhsgref_nat_uaz_dshkm;
	class rhsgref_nat_uaz_ags;
	class rhsgref_nat_uaz_spg9;
	class FP_Faction_KPA_UAZ: rhsgref_nat_uaz
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_Open: rhsgref_nat_uaz_open
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_DShKM: rhsgref_nat_uaz_dshkm
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_AGS: rhsgref_nat_uaz_ags
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_SPG9: rhsgref_nat_uaz_spg9
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};	
	class rhs_zil131_msv;
	class rhs_zil131_open_msv;
	class rhs_zil131_flatbed_cover_msv;
	class rhs_zil131_flatbed_msv;
	class FP_Faction_KPA_ZIL131: rhs_zil131_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_ZIL131_Open: rhs_zil131_open_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_ZIL131_Flatbed_Cover: rhs_zil131_flatbed_cover_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_ZIL131_Flatbed: rhs_zil131_flatbed_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};	
	class rhsgref_cdf_Mi24D_early;
	class FP_KPA_Mi25: rhsgref_cdf_Mi24D_early
	{
		side = 0;
		displayName = "Mi-25";
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		hiddenselectionstextures[] = {"\fp_factions\KPA\data\mi24\mi25_kpa_01_co.paa","\fp_factions\KPA\data\mi24\mi25_kpa_02_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"};

	};

	class B_FieldPack_khk;
	class KPA_FieldPack_RPG_khk: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG7_F_KPA
			{
				magazine = "RPG7_F";
				count = 4;
			};
		};		
	};
	class KPA_FieldPack_RPG_Spotter_khk: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG7_F_KPA
			{
				magazine = "RPG7_F";
				count = 2;
			};
		};		
	};
	class KPA_Recon_FieldPack_RPG_Light_grn: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG7_F_KPA
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 2;
			};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Enoch\bags\data\backpack_gorod_RUkhk_co.paa"};
	};
	class KPA_FieldPack_khk_AAR: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPK_75Rnd_Drum_KPA
			{
				magazine = "UK3CB_RPK_75Rnd_Drum";
				count = 4;
			};
		};		
	};
	class KPA_FieldPack_khk_MMG: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100Rnd_762x54mmR_KPA
			{
				magazine = "rhs_100Rnd_762x54mmR";
				count = 3;
			};
		};		
	};
	class KPA_WPRG_FieldPack_khk_AAR: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100rnd_korob_rpd_KPA
			{
				magazine = "100rnd_korob_rpd";
				count = 4;
			};
		};		
	};
	class KPA_WPRG_FieldPack_khk_LMG: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_47rnd_dpbar_KPA
			{
				magazine = "47rnd_dpbar";
				count = 5;
			};
		};		
	};
	class B_Carryall_oli;
	class KPA_Carryall_oli_MANPADS: B_Carryall_oli
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
	class B_TacticalPack_oli;
	class KPA_TacticalPack_oli_MAT: B_TacticalPack_oli
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_PG7VL_KPA
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 4;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_KPA_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_KPA";
		genericNames = "ChineseMen";
		vehicleClass = "Men";
	    editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 0.8;
		sensitivity = 2;
		threat[] = {1,0.1,0.1};
		camouflage = 1;
		minFireTime = 7;
		cost = 20000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_KPA_Brown";  
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Rifleman: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_Faction_KPA_AR: FP_Faction_KPA_Soldier_BASE
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
		weapons[] = {"UK3CB_RPK","Throw","Put"};
		respawnWeapons[] = {"UK3CB_RPK","Throw","Put"};
		magazines[] = {"UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","UK3CB_RPK_75Rnd_Drum","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AAR: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "KPA_FieldPack_khk_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_SL: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 33;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_TL: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 33;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Marksman: FP_Faction_KPA_Soldier_BASE
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
		displayName = "Marksman";
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_RAT: FP_Faction_KPA_Soldier_BASE
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
		displayName = "Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Medic: FP_Faction_KPA_Soldier_BASE
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
		weapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Crewman: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"chestrig_chic","UK3CB_H_Crew_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_H_Crew_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_H_Crew_Cap"};
	};
	class FP_Faction_KPA_Engineer: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_MMG: FP_Faction_KPA_Soldier_BASE
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
		weapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AMMG: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "KPA_FieldPack_khk_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_MAT: FP_Faction_KPA_Soldier_BASE
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
		backpack = "KPA_TacticalPack_oli_MAT";
		weapons[] = {"FP_Type56","rhs_weap_rpg7_FP_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_rpg7_FP_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AMAT: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "KPA_TacticalPack_oli_MAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_MANPADS: FP_Faction_KPA_Soldier_BASE
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
		backpack = "KPA_Carryall_oli_MANPADS";
		weapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 66;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AMANPADS: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "KPA_Carryall_oli_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Helipilot: FP_Faction_KPA_Crewman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_O_H_zsh7a_mike_Des_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_O_H_zsh7a_mike_Des_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class FP_Faction_KPA_JSniper: FP_Faction_KPA_Soldier_BASE
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
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		scope = 2;
		scopeCurator = 2;
		displayName = "Jeongchaldae Sniper";
		vehicleClass = "MenSniper";
		uniformClass = "U_I_FullGhillie_lsh";
		weapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Bandanna_khk","H_Bandanna_khk"};
	};
	class FP_Faction_KPA_JSpotter: FP_Faction_KPA_JSniper
	{
		backpack = "KPA_FieldPack_RPG_Spotter_khk";
		displayName = "Jeongchaldae Spotter";
		weapons[] = {"FP_Type56_mount_1P63_762sup_ak","rhs_weap_makarov_pm","launch_RPG7_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P63_762sup_ak","rhs_weap_makarov_pm","launch_RPG7_F","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class FP_Faction_KPA_SOF_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_KPA";
		genericNames = "ChineseMen";
		vehicleClass = "Men";
	    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 1.3;
		sensitivity = 2;
		threat[] = {1,0.1,0.1};
		camouflage = 1.5;
		minFireTime = 5;
		cost = 20000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_KPA_Duckhunter";  
		weapons[] = {"hlc_rifle_aks74u_ekp8_02_545SUP_AK","RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u_ekp8_02_545SUP_AK","RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_SmershVest_01_F","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemCompass","ItemWatch","ItemRadio","VSM_flightglove_standalone_noNVG"};
		respawnLinkedItems[] = {"V_SmershVest_01_F","UK3CB_TKP_I_H_SSh68_BLK","ItemMap","ItemCompass","ItemWatch","ItemRadio","VSM_flightglove_standalone_noNVG"};
	};
	class FP_Faction_KPA_SOF_Scout: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Recon Scout";		
	};
	class FP_Faction_KPA_SOF_Scout_AT: FP_Faction_KPA_SOF_Soldier_BASE
	{
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Recon Scout (AT)";
		backpack = "KPA_Recon_FieldPack_RPG_Light_grn";
		weapons[] = {"hlc_rifle_aks74u_ekp8_02_545SUP_AK","RH_cz75_gemtech9","rhs_weap_rpg7_FP_pgo7v2","Binocular","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_aks74u_ekp8_02_545SUP_AK","RH_cz75_gemtech9","rhs_weap_rpg7_FP_pgo7v2","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShell"};
		
	};
	
	
	
	class FP_Faction_KPA_WPRG_Base: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		vehicleClass = "fp_men_militia";
	    editorSubcategory = "fp_men_militia_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Militia Man";
		cost = 10000;
		headgearProbability = 50;
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_03","UK3CB_H_Ushanka_Cap_04"};
		weapons[] = {"str_ppsh_old","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		linkedItems[] = {"chestrig_chic","UK3CB_H_Ushanka_Cap_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_H_Ushanka_Cap_04","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_Rifleman: FP_Faction_KPA_WPRG_Base
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_WPRG_Base";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Rifleman";		
	};
	class FP_Faction_KPA_WPRG_BR: FP_Faction_KPA_WPRG_Base
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_WPRG_Base";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Battle Rifleman";
		weapons[] = {"str_sks_old","Throw","Put"};
		respawnWeapons[] = {"str_sks_old","Throw","Put"};
		magazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};		
	};
	class FP_Faction_KPA_WPRG_AR: FP_Faction_KPA_WPRG_Base
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
		displayName = "Militia Autorifleman";
		weapons[] = {"str_rpd","Throw","Put"};
		respawnWeapons[] = {"str_rpd","Throw","Put"};
		magazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 50;
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_03","UK3CB_H_Ushanka_Cap_04"};
	};
	class FP_Faction_KPA_WPRG_AAR: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Assistant Autorifleman";
		backpack = "KPA_WPRG_FieldPack_khk_AAR";
		headgearProbability = 50;
		allowedHeadgear[] = {"UK3CB_H_Ushanka_Cap_03","UK3CB_H_Ushanka_Cap_04"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_WPRG_SL: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Squad Leader";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
	};
	class FP_Faction_KPA_WPRG_TL: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia Team Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 33;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_WPRG_Marksman: FP_Faction_KPA_WPRG_BASE
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
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_WPRG_RAT: FP_Faction_KPA_WPRG_Base
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
		displayName = "Militia Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"str_ppsh_old","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","RPG7_F","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","RPG7_F","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_WPRG_LMG: FP_Faction_KPA_WPRG_BASE
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
		displayName = "Militia LMG Gunner";
		weapons[] = {"str_pul_DP","Throw","Put"};
		respawnWeapons[] = {"str_pul_DP","Throw","Put"};
		magazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_rgd5","rhs_mag_rgd5","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","UK3CB_TKA_I_H_SSh68_Oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_TKA_I_H_SSh68_Oli","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_WPRG_ALMG: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Militia LMG Assistant";
		backpack = "KPA_WPRG_FieldPack_khk_LMG";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};	
};
class cfgWeapons
{
	class FP_Type56_mount;
	class FP_Type56_mount_1P29: FP_Type56_mount
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
		};
	};
	class FP_Type56_mount_1P63_762sup_ak: FP_Type56_mount
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_762sup_ak";
			};
		};		
	};
	class FP_svd_wood;
	class FP_svd_wood_PSO1M2: FP_svd_wood
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pso1m2";
			};
		};
	};
	class hlc_rifle_aks74u;
	class hlc_rifle_aks74u_ekp8_02_545SUP_AK: hlc_rifle_aks74u
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};
	class RH_cz75;
	class RH_cz75_gemtech9: RH_cz75
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_gemtech9";
			};
		};		
	};
	class rhs_weap_rpg7;
	class rhs_weap_rpg7_FP_pgo7v: rhs_weap_rpg7
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pgo7v";
			};
		};
	};	
	class rhs_weap_rpg7_FP_pgo7v2: rhs_weap_rpg7
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pgo7v2";
			};
		};
	};
};