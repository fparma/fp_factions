class CfgPatches
{
	class gordon_reskins_karatel
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_MRAP_02_F",
			"FP_GOR_B_MRAP_02_hmg_F",
			"FP_GOR_B_MRAP_02_gmg_F",
			"FP_GOR_B_MRAP_02_F2",
			"FP_GOR_B_MRAP_02_hmg_F2",
			"FP_GOR_B_MRAP_02_gmg_F2",
			"FP_GOR_I_MRAP_02_F",
			"FP_GOR_I_MRAP_02_hmg_F",
			"FP_GOR_I_MRAP_02_gmg_F"
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
	class Car_F;
	class MRAP_02_base_F: Car_F
	{
		class TextureSources
		{
			class GreyHex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_blufor_co.paa",
					"\a3\data_f\vehicles\turret_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_bluforpacific_co.paa",
					"\a3\data_f_exp\vehicles\turret_olive_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_black_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_black_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class FSB
			{
				displayname = "FSB";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_FSB_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_black_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_winter_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_winter_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_AAF_co.paa",
					"\a3\data_f\vehicles\turret_indp_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class O_MRAP_02_F;
	class FP_GOR_B_MRAP_02_F: O_MRAP_02_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_blufor_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};

	class O_MRAP_02_hmg_F;
	class FP_GOR_B_MRAP_02_hmg_BASE: O_MRAP_02_hmg_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MRAP_02_hmg_BASE2: FP_GOR_B_MRAP_02_hmg_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_B_MRAP_02_hmg_F: FP_GOR_B_MRAP_02_hmg_BASE2 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = {"200Rnd_127x99_mag_Tracer_Red", "200Rnd_127x99_mag_Tracer_Red"};
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_blufor_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};
	
	class O_MRAP_02_gmg_F;
	class FP_GOR_B_MRAP_02_gmg_F: O_MRAP_02_gmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_blufor_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};
	
	class FP_GOR_B_MRAP_02_F2: FP_GOR_B_MRAP_02_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_bluforpacific_co.paa",
			"\a3\data_f\vehicles\turret_olive_co.paa"
		};
	};
	
	class FP_GOR_B_MRAP_02_hmg_F2: FP_GOR_B_MRAP_02_hmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_bluforpacific_co.paa",
			"\a3\data_f\vehicles\turret_olive_co.paa"
		};
	};
	
	class FP_GOR_B_MRAP_02_gmg_F2: FP_GOR_B_MRAP_02_gmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
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
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_bluforpacific_co.paa",
			"\a3\data_f\vehicles\turret_olive_co.paa"
		};
	};
	
	class FP_GOR_I_MRAP_02_F: FP_GOR_B_MRAP_02_F 
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};

		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
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
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
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
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 4;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 12;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
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
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_aaf_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_aaf_co.paa",
			"\a3\data_f\vehicles\turret_indp_co.paa"
		};
	};
	
	class FP_GOR_I_MRAP_02_hmg_F: FP_GOR_B_MRAP_02_hmg_F 
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = {"200Rnd_127x99_mag_Tracer_Yellow", "200Rnd_127x99_mag_Tracer_Yellow"};
			};
		};
		
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
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
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
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
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 4;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 12;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
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
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_aaf_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_aaf_co.paa",
			"\a3\data_f\vehicles\turret_indp_co.paa"
		};
	};
	
	class FP_GOR_I_MRAP_02_gmg_F: FP_GOR_B_MRAP_02_gmg_F 
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};

		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
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
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
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
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 4;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 12;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
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
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_01_aaf_co.paa",
			"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_ext_02_aaf_co.paa",
			"\a3\data_f\vehicles\turret_indp_co.paa"
		};
	};
};