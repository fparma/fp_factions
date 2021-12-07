class CfgPatches
{
	class gordon_reskins_negev
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_LMG_Zafir_F_black"
		};
	};
};
class CfgWeapons
{
	class LMG_Zafir_F;
	class FP_GOR_LMG_Zafir_F_black: LMG_Zafir_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Zafir_F_black";
		baseWeapon="FP_GOR_LMG_Zafir_F_black";
		displayName="Negev NG7 (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\negev\data\Zafir01_black_CO.paa",
			"\FP_Factions\gordon_reskins\negev\data\Zafir02_black_CO.paa"
		};
	};
};