class CfgPatches
{
	class gordon_reskins_tortila
	{
		// List of units defined in this "PBO"
		units[]=
		{
			"FP_GOR_tortila_woodland",
			"FP_GOR_tortila_stripeyarid",
			"FP_GOR_tortila_stripeydesert",
			"FP_GOR_tortila_sripeywoodland",
			"FP_GOR_tortila_frenchlizardc1",
			"FP_GOR_tortila_frenchlizarda2",
			"FP_GOR_tortila_frenchlizardfictional",
			"FP_GOR_tortila_tigerstripejungle",
			"FP_GOR_tortila_tigerstripedesert",
			"FP_GOR_tortila_tigerstripenaval",
			"FP_GOR_tortila_oakleafsummer",
			"FP_GOR_tortila_oakleaffall",
			"FP_GOR_tortila_auscamdpcu",
			"FP_GOR_tortila_auscamdpdu",
			"FP_GOR_tortila_smk",
			"FP_GOR_tortila_cropat",
			"FP_GOR_tortila_cropatdesert",
			"FP_GOR_tortila_cs95dpm",
			"FP_GOR_tortila_pantera",
			"FP_GOR_tortila_panteradesert",
			"FP_GOR_tortila_vz95woodland",
			"FP_GOR_tortila_vz95desert",
			"FP_GOR_tortila_flecktarnsummer",
			"FP_GOR_tortila_flecktarnautumn",
			"FP_GOR_tortila_flecktarndesert",
			"FP_GOR_tortila_mm14",
			"FP_GOR_tortila_mm14woodland",
			"FP_GOR_tortila_honor",
			"FP_GOR_tortila_m90",
			"FP_GOR_tortila_m90k",
			"FP_GOR_tortila_m90w",
			"FP_GOR_tortila_emr",
			"FP_GOR_tortila_flora",
			"FP_GOR_tortila_olivedrab",
			"B_Carryall_ghex_F",
			"FP_GOR_tortila_cadpattw",
			"FP_GOR_tortila_cadpatmt",
			"FP_GOR_tortila_cadpatar",
			"FP_GOR_tortila_norwegianm98",
			"FP_GOR_tortila_norwegianm03",
			"FP_GOR_tortila_norwegianm23woodland",
			"FP_GOR_tortila_norwegianm23desert"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Ammoboxes",
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class CfgVehicles
{	
	class B_Carryall_oli;
	class FP_GOR_tortila_woodland: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (M81 Woodland)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_woodland_co.paa"
		};
	};
	class FP_GOR_tortila_stripeyarid: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (DBC Arid)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_stripeyarid_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_stripeyarid_co.paa"
		};
	};
	class FP_GOR_tortila_stripeydesert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (DBC Desert)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_stripeydesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_stripeydesert_co.paa"
		};
	};
	class FP_GOR_tortila_sripeywoodland: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (DBC Woodland)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_stripeywoodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_tortila_frenchlizardc1: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (French Lizard C1)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_frenchlizardc1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_tortila_frenchlizarda2: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (French Lizard A2)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_frenchlizarda2_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_tortila_frenchlizardfictional: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (French Lizard Fictional)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_frenchlizardfictional_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_tortila_tigerstripejungle: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Tigerstripe jungle)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_tigerstripejungle_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_tortila_tigerstripedesert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Tigerstripe desert)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_tigerstripedesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_tortila_tigerstripenaval: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Tigerstripe naval)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_tigerstripenaval_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_tortila_oakleafsummer: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Oakleaf summer)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_oakleafsummer_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_oakleafsummer_co.paa"
		};
	};
	class FP_GOR_tortila_oakleaffall: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Oakleaf fall)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_oakleaffall_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_oakleaffall_co.paa"
		};
	};
	class FP_GOR_tortila_auscamdpcu: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (AUSCAM DPCU)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_auscamdpcu_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_auscamdpcu_co.paa"
		};
	};
	class FP_GOR_tortila_auscamdpdu: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (AUSCAM DPDU)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_auscamdpdu_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_auscamdpdu_co.paa"
		};
	};
	class FP_GOR_tortila_smk: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (SMK)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_smk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_smk_co.paa"
		};
	};
	class FP_GOR_tortila_cropat: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (CROPAT)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cropat_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cropat_co.paa"
		};
	};
	class FP_GOR_tortila_cropatdesert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (CROPAT Desert)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cropatdesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cropatdesert_co.paa"
		};
	};
	class FP_GOR_tortila_cs95dpm: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (British DPM)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cs95dpm_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cs95dpm_co.paa"
		};
	};
	class FP_GOR_tortila_pantera: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Polish Pantera)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_pantera_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_pantera_co.paa"
		};
	};
	class FP_GOR_tortila_panteradesert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Polish Pantera (Desert))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_panteradesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_panteradesert_co.paa"
		};
	};
	class FP_GOR_tortila_vz95woodland: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Czech Vz95)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_vz95woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_vz95woodland_co.paa"
		};
	};
	class FP_GOR_tortila_vz95desert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Czech Vz95 (Desert))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_vz95desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_vz95desert_co.paa"
		};
	};
	class FP_GOR_tortila_flecktarnsummer: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Flecktarn (Summer))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_flecktarnsummer_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_flecktarnsummer_co.paa"
		};
	};
	class FP_GOR_tortila_flecktarnautumn: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Flecktarn (Autumn))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_flecktarnautumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_flecktarnautumn_co.paa"
		};
	};
	class FP_GOR_tortila_flecktarndesert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Flecktarn (Desert))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_flecktarndesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_flecktarndesert_co.paa"
		};
	};
	class FP_GOR_tortila_mm14: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Ukrainian MM-14)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_mm14_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_mm14_co.paa"
		};
	};
	class FP_GOR_tortila_mm14woodland: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Ukrainian MM-14 Woodland)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_mm14woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_mm14woodland_co.paa"
		};
	};
	class FP_GOR_tortila_honor: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Project Honor)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_honor_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_honor_co.paa"
		};
	};
	class FP_GOR_tortila_m90: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Swedish M90)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_m90_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_m90_co.paa"
		};
	};
	class FP_GOR_tortila_m90k: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Swedish M90K)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_m90k_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_m90k_co.paa"
		};
	};
	class FP_GOR_tortila_m90w: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Swedish M90W)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_m90w_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_m90w_co.paa"
		};
	};
	class FP_GOR_tortila_emr: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (EMR)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_emr_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_emr_co.paa"
		};
	};
	class FP_GOR_tortila_flora: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Flora)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_flora_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_flora_co.paa"
		};
	};
	class FP_GOR_tortila_olivedrab: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Olive drab)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_olivedrab_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_olivedrab_co.paa"
		};
	};
	class B_Carryall_Base;
	class B_Carryall_ghex_F: B_Carryall_Base
	{
		author="Bohemia Interactive & Gordon Weedman";		
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_ghex_co.paa"
		};
	};
	class FP_GOR_tortila_cadpattw: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (CADPAT TW)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cadpattw_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cadpattw_co.paa"
		};
	};
	class FP_GOR_tortila_cadpatmt: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (CADPAT MT)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cadpatmt_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cadpatmt_co.paa"
		};
	};
	class FP_GOR_tortila_cadpatar: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (CADPAT AR)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_cadpatar_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_cadpatar_co.paa"
		};
	};
	
	class FP_GOR_tortila_norwegianm98: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Norwegian M/98)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_norwegianm98_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_norwegianm98_co.paa"
		};
	};
	class FP_GOR_tortila_norwegianm03: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Norwegian M/03)";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_norwegianm03_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_norwegianm03_co.paa"
		};
	};
	class FP_GOR_tortila_norwegianm23woodland: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Norwegian M/23 (Woodland))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_norwegianm23woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_norwegianm23woodland_co.paa"
		};
	};
	class FP_GOR_tortila_norwegianm23desert: B_Carryall_oli
	{
		author="Gordon Weedman";
		displayName="Carryall Backpack (Norwegian M/23 (Desert))";
		picture="\fp_factions\gordon_reskins\tortila\data\icons\icon_tortila_norwegianm23desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\tortila\data\backpack_tortila_norwegianm23desert_co.paa"
		};
	};
}; 