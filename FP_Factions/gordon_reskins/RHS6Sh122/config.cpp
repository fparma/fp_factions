class CfgPatches
{
	class gordon_reskins_6sh122
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_rhs_uniform_6sh122_syrian",
			"FP_GOR_rhs_uniform_6sh122_gloves_syrian",
			"FP_GOR_rhs_uniform_6sh122_desertpink",
			"FP_GOR_rhs_uniform_6sh122_gloves_desertpink",
			"FP_GOR_rhs_uniform_6sh122_desertemr",
			"FP_GOR_rhs_uniform_6sh122_gloves_desertemr",
			"FP_GOR_rhs_uniform_6sh122_surpat",
			"FP_GOR_rhs_uniform_6sh122_gloves_surpat",
			"FP_GOR_rhs_uniform_6sh122_emr",
			"FP_GOR_rhs_uniform_6sh122_gloves_emr",
			"FP_GOR_rhs_uniform_6sh122_sumrak",
			"FP_GOR_rhs_uniform_6sh122_gloves_sumrak",
			"FP_GOR_rhs_uniform_6sh122_partizanautumn",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanautumn",
			"FP_GOR_rhs_uniform_6sh122_partizansummer",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizansummer",
			"FP_GOR_rhs_uniform_6sh122_partizanautumnsummer",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanautumnsummer",
			"FP_GOR_rhs_uniform_6sh122_partizansummerautumn",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizansummerautumn",
			"FP_GOR_rhs_uniform_6sh122_partizanmautumn",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumn",
			"FP_GOR_rhs_uniform_6sh122_partizanmsummer",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummer",
			"FP_GOR_rhs_uniform_6sh122_partizanmautumnsummer",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumnsummer",
			"FP_GOR_rhs_uniform_6sh122_partizanmsummerautumn",
			"FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummerautumn",
			"FP_GOR_rhs_uniform_6sh122_winter",
			"FP_GOR_rhs_uniform_6sh122_gloves_winter",
			"FP_GOR_rhs_uniform_6sh122_schneetarn",
			"FP_GOR_rhs_uniform_6sh122_gloves_schneetarn",
			"FP_GOR_rhs_uniform_6sh122_black",
			"FP_GOR_rhs_uniform_6sh122_gloves_black",
			"FP_GOR_rhs_uniform_6sh122_stripeyarid",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeyarid",
			"FP_GOR_rhs_uniform_6sh122_stripeyariddesert",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeyariddesert",
			"FP_GOR_rhs_uniform_6sh122_stripeyaridwoodland",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeyaridwoodland",
			"FP_GOR_rhs_uniform_6sh122_stripeydesert",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeydesert",
			"FP_GOR_rhs_uniform_6sh122_stripeydesertarid",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeydesertarid",
			"FP_GOR_rhs_uniform_6sh122_stripeywoodland",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodland",
			"FP_GOR_rhs_uniform_6sh122_stripeywoodlandarid",
			"FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodlandarid",
			"FP_GOR_rhs_uniform_6sh122_tochka",
			"FP_GOR_rhs_uniform_6sh122_gloves_tochka",
			"FP_GOR_rhs_uniform_6sh122_tochkaamoeba",
			"FP_GOR_rhs_uniform_6sh122_gloves_tochkaamoeba",
			"FP_GOR_rhs_uniform_6sh122_amoeba",
			"FP_GOR_rhs_uniform_6sh122_gloves_amoeba",
			"FP_GOR_rhs_uniform_6sh122_amoebatochka",
			"FP_GOR_rhs_uniform_6sh122_gloves_amoebatochka",
			"FP_GOR_rhs_uniform_6sh122_atacsau",
			"FP_GOR_rhs_uniform_6sh122_gloves_atacsau",
			"FP_GOR_rhs_uniform_6sh122_atacsaufg",
			"FP_GOR_rhs_uniform_6sh122_gloves_atacsaufg",
			"FP_GOR_rhs_uniform_6sh122_atacsfg",
			"FP_GOR_rhs_uniform_6sh122_gloves_atacsfg",
			"FP_GOR_rhs_uniform_6sh122_atacsfgau",
			"FP_GOR_rhs_uniform_6sh122_gloves_atacsfgau",
			"FP_GOR_rhs_uniform_6sh122_v12",
			"FP_GOR_rhs_uniform_6sh122_gloves_v12",
			"FP_GOR_rhs_uniform_6sh122_v21",
			"FP_GOR_rhs_uniform_6sh122_gloves_v21"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_c_troops",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgVehicles
{	
	class rhs_6sh122_v1_base;
	class rhs_6sh122_gloves_v1_base;
	
	class FP_GOR_rhs_6sh122_syrian: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_syrian";
		displayName="6Sh122 (Russian Syria camo)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_syrian_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_syrian_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_syrian: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_syrian";
		displayName="6Sh122 (Russian Syria camo, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_syrian_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_syrian_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_desertpink: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_desertpink";
		displayName="6Sh122 (Desert pink)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_desertpink_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_desertpink_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_desertpink: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_desertpink";
		displayName="6Sh122 (Desert pink, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_desertpink_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_desertpink_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_desertemr: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_desertemr";
		displayName="6Sh122 (Desert EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_desertemr_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_desertemr_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_desertemr: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_desertemr";
		displayName="6Sh122 (Desert EMR, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_desertemr_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_desertemr_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_surpat: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_surpat";
		displayName="6Sh122 (SURPAT)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_surpat_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_surpat_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_surpat: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_surpat";
		displayName="6Sh122 (SURPAT, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_surpat_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_surpat_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_emr: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_emr";
		displayName="6Sh122 (EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_emr_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_emr_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_emr: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_emr";
		displayName="6Sh122 (EMR, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_emr_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_emr_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_sumrak: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_sumrak";
		displayName="6Sh122 (SUMRAK)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_sumrak_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_sumrak_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_sumrak: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_sumrak";
		displayName="6Sh122 (SUMRAK, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_sumrak_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_sumrak_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizanautumn: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanautumn";
		displayName="6Sh122 (Partizan Autumn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanautumn: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanautumn";
		displayName="6Sh122 (Partizan Autumn, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizanautumnsummer: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanautumnsummer";
		displayName="6Sh122 (Partizan Autumn/Summer)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizansummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanautumnsummer: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanautumnsummer";
		displayName="6Sh122 (Partizan Autumn/Summer, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizansummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizansummer: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizansummer";
		displayName="6Sh122 (Partizan Summer)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizansummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizansummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizansummer: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizansummer";
		displayName="6Sh122 (Partizan Summer, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizansummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizansummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizansummerautumn: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizansummerautumn";
		displayName="6Sh122 (Partizan Summer/Autumn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizansummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizansummerautumn: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizansummerautumn";
		displayName="6Sh122 (Partizan Summer/Autumn, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizansummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	
	
	
	
	class FP_GOR_rhs_6sh122_partizanmautumn: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanmautumn";
		displayName="6Sh122 (Partizan M Autumn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanmautumn: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumn";
		displayName="6Sh122 (Partizan M Autumn, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizanmautumnsummer: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanmautumnsummer";
		displayName="6Sh122 (Partizan M Autumn/Summer)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmsummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanmautumnsummer: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumnsummer";
		displayName="6Sh122 (Partizan M Autumn/Summer, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmautumn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmsummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizanmsummer: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanmsummer";
		displayName="6Sh122 (Partizan M Summer)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmsummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmsummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanmsummer: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummer";
		displayName="6Sh122 (Partizan M Summer, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmsummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmsummer_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_partizanmsummerautumn: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_partizanmsummerautumn";
		displayName="6Sh122 (Partizan M Summer/Autumn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmsummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_partizanmsummerautumn: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummerautumn";
		displayName="6Sh122 (Partizan M Summer/Autumn, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_partizanmsummer_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_partizanmautumn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_winter: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_winter";
		displayName="6Sh122 (Winter)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_winter_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_winter_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_winter: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_winter";
		displayName="6Sh122 (Winter, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_winter_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_winter_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_schneetarn: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_schneetarn";
		displayName="6Sh122 (Schneetarn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_schneetarn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_schneetarn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_schneetarn: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_schneetarn";
		displayName="6Sh122 (Schneetarn, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_schneetarn_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_schneetarn_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_black: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_black";
		displayName="6Sh122 (Black)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_black_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_black_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_black: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_black";
		displayName="6Sh122 (Black, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_black_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_black_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeyarid: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeyarid";
		displayName="6Sh122 (DBC Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeyarid: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeyarid";
		displayName="6Sh122 (DBC Arid, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeyariddesert: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeyariddesert";
		displayName="6Sh122 (DBC Arid/Desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeydesert_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeyariddesert: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeyariddesert";
		displayName="6Sh122 (DBC Arid/Desert, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeydesert_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeyaridwoodland: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeyaridwoodland";
		displayName="6Sh122 (DBC Arid/Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeywoodland_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeyaridwoodland: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeyaridwoodland";
		displayName="6Sh122 (DBC Arid/Woodland, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeywoodland_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeydesert: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeydesert";
		displayName="6Sh122 (DBC Desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeydesert_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeydesert: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeydesert";
		displayName="6Sh122 (DBC Desert, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeydesert_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeydesertarid: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeydesertarid";
		displayName="6Sh122 (DBC Desert/Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeydesertarid: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeydesertarid";
		displayName="6Sh122 (DBC Desert/Arid, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeywoodland: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeywoodland";
		displayName="6Sh122 (DBC Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeywoodland_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeywoodland: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodland";
		displayName="6Sh122 (DBC Woodland, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeywoodland_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_stripeywoodlandarid: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_stripeywoodlandarid";
		displayName="6Sh122 (DBC Woodland/Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_stripeywoodlandarid: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodlandarid";
		displayName="6Sh122 (DBC Woodland/Arid, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_stripeyarid_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_tochka: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_tochka";
		displayName="6Sh122 (Tochka)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_tochka_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_tochka_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_tochka: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_tochka";
		displayName="6Sh122 (Tochka, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_tochka_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_tochka_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_tochkaamoeba: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_tochkaamoeba";
		displayName="6Sh122 (Tochka/Amoeba)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_tochka_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_amoeba_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_tochkaamoeba: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_tochkaamoeba";
		displayName="6Sh122 (Tochka/Amoeba, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_tochka_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_amoeba_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_amoeba: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_amoeba";
		displayName="6Sh122 (Amoeba)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_amoeba_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_amoeba_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_amoeba: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_amoeba";
		displayName="6Sh122 (Amoeba, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_amoeba_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_amoeba_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_amoebatochka: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_amoebatochka";
		displayName="6Sh122 (Amoeba/Tochka)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_amoeba_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_tochka_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_amoebatochka: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_amoebatochka";
		displayName="6Sh122 (Amoeba/Tochka, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_amoeba_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_tochka_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_atacsau: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_atacsau";
		displayName="6Sh122 (ATACS Arid/Urban)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsau_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsau_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_atacsau: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_atacsau";
		displayName="6Sh122 (ATACS Arid/Urban, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsau_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsau_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_atacsaufg: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_atacsaufg";
		displayName="6Sh122 (ATACS AU/FG)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsau_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsfg_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_atacsaufg: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_atacsaufg";
		displayName="6Sh122 (ATACS AU/FG, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsau_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsfg_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_atacsfg: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_atacsfg";
		displayName="6Sh122 (ATACS Foliage/Green)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsfg_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsfg_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_atacsfg: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_atacsfg";
		displayName="6Sh122 (ATACS Foliage/Green, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsfg_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsfg_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_atacsfgau: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_atacsfgau";
		displayName="6Sh122 (ATACS FG/AU)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsfg_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsau_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_atacsfgau: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_atacsfgau";
		displayName="6Sh122 (ATACS FG/AU, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_vest_atacsfg_co.paa",
			"\FP_Factions\gordon_reskins\rhs6sh122\data\122_pant_atacsau_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_v12: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_v12";
		displayName="6Sh122 (Spring & Fall)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_v12: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_v12";
		displayName="6Sh122 (Spring & Fall/Gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_6sh122_v21: rhs_6sh122_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_v21";
		displayName="6Sh122 (Fall & Spring)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_6sh122_gloves_v21: rhs_6sh122_gloves_v1_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_6sh122_gloves_v1_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_6sh122_gloves_v21";
		displayName="6Sh122 (Fall & Spring/Gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_vest_fall_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\122_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
};

class CfgWeapons			
{
	class rhs_uniform_6sh122_v1;
	class rhs_uniform_6sh122_gloves_v1;
	class UniformItem;
	
	class FP_GOR_rhs_uniform_6sh122_syrian: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Russian Syria camo)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_syrian";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_syrian: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Russian Syria camo, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_syrian";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_desertemr: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Desert EMR)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_desertemr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_desertemr: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Desert EMR, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_desertemr";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_desertpink: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Desert pink)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_desertpink";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_desertpink: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Desert pink, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_desertpink";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_surpat: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (SURPAT)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_surpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_surpat: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (SURPAT, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_surpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_emr: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (EMR)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_emr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_emr: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (EMR, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_emr";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_sumrak: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (SUMRAK)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_sumrak";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_sumrak: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (SUMRAK, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_sumrak";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanautumn: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Autumn)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanautumn: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Autumn, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanautumnsummer: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Autumn/Summer)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanautumnsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanautumnsummer: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Autumn/Summer, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanautumnsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizansummer: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Summer)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizansummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizansummer: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Summer, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizansummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizansummerautumn: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Summer/Autumn)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizansummerautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizansummerautumn: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan Summer/Autumn, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizansummerautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanmautumn: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Autumn)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanmautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumn: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Autumn, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanmautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanmautumnsummer: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Autumn/Summer)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanmautumnsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanmautumnsummer: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Autumn/Summer, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanmautumnsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanmsummer: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Summer)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanmsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummer: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Summer, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanmsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_partizanmsummerautumn: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Summer/Autumn)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_partizanmsummerautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_partizanmsummerautumn: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Partizan M Summer/Autumn, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_partizanmsummerautumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_winter: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Winter)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_winter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_winter: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Winter, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_winter";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_schneetarn: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Schneetarn)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_schneetarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_schneetarn: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Schneetarn, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_schneetarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_black: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Black)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_black: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Black, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeyarid: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeyarid: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeyariddesert: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid/Desert)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeyariddesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeyariddesert: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid/Desert, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeyariddesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeyaridwoodland: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid/Woodland)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeyaridwoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeyaridwoodland: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Arid/Woodland, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeyaridwoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeydesert: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Desert)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeydesert: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Desert, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeydesertarid: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Desert/Arid)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeydesertarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeydesertarid: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Desert/Arid, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeydesertarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeywoodland: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Woodland)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodland: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Woodland, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_stripeywoodlandarid: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Woodland/Arid)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_stripeywoodlandarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_stripeywoodlandarid: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (DBC Woodland/Arid, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_stripeywoodlandarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_tochka: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Tochka)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_tochka";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_tochka: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Tochka, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_tochka";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_tochkaamoeba: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Tochka/Amoeba)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_tochkaamoeba";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_tochkaamoeba: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Tochka/Amoeba, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_tochkaamoeba";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_amoeba: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Amoeba)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_amoeba";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_amoeba: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Amoeba, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_amoeba";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_amoebatochka: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Amoeba/Tochka)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_amoebatochka";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_amoebatochka: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Amoeba/Tochka, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_amoebatochka";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_atacsau: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS Arid/Urban)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_atacsau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_atacsau: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS Arid/Urban, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_atacsau";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_atacsaufg: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS AU/FG)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_atacsaufg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_atacsaufg: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS AU/FG, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_atacsaufg";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_atacsfg: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS Foliage/Green)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_atacsfg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_atacsfg: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS Foliage/Green, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_atacsfg";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_atacsfgau: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS FG/AU)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_atacsfgau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_atacsfgau: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (ATACS FG/AU, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_atacsfgau";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_v12: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Spring & Fall)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_v12";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_v12: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Spring & Fall/Gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_v12";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_6sh122_v21: rhs_uniform_6sh122_v1
	{
		scope=2;
		displayName="6Sh122 (Fall & Spring)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_v21";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_6sh122_gloves_v21: rhs_uniform_6sh122_gloves_v1
	{
		scope=2;
		displayName="6Sh122 (Fall & Spring/Gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_6sh122_gloves_v21";
			containerClass="Supply40";
			mass=40;
		};
	};
};
	