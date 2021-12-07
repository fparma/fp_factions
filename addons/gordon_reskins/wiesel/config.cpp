class CfgPatches
{
	class gordon_reskins_wiesel
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_LT_01_AA_F",
			"FP_GOR_B_T_LT_01_AA_F",
			"FP_GOR_B_LT_01_AT_F",
			"FP_GOR_B_T_LT_01_AT_F",
			"FP_GOR_B_LT_01_cannon_F",
			"FP_GOR_B_T_LT_01_cannon_F",
			"FP_GOR_B_LT_01_scout_F",
			"FP_GOR_B_T_LT_01_scout_F"
		};
		weapons[]={};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class LT_01_base_F: Tank_F
	{
		class TextureSources;
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_AT_blufor_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
					"A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa", 
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
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
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_AT_blufor_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
					"A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa", 
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
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
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_at_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Cannon_blufor_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
					"A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa", 
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
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
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_cannon_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class LT_01_scout_base_F: LT_01_base_F
	{
		class TextureSources: TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Radar_blufor_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
					"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa", 
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
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
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class I_LT_01_AA_F;
	class FP_GOR_B_LT_01_AA_F: I_LT_01_AA_F
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_Soldier_F"
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
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_LT_01_AA_F.jpg";	
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_AT_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class FP_GOR_B_T_LT_01_AA_F: FP_GOR_B_LT_01_AA_F
	{
		faction = "BLU_T_F";
		crew = "B_T_crew_F";
		typicalCargo[] = 
		{
			"B_T_Soldier_F"
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_LT_01_AA_F.jpg";
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
			"A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa", 
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	
	class I_LT_01_AT_F;
	class FP_GOR_B_LT_01_AT_F: I_LT_01_AT_F
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_Soldier_F"
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
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_LT_01_AT_F.jpg";
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_AT_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class FP_GOR_B_T_LT_01_AT_F: FP_GOR_B_LT_01_AT_F
	{
		faction = "BLU_T_F";
		crew = "B_T_crew_F";
		typicalCargo[] = 
		{
			"B_T_Soldier_F"
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_LT_01_AT_F.jpg";
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
			"A3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa", 
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	
	class I_LT_01_scout_F;
	class FP_GOR_B_LT_01_scout_F: I_LT_01_scout_F
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_Soldier_F"
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
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_LT_01_scout_F.jpg";
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Radar_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class FP_GOR_B_T_LT_01_scout_F: FP_GOR_B_LT_01_scout_F
	{
		faction = "BLU_T_F";
		crew = "B_T_crew_F";
		typicalCargo[] = 
		{
			"B_T_Soldier_F"
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_LT_01_scout_F.jpg";
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
			"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa", 
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	
	class I_LT_01_cannon_F;
	class FP_GOR_B_LT_01_cannon_BASE: I_LT_01_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_LT_01_cannon_BASE2: FP_GOR_B_LT_01_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_B_LT_01_cannon_F: FP_GOR_B_LT_01_cannon_BASE2
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = 
		{
			"B_Soldier_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"SmokeLauncherMag",
					"60Rnd_20mm_HE_shells",
					"60Rnd_20mm_HE_shells",
					"60Rnd_20mm_AP_shells",
					"60Rnd_20mm_AP_shells",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
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
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_LT_01_cannon_F.jpg";
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Main_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\wiesel\data\LT_01_Cannon_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
	};
	class FP_GOR_B_T_LT_01_cannon_F: FP_GOR_B_LT_01_cannon_F
	{
		faction = "BLU_T_F";
		crew = "B_T_crew_F";
		typicalCargo[] = 
		{
			"B_T_Soldier_F"
		};
		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_LT_01_cannon_F.jpg";
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa", 
			"A3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa", 
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
};