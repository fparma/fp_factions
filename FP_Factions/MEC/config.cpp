class CfgPatches
{
	class FP_Factions_MEC
	{
		units[] = {"FP_Faction_MEC_Soldier_BASE","FP_Faction_MEC_Rifleman","FP_Faction_MEC_Rifleman_Optics","FP_Faction_MEC_AR","FP_Faction_MEC_AAR","FP_Faction_MEC_SL","FP_Faction_MEC_TL","FP_Faction_MEC_DM","FP_Faction_MEC_RAT","FP_Faction_MEC_Medic","FP_Faction_MEC_Crewman","FP_Faction_MEC_Engineer","FP_Faction_MEC_MMG","FP_Faction_MEC_AMMG","FP_Faction_MEC_MAT","FP_Faction_MEC_AMAT","FP_Faction_MEC_MANPADS","FP_Faction_MEC_AMANPADS","FP_Faction_MEC_Recon_Rifleman","FP_Faction_MEC_Recon_Marksman","FP_Faction_MEC_Recon_Gunner","FP_Faction_MEC_Recon_Grenadier","FP_Faction_MEC_Recon_PatrolLeader","FP_Faction_MEC_Recon_Medic"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"FP_UniformsEverywhereElse","rhssaf_t_headgear_beret"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_MEC
	{
		displayName = "FP MEC";
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
			name = "FP MEC";
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
					name = "Sentries";
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
			/*class Motorized
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
						vehicle = "FP_Faction_MEC_Vehicle_BTR90_d";
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
						vehicle = "FP_Faction_MEC_Vehicle_BTR90_d";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			};*/
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
	class B_Kitbag_rgr;
	class B_Kitbag_rgr_AAR: B_Kitbag_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_762x51_T_MG3
			{
				magazine = "hlc_50Rnd_762x51_T_MG3";
				count = 5;
			};
		};
	};
	class B_Kitbag_rgr_MMG: B_Kitbag_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_762x51_T_MG3
			{
				magazine = "hlc_50Rnd_762x51_T_MG3";
				count = 4;
			};
		};
	};
	class B_Kitbag_rgr_MEC_MAT: B_Kitbag_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG32_F_MEC
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
	    editorSubcategory = "fp_men_desert_EdSubcat";
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
		weapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		weapons[] = {"hlc_lmg_MG3","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_MG3","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_50Rnd_762x51_T_MG3","hlc_50Rnd_762x51_T_MG3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_50Rnd_762x51_T_MG3","hlc_50Rnd_762x51_T_MG3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_AAR: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "B_Kitbag_rgr_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_TL: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		headgearProbability = 90;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		magazines[] = {"hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 150000;
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_ess_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		weapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3_MEC_ZFSG1","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_Crewman: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"hlc_smg_mp5a3","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_smg_mp5a3","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacVest_oli","rhsusf_cvc_ess", "G_Aviator", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhsusf_cvc_ess", "G_Aviator", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"rhsusf_cvc_ess"};
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
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		weapons[] = {"hlc_lmg_MG3_optic_MEC_Elcan","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_MG3_optic_MEC_Elcan","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"hlc_50Rnd_762x51_T_MG3","hlc_50Rnd_762x51_T_MG3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_50Rnd_762x51_T_MG3","hlc_50Rnd_762x51_T_MG3","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_6b27m_MEC_tiger","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_AMMG: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "B_Kitbag_rgr_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		backpack = "B_Kitbag_rgr_MEC_MAT";
		weapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","launch_RPG32_F_black","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","launch_RPG32_F_black","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_AMAT: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "B_Kitbag_rgr_MEC_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
		weapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_g3a3ris_MEC_ekp8","rhs_weap_igla","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
	};
	class FP_Faction_MEC_AMANPADS: FP_Faction_MEC_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_6b27m_MEC_tiger","rhs_6b27m_MEC_tiger"};
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
	    editorSubcategory = "fp_men_sfdesert_EdSubcat";
		uniformClass = "FP_Uniform_MECDigiDesert";
        weapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"mbavr_r","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"mbavr_r","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		magazines[] = {"hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_barrier_G3","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
	};
	class FP_Faction_MEC_Recon_Gunner: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Gunner)";
        weapons[] = {"hlc_lmg_M60E4","Throw","Put"};
        respawnWeapons[] = {"hlc_lmg_M60E4","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "V_TacVest_oli_AAR";
	};
	class FP_Faction_MEC_Recon_Grenadier: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Grenadier)";
 		weapons[] = {"rhs_weap_m32","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m32","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","rhsusf_mag_6Rnd_M441_HE","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};
	class FP_Faction_MEC_Recon_PatrolLeader: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Patrol Leader)";
        weapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"V_Chestrig_rgr","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
		respawnLinkedItems[] = {"V_Chestrig_rgr","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_1PN138"};
	};
	class FP_Faction_MEC_Recon_Medic: FP_Faction_MEC_Recon_Rifleman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_MEC_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Army Recon (Medic)";
        weapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_hk53RAS_MEC_surpressed","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_SOST_HK33","HandGrenade","HandGrenade","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_FieldPack_cbr_Medic";
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class hlc_rifle_g3a3;
	class hlc_rifle_g3a3ris;
	class hlc_rifle_g3sg1;
	class hlc_rifle_hk53RAS;
	class hlc_lmg_MG3_optic;
	class hlc_rifle_g3a3ris_MEC_ekp8: hlc_rifle_g3a3ris
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhs_acc_ekp8_18";
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
				item = "hlc_optic_STANAGZF_G3";
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
	class hlc_rifle_hk53RAS_MEC_surpressed: hlc_rifle_hk53RAS
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "hlc_muzzle_556NATO_KAC";
				slot = "MuzzleSlot";
			};
			class LinkedItemsOptic
			{
				item = "rhs_acc_ekp8_18";
				slot = "CowsSlot";
			};
		};
	};
	class hlc_lmg_MG3_optic_MEC_Elcan: hlc_lmg_MG3_optic
	{
		scope = 1;
		displayName = "Rheinmetall MG3 (MEC Contract)";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_elcan_3d";
				slot = "CowsSlot";
			};
		};
	};
	class launch_RPG32_F;
	class launch_RPG32_F_black: launch_RPG32_F
	{
		scope = 2;
		displayName = "RPG-32 (Black)";
		_generalMacro = "launch_RPG32_Black_F";
		baseWeapon = "launch_RPG32_Black_F";
		author = "Bohemia Interactive";
		hiddenSelectionsTextures[]=
		{
			"FP_Factions\MEC\RPG_32_body_Black_CO.paa",
			"\A3\Weapons_F\Launchers\RPG32\Data\RPG_32_optics_CO.paa"
		};
		picture="FP_Factions\MEC\gear_RPG32_Black_X_CA.paa";
	};
};

