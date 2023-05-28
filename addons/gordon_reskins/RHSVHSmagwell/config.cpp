class CfgPatches
{
	class gordon_reskins_RHSVHSmagwell
	{
		units[]={};
		weapons[]=
		{
			"rhs_weap_vhs2_base"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsgref_c_weapons",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class rhs_weap_vhs2_base: Rifle_Base_F
	{
		magazineWell[]=
		{
			"CBA_556x45_G36",
			"STANAG_556x45",
			"STANAG_556x45_Large",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL"
		};
	};
};