class CfgPatches
{
	class gordon_reskins_pasgthelmet
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_PASGThelmet_woodland",
			"FP_GOR_PASGThelmet_woodland_rhino",
			"FP_GOR_PASGThelmet_stripeyarid",
			"FP_GOR_PASGThelmet_stripeyarid_rhino",
			"FP_GOR_PASGThelmet_stripeydesert",
			"FP_GOR_PASGThelmet_stripeydesert_rhino",
			"FP_GOR_PASGThelmet_stripeywoodland",
			"FP_GOR_PASGThelmet_stripeywoodland_rhino",
			"FP_GOR_PASGThelmet_frenchlizardc1",
			"FP_GOR_PASGThelmet_frenchlizardc1_rhino",
			"FP_GOR_PASGThelmet_frenchlizarda2",
			"FP_GOR_PASGThelmet_frenchlizarda2_rhino",
			"FP_GOR_PASGThelmet_frenchlizardfictional",
			"FP_GOR_PASGThelmet_frenchlizardfictional_rhino",
			"FP_GOR_PASGThelmet_tigerstripejungle",
			"FP_GOR_PASGThelmet_tigerstripejungle_rhino",
			"FP_GOR_PASGThelmet_tigerstripedesert",
			"FP_GOR_PASGThelmet_tigerstripedesert_rhino",
			"FP_GOR_PASGThelmet_tigerstripenaval",
			"FP_GOR_PASGThelmet_tigerstripenaval_rhino",
			"FP_GOR_PASGThelmet_oakleafsummer",
			"FP_GOR_PASGThelmet_oakleafsummer_rhino",
			"FP_GOR_PASGThelmet_oakleaffall",
			"FP_GOR_PASGThelmet_oakleaffall_rhino",
			"FP_GOR_PASGThelmet_auscamdpcu",
			"FP_GOR_PASGThelmet_auscamdpcu_rhino",
			"FP_GOR_PASGThelmet_auscamdpdu",
			"FP_GOR_PASGThelmet_auscamdpdu_rhino",
			"FP_GOR_PASGThelmet_smk",
			"FP_GOR_PASGThelmet_smk_rhino",
			"FP_GOR_PASGThelmet_cropat",
			"FP_GOR_PASGThelmet_cropat_rhino",
			"FP_GOR_PASGThelmet_cropatdesert",
			"FP_GOR_PASGThelmet_cropatdesert_rhino",
			"FP_GOR_PASGThelmet_honor",
			"FP_GOR_PASGThelmet_honor_rhino",
			"FP_GOR_PASGThelmet_mm14",
			"FP_GOR_PASGThelmet_mm14_rhino",
			"FP_GOR_PASGThelmet_mm14woodland",
			"FP_GOR_PASGThelmet_mm14woodland_rhino",
			"FP_GOR_PASGThelmet_cs95dpm",
			"FP_GOR_PASGThelmet_cs95dpm_rhino",
			"FP_GOR_PASGThelmet_pantera",
			"FP_GOR_PASGThelmet_pantera_rhino",
			"FP_GOR_PASGThelmet_panteradesert",
			"FP_GOR_PASGThelmet_panteradesert_rhino",
			"FP_GOR_PASGThelmet_vz95woodland",
			"FP_GOR_PASGThelmet_vz95woodland_rhino",
			"FP_GOR_PASGThelmet_vz95desert",
			"FP_GOR_PASGThelmet_vz95desert_rhino",
			"FP_GOR_PASGThelmet_flecktarnsummer",
			"FP_GOR_PASGThelmet_flecktarnsummer_rhino",
			"FP_GOR_PASGThelmet_flecktarnautumn",
			"FP_GOR_PASGThelmet_flecktarnautumn_rhino",
			"FP_GOR_PASGThelmet_flecktarndesert",
			"FP_GOR_PASGThelmet_flecktarndesert_rhino"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgWeapons
{
	class rhsgref_helmet_pasgt_erdl;
	class rhsgref_helmet_pasgt_erdl_rhino;
	class FP_GOR_PASGThelmet_woodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (M81 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_woodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (M81 Woodland, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeyarid : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Arid)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeyarid_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeyarid_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Arid, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeyarid_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeydesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeydesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeydesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeydesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeywoodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeywoodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Woodland, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardc1 : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard C1)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardc1_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard C1, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizarda2 : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard A2)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizarda2_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard A2, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardfictional : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard Fictional)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardfictional_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard Fictional, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripejungle : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe jungle)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripejungle_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe jungle, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripedesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripedesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripenaval : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe naval)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripenaval_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe naval, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_oakleafsummer : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Oakleaf summer)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_oakleafsummer_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_oakleafsummer_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Oakleaf summer, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_oakleafsummer_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_oakleaffall : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Oakleaf fall)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_oakleaffall_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_oakleaffall_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Oakleaf fall, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_oakleaffall_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_auscamdpcu : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (AUSCAM DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_auscamdpcu_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_auscamdpcu_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (AUSCAM DPCU, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_auscamdpcu_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_auscamdpdu : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (AUSCAM DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_auscamdpdu_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_auscamdpdu_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (AUSCAM DPDU, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_auscamdpdu_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_smk : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (SMK)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_smk_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_smk_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (SMK, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_smk_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cropat : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (CROPAT)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cropat_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cropat_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (CROPAT, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cropat_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cropatdesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (CROPAT Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cropatdesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cropatdesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (CROPAT Desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cropatdesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_honor : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Project Honor)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_honor_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_honor_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Project Honor, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_honor_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_mm14 : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Ukrainian MM-14)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_mm14_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_mm14_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Ukrainian MM-14, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_mm14_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_mm14woodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Ukrainian MM-14 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_mm14woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_mm14woodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Ukrainian MM-14 Woodland, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_mm14woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cs95dpm : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DPM CS95)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cs95dpm_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_cs95dpm_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DPM CS95, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_cs95dpm_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_pantera : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Polish Pantera)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_pantera_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_pantera_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Polish Pantera, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_pantera_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_panteradesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Polish Pantera  (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_panteradesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_panteradesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Polish Pantera  (Desert), Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_panteradesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_vz95woodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Czech Vz95)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_vz95woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_vz95woodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Czech Vz95, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_vz95woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_vz95desert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Czech Vz95 (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_vz95desert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_vz95desert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Czech Vz95 (Desert), Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_vz95desert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarnsummer : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Flecktarn (Summer))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarnsummer_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarnsummer_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Flecktarn (Summer), Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarnsummer_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarnautumn : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Flecktarn (Autumn))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarnautumn_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarnautumn_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Flecktarn (Autumn), Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarnautumn_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarndesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Flecktarn (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarndesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_flecktarndesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Flecktarn (Desert), Rhino)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_flecktarndesert_co.paa"
		};
	};
};