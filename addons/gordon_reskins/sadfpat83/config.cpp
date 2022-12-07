class CfgPatches
{
	class gordon_reskins_sadf_pat83
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_vest_SADF_pat83_nutria",
			"FP_GOR_vest_SADF_pat83_olivedrab"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder",
			"sim_extra_gear"
		};
	};
};
class CfgWeapons
{
	class Vest_Camo_Base;
	class vest_SADF_pat83: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class FP_GOR_vest_SADF_pat83_nutria: vest_SADF_pat83
	{
		author = "Simkas & Gordon Weedman";
		_generalMacro = "vest_SADF_pat83";
		scope = 2;
		displayName = "Pattern 83 LBV (Nutria brown)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\sadfpat83\data\SADF_pat83_nutria_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\FP_Factions\gordon_reskins\sadfpat83\data\SADF_pat83_nutria_co.paa"
			};
		};
	};
	class FP_GOR_vest_SADF_pat83_olivedrab: FP_GOR_vest_SADF_pat83_nutria
	{
		displayName = "Pattern 83 LBV (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\sadfpat83\data\SADF_pat83_olivedrab_co.paa"
		};
	};
};