class CfgPatches
{
	class gordon_reskins_armata
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_MBT_04_cannon_F",
			"FP_GOR_B_T_MBT_04_cannon_F",
			"FP_GOR_B_MBT_04_command_F",
			"FP_GOR_B_T_MBT_04_command_F"
		};
		weapons[]=
		{
			"FP_GOR_autocannon_30mm_RCWS"
		};
		magazines[]=
		{
			"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
			"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Yellow"
		};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};

class CfgMagazines
{
	class 60Rnd_30mm_MP_shells_Tracer_Green;
	class FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red: 60Rnd_30mm_MP_shells_Tracer_Green 
	{
		ammo = "B_30mm_MP_Tracer_Red";
	};
	class FP_GOR_60Rnd_30mm_MP_shells_Tracer_Yellow: 60Rnd_30mm_MP_shells_Tracer_Green 
	{
		ammo = "B_30mm_MP_Tracer_Yellow";
	};
};

class CfgWeapons
{
	class autocannon_30mm_RCWS;
	class FP_GOR_autocannon_30mm_RCWS: autocannon_30mm_RCWS
	{
		magazines[]=
		{
			"60Rnd_30mm_MP_shells_Tracer_Green",
			"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
			"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Yellow"
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class MBT_04_base_F: Tank_F
	{
		class TextureSources
		{
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_blufor_CO.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
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
					"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_bluforpacific_CO.paa",
					"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_bluforpacific_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
		};
	};
	class O_MBT_04_cannon_F;
	class FP_GOR_B_MBT_04_cannon_BASE: O_MBT_04_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MBT_04_cannon_BASE2: FP_GOR_B_MBT_04_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
		class FP_GOR_B_MBT_04_cannon_BASE3: FP_GOR_B_MBT_04_cannon_BASE2
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
		class FP_GOR_B_MBT_04_cannon_BASE4: FP_GOR_B_MBT_04_cannon_BASE3
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
	class FP_GOR_B_MBT_04_cannon_F: FP_GOR_B_MBT_04_cannon_BASE4 
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
					"20Rnd_125mm_APFSDS_T_Red",
					"12Rnd_125mm_HE_T_Red",
					"12Rnd_125mm_HEAT_T_Red",
					"1000Rnd_762x51_Belt_Red",
					"1000Rnd_762x51_Belt_Red"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"500Rnd_127x99_mag_Tracer_Red",
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
	

		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
		};
	};
	
	class FP_GOR_B_T_MBT_04_cannon_F: FP_GOR_B_MBT_04_cannon_F 
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

		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_bluforpacific_CO.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa"
		};
	};
	
	class O_MBT_04_command_F;
	class FP_GOR_B_MBT_04_command_BASE: O_MBT_04_command_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MBT_04_command_BASE2: FP_GOR_B_MBT_04_command_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
		class FP_GOR_B_MBT_04_command_BASE3: FP_GOR_B_MBT_04_command_BASE2
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
		class FP_GOR_B_MBT_04_command_BASE4: FP_GOR_B_MBT_04_command_BASE3
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
	class FP_GOR_B_MBT_04_command_F: FP_GOR_B_MBT_04_command_BASE4 
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
					"20Rnd_125mm_APFSDS_T_Red",
					"12Rnd_125mm_HE_T_Red",
					"12Rnd_125mm_HEAT_T_Red",
					"1000Rnd_762x51_Belt_Red",
					"1000Rnd_762x51_Belt_Red"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"FP_GOR_autocannon_30mm_RCWS",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
							"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
							"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
							"FP_GOR_60Rnd_30mm_MP_shells_Tracer_Red",
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
	

		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
		};
	};
	
	class FP_GOR_B_T_MBT_04_command_F: FP_GOR_B_MBT_04_command_F 
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

		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_1_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\armata\data\MBT_04_exterior_2_bluforpacific_CO.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa"
		};
	};
};