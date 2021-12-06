class CfgPatches
{
	class gordon_reskins_RHSmosin
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_rhs_weap_m38_skin2",
			"FP_GOR_rhs_weap_m38_rail_skin2",
			"rhs_weap_m38_rail"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsgref_c_weapons",
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};

class CfgWeapons
{
	class rhs_weap_m38;
	class FP_GOR_rhs_weap_m38_skin2: rhs_weap_m38
	{
		displayName="Mosin Nagant M38 (Skin 2)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_2_co.paa"};
		hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38.rvmat"};
		baseWeapon="FP_GOR_rhs_weap_m38_skin2";
	};
	
	class rhs_weap_m38_rail: rhs_weap_m38
	{
		hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38.rvmat"};
	};
	class FP_GOR_rhs_weap_m38_rail_skin2: rhs_weap_m38_rail
	{
		displayName="Mosin Nagant M38 (Railed, Skin 2)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_co.paa"};
		hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_2.rvmat"};
		baseWeapon="FP_GOR_rhs_weap_m38_rail_skin2";
	};
};