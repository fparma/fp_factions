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
			"FP_GOR_Korzar3_slivasteppe_R"
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

	class FP_GOR_Korzar3_aaf : FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (AAF)";
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
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_aaf_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_spets : FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Spetsodezhda)";
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
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_spets_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Tan\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_slivawood : FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (woodland))";
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
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivawood_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
	
	class FP_GOR_Korzar3_slivasteppe : FP_Korzar3_Olive
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Korzar-3 (Sliva (steppe))";
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
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\korzar\data\korzar3_slivasteppe_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_General_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\pouch\camo\Olive\MSA_Radio_Pouch_co.paa",
			"\MSA_CDF_Korzar\data\bandolier\camo\Olive\MSA_UGL_Bandolier_co.paa"
		};
	};
};

