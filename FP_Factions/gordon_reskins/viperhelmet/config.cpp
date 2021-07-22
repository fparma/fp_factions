class CfgPatches
{
	class gordon_reskins_viperhelmet
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_HelmetO_ViperSP_olive",
			"FP_GOR_HelmetO_ViperSP_black",
			"FP_GOR_HelmetO_ViperSP_tan",
			"FP_GOR_HelmetO_ViperSP_white",
			"FP_GOR_HelmetO_ViperSP_hextaiga",
			"FP_GOR_HelmetO_ViperSP_hexurban"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
	};
};
class CfgWeapons
{
	class H_HelmetO_ViperSP_hex_F;

	class FP_GOR_HelmetO_ViperSP_olive: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_olive_co.paa"
		};
	};
	class FP_GOR_HelmetO_ViperSP_black: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_black_co.paa"
		};
	};
	class FP_GOR_HelmetO_ViperSP_tan: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (Tan)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_tan_co.paa"
		};
	};
	class FP_GOR_HelmetO_ViperSP_white: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (White)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_white_co.paa"
		};
	};
	class FP_GOR_HelmetO_ViperSP_hextaiga: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (Taiga Hex)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_hextaiga_co.paa"
		};
	};
	class FP_GOR_HelmetO_ViperSP_hexurban: H_HelmetO_ViperSP_hex_F
	{
		author="Gordon Weedman";
		scope=2;
		displayName="Special Purpose Helmet (Urban Hex)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\viperhelmet\data\headgear_vipersp_hexurban_co.paa"
		};
	};
};