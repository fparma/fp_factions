#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
class CfgPatches
{
	class FP_Factions_ROC
	{
		units[] = 
		{
			"FP_B_ROC_TNK_M41",
			"FP_B_ROC_M60A3_TTS",
			"FP_B_ROC_M1A1FEP",
			"FP_B_ROC_LAV25",
			"FP_B_ROC_LAV25_HQ",
			"FP_B_ROC_M939_MLRS",
			"FP_B_ROC_M939_Closed",
			"FP_B_ROC_M939_Guntruck",
			"FP_B_ROC_M939_Open",
			"FP_B_ROC_M939_Reammo",
			"FPB_ROC_M939_Recovery",
			"FP_B_ROC_M939_Refuel",
			"FP_B_ROC_M939_Repair",
			"FP_B_ROC_Soldier_A_F",
			"FP_B_ROC_Soldier_AAR_F",
			"FP_B_ROC_soldier_AAA_F",
			"FP_B_ROC_Soldier_AAT_F",
			"FP_B_ROC_Soldier_AR_F",
			"FP_B_ROC_Medic_F",
			"FP_B_ROC_Crewman_F",
			"FP_B_ROC_engineer_F",
			"FP_B_ROC_soldier_exp_F",
			"FP_B_ROC_Soldier_GL_F",
			"FP_B_ROC_Helicrew_F",
			"FP_B_ROC_Helipilot_F",
			"FP_B_ROC_MMG_F",
			"FP_B_ROC_soldier_M_F",
			"FP_B_ROC_Soldier_AA_F",
			"FP_B_ROC_Soldier_AT_F",
			"FP_B_ROC_RadioOperator_F",
			"FP_B_ROC_soldier_repair_F",
			"FP_B_ROC_Soldier_F",
			"FP_B_ROC_Soldier_LAT_F",
			"FP_B_ROC_Soldier_lite_F",
			"FP_B_ROC_Soldier_unarmed_F",
			"FP_B_ROC_Soldier_SL_F",
			"FP_B_ROC_Survivor_F",
			"FP_B_ROC_Soldier_TL_F",
			"FP_B_ROC_Soldier_UAV_F"			
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_ROC
	{
		displayName = "FP Taiwan";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\ROK\cfgFactionClasses_southkorea_ca.paa";
		flag = "\FP_Factions\ROK\flag_southkorea.paa";
	};
};
class CfgGroups
{
	class West
	{
		class FP_B_ROC_F
		{
			name = "FP Taiwan";
			class Infantry
			{
				name = "Infantry";
				class BROC_InfAssault
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_MMG_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AAR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_M_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Medic_F";
					};
				};
				class BROC_InfSentry
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_F";
					};
				};
				class BROC_InfSquad
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Medic_F";
					};
				};
				class BROC_InfSquad_Weapons
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_A_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Medic_F";
					};
				};
				class BROC_InfTeam
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_LAT_F";
					};				
				};
				class BROC_InfTeam_AA
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AAA_F";
					};				
				};
				class BROC_InfTeam_AT
				{
					faction = "FP_Faction_ROC";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROC_Soldier_AAT_F";
					};				
				};
			};
		};
	};
};
class CfgVehicles
{
	class B_Kitbag_sgg;
	class B_AssaultPack_sgg;
	class B_Carryall_green_F;
	class FP_ROC_Kitbag_sgg_AAR: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(hlc_200rnd_556x45_M_SAW,2);
		};
	};	
	class FP_ROC_AssaultPack_sgg_medic: B_AssaultPack_sgg
		{
		scope = 1;
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
		};
	};
	class FP_ROC_Carryall_green_F_Ammo: B_Carryall_green_F
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,10);
			mag_xx(20Rnd_762x51_Mag,4);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(hlc_200rnd_556x45_M_SAW,1);
		};		
	};
	class FP_ROC_Carryall_green_F_AT: B_Carryall_green_F
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(Titan_AT,2);
		};
	};
	class FP_ROC_Carryall_green_F_Engi: B_Carryall_green_F
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(SatchelCharge_Remote_Mag,1);
			mag_xx(DemoCharge_Remote_Mag,3);
		};
		class TransportItems
		{
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
		};
	};
	class FP_ROC_Carryall_green_F_AA: B_Carryall_green_F
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_fim92_mag,2);
		};		
	};
	class FP_B_TNK_M41;
	class FP_B_M60A3_TTS_USMC;
	class rhsusf_m1a1fep_wd;
	class FP_B_ROC_TNK_M41: FP_B_TNK_M41
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROC_Crewman_F";
		faction = "FP_Faction_ROC";
		class textureSources
		{
			class ROCwoodland
			{
				displayName = "Woodland";
				author = "";
				textures[]=
				{
					"fp_factions\ROC\data\M41\m41_bulldog_body_roc_camo_co.paa",
					"fp_factions\ROC\data\M41\m41_bulldog_gun_roc_camo_co.paa",
					"fp_factions\ROC\data\M41\m41_bulldog_turret_roc_camo_co.paa"
				};
				factions[] = {"FP_Faction_ROC"};
			};
			class ROCgreen
			{
				displayName = "Green";
				author = "";
				textures[]=
				{
					"fp_factions\ROC\data\M41\m41_bulldog_body_roc_green_co.paa",
					"fp_factions\ROC\data\M41\m41_bulldog_gun_roc_green_co.paa",
					"fp_factions\ROC\data\M41\m41_bulldog_turret_roc_green_co.paa"
				};
				factions[] = {"FP_Faction_ROC"};
			};
		};
		textureList[] =
		{
			"ROCwoodland", 1,
			"ROCgreen", 0
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenselectionstextures[]=
		{
			"fp_factions\ROC\data\M41\m41_bulldog_body_roc_camo_co.paa",
			"fp_factions\ROC\data\M41\m41_bulldog_gun_roc_camo_co.paa",
			"fp_factions\ROC\data\M41\m41_bulldog_turret_roc_camo_co.paa"
		};
	};
	class FP_B_ROC_M60A3_TTS: FP_B_M60A3_TTS_USMC
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROC_Crewman_F";
		faction = "FP_Faction_ROC";
	};
	class FP_B_ROC_M1A1FEP: rhsusf_m1a1fep_wd
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROC_Crewman_F";
		faction = "FP_Faction_ROC";
	};	
	class UK3CB_B_LAV25_US_WDL;
	class UK3CB_B_LAV25_HQ_US_WDL;
	class FP_B_ROC_LAV25: UK3CB_B_LAV25_US_WDL
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROC_Crewman_F";
		faction = "FP_Faction_ROC";
		textureList[] = {"OLI",1}; 
		hiddenSelectionsTextures[] = 
		{
			"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa",
			"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa",
			"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa",
			"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa",
			"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"
		};
	};
	class FP_B_ROC_LAV25_HQ: UK3CB_B_LAV25_HQ_US_WDL
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROC_Crewman_F";
		faction = "FP_Faction_ROC";
		textureList[] = {"OLI",1};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody_oli_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavbody2_oli_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lavalfa_oli_ca.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_LAV\data\lav_hq_oli_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\us_backpacks_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\equipment\cied_dome_wdl_co.paa"};
	};
	class B_Soldier_F;
	class FP_ROC_Soldier_BASE_F: B_Soldier_F
	{
		class Wounds
		{
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faceType = "Man_A3";
		faction = "FP_Faction_ROC";
		genericNames = "ChineseMen";
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
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "FP_Uniform_BDU_ROC_Digital";  
		weapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class UK3CB_B_M939_Closed_WDL;
	class UK3CB_B_M939_Guntruck_WDL;
	class UK3CB_B_M939_Open_WDL;
	class UK3CB_B_M939_Reammo_WDL;
	class UK3CB_B_M939_Recovery_WDL;
	class UK3CB_B_M939_Refuel_WDL;
	class UK3CB_B_M939_Repair_WDL;
	class UK3CB_AAF_B_M939_MLRS;
	class FP_B_ROC_M939_Closed: UK3CB_B_M939_Closed_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
	};
	class FP_B_ROC_M939_Guntruck: UK3CB_B_M939_Guntruck_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FP_B_ROC_M939_Open: UK3CB_B_M939_Open_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FP_B_ROC_M939_Reammo: UK3CB_B_M939_Reammo_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FPB_ROC_M939_Recovery: UK3CB_B_M939_Recovery_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FP_B_ROC_M939_Refuel: UK3CB_B_M939_Refuel_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FP_B_ROC_M939_Repair: UK3CB_B_M939_Repair_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};
	class FP_B_ROC_M939_MLRS: UK3CB_AAF_B_M939_MLRS
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROC_Soldier_F";
		faction = "FP_Faction_ROC";
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_j_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa","\rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa"};
		textureList[] = {"CW_US_MDC_J",1};
	};	
	class FP_B_ROC_Soldier_A_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		backpack = "FP_ROC_Carryall_green_F_Ammo";
		cost = 100000;
	};
	class FP_B_ROC_soldier_AAA_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "FP_ROC_Carryall_green_F_AA";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_B_ROC_Soldier_AAR_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "FP_ROC_Kitbag_sgg_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
		class FP_B_ROC_Soldier_AAT_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "FP_ROC_Carryall_green_F_AT";
		cost = 100000;
	};
	class FP_B_ROC_Soldier_AR_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"hlc_lmg_minimi_railed","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimi_railed","RH_m9","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROC_Medic_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Life Saver";
		attendant = 1;
		backpack = "FP_ROC_AssaultPack_sgg_medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_B_ROC_Crewman_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Crewman";
		weapons[] = {"hlc_smg_MP5N","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_smg_MP5N","RH_m9","Throw","Put"};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROC_engineer_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "FP_ROC_Carryall_green_F_Engi";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";		
	};
	class FP_B_ROC_soldier_exp_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Kitbag_rgr_Exp";
		canDeactivateMines = 1;
		cost = 93000;
		detectSkill = 38;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";		
	};
	class FP_B_ROC_Soldier_GL_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Grenadier";
		cost = 200000;
		camouflage = 1.4;
		sensitivity = 6;
		threat[] = {0.8,0.1,0.1};
		weapons[] = {"rhs_weap_m16a4_carryhandle_M203","RH_m9","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle_M203","RH_m9","Throw","Put"};		
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	class FP_B_ROC_MMG_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		weapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_m9","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_m9","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROC_Helipilot_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		weapons[] = {"hlc_smg_MP5N","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_smg_MP5N","RH_m9","Throw","Put"};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_B_MP5","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};			
	};
	class FP_B_ROC_Helicrew_F: FP_B_ROC_Helipilot_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsusf_ANPVS_15"};		
	};	
	class FP_B_ROC_soldier_M_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayname = "Marksman";
		weapons[] = {"FP_srifle_DMR_06_olive_ROC_F","RH_m9","Throw","Put"};
		respawnWeapons[] = {"FP_srifle_DMR_06_olive_ROC_F","RH_m9","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		
	};
	class FP_B_ROC_soldier_mine_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Carryall_oli_Mine";
		canDeactivateMines = 1;
		displayname = "Mine Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";		
	};
	class FP_B_ROC_Soldier_AA_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "FP_ROC_Carryall_green_F_AA";
		cost = 100000;
		weapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};

	};
	class FP_B_ROC_Soldier_AT_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AT)";
		weapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","launch_I_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","launch_I_Titan_short_F","Throw","Put"};
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "FP_ROC_Carryall_green_F_AT";
		cost = 100000;	
	};
	class FP_B_ROC_Soldier_F: FP_ROC_Soldier_BASE_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_ROC_Soldier_BASE_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
	};
	class FP_B_ROC_Soldier_LAT_F: FP_ROC_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		weapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","rhs_weap_M136_hedp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","RH_m9","rhs_weap_M136_hedp","Throw","Put"};
		cost = 100000;
	};
	class FP_B_ROC_Soldier_lite_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Lite)";		
		cost = 100000;		
		linkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","rhsusf_ANPVS_15","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROC_Soldier_unarmed_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_B_ROC_RadioOperator_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "FP_B_RadioBag_117_Black";
		cost = 100000;		
	};
	class FP_B_ROC_soldier_repair_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_AssaultPack_rgr_Repair";
		cost = 93000;
		canDeactivateMines = 0;
		engineer = 1;
		detectSkill = 24;
		threat[] = {0.8,0.1,0.1};
		picture = "pictureRepair";
		displayName = "Repair Specialist";
		icon = "iconManEngineer";
	};
	class FP_B_ROC_Soldier_SL_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_rhs_weap_m16a4_carryhandle_rhsusf_acc_acog","RH_m9","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_rhs_weap_m16a4_carryhandle_rhsusf_acc_acog","RH_m9","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROC_Survivor_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Survivor";
		items[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
	};
	class FP_B_ROC_Soldier_TL_F: FP_ROC_Soldier_BASE_F
	{

		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_rhs_weap_m16a4_carryhandle_M203_rhsusf_acc_acog","RH_m9","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_rhs_weap_m16a4_carryhandle_M203_rhsusf_acc_acog","RH_m9","Throw","Put","Binocular"};
		magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 250000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROC_Soldier_UAV_F: FP_ROC_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_UAV_01_backpack_F";
		displayName = "UAV Operator";
		cost = 100000;
		linkedItems[] = {"FP_GOR_V_CarrierRigKBT_light_Woodland_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_CarrierRigKBT_light_Woodland_F","rhsusf_mich_bare_norotos_arc","rhsusf_ANPVS_15","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
};
class CfgWeapons
{
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m16a4_carryhandle_M203;
	class srifle_DMR_06_olive_F;
	class FP_rhs_weap_m16a4_carryhandle_rhsusf_acc_acog: rhs_weap_m16a4_carryhandle
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_acog";
			};
		};
	};
	class FP_rhs_weap_m16a4_carryhandle_M203_rhsusf_acc_acog: rhs_weap_m16a4_carryhandle_M203
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_acog";
			};
		};
	};
	class FP_srifle_DMR_06_olive_ROC_F: srifle_DMR_06_olive_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_sos";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_f_blk";
			};
		};		
	};					
};