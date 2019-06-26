class CfgPatches
{
	class gordon_reskins_matv
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_I_MRAP_01_F",
			"FP_GOR_I_MRAP_01_hmg_F",
			"FP_GOR_I_MRAP_01_gmg_F"
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
	class MRAP_01_base_F: Car_F
	{
		class TextureSources
		{
			class AAF
			{
				displayName="AAF";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\matv\data\MRAP_01_base_aaf_co.paa",
					"\FP_Factions\gordon_reskins\matv\data\MRAP_01_adds_aaf_co.paa",
					"\a3\data_f\vehicles\turret_indp_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class B_MRAP_01_F;
	class FP_GOR_I_MRAP_01_F: B_MRAP_01_F 
	{
		author = "Gordon Weedman";
		
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
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
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_base_aaf_co.paa",
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_adds_aaf_co.paa"
		};
	};
	
	class B_MRAP_01_hmg_F;
	class FP_GOR_I_MRAP_01_hmg_BASE: B_MRAP_01_hmg_F
	{
		scope = 0;
		class Turrets;
	};
	class FP_GOR_I_MRAP_01_hmg_BASE2: FP_GOR_I_MRAP_01_hmg_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class FP_GOR_I_MRAP_01_hmg_F: FP_GOR_I_MRAP_01_hmg_BASE2 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
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
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_base_aaf_co.paa",
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_adds_aaf_co.paa",
			"\a3\data_f\vehicles\turret_indp_co.paa"
		};
	};
	class B_MRAP_01_gmg_F;
	class FP_GOR_I_MRAP_01_gmg_F: B_MRAP_01_gmg_F 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
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
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_base_aaf_co.paa",
			"\FP_Factions\gordon_reskins\matv\data\MRAP_01_adds_aaf_co.paa",
			"\a3\data_f\vehicles\turret_indp_co.paa"
		};
	};
};