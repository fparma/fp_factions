class CfgPatches
{
	class gordon_reskins_cbrn
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_CBRN_Suit_01_woodland",
			"FP_GOR_CBRN_Suit_01_stripeyarid",
			"FP_GOR_CBRN_Suit_01_stripeydesert",
			"FP_GOR_CBRN_Suit_01_stripeywoodland",
			"FP_GOR_CBRN_Suit_01_emr",
			"FP_GOR_CBRN_Suit_01_flora",
			"FP_GOR_CBRN_Suit_01_olive",
			"FP_GOR_CBRN_Suit_01_oliveb",
			"FP_GOR_CBRN_Suit_01_yellow",
			"FP_GOR_CBRN_Suit_01_yellowb",
			"FP_GOR_CBRN_Suit_01_orange",
			"FP_GOR_CBRN_Suit_01_orangeb"
		
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgVehicles
{	
	class B_CBRN_Man_Oversuit_01_MTP_F;
	
	class FP_GOR_CBRN_Oversuit_woodland: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_woodland";
		displayName="CBRN Suit (M81 Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_woodland_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_stripeyarid: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_stripeyarid";
		displayName="CBRN Suit (DBC Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeyarid_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_stripeydesert: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_stripeydesert";
		displayName="CBRN Suit (DBC Desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeydesert_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_stripeywoodland: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_stripeywoodland";
		displayName="CBRN Suit (DBC Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeywoodland_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_emr: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_emr";
		displayName="CBRN Suit (EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_emr_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_flora: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_flora";
		displayName="CBRN Suit (Flora)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_flora_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_olive: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_olive";
		displayName="CBRN Suit (Olive)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_olive_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_oliveb: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_oliveb";
		displayName="CBRN Suit (Olive w/ details)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_oliveb_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_yellow: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_yellow";
		displayName="CBRN Suit (Yellow)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_yellow_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_yellowb: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_yellowb";
		displayName="CBRN Suit (Yellow w/ details)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_yellowb_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_orange: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_orange";
		displayName="CBRN Suit (Orange)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_orange_CO.paa"
		};
	};
	class FP_GOR_CBRN_Oversuit_orangeb: B_CBRN_Man_Oversuit_01_MTP_F
	{
		author="Gordon Weedman";
		_generalMacro="B_CBRN_Man_Oversuit_01_MTP_F";
		scope=1;
		uniformClass="FP_GOR_CBRN_Suit_01_orangeb";
		displayName="CBRN Suit (Orange w/ details)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_orangeb_CO.paa"
		};
	};
};

class CfgWeapons			
{
	class U_B_CBRN_Suit_01_MTP_F;
	class UniformItem;
	
	class FP_GOR_CBRN_Suit_01_woodland: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (M81 Woodland)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_woodland_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_woodland";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_stripeyarid: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (DBC Arid)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeyarid_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_stripeyarid";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_stripeydesert: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (DBC Desert)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeydesert_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_stripeydesert";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_stripeywoodland: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (DBC Woodland)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_stripeywoodland_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_stripeywoodland";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_emr: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (EMR)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_emr_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_emr";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_flora: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Flora)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_flora_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_flora";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_olive: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Olive)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_olive_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_olive";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_oliveb: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Olive w/ details)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_oliveb_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_oliveb";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_yellow: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Yellow)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_yellow_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_yellow";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_yellowb: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Yellow w/ details)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_yellowb_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_yellowb";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_orange: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Orange)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_orange_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_orange";
			containerClass="Supply30";
			mass=45;
		};
	};
	class FP_GOR_CBRN_Suit_01_orangeb: U_B_CBRN_Suit_01_MTP_F
	{
		scope=2;
		displayName="CBRN Suit (Orange w/ details)";
		author="Gordon Weedman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\CBRN\data\CBRN_Suit_orangeb_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CBRN_Oversuit_orangeb";
			containerClass="Supply30";
			mass=45;
		};
	};
};
	