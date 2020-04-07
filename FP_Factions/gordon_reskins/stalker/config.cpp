class CfgPatches
{
	class gordon_reskins_stalker
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_APC_Tracked_02_AA_F",
			"FP_GOR_B_T_APC_Tracked_02_AA_F",
			"FP_GOR_B_APC_Tracked_02_cannon_F",
			"FP_GOR_B_T_APC_Tracked_02_cannon_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Gamma",
			"A3_Soft_F",
			"A3_Armor_F_Beta_APC_Tracked_02",
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};


class CfgVehicles
{
	class APC_Tracked_02_base_F;
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class Turrets;
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};		
		
		class TextureSources
		{
			class Blufor
			{
				displayname = "Sand";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\pandur\data\RCWS30_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Olive";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\pandur\data\RCWS30_olive_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
	};
	class FP_GOR_B_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_f";
		typicalCargo[] = 
		{
			"B_soldier_f"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"140Rnd_30mm_MP_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"2Rnd_GAT_missiles",
					"2Rnd_GAT_missiles"			
				};
			};
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
		/*extern*/ class Components;
	

		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\pandur\data\RCWS30_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	
	class FP_GOR_B_T_APC_Tracked_02_cannon_F: FP_GOR_B_APC_Tracked_02_cannon_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_crew_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f"
		};
		
		class TransportMagazines 
		{
			class _xx_30Rnd_65x39_caseless_khaki_mag 
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};

			class _xx_100Rnd_65x39_caseless_khaki_mag 
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
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
		class TransportWeapons 
		{
			class _xx_arifle_MX_khk_F 
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\pandur\data\RCWS30_olive_CO.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\armor_f\data\cage_olive_CO.paa"
		};
	};
	
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};		
		
		class TextureSources
		{
			class Blufor
			{
				displayname = "Sand";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_aa_blufor_co.paa",
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_blufor_co.paa",
					"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_co.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Olive";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_aa_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_bluforpacific_co.paa",
					"A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
	};
	class FP_GOR_B_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_f";
		typicalCargo[] = 
		{
			"B_soldier_f"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"680Rnd_35mm_AA_shells_Tracer_Red",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles",
					"ACE_120Rnd_35mm_ABM_shells_Tracer_Red"
				};
			};
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
		/*extern*/ class Components;
	

		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_aa_blufor_co.paa",
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_blufor_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_co.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	
	class FP_GOR_B_T_APC_Tracked_02_AA_F: FP_GOR_B_APC_Tracked_02_AA_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_crew_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f"
		};
		
		class TransportMagazines 
		{
			class _xx_30Rnd_65x39_caseless_khaki_mag 
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};

			class _xx_100Rnd_65x39_caseless_khaki_mag 
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
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
		class TransportWeapons 
		{
			class _xx_arifle_MX_khk_F 
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_01_aa_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\stalker\data\apc_tracked_02_ext_02_bluforpacific_co.paa",
			"A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\armor_f\data\cage_olive_CO.paa"
		};
	};
	
};