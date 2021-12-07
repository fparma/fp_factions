class CfgPatches
{
	class gordon_reskins_acu
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_rhs_uniform_acu_emr",
			"FP_GOR_rhs_uniform_acu_stripeywoodland",
			"FP_GOR_rhs_uniform_acu_stripeyarid",
			"FP_GOR_rhs_uniform_acu_stripeydesert",
			"FP_GOR_rhs_uniform_acu_woodland",
			"FP_GOR_rhs_uniform_acu_cs95dpm",
			"FP_GOR_rhs_uniform_acu_mtp",
			"FP_GOR_rhs_uniform_acu_multicam",
			"FP_GOR_rhs_uniform_acu_multicamarid",
			"FP_GOR_rhs_uniform_acu_multicamjungle",
			"FP_GOR_rhs_uniform_acu_multicamblack",
			"FP_GOR_rhs_uniform_acu_sg14",
			"FP_GOR_rhs_uniform_acu_sg14desert",
			"FP_GOR_rhs_uniform_acu_olive",
			"FP_GOR_rhs_uniform_acu_tan",
			"FP_GOR_rhs_uniform_acu_black",
			"FP_GOR_rhs_uniform_acu_woodlandurban",
			"FP_GOR_rhs_uniform_acu_tpat",
			"FP_GOR_rhs_uniform_acu_chocochip",
			"FP_GOR_rhs_uniform_acu_coffeestain"
		
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_troops",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgVehicles
{	
	class rhsusf_army_acu_uniform;
	
	class FP_GOR_rhsusf_army_acu_uniform_emr: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_emr";
		displayName="Army Combat Uniform (EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_emr_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_emr_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_stripeywoodland: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_stripeywoodland";
		displayName="Army Combat Uniform (DBC Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_stripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_stripeyarid: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_stripeyarid";
		displayName="Army Combat Uniform (DBC Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_stripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_stripeydesert: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_stripeydesert";
		displayName="Army Combat Uniform (DBC Desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_stripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_woodland: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_woodland";
		displayName="Army Combat Uniform (M81 Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_woodland_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_woodland_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_cs95dpm: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_cs95dpm";
		displayName="Army Combat Uniform (DPM CS95)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_cs95dpm_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_cs95dpm_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};

	class FP_GOR_rhsusf_army_acu_uniform_mtp: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_mtp";
		displayName="Army Combat Uniform (MTP)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_mtp_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_mtp_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_multicam: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_multicam";
		displayName="Army Combat Uniform (Multicam)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_multicam_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_multicam_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_multicamarid: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_multicamarid";
		displayName="Army Combat Uniform (Multicam Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_multicamarid_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_multicamarid_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_multicamjungle: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_multicamjungle";
		displayName="Army Combat Uniform (Multicam Jungle)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_multicamjungle_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_multicamjungle_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_jungle_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_multicamblack: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_multicamblack";
		displayName="Army Combat Uniform (Multicam Black)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_multicamblack_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_multicamblack_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_sg14: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_sg14";
		displayName="Army Combat Uniform (Polish SG-14)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_sg14_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_sg14_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};

	class FP_GOR_rhsusf_army_acu_uniform_sg14desert: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_sg14desert";
		displayName="Army Combat Uniform (Polish SG-14 desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_sg14desert_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_sg14desert_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_olive: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_olive";
		displayName="Army Combat Uniform (Olive)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_olive_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_olive_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_tan: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_tan";
		displayName="Army Combat Uniform (Tan)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_tan_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_tan_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_black: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_black";
		displayName="Army Combat Uniform (Black)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_black_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_black_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_woodlandurban: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_woodlandurban";
		displayName="Army Combat Uniform (M81 Urban woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_woodlandurban_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_woodlandurban_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_tpat: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_tpat";
		displayName="Army Combat Uniform (T-PAT)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_tpat_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_tpat_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_black_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_chocochip: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_chocochip";
		displayName="Army Combat Uniform (US 'Chocolate chip')";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_chocochip_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_chocochip_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
	
	class FP_GOR_rhsusf_army_acu_uniform_coffeestain: rhsusf_army_acu_uniform
	{
		author="Gordon Weedman";
		_generalMacro="rhsusf_army_acu_uniform";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_acu_coffeestain";
		displayName="Army Combat Uniform (US 'Coffee stain')";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"identity",
			"flag",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\acu\data\acu_01_coffeestain_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\acu_02_coffeestain_co.paa",
			"\FP_Factions\gordon_reskins\acu\data\boots_coyote_co.paa",
			"#(argb,8,8,3)color(0,0,0,0)",
			"\FP_Factions\gordon_reskins\acu\data\noflag_co.paa"
		};
	};
};

class CfgWeapons			
{

	class UniformItem;
	class rhs_uniform_acu_ucp;
	class FP_GOR_rhs_uniform_acu_emr: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (EMR)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_emr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_stripeywoodland: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (DBC Woodland)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_stripeyarid: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (DBC Arid)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_stripeydesert: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (DBC Desert)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_woodland: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (M81 Woodland)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_cs95dpm: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (DPM CS95)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_cs95dpm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_mtp: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (MTP)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_mtp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_multicam: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Multicam)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_multicam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_multicamarid: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Multicam Arid)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_multicamarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_multicamjungle: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Multicam Jungle)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_multicamjungle";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_multicamblack: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Multicam Black)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_multicamblack";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_sg14: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Polish SG-14)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_sg14";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_sg14desert: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Polish SG-14 desert)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_sg14desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_olive: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Olive)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_olive";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_tan: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Tan)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_tan";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_black: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (Black)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_woodlandurban: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (M81 Urban woodland)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_woodlandurban";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_tpat: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (T-PAT)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_tpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_chocochip: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (US 'Chocolate chip')";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_chocochip";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_acu_coffeestain: rhs_uniform_acu_ucp
	{
		scope=2;
		displayName="Army Combat Uniform (US 'Coffee stain')";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhsusf_army_acu_uniform_coffeestain";
			containerClass="Supply40";
			mass=40;
		};
	};
};