class CfgPatches
{
	class gordon_reskins_warrior
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_APC_tracked_03_cannon_F",
			"FP_GOR_B_T_APC_tracked_03_cannon_F"
		};
		weapons[]=
		{
			"FP_GOR_autocannon_30mm"
		};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Data_F_AOW_Loadorder",
			"ace_realisticnames"
		};
	};
};

class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Red;
	class FP_GOR_140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayNameMFDFormat = "MP-T";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class FP_GOR_60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells_Tracer_Red
	{
		displayNameMFDFormat = "APFSDS-T";
	};
};

class CfgWeapons
{
	class autocannon_30mm_CTWS;
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		class AP;
		class HE;
	};
	class FP_GOR_autocannon_30mm: autocannon_30mm
	{
		class AP: AP
		{
			magazines[]=
			{
				"60Rnd_30mm_APFSDS_shells",
				"60Rnd_30mm_APFSDS_shells_Tracer_Red",
				"60Rnd_30mm_APFSDS_shells_Tracer_Green",
				"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
				"FP_GOR_60Rnd_30mm_APFSDS_shells_Tracer_Red"
			};
		};
		class HE: HE
		{
			magazines[]=
			{
				"140Rnd_30mm_MP_shells",
				"140Rnd_30mm_MP_shells_Tracer_Red",
				"140Rnd_30mm_MP_shells_Tracer_Green",
				"140Rnd_30mm_MP_shells_Tracer_Yellow",
				"FP_GOR_140Rnd_30mm_MP_shells_Tracer_Red"
			};
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class APC_Tracked_03_base_F: Tank_F
	{
		class TextureSources
		{
			class Indep_01
			{
				materials[]=
				{
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat",
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
			};
			class Indep_02
			{
				materials[]=
				{
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat",
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
			};
			class Indep_03
			{
				materials[]=
				{
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat",
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_blufor_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_blufor_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
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
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_bluforpacific_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Sand
			{
				displayname = "Sand";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_sand_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_sand_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Sand_dark
			{
				displayname = "Sand (Darker)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_sanddark_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_sanddark_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"a3\Armor_F\Data\cage_sand_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BAFGreen
			{
				displayname = "BAF Green";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_bafgreen_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_bafgreen_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Extdark.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2dark.rvmat",
					"",
					""
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
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_black_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_black_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_black_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_black_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Extdark.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2dark.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_winter_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winterstripe
			{
				displayname = "Winter (Striped Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_winter_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterstripe_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winterdot
			{
				displayname = "Winter (Dotted Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_winter_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winterdotarid
			{
				displayname = "Winter (Dotted Arid Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_winter_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_arid_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Winterdigi
			{
				displayname = "Winter (Digital Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_winter_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class AAF_Winter
			{
				displayname = "AAF (Winter Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext_indp_co.paa",
					"A3\armor_f_epb\apc_tracked_03\data\apc_tracked_03_ext2_indp_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				materials[]=
				{
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext.rvmat",
					"A3\Armor_F_EPB\APC_Tracked_03\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class Tpat2
			{
				displayname = "T-Pat (Alternate Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat2_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
				};
				materials[]=
				{
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
					"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
					"",
					""
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
	};
	class I_APC_tracked_03_cannon_F;
	class FP_GOR_B_APC_tracked_03_cannon_BASE: I_APC_tracked_03_cannon_F
	{
		scope = 0;
		class Turrets;
		class Damage;
	};
	class FP_GOR_B_APC_tracked_03_cannon_BASE2: FP_GOR_B_APC_tracked_03_cannon_BASE
	{
		scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Damage: Damage
		{
		};
	};
	class FP_GOR_B_APC_tracked_03_cannon_F: FP_GOR_B_APC_tracked_03_cannon_BASE2
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
					"FP_GOR_140Rnd_30mm_MP_shells_Tracer_Red",
					"FP_GOR_140Rnd_30mm_MP_shells_Tracer_Red",
					"FP_GOR_60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"FP_GOR_60Rnd_30mm_APFSDS_shells_Tracer_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red",
					"200Rnd_762x51_Belt_Red"
				};
				weapons[]=
				{
					"FP_GOR_autocannon_30mm",
					"ACE_LMG_coax_L94A1_mem3"
				};
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
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
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
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
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
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
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		/*extern*/ class Components;

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_APC_tracked_03_cannon_F.jpg";		
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_blufor_co.paa",
			"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_blufor_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
			"a3\Armor_F\Data\cage_sand_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
			"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
			"",
			""
		};
	};
	
	class FP_GOR_B_T_APC_tracked_03_cannon_F: FP_GOR_B_APC_tracked_03_cannon_F 
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
				magazine="30Rnd_65x39_caseless_khaki_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine="100Rnd_65x39_caseless_khaki_mag";
				count=6;
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
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
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
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
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
		class TransportWeapons 
		{
			class _xx_arifle_MX_khk_F 
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		editorPreview = "\FP_Factions\gordon_reskins\editorpreviews\FP_GOR_B_T_APC_tracked_03_cannon_F.jpg";		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\warrior\data\apc_tracked_03_ext2_bluforpacific_co.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext.rvmat",
			"\FP_Factions\gordon_reskins\warrior\data\APC_Tracked_03_Ext2.rvmat",
			"",
			""
		};
	};
};