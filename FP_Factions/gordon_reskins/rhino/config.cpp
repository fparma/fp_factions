class CfgPatches
{
	class gordon_reskins_rhino
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_I_AFV_Wheeled_01_cannon_F",
			"FP_GOR_I_AFV_Wheeled_01_up_cannon_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F",
			"A3_Armor_F_Tank"
		};
	};
};

class CfgVehicles
{
	class B_AFV_Wheeled_01_cannon_F;
	class FP_GOR_I_AFV_Wheeled_01_cannon_BASE: B_AFV_Wheeled_01_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_I_AFV_Wheeled_01_cannon_BASE2: FP_GOR_I_AFV_Wheeled_01_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_I_AFV_Wheeled_01_cannon_F: FP_GOR_I_AFV_Wheeled_01_cannon_BASE2
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_crew_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[]=
				{
					"12Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					"8Rnd_120mm_HE_shells_Tracer_Yellow",
					"8Rnd_120mm_HEAT_MP_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"4Rnd_120mm_LG_cannon_missiles"
				};
			};
		};
		class TextureSources
		{
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=12;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
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
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
			"a3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
		};
	};
	class B_AFV_Wheeled_01_up_cannon_F;
	class FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE: B_AFV_Wheeled_01_up_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE2: FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE3: FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE2
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
	class FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE4: FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE3
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
	class FP_GOR_I_AFV_Wheeled_01_up_cannon_F: FP_GOR_I_AFV_Wheeled_01_up_cannon_BASE4
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_crew_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[]=
				{
					"12Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					"8Rnd_120mm_HE_shells_Tracer_Yellow",
					"8Rnd_120mm_HEAT_MP_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"200Rnd_762x51_Belt_T_Yellow",
					"4Rnd_120mm_LG_cannon_missiles"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[]=
						{
							"SmokeLauncherMag",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"200Rnd_127x99_mag_Tracer_Yellow",
							"Laserbatteries"
						};
					};
				};
			};
		};
		class TextureSources
		{
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_commander_tow_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_commander_tow_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_commander_tow_AAF_CO.paa",
					"a3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_commander_tow_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=12;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=3;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
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
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT1_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT2_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_wheel_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_commander_tow_AAF_CO.paa",
			"a3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"\FP_Factions\gordon_reskins\rhino\data\afv_wheeled_01_EXT3_AAF_CO.paa"
		};
	};
};