class CfgPatches
{
	class FP_Factions_MEC
	{
		units[] = {"FP_Faction_MEC_Soldier_BASE","FP_Faction_MEC_Rifleman","FP_Faction_MEC_Rifleman_Optics","FP_Faction_MEC_RTO","FP_Faction_MEC_AR","FP_Faction_MEC_AAR","FP_Faction_MEC_SL","FP_Faction_MEC_TL","FP_Faction_MEC_DM","FP_Faction_MEC_RAT","FP_Faction_MEC_Medic","FP_Faction_MEC_Crewman","FP_Faction_MEC_Engineer","FP_Faction_MEC_MMG","FP_Faction_MEC_AMMG","FP_Faction_MEC_MAT","FP_Faction_MEC_AMAT","FP_Faction_MEC_MANPADS","FP_Faction_MEC_AMANPADS","FP_Faction_MEC_Recon_Rifleman","FP_Faction_MEC_Recon_Marksman","FP_Faction_MEC_Recon_Gunner","FP_Faction_MEC_Recon_Grenadier","FP_Faction_MEC_Recon_PatrolLeader","FP_Faction_MEC_Recon_Medic","FP_Faction_MEC_Vehicle_BTR90","FP_Faction_MEC_Vehicle_UAZ_Open","FP_Faction_MEC_Vehicle_UAZ_AGS30","FP_Faction_MEC_Vehicle_UAZ_Metis"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class FP_Faction_MEC
	{
		displayName = "MEC";
		priority = 2;
		side = 2;
		icon = "\FP_Factions\MEC\cfgFactionClasses_mec_ca.paa";
		flag = "\FP_Factions\MEC\flag_mec.paa";
	};
};
class CfgGroups
{
	class Indep
	{
		class FP_Faction_MEC_Units
		{
			name = "MEC";
			class Infantry
			{
				name = "MEC Infantry (Shocktroops)";
				class MEC_Riflesquad
				{
					name = "Rifle Squad";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class MEC_WeaponsSquad
				{
					name = "Weapons Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class MEC_Patrol
				{
					name = "Rifle Patrol";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_ATTeam
				{
					name = "Antitank Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_RifleSentry
				{
					name = "Sentry Duty Dudes";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class SpecialForces
			{
				name = "MEC Infantry (Army Recon)";
				class MEC_ReconPatrol
				{
					name = "Recon Patrol";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_PatrolLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_Gunner";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_Marksman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Recon_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
			};
			class Motorized
			{
				name = "MEC Motorized Infantry (Shocktroops)";
				class MEC_Riflesquad
				{
					name = "Rifle Squad (Motorized)";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Vehicle_BTR90";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class MEC_WeaponsSquad
				{
					name = "Weapons Team (Motorized)";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "FP_Faction_MEC_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Vehicle_BTR90";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};
			class Support
			{
				name = "MEC Company Attachments (Shocktroops)";
				class MEC_DoctorTeam
				{
					name = "Doctor Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_MMGTeam
				{
					name = "MMG Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class MEC_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "FP_Faction_MEC_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class MEC_MATTeam
				{
					name = "MAT Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class MEC_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 2;
					faction = "FP_Faction_MEC";
					class Unit0
					{
						side = 2;
						vehicle = "FP_Faction_MEC_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "FP_Faction_MEC_AMANPADS";
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
	class CUP_B_CivPack_WDL;
	class CUP_B_CivPack_WDL_AAR: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 5;
			};
		};
	};
	class CUP_B_CivPack_WDL_MMG: CUP_B_CivPack_WDL
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
	class CUP_B_CivPack_WDL_MEC_MAT: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_rpg7_PG7VM_mag
			{
				magazine = "RPG32_F";
				count = 3;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_MEC_Soldier_BASE: B_Soldier_F
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
		faction = "FP_Faction_MEC";
		genericNames = "TakistaniMen";
		vehicleClass = "fp_men_shockdesert";
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
		uniformClass = "FP_Uniform_MECTiger";  
		weapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","FP_Helmet_MECTiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","FP_Helmet_MECTiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_MEC_Rifleman: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_Rifleman_Optics: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Optics)";
		cost = 100000;
		headgearProbability = 100;
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","Throw","Put"};
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_RTO: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "RTO";
		cost = 100000;
		headgearProbability = 100;
		backpack = "usm_pack_st138_prc77";
	};
	class FP_Faction_MEC_AR: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"CUP_lmg_M60E4","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M60E4","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_AAR: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_CivPack_WDL_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_MEC_SL: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FH_L5_30Rnd_556x45_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FH_L5_30Rnd_556x45_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_TL: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest","FP_Helmet_MECTiger_Goggles","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_DM: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"hlc_rifle_g3sg1_MEC_TR20","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3sg1_MEC_TR20","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 150000;
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Goggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Goggles","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_RAT: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_Medic: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"hlc_rifle_g3a3","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_Crewman: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"hlc_smg_mp5a3","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_smg_mp5a3","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_mas_gue_ind_chicom","usm_helmet_cvc","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_chicom","usm_helmet_cvc","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_cvc"};
	};
	class FP_Faction_MEC_Engineer: FP_Faction_MEC_Soldier_BASE
	{
		author = "Toadie";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"hlc_rifle_g3a3","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_MMG: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"CUP_lmg_Pecheneg","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_Pecheneg","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_3","FP_Helmet_MECTiger_Headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_AMMG: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "CUP_B_CivPack_WDL_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_MEC_MAT: FP_Faction_MEC_Soldier_BASE
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
		backpack = "CUP_B_CivPack_WDL_MAT";
		weapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","launch_RPG32_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","launch_RPG32_F","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_AMAT: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "CUP_B_CivPack_WDL_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_MEC_MANPADS: FP_Faction_MEC_Soldier_BASE
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
		weapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_Zeiss","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
	};
	class FP_Faction_MEC_AMANPADS: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_MECTiger","FP_Helmet_MECTiger"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_MEC_Recon_Rifleman: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Scout)";
		cost = 100000;
		headgearProbability = 100;
		vehicleClass = "fp_men_sfdesert";
		uniformClass = "FP_Uniform_MECDigiDesert"; 
        weapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_Chestrig_rgr","CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_MEC_Recon_Marksman: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Marksman)";
        weapons[] = {"hlc_rifle_g3sg1_MEC_TR20","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_g3sg1_MEC_TR20","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
	};
	class FP_Faction_MEC_Recon_Gunner: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Gunner)";
        weapons[] = {"CUP_lmg_M60E4","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_M60E4","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		backpack = "CUP_B_CivPack_WDL_AAR";
	};
	class FP_Faction_MEC_Recon_Grenadier: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Grenadier)";
 		weapons[] = {"CUP_glaunch_M79","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"CUP_glaunch_M79","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203"};
		respawnMagazines[] = {"CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203","CUP_1Rnd_Smoke_M203"};
	};
	class FP_Faction_MEC_Recon_PatrolLeader: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Patrol Leader)";
        weapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		backpack = "usm_pack_st138_prc77";
		linkedItems[] = {"V_Chestrig_rgr","CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","CUP_H_SLA_Beret","ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS7"};
	};
	class FP_Faction_MEC_Recon_Medic: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Medic)";
        weapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		backpack = "B_FieldPack_cbr_Medic";
	};
	class CUP_O_UAZ_Open_RU;
	class CUP_O_UAZ_AGS30_RU;
	class CUP_O_UAZ_METIS_RU;
	class CUP_O_BTR90_RU;
	class FP_Faction_MEC_Vehicle_UAZ_Open: CUP_O_UAZ_Open_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_MEC";
		crew = "FP_Faction_MEC_Rifleman";
		side = 2;
	};
	class FP_Faction_MEC_Vehicle_UAZ_AGS30: CUP_O_UAZ_AGS30_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_MEC";
		crew = "FP_Faction_MEC_Rifleman";
		side = 2;
	};
	class FP_Faction_MEC_Vehicle_UAZ_Metis: CUP_O_UAZ_METIS_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_MEC";
		crew = "FP_Faction_MEC_Rifleman";
		side = 2;
	};
	class FP_Faction_MEC_Vehicle_BTR90: CUP_O_BTR90_RU
	{
		author = "CUP & FP Mod Team";
		faction = "FP_Faction_MEC";
		crew = "FP_Faction_MEC_Rifleman";
		side = 2;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class hlc_rifle_g3a3ris;
    class hlc_rifle_g3a3;
	class hlc_rifle_g3sg1;
	class hlc_rifle_hk53;
	class hlc_rifle_g3a3ris_MEC_Zeiss: hlc_rifle_g3a3ris
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "RH_zpoint";
				slot = "CowsSlot";
			};
		};
	};
	class hlc_rifle_g3a3_MEC_ZFSG1: hlc_rifle_g3a3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "HLC_Optic_ZFSG1";
				slot = "CowsSlot";
			};
		};
	};
	class hlc_rifle_g3sg1_MEC_TR20: hlc_rifle_g3sg1
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "hlc_optic_accupoint_g3";
				slot = "CowsSlot";
			};
		};
	};
	class hlc_rifle_hk53_MEC_surpressed: hlc_rifle_hk53
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "hlc_muzzle_snds_HK33";
				slot = "MuzzleSlot";
			};
		};
	};
};


