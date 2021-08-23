class CfgPatches
{
	class gordon_reskins_cyrus
	{
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_DMR_05_pacifichex_F",
			"FP_GOR_DMR_05_olive_F",
			"FP_GOR_DMR_05_olive2_F"
		};
	};
};
class CfgWeapons
{
	class srifle_DMR_05_blk_F;
	
	class FP_GOR_DMR_05_pacifichex_F: srifle_DMR_05_blk_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_DMR_05_pacifichex_F";
		baseWeapon="FP_GOR_DMR_05_pacifichex_F";
		displayName="Cyrus (Pacific Hex)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\cyrus\data\DMR_05_01_pacific_CO.paa",
			"\FP_Factions\gordon_reskins\cyrus\data\DMR_05_02_pacific_CO.paa"
		};
	};
	
	class FP_GOR_DMR_05_olive_F: srifle_DMR_05_blk_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_DMR_05_olive_F";
		baseWeapon="FP_GOR_DMR_05_olive_F";
		displayName="Cyrus (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\cyrus\data\DMR_05_01_olive_CO.paa",
			"\FP_Factions\gordon_reskins\cyrus\data\DMR_05_02_olive_CO.paa"
		};
	};
};