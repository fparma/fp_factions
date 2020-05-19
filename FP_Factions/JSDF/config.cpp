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
				higashi = "Higashi";
				hironaka = "Hironaka";
				kawamoto = "Kawamoto";
				maeda = "Maeda";
				matsuoka = "Matsuoka";
				miura = "Miura";
				miyahara = "Miyahara";
				nakama = "Nakama";
				noya = "Noya";
				okada = "Okada";
				osaki = "Osaki";
				tada = "Tada";
				taniguchi = "Taniguchi";
				saiki = "Saiki";
				saito = "Saito";
				shirai = "Shirai";
			};
			class LastNames 
			{
				akira = "Akira";
				jurou = "Jurou";
				hikaru = "Hikaru";
				hiroshi = "Hiroshi";
				keiko = "Keiko";
				ko = "Ko";
				kyou = "Kyou";
				mari = "Mari";
				rokuro = "Rokuro";
				ryo = "Ryo";
				ryuu = "Ryuu";
				shichiro = "Shichiro";
				shiro = "Shiro";
				shoji = "Shoji";
				tadashi = "Tadashi";
				toru = "Toru";
				yoshiaki = "Yoshiaki";
			};
		};
	};
};
class cfgVehicles
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
				displayname = "Marine Blue";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkin02
			{
				author="CSLeader";
				displayname = "Light Grey";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan02_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkinAggressor01
			{
				author="CSLeader";
				displayname = "Hiko Kyodotai";				
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
				displayname = "Marine Blue";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan01_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkin02
			{
				author="CSLeader";
				displayname = "Light Grey";				
				textures[] = {"\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_01_japan02_co.paa","\fp_factions\JSDF\data\blackwasp\Fighter_01_fuselage_02_japan02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\Numbers\Fighter_01_01_ca.paa"};
				factions[] = {"FP_Faction_JSDF"};
			};
			class JSDFSkinAggressor01
			{
				author="CSLeader";
				displayname = "Hiko Kyodotai";				
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
	class FP_C130_UF;
	class FP_Faction_JSDF_C130_Hercules: FP_C130_UF
	{
		displayName = "C-130 Hercules";
		crew = "FP_Faction_JSDF_Fighter_Pilot_F";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fp_factions\JSDF\data\hercules\c130j_body_co.paa","\fp_factions\JSDF\data\hercules\c130j_wings_co.paa"};
	};	
	class FP_GOR_B_T_APC_tracked_03_cannon_F;
	class FP_Faction_JSDF_APC_tracked_03_cannon_F: FP_GOR_B_T_APC_tracked_03_cannon_F
	{
		displayName = "Type 89 IFV";
		crew = "FP_Faction_JSDF_Crewman";
		faction = "FP_Faction_JSDF";
	};	
	class FP_GOR_B_T_APC_Wheeled_03_cannon_F;
	class FP_Faction_JSDF_APC_Wheeled_03_cannon_F: FP_GOR_B_T_APC_Wheeled_03_cannon_F
	{
		displayName = "Type 96 WAPC";
		crew = "FP_Faction_JSDF_Crewman";
		faction = "FP_Faction_JSDF";
	};
	class RHS_UH60M
	{
		class Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
	};
	class FP_Faction_JSDF_UH60M: RHS_UH60M
	{
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2","camo3","filter"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\blackhawk\uh60m_fuselage_co.paa",
			"\fp_factions\JSDF\data\blackhawk\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				gunnerType = "FP_Faction_JSDF_Helicrew";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType = "FP_Faction_JSDF_Helicrew";
			};
		};
	};
	class RHS_UH60M2;
	class FP_Faction_JSDF_UH60M2: RHS_UH60M2
	{
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2","camo3","filter"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\blackhawk\uh60m_fuselage_co.paa",
			"\fp_factions\JSDF\data\blackhawk\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};
	class RHS_UH60M_ESSS;
	class RHS_UH60M_ESSS2;
	class FP_Faction_JSDF_UH60M_ESSS: RHS_UH60M_ESSS
	{
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2","camo3","filter"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\blackhawk\uh60m_fuselage_co.paa",
			"\fp_factions\JSDF\data\blackhawk\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};	
	class FP_Faction_JSDF_UH60M_ESSS2: RHS_UH60M_ESSS2
	{
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2","camo3","filter"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\blackhawk\uh60m_fuselage_co.paa",
			"\fp_factions\JSDF\data\blackhawk\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};	
	class RHS_CH_47F;
	class FP_Faction_JSDF_CH_47F: RHS_CH_47F
	{
		side = 1;
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		typicalCargo[] = {"FP_Faction_JSDF_Helicrew"};
	};
	class rhs_uh1h_hidf;
	class rhs_uh1h_hidf_gunship;
	class rhs_uh1h_hidf_unarmed;
	class FP_Faction_JSDF_UH1H_Armed: rhs_uh1h_hidf
	{
		side = 1;
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		typicalCargo[] = {"FP_Faction_JSDF_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_decals_ca.paa"
		};
	};
	class FP_Faction_JSDF_UH1H_Gunship: rhs_uh1h_hidf_gunship
	{
		side = 1;
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_decals_ca.paa"
		};
	};	
	class FP_Faction_JSDF_UH1H_Unarmed: rhs_uh1h_hidf_unarmed
	{
		side = 1;
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = 
		{
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_in_co.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_tropical_co.paa",
			"\fp_factions\JSDF\data\huey\uh1h_jsdf_decals_ca.paa"
		};
	};	
	class RHS_AH64D_wd;
	class FP_Faction_JSDF_AH64D_wd: RHS_AH64D_wd
	{
		crew = "FP_Faction_JSDF_Helipilot";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"camo1","camo2","camo3","Pilot_MFD_L","Pilot_MFD_R","Gunner_MFD_L","Gunner_MFD_R"};
		hiddenSelectionsTextures[] = {"\fp_factions\JSDF\data\apache\AH64_body_jsdf.paa","\fp_factions\JSDF\data\apache\AH64_jsdf_d.paa","","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)"};
	};
	class rhsusf_m1025_w_m2;
	class rhsusf_m998_w_4dr_fulltop;
	class rhsusf_m998_w_2dr_fulltop;
	class rhsusf_m1025_w_mk19;
	class FP_Faction_JSDF_m1025_w_m2: rhsusf_m1025_w_m2
	{
		side = 1;
		crew = "FP_Faction_JSDF_Rifleman";
		faction = "FP_Faction_JSDF";
	};
	class FP_Faction_JSDF_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_fulltop
	{
		side = 1;
		crew = "FP_Faction_JSDF_Rifleman";
		faction = "FP_Faction_JSDF";
	};

	class I_MBT_03_cannon_F;
	class FP_Faction_JSDF_Type_90_MBT: I_MBT_03_cannon_F
	{
		side = 1;
		crew = "FP_Faction_JSDF_Crewman";
		displayName = "Type 90 Kyū-maru";
		faction = "FP_Faction_JSDF";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
		hiddenSelectionsTextures[] = {"\fp_factions\JSDF\data\leopard\MBT_03_ext01_JSDF_CO.paa","\fp_factions\JSDF\data\leopard\MBT_03_ext02_JSDF_CO.paa","\fp_factions\JSDF\data\leopard\MBT_03_RCWS_JSDF_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
	};	
	class B_AssaultPack_khk;
	class JSDF_B_AssaultPack_MRAWS_HEAT55_F: B_AssaultPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT55_F_JSDF
			{
				magazine = "MRAWS_HEAT55_F";
				count = 2;
			};
		};
	};
	class JSDF_B_AssaultPack_MRAWS_HE_F: B_AssaultPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HE_F_JSDF
			{
				magazine = "MRAWS_HE_F";
				count = 3;
			};
		};
	};
	class B_Kitbag_sgg;
	class JSDF_B_Kitbag_sgg_AAR: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_200rnd_556x45_M_SAW_JSDF
			{
				magazine = "hlc_200rnd_556x45_M_SAW";
				count = 2;
			};
		};
	};
	class JSDF_B_Kitbag_sgg_AMMG: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhsusf_50Rnd_762x51_JSDF
			{
				magazine = "rhsusf_50Rnd_762x51";
				count = 8;
			};
		};
	};
	class JSDF_B_Kitbag_sgg_Ammo: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_200rnd_556x45_M_SAW_JSDF_AB
			{
				magazine = "hlc_200rnd_556x45_M_SAW";
				count = 1;
			};
			class _xx_hlc_30rnd_556x45_EPR_JSDF_AB
			{
				magazine = "hlc_30rnd_556x45_EPR";
				count = 10;
			};
			class _xx_HandGrenade_JSDF_AB
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_SmokeShell_JSDF_AB
			{
				magazine = "SmokeShell";
				count = 6;
			};			
		};
	};
	class B_Carryall_oli;
	class JSDF_B_Carryall_oli_AA: B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_fim92_mag_JSDF
			{
				magazine = "rhs_fim92_mag";
				count = 2;
			};
		};
	};
	class JSDF_B_Carryall_oli_AT: B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AT_JSDF
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class JSDF_B_Carryall_oli_Engi: B_Carryall_oli
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
	class B_CombinationUnitRespirator_01_F;
	class FP_B_CombinationUnitRespirator_01_RegulatorMask_F: B_CombinationUnitRespirator_01_F
	{
		scope = 1;
		hiddenSelections[] = {"Camo","Hose_Base","Hose_APR","Hose_Regulator","insignia"};
		hiddenSelectionsTextures[] = {"a3\Supplies_F_Enoch\bags\data\b_cur_01_co.paa","a3\Supplies_F_Enoch\bags\data\b_cur_01_co.paa","","a3\Supplies_F_Enoch\bags\data\b_cur_01_co.paa",""};
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
		weapons[] = {"hlc_rifle_ar18","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Rifleman: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
	};
	class FP_Faction_JSDF_Unarmed: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		cost = 100000;
	};
	class FP_Faction_JSDF_AmmoBearer: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		backpack = "JSDF_B_Kitbag_sgg_Ammo";
		cost = 100000;
	};
	class FP_Faction_JSDF_Rifleman_Gasmask: FP_Faction_JSDF_Rifleman
	{
		displayName = "Rifleman (Gasmask)";
		backpack = "FP_B_CombinationUnitRespirator_01_RegulatorMask_F";
		linkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","G_RegulatorMask_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","G_RegulatorMask_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		
	};
	class FP_Faction_JSDF_RAT: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		weapons[] = {"hlc_rifle_ar18","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","MRAWS_HEAT55_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","MRAWS_HEAT55_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "JSDF_B_AssaultPack_MRAWS_HEAT55_F";
		cost = 100000;
		headgearProbability = 50;
		allowedHeadgear[] = {"FP_PASGT_Jietai_Rhino","FP_PASGT_Jietai"};
	};
	class FP_Faction_JSDF_FST: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Fire Support AT)";
		weapons[] = {"hlc_rifle_ar18","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","MRAWS_HE_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","MRAWS_HE_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "JSDF_B_AssaultPack_MRAWS_HE_F";
		cost = 100000;
		headgearProbability = 50;
		allowedHeadgear[] = {"FP_PASGT_Jietai_Rhino","FP_PASGT_Jietai"};
	};
	class FP_Faction_JSDF_AR: FP_Faction_JSDF_Soldier_BASE
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
		displayName = "Autorifleman";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "FP_Uniform_02_Jietai";  
		weapons[] = {"hlc_lmg_minimi","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimi","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"IBA_MG_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_MG_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_AAR: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "JSDF_B_Kitbag_sgg_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_JSDF_M: FP_Faction_JSDF_Soldier_BASE
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
		weapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		Items[] = {"FirstAidKit","ACE_RangeCard"};
		RespawnItems[] = {"FirstAidKit","ACE_RangeCard"};
		sensitivity = 3;
	};
	class FP_Faction_JSDF_MMG: FP_Faction_JSDF_Soldier_BASE
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
		displayName = "Machinegunner";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "FP_Uniform_02_Jietai";  
		weapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"IBA_MG_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_MG_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_AMMG: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machinegunner";
		backpack = "JSDF_B_Kitbag_sgg_AMMG";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_JSDF_Crewman: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"FP_UZI","RH_p226","Throw","Put"};
		respawnWeapons[] = {"FP_UZI","RH_p226","Throw","Put"};
		magazines[] = {"FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","FP_UZImag_B","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"IBA_blank_Jietai","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_blank_Jietai","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_HelmetCrew_I"};
	};
	class FP_Faction_JSDF_Engineer: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "JSDF_B_Carryall_oli_Engi";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class FP_Faction_JSDF_Helipilot: FP_Faction_JSDF_Crewman
	{
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_TacVest_oli","rhsusf_hgu56p","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhsusf_hgu56p","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 50;
		allowedHeadgear[] = {"rhsusf_hgu56p","rhsusf_hgu56p_visor"};
	};
	class FP_Faction_JSDF_Helicrew: FP_Faction_JSDF_Helipilot
	{
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_oli","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 50;
		allowedHeadgear[] = {"rhsusf_hgu56p_mask","rhsusf_hgu56p_visor_mask"};
	};
	class FP_Faction_JSDF_SL: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"hlc_rifle_ar18","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_ar18","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","hlc_30rnd_556x45_EPR","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_TL: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_ar18","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_ar18","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","hlc_30rnd_556x45_EPR","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_MANPADS: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		weapons[] = {"hlc_rifle_ar18","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","rhs_fim92_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","rhs_fim92_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "JSDF_B_Carryall_oli_AA";
		cost = 100000;
	};
	class FP_Faction_JSDF_AMANPADS: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "JSDF_B_Carryall_oli_AA";
		cost = 100000;
	};
	class FP_Faction_JSDF_LAT: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AT)";
		weapons[] = {"hlc_rifle_ar18","launch_I_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","launch_I_Titan_short_F","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_EPR","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "JSDF_B_Carryall_oli_AT";
		cost = 100000;
		headgearProbability = 50;
		allowedHeadgear[] = {"FP_PASGT_Jietai_Rhino","FP_PASGT_Jietai"};
	};
	class FP_Faction_JSDF_ALAT: FP_Faction_JSDF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "JSDF_B_Carryall_oli_AT";
		cost = 100000;
	};	
	class FP_Faction_JSDF_Fighter_Pilot_F: B_Fighter_Pilot_F
	{
		author = "FP Mod Team";
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faction = "FP_Faction_JSDF";
		genericNames = "JapaneseMen";
		uniformClass = "U_I_pilotCoveralls";
	};
	
	class FP_Faction_JSDF_SFGp_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
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
		weapons[] = {"rhs_weap_m4a1_blockII_bk_nt4_black_compm4_rvg_blk","RH_usp","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4a1_blockII_bk_nt4_black_compm4_rvg_blk","RH_usp_gemtech45","Throw","Put"};
		magazines[] = {"hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","hlc_30rnd_556x45_S","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"VSM_LBT6094_operator_OGA","rhsusf_ach_bare","rhsusf_ANPVS_15","G_Balaclava_TI_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_LBT6094_operator_OGA","rhsusf_ach_bare","rhsusf_ANPVS_15","G_Balaclava_TI_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_SFGp_Scout: FP_Faction_JSDF_SFGp_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_SFGp_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Recon Scout";
		cost = 200000;
		headgearProbability = 50;
		allowedHeadgear[] = {"rhsusf_ach_bare","rhsusf_ach_bare_ess"};
	};
	class I_Sniper_F;
	class FP_Faction_JSDF_SFGp_Sniper: I_Sniper_F 
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		faction = "FP_Faction_JSDF";
		genericNames = "JapaneseMen";
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		uniformClass = "FP_GhillieSuit_Jietai";  
		weapons[] = {"rhs_weap_m24sws_wd_m8541_harris_swivel","RH_usp","Laserdesignator_01_khk_F","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m24sws_wd_m8541_harris_swivel","RH_usp_gemtech45","Laserdesignator_01_khk_F","Throw","Put"};
		magazines[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_5Rnd_762x51_m118_special_Mag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit","ACE_RangeCard"};
		RespawnItems[] = {"FirstAidKit","ACE_RangeCard"};
		linkedItems[] = {"V_TacVest_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"V_TacVest_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
	};
	
	
	
	class FP_Faction_JSDF_Desert_Rifleman: FP_Faction_JSDF_Rifleman
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Unarmed: FP_Faction_JSDF_Unarmed
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_AmmoBearer: FP_Faction_JSDF_AmmoBearer
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Rifleman_Gasmask: FP_Faction_JSDF_Rifleman_Gasmask
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","G_RegulatorMask_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","G_RegulatorMask_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_RAT: FP_Faction_JSDF_RAT
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_FST: FP_Faction_JSDF_FST
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_AR: FP_Faction_JSDF_AR
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_02_Jietai_Desert";
		linkedItems[] = {"IBA_MG_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_MG_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_AAR: FP_Faction_JSDF_AAR
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_M: FP_Faction_JSDF_M
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_MMG: FP_Faction_JSDF_MMG
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_AMMG: FP_Faction_JSDF_AMMG
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Crewman: FP_Faction_JSDF_Crewman
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_blank_Jietai_Desert","H_HelmetCrew_I","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_blank_Jietai_Desert","H_HelmetCrew_I","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Engineer: FP_Faction_JSDF_Engineer
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Helipilot: FP_Faction_JSDF_Helipilot
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"V_TacVest_khk","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_Helicrew: FP_Faction_JSDF_Helicrew
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"V_TacVest_khk","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhsusf_hgu56p_mask","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_SL: FP_Faction_JSDF_SL
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_TL: FP_Faction_JSDF_TL
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_MANPADS: FP_Faction_JSDF_MANPADS
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_AMANPADS: FP_Faction_JSDF_AMANPADS
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_LAT: FP_Faction_JSDF_LAT
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Desert_ALAT: FP_Faction_JSDF_ALAT
	{
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		uniformClass = "FP_Uniform_Jietai_Desert";
		linkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IBA_rifle_Jietai_Desert","FP_PASGT_Jietai_Desert_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	
	class FP_Faction_JSDF_Airborne_BASE: FP_Faction_JSDF_Soldier_BASE
	{
		class Wounds
		{
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
		vehicleClass = "fp_men_airborne";
	    editorSubcategory = "fp_men_airborne_EdSubcat";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "FP_Uniform_BDU_Jietai";
		linkedItems[] = {"V_TacChestrig_oli_F","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","FP_PASGT_Jietai_Rhino","rhsusf_ANPVS_14","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_JSDF_Paratrooper_BASE: FP_Faction_JSDF_Airborne_BASE
	{
		backpack = "B_Parachute";
	};
	class FP_Faction_JSDF_Airborne_Rifleman: FP_Faction_JSDF_Airborne_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne Rifleman";
		cost = 100000;
	};
	class FP_Faction_JSDF_Airborne_Unarmed: FP_Faction_JSDF_Airborne_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Airborne_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		cost = 100000;
	};
	class FP_Faction_JSDF_Airborne_RAT: FP_Faction_JSDF_Airborne_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Airborne_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne Rifleman (AT)";
		weapons[] = {"hlc_rifle_ar18","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","rhs_weap_m72a7","Throw","Put"};
		cost = 100000;
	};

	class FP_Faction_JSDF_Airborne_AR: FP_Faction_JSDF_Airborne_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		class Wounds
		{
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Airborne Autorifleman";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		uniformClass = "FP_Uniform_BDU_02_Jietai";  
		weapons[] = {"hlc_lmg_minimipara_long_railed","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimipara_long_railed","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
	class FP_Faction_JSDF_Airborne_M: FP_Faction_JSDF_Airborne_BASE
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
		displayName = "Airborne Marksman";
		weapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		Items[] = {"FirstAidKit","ACE_RangeCard"};
		RespawnItems[] = {"FirstAidKit","ACE_RangeCard"};
		sensitivity = 3;
	};
	class FP_Faction_JSDF_Airborne_MMG: FP_Faction_JSDF_Airborne_AR
	{
		displayName = "Airborne Machinegunner";  
		weapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
	};
	
	class FP_Faction_JSDF_Paratrooper_Rifleman: FP_Faction_JSDF_Paratrooper_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paratrooper";
		cost = 100000;
	};
	class FP_Faction_JSDF_Paratrooper_Unarmed: FP_Faction_JSDF_Paratrooper_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Paratrooper_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paratrooper (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		cost = 100000;
	};
	class FP_Faction_JSDF_Paratrooper_RAT: FP_Faction_JSDF_Paratrooper_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_JSDF_Paratrooper_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paratrooper (AT)";
		weapons[] = {"hlc_rifle_ar18","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_ar18","rhs_weap_m72a7","Throw","Put"};
		cost = 100000;
	};

	class FP_Faction_JSDF_Paratrooper_AR: FP_Faction_JSDF_Paratrooper_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		class Wounds
		{
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Paratrooper Autorifleman";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		uniformClass = "FP_Uniform_BDU_02_Jietai";  
		weapons[] = {"hlc_lmg_minimipara_long_railed","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimipara_long_railed","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
	class FP_Faction_JSDF_Paratrooper_M: FP_Faction_JSDF_Paratrooper_BASE
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
		displayName = "Paratrooper Marksman";
		weapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_m14dmr_optic_artel_m14","RH_p226","Throw","Put"};
		magazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_mk316_M14","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		Items[] = {"FirstAidKit","ACE_RangeCard"};
		RespawnItems[] = {"FirstAidKit","ACE_RangeCard"};
		sensitivity = 3;
	};
	class FP_Faction_JSDF_Paratrooper_MMG: FP_Faction_JSDF_Paratrooper_AR
	{
		displayName = "Paratrooper Machinegunner";  
		weapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m240G","RH_p226","Throw","Put"};
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
	};
};

class cfgWeapons
{
	class rhs_weap_m4a1_blockII_bk;
	class rhs_weap_m4a1_blockII_M203_bk;
	class rhs_weap_m4a1_blockII_bk_nt4_black_compm4_rvg_blk: rhs_weap_m4a1_blockII_bk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_rvg_blk";
			};			
		};
	};
	class rhs_weap_m4a1_blockII_M203_bk_nt4_acog_rmr: rhs_weap_m4a1_blockII_M203_bk
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_acog_rmr";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_nt4_black";
			};
		};
	};
	class RH_usp;
	class RH_usp_gemtech45: RH_usp
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_gemtech45";
			};
		};
	};
	
	class hlc_rifle_m14dmr;
	class hlc_rifle_m14dmr_optic_artel_m14: hlc_rifle_m14dmr
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_artel_m14";
			};
		};
	};
	class rhs_weap_m24sws_wd;
	class rhs_weap_m24sws_wd_m8541_harris_swivel: rhs_weap_m24sws_wd
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_m8541";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_swivel";
			};	
		};
	};	
	class rhs_weap_m24sws_wd_m8541_harris_swivel_m24_silencer_black: rhs_weap_m24sws_wd
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_m8541";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_m24_silencer_black";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_swivel";
			};	
		};
	};	
};