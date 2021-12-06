class CfgPatches
{
	class gordon_reskins_navid
	{
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_MMG_01_pacifichex_F",
			"FP_GOR_MMG_01_olive_F",
			"FP_GOR_MMG_01_black_F"
		};
	};
};
class CfgWeapons
{
	class MMG_01_hex_F;
	
	class FP_GOR_MMG_01_pacifichex_F: MMG_01_hex_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_MMG_01_pacifichex_F";
		baseWeapon="FP_GOR_MMG_01_pacifichex_F";
		displayName="HK121 (Pacific Hex)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_01_PACIFICHEX_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_02_PACIFICHEX_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_03_PACIFICHEX_CO.paa"
		};
	};
	
	class FP_GOR_MMG_01_olive_F: MMG_01_hex_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_MMG_01_olive_F";
		baseWeapon="FP_GOR_MMG_01_olive_F";
		displayName="HK121 (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_01_olive_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_02_olive_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_03_olive_CO.paa"
		};
	};
	
	class FP_GOR_MMG_01_black_F: MMG_01_hex_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_MMG_01_black_F";
		baseWeapon="FP_GOR_MMG_01_black_F";
		displayName="HK121 (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_01_black_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_02_black_CO.paa",
			"\FP_Factions\gordon_reskins\navid\data\MMG_01_03_black_CO.paa"
		};
	};
};