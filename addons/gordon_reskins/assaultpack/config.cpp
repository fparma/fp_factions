class CfgPatches
{
	class gordon_reskins_assaultpack
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_assaultpack_woodland",
			"FP_GOR_assaultpack_stripeyarid",
			"FP_GOR_assaultpack_stripeydesert",
			"FP_GOR_assaultpack_sripeywoodland",
			"FP_GOR_assaultpack_frenchlizardc1",
			"FP_GOR_assaultpack_frenchlizarda2",
			"FP_GOR_assaultpack_frenchlizardfictional",
			"FP_GOR_assaultpack_tigerstripejungle",
			"FP_GOR_assaultpack_tigerstripedesert",
			"FP_GOR_assaultpack_tigerstripenaval",
			"FP_GOR_assaultpack_oakleafsummer",
			"FP_GOR_assaultpack_oakleaffall",
			"FP_GOR_assaultpack_auscamdpcu",
			"FP_GOR_assaultpack_auscamdpdu",
			"FP_GOR_assaultpack_smk",
			"FP_GOR_assaultpack_cropat",
			"FP_GOR_assaultpack_cropatdesert",
			"FP_GOR_assaultpack_cs95dpm",
			"FP_GOR_assaultpack_pantera",
			"FP_GOR_assaultpack_panteradesert",
			"FP_GOR_assaultpack_vz95woodland",
			"FP_GOR_assaultpack_vz95desert",
			"FP_GOR_assaultpack_flecktarnsummer",
			"FP_GOR_assaultpack_flecktarnautumn",
			"FP_GOR_assaultpack_flecktarndesert",
			"FP_GOR_assaultpack_mm14",
			"FP_GOR_assaultpack_mm14woodland",
			"FP_GOR_assaultpack_honor",
			"FP_GOR_assaultpack_m90",
			"FP_GOR_assaultpack_m90k",
			"FP_GOR_assaultpack_m90w",
			"FP_GOR_assaultpack_mtp",
			"FP_GOR_assaultpack_inv",
			"FP_GOR_assaultpack_cadpattw",
			"FP_GOR_assaultpack_cadpatmt",
			"FP_GOR_assaultpack_cadpatar"
		};
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
	class B_AssaultPack_rgr;
	class FP_GOR_assaultpack_woodland: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (M81 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_woodland_co.paa"
		};
	};
	class FP_GOR_assaultpack_stripeyarid: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (DBC Arid)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_stripeyarid_co.paa"
		};
	};
	class FP_GOR_assaultpack_stripeydesert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (DBC Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_stripeydesert_co.paa"
		};
	};
	class FP_GOR_assaultpack_sripeywoodland: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (DBC Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_assaultpack_frenchlizardc1: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (French Lizard C1)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_assaultpack_frenchlizarda2: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (French Lizard A2)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_assaultpack_frenchlizardfictional: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (French Lizard Fictional)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_assaultpack_tigerstripejungle: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Tigerstripe jungle)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_assaultpack_tigerstripedesert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Tigerstripe desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_assaultpack_tigerstripenaval: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Tigerstripe naval)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_assaultpack_oakleafsummer: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Oakleaf summer)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_oakleafsummer_co.paa"
		};
	};
	class FP_GOR_assaultpack_oakleaffall: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Oakleaf fall)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_oakleaffall_co.paa"
		};
	};
	class FP_GOR_assaultpack_auscamdpcu: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (AUSCAM DPCU)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_auscamdpcu_co.paa"
		};
	};
	class FP_GOR_assaultpack_auscamdpdu: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (AUSCAM DPDU)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_auscamdpdu_co.paa"
		};
	};
	class FP_GOR_assaultpack_smk: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (SMK)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_smk_co.paa"
		};
	};
	class FP_GOR_assaultpack_cropat: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (CROPAT)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cropat_co.paa"
		};
	};
	class FP_GOR_assaultpack_cropatdesert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (CROPAT Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cropatdesert_co.paa"
		};
	};
	class FP_GOR_assaultpack_cs95dpm: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (British DPM)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cs95dpm_co.paa"
		};
	};
	class FP_GOR_assaultpack_pantera: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Polish Pantera)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_pantera_co.paa"
		};
	};
	class FP_GOR_assaultpack_panteradesert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Polish Pantera (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_panteradesert_co.paa"
		};
	};
	class FP_GOR_assaultpack_vz95woodland: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Czech Vz95)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_vz95woodland_co.paa"
		};
	};
	class FP_GOR_assaultpack_vz95desert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Czech Vz95 (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_vz95desert_co.paa"
		};
	};
	class FP_GOR_assaultpack_flecktarnsummer: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Flecktarn (Summer))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_flecktarnsummer_co.paa"
		};
	};
	class FP_GOR_assaultpack_flecktarnautumn: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Flecktarn (Autumn))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_flecktarnautumn_co.paa"
		};
	};
	class FP_GOR_assaultpack_flecktarndesert: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Flecktarn (Desert))";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_flecktarndesert_co.paa"
		};
	};
	class FP_GOR_assaultpack_mm14: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Ukrainian MM-14)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_mm14_co.paa"
		};
	};
	class FP_GOR_assaultpack_mm14woodland: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Ukrainian MM-14 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_mm14woodland_co.paa"
		};
	};
	class FP_GOR_assaultpack_honor: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Project Honor)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_honor_co.paa"
		};
	};
	class FP_GOR_assaultpack_m90: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Swedish M90)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_m90_co.paa"
		};
	};
	class FP_GOR_assaultpack_m90k: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Swedish M90K)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_m90k_co.paa"
		};
	};
	class FP_GOR_assaultpack_m90w: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (Swedish M90W)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_m90w_co.paa"
		};
	};
	class FP_GOR_assaultpack_mtp: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (British MTP)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_mtp_co.paa"
		};
	};
	class FP_GOR_assaultpack_inv: B_AssaultPack_rgr
	{
		armor=0;
		author="Gordon Weedman";
		displayName="FP Assault Pack (Invisible)";
		model="\A3\Weapons_F\empty.p3d";
		picture="";
	};
	
	class FP_GOR_assaultpack_cadpattw: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (CADPAT TW)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cadpattw_co.paa"
		};
	};
	class FP_GOR_assaultpack_cadpatmt: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (CADPAT MT)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cadpatmt_co.paa"
		};
	};
	class FP_GOR_assaultpack_cadpatar: B_AssaultPack_rgr
	{
		author="Gordon Weedman";
		displayName="Assault Pack (CADPAT AR)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\assaultpack\data\assaultpack_cadpatar_co.paa"
		};
	};
}; 