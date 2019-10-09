class CfgPatches
{
	class FP_Factions_JSDF
	{
		units[] = {"FP_Faction_JSDF_Soldier_BASE","FP_Faction_JSDF_Rifleman","FP_Faction_JSDF_AR","FP_Faction_JSDF_AAR","FP_Faction_JSDF_SL","FP_Faction_JSDF_TL","FP_Faction_JSDF_DM","FP_Faction_JSDF_RAT","FP_Faction_JSDF_Medic","FP_Faction_JSDF_Crewman","FP_Faction_JSDF_Engineer","FP_Faction_JSDF_MMG","FP_Faction_JSDF_AMMG","FP_Faction_JSDF_MAT","FP_Faction_JSDF_AMAT","FP_Faction_JSDF_MANPADS","FP_Faction_JSDF_AMANPADS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_JSDF
	{
		displayName = "FP Japan Self Defense Force";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\JSDF\cfgFactionClasses_japan_ca.paa";
		flag = "\FP_Factions\JSDF\flag_japan.paa";
	};
};
class CfgWorlds 
{
	class GenericNames 
	{
		class JapaneseMen 
		{
			class FirstNames 
			{
				kawamoto = "Kawamoto";
				tada = "Tada";
				taniguchi = "Taniguchi";
				saiki = "Saiki";
			};
			class LastNames 
			{
				jurou = "Jurou";
				hikaru = "Hikaru";
				ryo = "Ryo";
				ryuu = "Ryuu";
				toru = "Toru";
			};
		};
	};
};
class cfgvehicles
{
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Stealth_F;
	class FP_Faction_JSDF_Plane_Fighter_01_F: B_Plane_Fighter_01_F
	{
		class TextureSources
		{
			class JSDFSkin01
			{
				author="CSLeader";
				displayname = "Two-Tone Sea";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkinAggressor01
			{
				author="CSLeader";
				displayname = "Blue-Gray Hiko Kyodotai";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan_aggressor01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan_aggressor01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_JSDF_Fighter_Pilot_F";
		displayName = "F/A-181J Black Wasp II";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
	};
	class FP_Faction_JSDF_Plane_Fighter_01_Stealth_F: B_Plane_Fighter_01_Stealth_F
	{
		class TextureSources
		{
			class JSDFSkin01
			{
				author="CSLeader";
				displayname = "Two-Tone Sea";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkinAggressor01
			{
				author="CSLeader";
				displayname = "Blue-Gray Hiko Kyodotai";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan_aggressor01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan_aggressor01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_JSDF_Fighter_Pilot_F";
		displayName = "F/A-181J Black Wasp II (Stealth)";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"Camo1","Camo2","CamoGlass","camo_cockpit_1","camo_cockpit_2","camo_cockpit_3","camo_cockpit_5","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
	};
		
	class B_Soldier_F;
	class B_Fighter_Pilot_F;
	class FP_Faction_JSDF_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faceType = "Man_A3";
		faction = "FP_Faction_JSDF";
		genericNames = "JapaneseMen";
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
		uniformClass = "FP_Uniform_Jietai";  
		weapons[] = {"hlc_rifle_SG551LB_RIS","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_RIS","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"IBA_alice_Jietai","FP_PASGT_Jietai_Rhino","hsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_alice_Jietai","FP_PASGT_Jietai_Rhino","hsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Rifleman: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 50;
		allowedHeadgear[] = {"FP_PASGT_Jietai_Rhino","FP_PASGT_Jietai"};
	};
	
	class FP_Faction_JSDF_Fighter_Pilot_F: B_Fighter_Pilot_F
	{
		author = "FP Mod Team";
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faction = "FP_Faction_JSDF";
		genericNames = "JapaneseMen";
		uniformClass = "U_I_pilotCoveralls";
	};	
};