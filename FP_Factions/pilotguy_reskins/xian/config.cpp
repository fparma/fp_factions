class CfgPatches
{
	class pilotguy_reskins_xian
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_PIL_T_VTOL_02_infantry_F",
			"FP_PIL_T_VTOL_02_vehicle_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Soft_F",
			"A3_Soft_F_Beta"
		};
	};
};
class CfgVehicles
{
	class VTOL_Base_F;
	class VTOL_02_base_F: VTOL_Base_F
	{
		// icon = "\A3\Air_F_Exp\VTOL_02\Data\UI\Map_VTOL_02_vehicle_CA.paa";
		// picture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_vehicle_CA.paa";
		// overviewPicture = "\A3\Data_F_Exp\Images\VehicleXian_ca.paa";
		class TextureSources
		{
			class USMC
			{
				displayname = "USMC";
				author="Pilotguy";
				textures[]=
				{
					"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT01_USMC_CO.paa",
					"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT02_USMC_CO.paa",
					"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_L_USMC_CO.paa",
					"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_R_USMC_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class AirSup
			{
				displayname = "Air Superiority";
				author="Pilotguy";
				textures[]=
				{
					"pilotguy_reskins\xian\data\grey\VTOL_02_EXT01_grey_CO.paa",
					"pilotguy_reskins\xian\data\grey\VTOL_02_EXT02_grey_CO.paa",
					"pilotguy_reskins\xian\data\grey\VTOL_02_EXT03_L_grey_CO.paa",
					"pilotguy_reskins\xian\data\grey\VTOL_02_EXT03_R_grey_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F",
					"OPF_F",
					"OPF_T_F"
				};
			};
		};
	};
	class VTOL_02_infantry_base_F: VTOL_02_base_F
	{
	}
	class VTOL_02_vehicle_base_F: VTOL_02_base_F
	{
	}
	class VTOL_02_infantry_dynamicLoadout_base_F: VTOL_02_infantry_base_F
	{
	}
	class VTOL_02_vehicle_dynamicLoadout_base_F: VTOL_02_vehicle_base_F
	{
	}

	class FP_PIL_T_VTOL_02_infantry_F: VTOL_02_infantry_dynamicLoadout_base_F
	{
		author = "Pilotguy";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Fighter_Pilot_f";
		typicalCargo[] = 
		{
			"B_soldier_f"
		};

		class TransportMagazines 
		{
			class _xx_30Rnd_65x39_caseless_mag 
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};

			class _xx_100Rnd_65x39_caseless_mag 
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};

			class _xx_HandGrenade 
			{
				magazine = "HandGrenade";
				count = 10;
			};

			class _xx_1Rnd_HE_Grenade_shell 
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};

			class _xx_1Rnd_Smoke_Grenade_shell 
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeGreen_Grenade_shell 
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeOrange_Grenade_shell 
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeBlue_Grenade_shell 
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};

			class _xx_16Rnd_9x21_Mag 
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};

			class _xx_SmokeShell 
			{
				magazine = "SmokeShell";
				count = 4;
			};

			class _xx_SmokeShellGreen 
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};

			class _xx_SmokeShellOrange 
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};

			class _xx_SmokeShellBlue 
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};

			class _xx_NLAW_F 
			{
				magazine = "NLAW_F";
				count = 2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};

		class TransportItems 
		{
			class _xx_FirstAidKit 
			{
				name = "FirstAidKit";
				count = 10;
			};
		};

		class TransportWeapons 
		{
			class _xx_arifle_MX_F 
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
		class Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
				};
				class presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire","PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F","PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel"};
					};
				};
			};
		};
	

		textureList[] = 
		{
			"USMC", 1,
			"AirSup", 0
		};
		hiddenSelectionsTextures[] = 
		{
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT01_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT02_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_L_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_R_USMC_CO.paa"
		};
	}
	class FP_PIL_T_VTOL_02_vehicle_F: VTOL_02_vehicle_dynamicLoadout_base_F
	{
		author = "Pilotguy";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_Fighter_Pilot_f";
		typicalCargo[] = 
		{
		};

		class TransportMagazines 
		{
			class _xx_30Rnd_65x39_caseless_mag 
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};

			class _xx_100Rnd_65x39_caseless_mag 
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};

			class _xx_HandGrenade 
			{
				magazine = "HandGrenade";
				count = 10;
			};

			class _xx_1Rnd_HE_Grenade_shell 
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};

			class _xx_1Rnd_Smoke_Grenade_shell 
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeGreen_Grenade_shell 
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeOrange_Grenade_shell 
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeBlue_Grenade_shell 
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};

			class _xx_16Rnd_9x21_Mag 
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};

			class _xx_SmokeShell 
			{
				magazine = "SmokeShell";
				count = 4;
			};

			class _xx_SmokeShellGreen 
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};

			class _xx_SmokeShellOrange 
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};

			class _xx_SmokeShellBlue 
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};

			class _xx_NLAW_F 
			{
				magazine = "NLAW_F";
				count = 2;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};

		class TransportItems 
		{
			class _xx_FirstAidKit 
			{
				name = "FirstAidKit";
				count = 10;
			};
		};

		class TransportWeapons 
		{
			class _xx_arifle_MX_F 
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
		class Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
				};
				class presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire","PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F","PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel"};
					};
				};
			};
		};
	

		textureList[] = 
		{
			"USMC", 1,
			"AirSup", 0
		};
		hiddenSelectionsTextures[] = 
		{
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT01_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT02_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_L_USMC_CO.paa",
			"pilotguy_reskins\xian\data\usmc\VTOL_02_EXT03_R_USMC_CO.paa"
		};
	}
};