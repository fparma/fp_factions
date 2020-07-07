class CfgPatches
{
	class gordon_reskins_leopard
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_MBT_03_cannon_F",
			"FP_GOR_B_T_MBT_03_cannon_F"
		};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Gamma",
			"A3_Armor_F_Exp",
			"A3_Armor_F_EPB_MBT_03",
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};
class CfgVehicles
{
	class Tank_F;
	class MBT_03_base_F: Tank_F
	{
		class TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_rcws_blufor_co.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
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
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\leopard\data\mbt_03_rcws_bluforpacific_co.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			}; 
			class AAF_Winter
			{
				displayname = "AAF (Winter Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext01_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_ext02_co.paa",
					"a3\armor_f_epb\mbt_03\data\mbt_03_rcws_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			}; 
		};
	};
	class I_MBT_03_cannon_F;
	class FP_GOR_B_MBT_03_cannon_BASE: I_MBT_03_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MBT_03_cannon_BASE2: FP_GOR_B_MBT_03_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
		class FP_GOR_B_MBT_03_cannon_BASE3: FP_GOR_B_MBT_03_cannon_BASE2
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: Mainturret
			{
				class Turrets;
			};
		};
	};
		class FP_GOR_B_MBT_03_cannon_BASE4: FP_GOR_B_MBT_03_cannon_BASE3
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: Mainturret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class FP_GOR_B_MBT_03_cannon_F: FP_GOR_B_MBT_03_cannon_BASE4 
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
					"20Rnd_120mm_APFSDS_shells_Tracer_Red",
					"12Rnd_120mm_HE_shells_Tracer_Red",
					"12Rnd_120mm_HEAT_MP_T_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"200Rnd_127x99_mag_Tracer_Red",
							"200Rnd_127x99_mag_Tracer_Red",
							"SmokeLauncherMag"
						};
					};
				};
			};
		};
		
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MXC_F
			{
				weapon="arifle_MXC_F";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		/*extern*/ class Components;
	
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_MBT_03_cannon_F.jpg";	
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_rcws_blufor_co.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
		};
	};
	
	class FP_GOR_B_T_MBT_03_cannon_F: FP_GOR_B_MBT_03_cannon_F 
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
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=2;
			};
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine="30Rnd_65x39_caseless_khaki_mag";
				count=4;
			};
		};
		class TransportWeapons 
		{
			class _xx_arifle_MXC_khk_F 
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_MBT_03_cannon_F.jpg";			
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\leopard\data\mbt_03_rcws_bluforpacific_co.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa"
		};
	};
};