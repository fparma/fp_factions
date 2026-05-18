class CfgPatches
{
	class gordon_reskins_fastpack
	{
		// List of units defined in this "PBO"
		units[]=
		{
			"FP_GOR_fastpack_woodland",
			"FP_GOR_fastpack_stripeyarid",
			"FP_GOR_fastpack_stripeydesert",
			"FP_GOR_fastpack_sripeywoodland",
			"FP_GOR_fastpack_frenchlizardc1",
			"FP_GOR_fastpack_frenchlizarda2",
			"FP_GOR_fastpack_frenchlizardfictional",
			"FP_GOR_fastpack_tigerstripejungle",
			"FP_GOR_fastpack_tigerstripedesert",
			"FP_GOR_fastpack_tigerstripenaval",
			"FP_GOR_fastpack_oakleafsummer",
			"FP_GOR_fastpack_oakleaffall",
			"FP_GOR_fastpack_auscamdpcu",
			"FP_GOR_fastpack_auscamdpdu",
			"FP_GOR_fastpack_smk",
			"FP_GOR_fastpack_cropat",
			"FP_GOR_fastpack_cropatdesert",
			"FP_GOR_fastpack_cs95dpm",
			"FP_GOR_fastpack_pantera",
			"FP_GOR_fastpack_panteradesert",
			"FP_GOR_fastpack_vz95woodland",
			"FP_GOR_fastpack_vz95desert",
			"FP_GOR_fastpack_flecktarnsummer",
			"FP_GOR_fastpack_flecktarnautumn",
			"FP_GOR_fastpack_flecktarndesert",
			"FP_GOR_fastpack_mm14",
			"FP_GOR_fastpack_mm14woodland",
			"FP_GOR_fastpack_honor",
			"FP_GOR_fastpack_m90",
			"FP_GOR_fastpack_m90k",
			"FP_GOR_fastpack_m90w",
			"FP_GOR_fastpack_inv",
			"FP_GOR_fastpack_cadpattw",
			"FP_GOR_fastpack_cadpatmt",
			"FP_GOR_fastpack_cadpatar",
			"FP_GOR_fastpack_norwegianm98",
			"FP_GOR_fastpack_norwegianm03",
			"FP_GOR_fastpack_norwegianm23woodland",
			"FP_GOR_fastpack_norwegianm23desert"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Ammoboxes",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};
class CfgVehicles
{	
	class B_Kitbag_rgr;
	class FP_GOR_fastpack_woodland: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (M81 Woodland)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_woodland_co.paa"
		};
	};
	class FP_GOR_fastpack_stripeyarid: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (DBC Arid)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_stripeyarid_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_stripeyarid_co.paa"
		};
	};
	class FP_GOR_fastpack_stripeydesert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (DBC Desert)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_stripeydesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_stripeydesert_co.paa"
		};
	};
	class FP_GOR_fastpack_sripeywoodland: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (DBC Woodland)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_stripeywoodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_fastpack_frenchlizardc1: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (French Lizard C1)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_frenchlizardc1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_fastpack_frenchlizarda2: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (French Lizard A2)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_frenchlizarda2_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_fastpack_frenchlizardfictional: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (French Lizard Fictional)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_frenchlizardfictional_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_fastpack_tigerstripejungle: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Tigerstripe jungle)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_tigerstripejungle_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_fastpack_tigerstripedesert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Tigerstripe desert)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_tigerstripedesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_fastpack_tigerstripenaval: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Tigerstripe naval)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_tigerstripenaval_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_fastpack_oakleafsummer: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Oakleaf summer)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_oakleafsummer_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_oakleafsummer_co.paa"
		};
	};
	class FP_GOR_fastpack_oakleaffall: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Oakleaf fall)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_oakleaffall_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_oakleaffall_co.paa"
		};
	};
	class FP_GOR_fastpack_auscamdpcu: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (AUSCAM DPCU)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_auscamdpcu_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_auscamdpcu_co.paa"
		};
	};
	class FP_GOR_fastpack_auscamdpdu: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (AUSCAM DPDU)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_auscamdpdu_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_auscamdpdu_co.paa"
		};
	};
	class FP_GOR_fastpack_smk: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (SMK)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_smk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_smk_co.paa"
		};
	};
	class FP_GOR_fastpack_cropat: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (CROPAT)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cropat_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cropat_co.paa"
		};
	};
	class FP_GOR_fastpack_cropatdesert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (CROPAT Desert)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cropatdesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cropatdesert_co.paa"
		};
	};
	class FP_GOR_fastpack_cs95dpm: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (British DPM)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cs95dpm_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cs95dpm_co.paa"
		};
	};
	class FP_GOR_fastpack_pantera: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Polish Pantera)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_pantera_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_pantera_co.paa"
		};
	};
	class FP_GOR_fastpack_panteradesert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Polish Pantera (Desert))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_panteradesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_panteradesert_co.paa"
		};
	};
	class FP_GOR_fastpack_vz95woodland: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Czech Vz95)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_vz95woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_vz95woodland_co.paa"
		};
	};
	class FP_GOR_fastpack_vz95desert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Czech Vz95 (Desert))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_vz95desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_vz95desert_co.paa"
		};
	};
	class FP_GOR_fastpack_flecktarnsummer: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Flecktarn (Summer))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_flecktarnsummer_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_flecktarnsummer_co.paa"
		};
	};
	class FP_GOR_fastpack_flecktarnautumn: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Flecktarn (Autumn))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_flecktarnautumn_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_flecktarnautumn_co.paa"
		};
	};
	class FP_GOR_fastpack_flecktarndesert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Flecktarn (Desert))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_flecktarndesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_flecktarndesert_co.paa"
		};
	};
	class FP_GOR_fastpack_mm14: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Ukrainian MM-14)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_mm14_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_mm14_co.paa"
		};
	};
	class FP_GOR_fastpack_mm14woodland: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Ukrainian MM-14 Woodland)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_mm14woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_mm14woodland_co.paa"
		};
	};
	class FP_GOR_fastpack_honor: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Project Honor)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_honor_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_honor_co.paa"
		};
	};
	class FP_GOR_fastpack_m90: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Swedish M90)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_m90_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_m90_co.paa"
		};
	};
	class FP_GOR_fastpack_m90k: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Swedish M90K)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_m90k_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_m90k_co.paa"
		};
	};
	class FP_GOR_fastpack_m90w: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Swedish M90W)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_m90w_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_m90w_co.paa"
		};
	};
	class FP_GOR_fastpack_inv: B_Kitbag_rgr
	{
		armor=0;
		author="Gordon Weedman";
		displayName="FP Kitbag (Invisible)";
		model="\A3\Weapons_F\empty.p3d";
		picture="";
	};
	
	class FP_GOR_fastpack_cadpattw: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (CADPAT TW)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cadpattw_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cadpattw_co.paa"
		};
	};
	class FP_GOR_fastpack_cadpatmt: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (CADPAT MT)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cadpatmt_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cadpatmt_co.paa"
		};
	};
	class FP_GOR_fastpack_cadpatar: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (CADPAT AR)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_cadpatar_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_cadpatar_co.paa"
		};
	};
	
	class FP_GOR_fastpack_norwegianm98: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Norwegian M/98)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_norwegianm98_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_norwegianm98_co.paa"
		};
	};
	class FP_GOR_fastpack_norwegianm03: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Norwegian M/03)";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_norwegianm03_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_norwegianm03_co.paa"
		};
	};
	class FP_GOR_fastpack_norwegianm23woodland: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Norwegian M/23 (Woodland))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_norwegianm23woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_norwegianm23woodland_co.paa"
		};
	};
	class FP_GOR_fastpack_norwegianm23desert: B_Kitbag_rgr
	{
		author="Gordon Weedman";
		displayName="Kitbag (Norwegian M/23 (Desert))";
		picture="\fp_factions\gordon_reskins\fastpack\data\icons\icon_fastpack_norwegianm23desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\fastpack\data\fastpack_norwegianm23desert_co.paa"
		};
	};
}; 