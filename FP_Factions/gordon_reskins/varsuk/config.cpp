class CfgPatches
{
	class gordon_reskins_varsuk
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_MBT_02_cannon_F",
			"FP_GOR_B_T_MBT_02_cannon_F",
			"FP_GOR_I_MBT_02_cannon_F"
		};
		weapons[]=
		{
			"HMG_NSVT_custom"
		};
		magazines[]=
		{
			"FP_GOR_150Rnd_127x108_Ball_Red",
			"FP_GOR_150Rnd_127x108_Ball_Yellow"
		};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Gamma",
			"A3_Armor_F_Exp"
		};
	};
};
class CfgAmmo
{
	class B_127x108_Ball;
	class FP_GOR_B_127x108_Ball_Red: B_127x108_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class FP_GOR_B_127x108_Ball_Yellow: B_127x108_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};
class CfgMagazines
{
	class 150Rnd_127x108_Ball;
	class FP_GOR_150Rnd_127x108_Ball_Red: 150Rnd_127x108_Ball
	{
		ammo = "FP_GOR_B_127x108_Ball_Red";
	};
	class FP_GOR_150Rnd_127x108_Ball_Yellow: 150Rnd_127x108_Ball
	{
		ammo = "FP_GOR_B_127x108_Ball_Yellow";
	};
};
class CfgWeapons
{
	class HMG_NSVT;
	class HMG_NSVT_custom: HMG_NSVT
	{
		magazines[]=
		{
			"450Rnd_127x108_Ball",
			"150Rnd_127x108_Ball",
			"50Rnd_127x108_Ball",
			"FP_GOR_150Rnd_127x108_Ball_Red",
			"FP_GOR_150Rnd_127x108_Ball_Yellow"
		};
	};
};
class CfgVehicles
{
	class MBT_02_base_F;
	class O_MBT_02_base_F: MBT_02_base_F
	{
		class TextureSources
		{
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_csatgrey_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_csatgrey_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_csatgrey_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_CSAT_HEX_Grey_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_blufor_CO.paa",
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_bluforpacific_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_bluforpacific_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_bluforpacific_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_black_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_black_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_black_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_black_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winter_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterstripe
			{
				displayname = "Winter (Striped Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterstripe_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterdot
			{
				displayname = "Winter (Dotted Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterdotarid
			{
				displayname = "Winter (Dotted Arid Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_arid_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterdigi
			{
				displayname = "Winter (Digital Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_winter_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Russian
			{
				displayname = "Russian green";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_russian_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_russian_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_russian_CO.paa",
					"a3\armor_f\data\camonet_green_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Russiancamo
			{
				displayname = "Russian camo";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_russiancamo_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_russiancamo_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_russiancamo_CO.paa",
					"a3\armor_f\data\camonet_green_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae1_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae2_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae3_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat2
			{
				displayname = "T-Pat (Alternate Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat2_CO.paa"
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
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_AAF_CO.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Jungle
			{
				displayname = "AAF (Jungle Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_AAF_CO.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Desert
			{
				displayname = "AAF (Desert Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_AAF_CO.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Desert_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Winter
			{
				displayname = "AAF (Winter Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class O_MBT_02_cannon_F;
	class FP_GOR_B_MBT_02_cannon_BASE: O_MBT_02_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_MBT_02_cannon_BASE2: FP_GOR_B_MBT_02_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
		class FP_GOR_B_MBT_02_cannon_BASE3: FP_GOR_B_MBT_02_cannon_BASE2
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
		class FP_GOR_B_MBT_02_cannon_BASE4: FP_GOR_B_MBT_02_cannon_BASE3
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
	class FP_GOR_B_MBT_02_cannon_F: FP_GOR_B_MBT_02_cannon_BASE4 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f",
			"B_soldier_f"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"16Rnd_125mm_APFSDS_T_Red",
					"12Rnd_125mm_HE_T_Red",
					"12Rnd_125mm_HEAT_T_Red",
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
						weapons[]=
						{
							"HMG_NSVT_custom",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"FP_GOR_150Rnd_127x108_Ball_Red",
							"FP_GOR_150Rnd_127x108_Ball_Red",
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
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_blufor_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa"
		};
	};
	
	class FP_GOR_B_T_MBT_02_cannon_F: FP_GOR_B_MBT_02_cannon_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_crew_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f",
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
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_bluforpacific_CO.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa"
		};
	};
	
	class FP_GOR_I_MBT_02_cannon_F: FP_GOR_B_MBT_02_cannon_F 
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_crew_f";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F",
			"I_soldier_lite_F"
		};
		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"16Rnd_125mm_APFSDS_T_Yellow",
					"12Rnd_125mm_HE_T_Yellow",
					"12Rnd_125mm_HEAT_T_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"FP_GOR_150Rnd_127x108_Ball_Yellow",
							"FP_GOR_150Rnd_127x108_Ball_Yellow",
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
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20C_F
			{
				weapon="arifle_Mk20C_F";
				count=2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_body_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_turret_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\varsuk\data\MBT_02_AAF_CO.paa",
			"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa"
		};
	};
};