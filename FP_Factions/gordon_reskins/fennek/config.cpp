class CfgPatches
{
	class gordon_reskins_fennek
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_MRAP_03_F",
			"FP_GOR_B_MRAP_03_hmg_F",
			"FP_GOR_B_MRAP_03_gmg_F",
			"FP_GOR_B_T_MRAP_03_F",
			"FP_GOR_B_T_MRAP_03_hmg_F",
			"FP_GOR_B_T_MRAP_03_gmg_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Soft_F_Beta"
		};
	};
};
class CfgVehicles
{
	class Car_F;
	class MRAP_03_base_F: Car_F
	{
		class TextureSources
		{
			class BluforPacific
			{
				displayname = "Olive";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_olive_CO.paa",
					"\a3\data_f_exp\vehicles\turret_olive_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class NATO
			{
				displayname = "NATO Woodland";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_nato_CO.paa",
					"\a3\data_f_exp\vehicles\turret_olive_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class NATODes
			{
				displayname = "NATO Desert";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_natodes_CO.paa",
					"\a3\data_f\vehicles\turret_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class NATOWin
			{
				displayname = "NATO Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_natowin_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
	};
	class I_MRAP_03_F;
	class FP_GOR_B_MRAP_03_F: I_MRAP_03_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
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
	
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_MRAP_03_F.jpg";	
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};

	class I_MRAP_03_hmg_F;
	class FP_GOR_B_MRAP_03_hmg_BASE: I_MRAP_03_hmg_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MRAP_03_hmg_BASE2: FP_GOR_B_MRAP_03_hmg_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_B_MRAP_03_hmg_F: FP_GOR_B_MRAP_03_hmg_BASE2 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
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
	
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_MRAP_03_hmg_F.jpg";	
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};
	
	class I_MRAP_03_gmg_F;
	class FP_GOR_B_MRAP_03_gmg_F: I_MRAP_03_gmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
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
	
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_MRAP_03_gmg_F.jpg";	
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
			"\a3\data_f\vehicles\turret_co.paa"
		};
	};
	
	class FP_GOR_B_T_MRAP_03_F: FP_GOR_B_MRAP_03_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
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

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_MRAP_03_F.jpg";			
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_olive_CO.paa",
			"\a3\data_f_exp\vehicles\turret_olive_co.paa"
		};
	};
	
	class FP_GOR_B_T_MRAP_03_hmg_F: FP_GOR_B_MRAP_03_hmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
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

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_MRAP_03_hmg_F.jpg";			
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_olive_CO.paa",
			"\a3\data_f_exp\vehicles\turret_olive_co.paa"
		};
	};
	
	class FP_GOR_B_T_MRAP_03_gmg_F: FP_GOR_B_MRAP_03_gmg_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
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

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_MRAP_03_gmg_F.jpg";				
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\fennek\data\MRAP_03_ext_olive_CO.paa",
			"\a3\data_f_exp\vehicles\turret_olive_co.paa"
		};
	};
};