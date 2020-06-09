class CfgPatches
{
	class gordon_reskins_boonie
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_H_Booniehat_woodland",
			"FP_GOR_H_Booniehat_woodland_hs",
			"FP_GOR_H_Booniehat_stripeyarid",
			"FP_GOR_H_Booniehat_stripeyarid_hs",
			"FP_GOR_H_Booniehat_stripeydesert",
			"FP_GOR_H_Booniehat_stripeydesert_hs",
			"FP_GOR_H_Booniehat_stripeywoodland",
			"FP_GOR_H_Booniehat_stripeywoodland_hs",
			"FP_GOR_H_Booniehat_frenchlizardc1",
			"FP_GOR_H_Booniehat_frenchlizardc1_hs",
			"FP_GOR_H_Booniehat_frenchlizarda2",
			"FP_GOR_H_Booniehat_frenchlizarda2_hs",
			"FP_GOR_H_Booniehat_frenchlizardfictional",
			"FP_GOR_H_Booniehat_frenchlizardfictional_hs",
			"FP_GOR_H_Booniehat_tigerstripejungle",
			"FP_GOR_H_Booniehat_tigerstripejungle_hs",
			"FP_GOR_H_Booniehat_tigerstripedesert",
			"FP_GOR_H_Booniehat_tigerstripedesert_hs",
			"FP_GOR_H_Booniehat_tigerstripenaval",
			"FP_GOR_H_Booniehat_tigerstripenaval_hs",
			"FP_GOR_H_Booniehat_oakleafsummer",
			"FP_GOR_H_Booniehat_oakleafsummer_hs",
			"FP_GOR_H_Booniehat_oakleaffall",
			"FP_GOR_H_Booniehat_oakleaffall_hs",
			"FP_GOR_H_Booniehat_auscamdpcu",
			"FP_GOR_H_Booniehat_auscamdpcu_hs",
			"FP_GOR_H_Booniehat_auscamdpdu",
			"FP_GOR_H_Booniehat_auscamdpdu_hs",
			"FP_GOR_H_Booniehat_smk",
			"FP_GOR_H_Booniehat_smk_hs",
			"FP_GOR_H_Booniehat_cropat",
			"FP_GOR_H_Booniehat_cropat_hs",
			"FP_GOR_H_Booniehat_cropatdesert",
			"FP_GOR_H_Booniehat_cropatdesert_hs",
			"FP_GOR_H_Booniehat_honor",
			"FP_GOR_H_Booniehat_honor_hs",
			"FP_GOR_H_Booniehat_mm14",
			"FP_GOR_H_Booniehat_mm14_hs",
			"FP_GOR_H_Booniehat_mm14woodland",
			"FP_GOR_H_Booniehat_mm14woodland_hs",
			"FP_GOR_H_Booniehat_cs95dpm",
			"FP_GOR_H_Booniehat_cs95dpm_hs",
			"FP_GOR_H_Booniehat_pantera",
			"FP_GOR_H_Booniehat_pantera_hs",
			"FP_GOR_H_Booniehat_panteradesert",
			"FP_GOR_H_Booniehat_panteradesert_hs",
			"FP_GOR_H_Booniehat_vz95woodland",
			"FP_GOR_H_Booniehat_vz95woodland_hs",
			"FP_GOR_H_Booniehat_vz95desert",
			"FP_GOR_H_Booniehat_vz95desert_hs",
			"FP_GOR_H_Booniehat_flecktarnsummer",
			"FP_GOR_H_Booniehat_flecktarnsummer_hs",
			"FP_GOR_H_Booniehat_flecktarnautumn",
			"FP_GOR_H_Booniehat_flecktarnautumn_hs",
			"FP_GOR_H_Booniehat_flecktarndesert",
			"FP_GOR_H_Booniehat_flecktarndesert_hs",
			"FP_GOR_H_Booniehat_kryptekmandrake",
			"FP_GOR_H_Booniehat_kryptekmandrake_hs",
			"FP_GOR_H_Booniehat_krypteknomad",
			"FP_GOR_H_Booniehat_krypteknomad_hs",
			"FP_GOR_H_Booniehat_kryptekhighlander",
			"FP_GOR_H_Booniehat_kryptekhighlander_hs"
		
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class CfgWeapons
{
	class H_Booniehat_khk;
	class H_Booniehat_khk_hs;
	class FP_GOR_H_Booniehat_woodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_woodland";
		scope = 2;
		displayName = "Booniehat (M81 Woodland)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_woodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_woodland_hs";
		scope = 2;
		displayName = "Booniehat (M81 Woodland, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeyarid: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeyarid";
		scope = 2;
		displayName = "Booniehat (DBC Arid)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeyarid_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeyarid_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeyarid_hs";
		scope = 2;
		displayName = "Booniehat (DBC Arid, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeyarid_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeydesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeydesert";
		scope = 2;
		displayName = "Booniehat (DBC Desert)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeydesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeydesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeydesert_hs";
		scope = 2;
		displayName = "Booniehat (DBC Desert, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeydesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeywoodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeywoodland";
		scope = 2;
		displayName = "Booniehat (DBC Woodland)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeywoodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_stripeywoodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_stripeywoodland_hs";
		scope = 2;
		displayName = "Booniehat (DBC Woodland, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_stripeywoodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardc1: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardc1";
		scope = 2;
		displayName = "Booniehat (French Lizard C1)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardc1_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardc1_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardc1_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard C1, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardc1_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizarda2: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizarda2";
		scope = 2;
		displayName = "Booniehat (French Lizard A2)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizarda2_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizarda2_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizarda2_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard A2, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizarda2_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardfictional: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardfictional";
		scope = 2;
		displayName = "Booniehat (French Lizard Fictional)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardfictional_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchlizardfictional_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchlizardfictional_hs";
		scope = 2;
		displayName = "Booniehat (French Lizard Fictional, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchlizardfictional_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripejungle: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripejungle";
		scope = 2;
		displayName = "Booniehat (Tigerstripe jungle)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripejungle_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripejungle_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripejungle_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe jungle, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripejungle_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripedesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripedesert";
		scope = 2;
		displayName = "Booniehat (Tigerstripe desert)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripedesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripedesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripedesert_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe desert, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripedesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripenaval: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripenaval";
		scope = 2;
		displayName = "Booniehat (Tigerstripe naval)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripenaval_co.paa"};
	};
	class FP_GOR_H_Booniehat_tigerstripenaval_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_tigerstripenaval_hs";
		scope = 2;
		displayName = "Booniehat (Tigerstripe naval, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_tigerstripenaval_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleafsummer: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleafsummer";
		scope = 2;
		displayName = "Booniehat (Oakleaf summer)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleafsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleafsummer_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleafsummer_hs";
		scope = 2;
		displayName = "Booniehat (Oakleaf summer, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleafsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleaffall: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleaffall";
		scope = 2;
		displayName = "Booniehat (Oakleaf fall)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleaffall_co.paa"};
	};
	class FP_GOR_H_Booniehat_oakleaffall_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_oakleaffall_hs";
		scope = 2;
		displayName = "Booniehat (Oakleaf fall, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_oakleaffall_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpcu: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpcu";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPCU)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpcu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpcu_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpcu_hs";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPCU, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpcu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpdu: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpdu";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPDU)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpdu_co.paa"};
	};
	class FP_GOR_H_Booniehat_auscamdpdu_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_auscamdpdu_hs";
		scope = 2;
		displayName = "Booniehat (AUSCAM DPDU, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_auscamdpdu_co.paa"};
	};
	class FP_GOR_H_Booniehat_smk: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_smk";
		scope = 2;
		displayName = "Booniehat (SMK)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_smk_co.paa"};
	};
	class FP_GOR_H_Booniehat_smk_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_smk_hs";
		scope = 2;
		displayName = "Booniehat (SMK, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_smk_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropat: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropat";
		scope = 2;
		displayName = "Booniehat (CROPAT)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropat_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropat_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropat_hs";
		scope = 2;
		displayName = "Booniehat (CROPAT, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropat_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropatdesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropatdesert";
		scope = 2;
		displayName = "Booniehat (CROPAT Desert)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropatdesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_cropatdesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cropatdesert_hs";
		scope = 2;
		displayName = "Booniehat (CROPAT Desert, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cropatdesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_honor: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_honor";
		scope = 2;
		displayName = "Booniehat (Project Honor)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_honor_co.paa"};
	};
	class FP_GOR_H_Booniehat_honor_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_honor_hs";
		scope = 2;
		displayName = "Booniehat (Project Honor, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_honor_co.paa"};
	};
	class FP_GOR_H_Booniehat_mm14: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_mm14";
		scope = 2;
		displayName = "Booniehat (Ukrainian MM-14)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_mm14_co.paa"};
	};
	class FP_GOR_H_Booniehat_mm14_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_mm14_hs";
		scope = 2;
		displayName = "Booniehat (Ukrainian MM-14, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_mm14_co.paa"};
	};
	class FP_GOR_H_Booniehat_mm14woodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_mm14woodland";
		scope = 2;
		displayName = "Booniehat (Ukrainian MM-14 Woodland)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_mm14woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_mm14woodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_mm14woodland_hs";
		scope = 2;
		displayName = "Booniehat (Ukrainian MM-14 Woodland, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_mm14woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_cs95dpm: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cs95dpm";
		scope = 2;
		displayName = "Booniehat (DPM CS95)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cs95dpm_co.paa"};
	};
	class FP_GOR_H_Booniehat_cs95dpm_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_cs95dpm_hs";
		scope = 2;
		displayName = "Booniehat (DPM CS95, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_cs95dpm_co.paa"};
	};
	class FP_GOR_H_Booniehat_pantera: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_pantera";
		scope = 2;
		displayName = "Booniehat (Polish Pantera)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_pantera_co.paa"};
	};
	class FP_GOR_H_Booniehat_pantera_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_pantera_hs";
		scope = 2;
		displayName = "Booniehat (Polish Pantera, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_pantera_co.paa"};
	};
	class FP_GOR_H_Booniehat_panteradesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_panteradesert";
		scope = 2;
		displayName = "Booniehat (Polish Pantera  (Desert))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_panteradesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_panteradesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_panteradesert_hs";
		scope = 2;
		displayName = "Booniehat (Polish Pantera (Desert), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_panteradesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_vz95woodland: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_vz95woodland";
		scope = 2;
		displayName = "Booniehat (Czech Vz95)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_vz95woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_vz95woodland_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_vz95woodland_hs";
		scope = 2;
		displayName = "Booniehat (Czech Vz95, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_vz95woodland_co.paa"};
	};
	class FP_GOR_H_Booniehat_vz95desert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_vz95desert";
		scope = 2;
		displayName = "Booniehat (Czech Vz95 (Desert))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_vz95desert_co.paa"};
	};
	class FP_GOR_H_Booniehat_vz95desert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_vz95desert_hs";
		scope = 2;
		displayName = "Booniehat (Czech Vz95 (Desert), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_vz95desert_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarnsummer: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarnsummer";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Summer))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarnsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarnsummer_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarnsummer_hs";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Summer), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarnsummer_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarnautumn: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarnautumn";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Autumn))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarnautumn_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarnautumn_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarnautumn_hs";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Autumn), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarnautumn_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarndesert: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarndesert";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Desert))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarndesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_flecktarndesert_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_flecktarndesert_hs";
		scope = 2;
		displayName = "Booniehat (Flecktarn (Desert), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_flecktarndesert_co.paa"};
	};
	class FP_GOR_H_Booniehat_kryptekmandrake: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_kryptekmandrake";
		scope = 2;
		displayName = "Booniehat (Kryptek Mandrake)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_kryptekmandrake_co.paa"};
	};
	class FP_GOR_H_Booniehat_kryptekmandrake_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_kryptekmandrake_hs";
		scope = 2;
		displayName = "Booniehat (Kryptek Mandrake, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_kryptekmandrake_co.paa"};
	};
	class FP_GOR_H_Booniehat_krypteknomad: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_krypteknomad";
		scope = 2;
		displayName = "Booniehat (Kryptek Nomad)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_krypteknomad_co.paa"};
	};
	class FP_GOR_H_Booniehat_krypteknomad_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_krypteknomad_hs";
		scope = 2;
		displayName = "Booniehat (Kryptek Nomad, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_krypteknomad_co.paa"};
	};
	class FP_GOR_H_Booniehat_kryptekhighlander: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_kryptekhighlander";
		scope = 2;
		displayName = "Booniehat (Kryptek Highlander)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_kryptekhighlander_co.paa"};
	};
	class FP_GOR_H_Booniehat_kryptekhighlander_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_kryptekhighlander_hs";
		scope = 2;
		displayName = "Booniehat (Kryptek Highlander, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_kryptekhighlander_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchce: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchce";
		scope = 2;
		displayName = "Booniehat (French CE)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchce_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchce_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchce_hs";
		scope = 2;
		displayName = "Booniehat (French CE, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchce_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchcegign: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchcegign";
		scope = 2;
		displayName = "Booniehat (French CE (GIGN))";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchcegign_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchcegign_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchcegign_hs";
		scope = 2;
		displayName = "Booniehat (French CE (GIGN), headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchcegign_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchdaguet: H_Booniehat_khk
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchdaguet";
		scope = 2;
		displayName = "Booniehat (French Daguet)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchdaguet_co.paa"};
	};
	class FP_GOR_H_Booniehat_frenchdaguet_hs: H_Booniehat_khk_hs
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_Booniehat_frenchdaguet_hs";
		scope = 2;
		displayName = "Booniehat (French Daguet, headset)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\boonie\data\booniehat_frenchdaguet_co.paa"};
	};
};