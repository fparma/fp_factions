class CfgPatches
{
	class gordon_reskins_marid
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_APC_Wheeled_02_rcws_v2_F",
			"FP_GOR_B_T_APC_Wheeled_02_rcws_v2_F",
			"FP_GOR_I_APC_Wheeled_02_rcws_v2_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Beta",
			"A3_Armor_F",
			"A3_Soft_F"
		};
	};
};
class RCWSOptics;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
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
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
			};
			class CommanderOptics: CommanderOptics
			{
			};
		};
		class TextureSources
		{
			class GreyHex
			{
				displayName = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_csatgrey_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_csatgrey_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_CSAT_HEX_Grey_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_blufor_CO.paa",
					"a3\data_f\vehicles\turret_co.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_bluforpacific_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_bluforpacific_CO.paa",
					"a3\data_f_exp\vehicles\turret_olive_co.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_black_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_black_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_black_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_black_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_black_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterstripe_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_arid_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat2_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa",
					"a3\armor_f\data\cage_AAF_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
					"a3\armor_f\data\cage_G1_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Desert_CO.paa",
					"a3\armor_f\data\cage_G3_CO.paa"
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
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class CommanderOptics;
		};
	};
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
	};
	class FP_GOR_B_APC_Wheeled_02_rcws_v2_F: O_APC_Wheeled_02_rcws_v2_F 
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
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red",
					"SmokeLauncherMag"
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
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_blufor_CO.paa",
			"a3\data_f\vehicles\turret_co.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	
	class FP_GOR_B_T_APC_Wheeled_02_rcws_v2_F: FP_GOR_B_APC_Wheeled_02_rcws_v2_F 
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
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_bluforpacific_CO.paa",
			"a3\data_f_exp\vehicles\turret_olive_co.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\armor_f\data\cage_olive_CO.paa"
		};
	};
	

	class FP_GOR_I_APC_Wheeled_02_rcws_v2_F: FP_GOR_B_APC_Wheeled_02_rcws_v2_F
	{
		author = "Gordon Weedman";

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
				magazines[] = 
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow",
					"SmokeLauncherMag"
				};
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
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
			"a3\data_f\vehicles\turret_indp_co.paa",
			"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa",
			"a3\armor_f\data\cage_AAF_CO.paa"
		};
	};
};
