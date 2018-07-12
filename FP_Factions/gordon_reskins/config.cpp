class CfgPatches
{
	class gordon_reskins
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"B_MRAP_02_F",
			"B_MRAP_02_hmg_F",
			"B_MRAP_02_gmg_F",
			"B_MRAP_02_F2",
			"B_MRAP_02_hmg_F2",
			"B_MRAP_02_gmg_F2",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class CfgVehicles
{
	class O_MRAP_02_F; 
	class B_MRAP_02_F: O_MRAP_02_F 
	{
		author = "Gordon Weedman";
		
		class TextureSources
		{
			class Blufor
			{
				displayName="Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayName="Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Black
			{
				displayName="Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winter
			{
				displayName="Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae1
			{
				displayName="Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae2
			{
				displayName="Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae3
			{
				displayName="Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Tpat
			{
				displayName="T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		
		displayName = "Karatel";
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
	

		textureList[] = {"Blufor", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
		};
	};

	class O_MRAP_02_hmg_F;
	class B_MRAP_02_hmg_BASE: O_MRAP_02_hmg_F
	{
		scope = 0;
		class Turrets;
	};
	class B_MRAP_02_hmg_BASE2: B_MRAP_02_hmg_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_MRAP_02_hmg_F: B_MRAP_02_hmg_BASE2 
	{
		author = "Gordon Weedman";
		
		class TextureSources
		{
			class Blufor
			{
				displayName="Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayName="Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Black
			{
				displayName="Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winter
			{
				displayName="Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae1
			{
				displayName="Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae2
			{
				displayName="Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae3
			{
				displayName="Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Tpat
			{
				displayName="T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		
		scope = 2;
		displayName = "Karatel (HMG)";
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
	

		textureList[] = {"Blufor", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
		};
	};
	
	class O_MRAP_02_gmg_F;
	class B_MRAP_02_gmg_F: O_MRAP_02_gmg_F 
	{
		author = "Gordon Weedman";

		class TextureSources
		{
			class Blufor
			{
				displayName="Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayName="Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Black
			{
				displayName="Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_black_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_black_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winter
			{
				displayName="Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_winter_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae1
			{
				displayName="Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae2
			{
				displayName="Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Rae3
			{
				displayName="Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Tpat
			{
				displayName="T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\MRAP_02_ext_01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_ext_02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\MRAP_02_rcws_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		
		displayName = "Karatel (GMG)";
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
	

		textureList[] = {"Blufor", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_blufor_co.paa"
		};
	};
	
	class B_MRAP_02_F;
	class B_MRAP_02_F2: B_MRAP_02_F 
	{
		author = "Gordon Weedman";
		
		displayName = "Karatel";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
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

		
		textureList[] = {"BluforPacific", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
		};
	};
	class B_MRAP_02_hmg_F;
	class B_MRAP_02_hmg_F2: B_MRAP_02_hmg_F 
	{
		author = "Gordon Weedman";
		
		displayName = "Karatel (HMG)";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
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

		
		textureList[] = {"BluforPacific", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
		};
	};
	class B_MRAP_02_gmg_F;
	class B_MRAP_02_gmg_F2: B_MRAP_02_gmg_F 
	{
		author = "Gordon Weedman";
		
		displayName = "Karatel (GMG)";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
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

		
		textureList[] = {"BluforPacific", 1};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\MRAP_02_ext_01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_ext_02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\MRAP_02_rcws_bluforpacific_co.paa"
		};
	};
};