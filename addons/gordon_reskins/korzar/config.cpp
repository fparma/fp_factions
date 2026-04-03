class CfgPatches
{
	class gordon_reskins_korzar
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_Korzar3_aaf",
			"FP_GOR_Korzar3_aaf_B",
			"FP_GOR_Korzar3_aaf_P",
			"FP_GOR_Korzar3_aaf_R",
			"FP_GOR_Korzar3_spets",
			"FP_GOR_Korzar3_spets_B",
			"FP_GOR_Korzar3_spets_P",
			"FP_GOR_Korzar3_spets_R",
			"FP_GOR_Korzar3_slivawood",
			"FP_GOR_Korzar3_slivawood_B",
			"FP_GOR_Korzar3_slivawood_P",
			"FP_GOR_Korzar3_slivawood_R",
			"FP_GOR_Korzar3_slivasteppe",
			"FP_GOR_Korzar3_slivasteppe_B",
			"FP_GOR_Korzar3_slivasteppe_P",
			"FP_GOR_Korzar3_slivasteppe_R",
			"FP_GOR_Korzar3_UN1",
			"FP_GOR_Korzar3_UN1_B",
			"FP_GOR_Korzar3_UN1_P",
			"FP_GOR_Korzar3_UN1_R"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"FP_Korzar"
		};
	};
};
class CfgWeapons
{
	class FP_Korzar3_Olive;
	class FP_Korzar3_Olive_B;
	class FP_Korzar3_Olive_P;
	class FP_Korzar3_Olive_R;

	class FP_GOR_Korzar3_aaf: FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (AAF)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_aaf_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_aaf_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_aaf_B: FP_Korzar3_Olive_B
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (AAF, Bandolier)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_aaf_b_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_aaf_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_aaf_P: FP_Korzar3_Olive_P
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (AAF, Pouch)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_aaf_p_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_aaf_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_aaf_R: FP_Korzar3_Olive_R
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (AAF, Radio)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_aaf_r_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_aaf_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_spets: FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Spetsodezhda)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_spets_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_spets_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Tan\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_spets_B: FP_Korzar3_Olive_B
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Spetsodezhda, Bandolier)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_spets_b_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_spets_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Tan\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_spets_P: FP_Korzar3_Olive_P
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Spetsodezhda, Pouch)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_spets_p_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_spets_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Tan\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_spets_R: FP_Korzar3_Olive_R
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Spetsodezhda, Radio)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_spets_r_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_spets_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Tan\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_slivawood: FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (woodland))";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivawood_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivawood_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivawood_B: FP_Korzar3_Olive_B
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (woodland), Bandolier)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivawood_b_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivawood_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivawood_P: FP_Korzar3_Olive_P
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (woodland), Pouch)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivawood_p_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivawood_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivawood_R: FP_Korzar3_Olive_R
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (woodland), Radio)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivawood_r_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivawood_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_slivasteppe: FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (steppe))";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivasteppe_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivasteppe_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivasteppe_B: FP_Korzar3_Olive_B
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (steppe), Bandolier)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivasteppe_b_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivasteppe_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivasteppe_P: FP_Korzar3_Olive_P
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (steppe), Pouch)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivasteppe_p_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivasteppe_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_slivasteppe_R: FP_Korzar3_Olive_R
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (steppe), Radio)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_slivasteppe_r_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivasteppe_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_UN: FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (UN)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_UN_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_UN_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_UN_B: FP_Korzar3_Olive_B
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (UN, Bandolier)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_UN_b_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_UN_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_UN_P: FP_Korzar3_Olive_P
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (UN, Pouch)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_UN_p_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_UN_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	class FP_GOR_Korzar3_UN_R: FP_Korzar3_Olive_R
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (UN, Radio)";
		picture="\fp_factions\gordon_reskins\korzar\data\icons\icon_korzar_UN_r_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_UN_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
};

