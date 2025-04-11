class CfgPatches
{
	class gordon_reskins_bodywarmer
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_V_Pocketed_realtree_F",
			"FP_GOR_V_Pocketed_safetyorange_F"
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
	class V_Pocketed_olive_F;
	class FP_GOR_V_Pocketed_realtree_F: V_Pocketed_olive_F
	{
		author = "Gordon Weedman";
		scope = 2;
		displayName = "Multi-Pocket Vest (Realtree)";
		picture="\fp_factions\gordon_reskins\bodywarmer\data\icons\icon_bodywarmer_realtree_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\bodywarmer\data\V_Pocketed_cloth_realtree_co.paa"
		};
	};
	
	class FP_GOR_V_Pocketed_safetyorange_F: V_Pocketed_olive_F
	{
		author = "Gordon Weedman";
		scope = 2;
		displayName = "Multi-Pocket Vest (Orange)";
		picture="\fp_factions\gordon_reskins\bodywarmer\data\icons\icon_bodywarmer_safetyorange_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\bodywarmer\data\V_Pocketed_cloth_safetyorange_co.paa"
		};
	};
};