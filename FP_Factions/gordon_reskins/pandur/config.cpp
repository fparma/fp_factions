class CfgPatches
{
	class gordon_reskins_pandur
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_APC_Wheeled_03_cannon_F",
			"FP_GOR_B_T_APC_Wheeled_03_cannon_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Gamma",
			"A3_Soft_F"
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	}; 
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	}; 
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		}; 
		
		class TextureSources
		{
			class Blufor
			{
				displayname = "Sand";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext2_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\RCWS30_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_alpha_CO.paa",
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
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_olive_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext2_olive_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\RCWS30_olive_CO.paa",
					"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
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
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext2_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\RCWS30_INDP_CO.paa",
					"A3\armor_f_gamma\APC_Wheeled_03\data\APC_Wheeled_03_Ext_alpha_INDP_CO.paa",
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
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		}; 
	};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	}; 
/*	class I_APC_Wheeled_03_cannon_F;
	class FP_GOR_B_APC_Wheeled_03_cannon_BASE: I_APC_Wheeled_03_cannon_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_B_APC_Wheeled_03_cannon_BASE2: FP_GOR_B_APC_Wheeled_03_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_B_APC_Wheeled_03_cannon_BASE3: FP_GOR_B_APC_Wheeled_03_cannon_BASE2
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
	};
	class FP_GOR_B_APC_Wheeled_03_cannon_BASE4: FP_GOR_B_APC_Wheeled_03_cannon_BASE3
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class FP_GOR_B_APC_Wheeled_03_cannon_BASE5: FP_GOR_B_APC_Wheeled_03_cannon_BASE4
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	}; 
	class FP_GOR_B_APC_Wheeled_03_cannon_F: FP_GOR_B_APC_Wheeled_03_cannon_BASE5  */
	class FP_GOR_B_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_cannon_F
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
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext2_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\RCWS30_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_alpha_CO.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	
	class FP_GOR_B_T_APC_Wheeled_03_cannon_F: FP_GOR_B_APC_Wheeled_03_cannon_F 
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
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_olive_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext2_olive_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\RCWS30_olive_CO.paa",
			"\FP_Factions\gordon_reskins\pandur\data\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\armor_f\data\cage_olive_CO.paa"
		};
	};
};