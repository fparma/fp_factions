class CfgPatches
{
	class gordon_reskins_baseballcap
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_H_Cap_realtree",
			"FP_GOR_H_Cap_realtreemesh"
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
	class H_Cap_red;
	class FP_GOR_H_Cap_realtree: H_Cap_red 
	{
		author = "Gordon Weedman";
		scope = 2;
		displayName = "Baseball cap (Realtree)";
		picture="\fp_factions\gordon_reskins\baseballcap\data\icons\icon_cap_realtree_ca.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\baseballcap\data\cap_realtree_co.paa"};
	};
	class FP_GOR_H_Cap_realtreemesh: H_Cap_red 
	{
		author = "Gordon Weedman";
		scope = 2;
		displayName = "Baseball cap (Realtree, mesh)";
		picture="\fp_factions\gordon_reskins\baseballcap\data\icons\icon_cap_realtreemesh_ca.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\baseballcap\data\cap_realtreemesh_co.paa"};
	};
};