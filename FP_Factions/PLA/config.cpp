class CfgPatches
{
	class FP_Factions_PLA
	{
		units[] = {"FP_Faction_PLA_Soldier_BASE","FP_Faction_PLA_Rifleman","FP_Faction_PLA_AR","FP_Faction_PLA_AAR","FP_Faction_PLA_SL","FP_Faction_PLA_TL","FP_Faction_PLA_DM","FP_Faction_PLA_RAT","FP_Faction_PLA_Medic","FP_Faction_PLA_Crewman","FP_Faction_PLA_Engineer","FP_Faction_PLA_MMG","FP_Faction_PLA_AMMG","FP_Faction_PLA_MAT","FP_Faction_PLA_AMAT","FP_Faction_PLA_MANPADS","FP_Faction_PLA_AMANPADS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_PLA
	{
		displayName = "FP People's Republic of China (2010)";
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
			name = "People's Republic of China (2010/Universal)";
			class Infantry
			{
				name = "PRC (2010/Universal) Infantry ";
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
					name = "Sentries";
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
				name = "PRC (2010/Universal) Company Attachments";
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
				class PLA_HATTeam
				{
					name = "HAT Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_PLA_HAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_PLA_AHAT";
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
	class RHS_Mi8mt_vvsc;
	class RHS_Mi8mt_Cargo_vvsc;
	class RHS_Mi8MTV3_vvsc;
	class RHS_Mi8mtv3_Cargo_vvsc;
	class RHS_Mi8MTV3_heavy_vvsc;
	class FP_Mi8mt_PLA: RHS_Mi8mt_vvsc
	{
		class TextureSources
		{
			class PLAMi8
			{
				author="VME";
				displayname = "PLA Woodland";				
				textures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		crew = "FP_Faction_PLA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_PLA";
		typicalCargo[] = {"FP_Faction_PLA_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
	};
	class FP_Mi8mt_Cargo_PLA: RHS_Mi8mt_Cargo_vvsc
	{
		class TextureSources
		{
			class PLAMi8
			{
				author="VME";
				displayname = "PLA Woodland";				
				textures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		crew = "FP_Faction_PLA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_PLA";
		typicalCargo[] = {"FP_Faction_PLA_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
	};	
	class FP_Mi8MTV3_PLA: RHS_Mi8MTV3_vvsc
	{
		class TextureSources
		{
			class PLAMi8
			{
				author="VME";
				displayname = "PLA Woodland";				
				textures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		crew = "FP_Faction_PLA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_PLA";
		typicalCargo[] = {"FP_Faction_PLA_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
	};
	class FP_Mi8mtv3_Cargo_PLA: RHS_Mi8mtv3_Cargo_vvsc
	{
		class TextureSources
		{
			class PLAMi8
			{
				author="VME";
				displayname = "PLA Woodland";				
				textures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		crew = "FP_Faction_PLA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_PLA";
		typicalCargo[] = {"FP_Faction_PLA_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
	};
	class FP_Mi8MTV3_heavy_PLA: RHS_Mi8MTV3_heavy_vvsc
	{
		class TextureSources
		{
			class PLAMi8
			{
				author="VME";
				displayname = "PLA Woodland";				
				textures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		crew = "FP_Faction_PLA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_PLA";
		typicalCargo[] = {"FP_Faction_PLA_Helicrew"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = {"\fp_factions\PLA\data\Mi8\mi17_body_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};	
	};
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_Stealth_F;
	class O_Plane_CAS_02_dynamicLoadout_F;
	class I_Plane_Fighter_04_F;
	class FP_Faction_PLA_Plane_Fighter_02_F: O_Plane_Fighter_02_F
	{
		class TextureSources
		{
			class PLASkin01
			{
				author="CSLeader";
				displayname = "Ghost White";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
			class PLASkin02
			{
				author="CSLeader";
				displayname = "Light Gray";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_02_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_02_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};	
			class PLASkin03
			{
				author="CSLeader";
				displayname = "Black";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
			class PLASkin03LV
			{
				author="CSLeader";
				displayname = "Black (Low-Vis)";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_03_LV_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Fighter_Pilot_F";
		displayName = "J-16B Queying";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo_01","Camo_02","","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa"};
	};
	class FP_Faction_PLA_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
	{
		class TextureSources
		{
			class PLASkin01
			{
				author="CSLeader";
				displayname = "Ghost White";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
			class PLASkin02
			{
				author="CSLeader";
				displayname = "Light Gray";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_02_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_02_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};	
			class PLASkin03
			{
				author="CSLeader";
				displayname = "Black";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
			class PLASkin03LV
			{
				author="CSLeader";
				displayname = "Black (Low-Vis)";				
				textures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_03_LV_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_03_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa","a3\data_f\clear_empty.paa"};
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Fighter_Pilot_F";
		displayName = "J-16B Queying (Stealth)";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo_01","Camo_02","","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_02_PLAAF_01_co.paa","\fp_factions\PLA\data\shikra\Fighter_02_fuselage_01_PLAAF_01_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa","a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa"};
	};
	class FP_Faction_PLA_Plane_CAS_02_dynamicLoadout_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Fighter_Pilot_F";
		displayName = "Q-15D Lieying";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\neophron\Fighter02_ext01_PLAAF_03_CO.paa","\fp_factions\PLA\data\neophron\Fighter02_ext02_PLAAF_03_CO.paa"};
	};
	class FP_Faction_PLA_Plane_Fighter_04_F: I_Plane_Fighter_04_F
	{
		class TextureSources
		{
			class PLA_J10_Skin01
			{
				author="CSLeader";
				displayname = "Ghost White";				
				textures[] = {"\fp_factions\PLA\data\gryphon\Fighter_04_fuselage_01_PLA_co.paa","\fp_factions\PLA\data\gryphon\Fighter_04_fuselage_02_PLA_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		author = "FP Mod Team";
		side = 0;
		crew = "FP_Faction_PLA_Fighter_Pilot_F";
		displayName = "J-10C Menglong";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo_01","Camo_02","Camo_03","number_01","number_02","number_03"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\gryphon\Fighter_04_fuselage_01_PLA_co.paa","\fp_factions\PLA\data\gryphon\Fighter_04_fuselage_02_PLA_co.paa","a3\air_f_jets\plane_fighter_04\data\Fighter_04_misc_01_co.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa","a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa"};
	};
	class O_Quadbike_01_F;
	class FP_Faction_PLA_Quadbike_01_F: O_Quadbike_01_F
	{
		class TextureSources
		{
			class PLA_QB_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};			
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
	};
	class O_Truck_02_transport_F;
	class O_Truck_02_covered_F;
	class O_Truck_02_box_F;
	class O_Truck_02_medical_F;
	class O_Truck_02_fuel_F;
	class O_Truck_02_Ammo_F;
	class I_Truck_02_MRL_F;
	class FP_Faction_PLA_Truck_02_transport_F: O_Truck_02_transport_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Transport";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_covered_F: O_Truck_02_covered_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Transport (covered)";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_box_F: O_Truck_02_box_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Repair";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_medical_F: O_Truck_02_medical_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Medical";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_kuz_olive_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_fuel_F: O_Truck_02_fuel_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\fp_factions\PLA\data\zamak\truck_02_fuel_PLA_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Fuel";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\fp_factions\PLA\data\zamak\truck_02_fuel_PLA_CO.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_Ammo_F: O_Truck_02_Ammo_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";	
		displayName = "SX2190 Ammo";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","\A3\soft_f_beta\Truck_02\Data\truck_02_repair_green_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
	};
	class FP_Faction_PLA_Truck_02_MRL_F: I_Truck_02_MRL_F
	{
		class TextureSources
		{
			class PLA_Truck02_Green
			{
				author="CSLeader";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa","\fp_factions\PLA\data\zamak\Truck_02_MRL_PLA_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		side = 0;
		crew = "FP_Faction_PLA_Rifleman";
		typicalCargo[] = {"FP_Faction_PLA_Rifleman","FP_Faction_PLA_Rifleman"};
		displayName = "SX2190 MLRS";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\zamak\truck_02_kab_PLA_CO.paa","a3\soft_f_beta\truck_02\data\truck_02_int_co.paa","\fp_factions\PLA\data\zamak\Truck_02_MRL_PLA_CO.paa"};
	};
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_medical_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_device_F;
	class O_Truck_03_ammo_F;
	class FP_Faction_PLA_Truck_03_transport_F: O_Truck_03_transport_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Transport";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa"};
	};
	class FP_Faction_PLA_Truck_03_covered_F: O_Truck_03_covered_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Transport (covered)";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cover_pla_CO.paa"};
	};
	class FP_Faction_PLA_Truck_03_repair_F: O_Truck_03_repair_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\rhsafrf\addons\rhs_a3retex\Data\truck_03_ammo_co.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Repair";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\rhsafrf\addons\rhs_a3retex\Data\truck_03_ammo_co.paa"};
	};
	class FP_Faction_PLA_Truck_03_medical_F: O_Truck_03_medical_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Medical";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cover_pla_CO.paa"};
	};
	class FP_Faction_PLA_Truck_03_fuel_F: O_Truck_03_fuel_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_bluforpacific_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Fuel";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_bluforpacific_CO.paa"};
	};	
	class FP_Faction_PLA_Truck_03_device_F: O_Truck_03_device_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia (Device)";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"};
	};
	class FP_Faction_PLA_Truck_03_ammo_F: O_Truck_03_ammo_F
	{
		class TextureSources
		{
			class PLA_Truck03_Green
			{
				author="Gordon Weedman";
				displayname = "PLA Green";				
				textures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
				factions[] = {"FP_Faction_PLA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_PLA_Rifleman";
		displayName = "VP22 Kaijia Ammo";
		faction = "FP_Faction_PLA";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\fp_factions\PLA\data\typhoon\Truck_03_ext01_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_ext02_pla_CO.paa","\fp_factions\PLA\data\typhoon\Truck_03_cargo_pla_CO.paa","\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"};
	};
	class B_Carryall_cbr;
	class B_AssaultPack_rgr;
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
			class _xx_100Rnd_580x42_Mag_F
			{
				magazine = "100Rnd_580x42_Mag_F";
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
	class B_Kitbag_sgg_MAT_PLA: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG32_F_PLA
			{
				magazine = "RPG32_F";
				count = 3;
			};
		};
	};
	class B_Kitbag_sgg_HAT_PLA: B_Kitbag_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT_PLA
			{
				magazine = "Vorona_HEAT";
				count = 2;
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
	class B_AssaultPack_rgr_GL_PLA: B_AssaultPack_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 3;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 2;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 2;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 2;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};
		};
	};	
	class B_Soldier_F;
	class FP_Faction_PLA_Soldier_BASE: B_Soldier_F
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
		faction = "FP_Faction_PLA";
		genericNames = "ChineseMen";
		vehicleClass = "fp_men_universal";
	    editorSubcategory = "fp_men_universal_EdSubcat";
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
		weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
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
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"arifle_CTARS_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"arifle_CTARS_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AAR: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "B_Kitbag_sgg_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_GL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_PLA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		backpack = "B_AssaultPack_rgr_GL_PLA";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		weapons[] = {"arifle_CTAR_GL_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
	};
	class FP_Faction_PLA_SL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_TL: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"arifle_CTAR_GL_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_GL_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"srifle_DMR_07_blk_F_FPFac_Kahlia","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"srifle_DMR_07_blk_F_FPFac_Kahlia","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_Crewman: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_B","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacVest_camo","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Tank_black_F"};
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
		weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkp","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","FP_Helmet_Type07Uni","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMMG: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "B_Kitbag_sgg_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		backpack = "B_Kitbag_sgg_MAT_PLA";
		weapons[] = {"arifle_CTAR_blk_F","launch_RPG32_F_black","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","launch_RPG32_F_black","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMAT: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "B_Kitbag_sgg_MAT_PLA";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_PLA_HAT: FP_Faction_PLA_Soldier_BASE
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
		displayName = "HAT Gunner";
		backpack = "B_Kitbag_sgg_HAT_PLA";
		weapons[] = {"arifle_CTAR_blk_F","FP_GOR_launch_O_Vorona_metis_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","FP_GOR_launch_O_Vorona_metis_F","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AHAT: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "HAT Assistant";
		backpack = "B_Kitbag_sgg_HAT_PLA";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
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
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_F","rhs_weap_igla","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
	};
	class FP_Faction_PLA_AMANPADS: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_cbr_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_Type07Uni","FP_Helmet_Type07Uni"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class B_Helipilot_F;
	class FP_Faction_PLA_Helipilot: B_Helipilot_F
	{
		author = "FP Mod Team";
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faceType = "Man_A3";
		genericNames = "ChineseMen";
		side = 0;
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_universal";
	    editorSubcategory = "fp_men_universal_EdSubcat";
		uniformClass = "FP_HeliPilotCoveralls_PLA"; 
		displayName = "Helicopter Pilot";
		faction = "FP_Faction_PLA";
		weapons[] = {"arifle_CTAR_blk_F","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_B","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_PilotHelmetHeli_B"};
	};
	class FP_Faction_PLA_Helicrew: FP_Faction_PLA_Helipilot
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_PLA_Soldier_BASE";		
		side = 0;
		displayName = "Helicopter Crew";
		faction = "FP_Faction_PLA";
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_CrewHelmetHeli_B"};		
	};
	class O_Fighter_Pilot_F;
	class FP_Faction_PLA_Fighter_Pilot_F: O_Fighter_Pilot_F
	{
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_PLA";
		genericNames = "ChineseMen";
		vehicleClass = "fp_men_universal";
	    editorSubcategory = "fp_men_universal_EdSubcat";
		uniformClass = "U_B_PilotCoveralls";
		linkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_PLA_Officer: FP_Faction_PLA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_PLA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		cost = 250000;
		linkedItems[] = {"V_TacVest_camo","UK3CB_ANA_B_H_Beret_GRN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","UK3CB_ANA_B_H_Beret_GRN","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_ANA_B_H_Beret_GRN","UK3CB_ANA_B_H_Beret_GRN"};
	};	
};