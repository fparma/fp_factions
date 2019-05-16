class CfgPatches
{
	class gordon_reskins_rahim
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_srifle_DMR_01_F_black"
		};
	};
};
class CfgWeapons
{
	class srifle_DMR_01_F;
	class FP_GOR_srifle_DMR_01_F_black: srifle_DMR_01_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_srifle_DMR_01_F_black";
		baseWeapon="FP_GOR_srifle_DMR_01_F_black";
		displayName="VS-121 (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rahim\data\dmr_01_black_co.paa",
			"\FP_Factions\gordon_reskins\rahim\data\dmr_02_black_co.paa"
		};
	};
};