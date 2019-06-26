class CfgPatches
{
	class gordon_reskins_alicepack
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_alicepack_woodland",
			"FP_GOR_alicepack_chocchip",
			"FP_GOR_alicepack_coffee"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsgref_main",
			"rhsgref_c_weapons",
			"rhs_c_troops",
			"A3_Characters_F"
		};
	};
};
class CfgVehicles
{	
	class rhsgref_hidf_alicepack;
	class FP_GOR_alicepack_woodland: rhsgref_hidf_alicepack
	{
		author="Gordon Weedman";
		displayName="ALICE Pack (M81 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\alicepack\data\alicepack_woodland_co.paa"
		};
	};
	class FP_GOR_alicepack_chocchip: rhsgref_hidf_alicepack
	{
		author="Gordon Weedman";
		displayName="ALICE Pack (6-Color Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\alicepack\data\alicepack_chocchip_co.paa"
		};
	};
	class FP_GOR_alicepack_coffee: rhsgref_hidf_alicepack
	{
		author="Gordon Weedman";
		displayName="ALICE Pack (3-Color Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\alicepack\data\alicepack_coffee_co.paa"
		};
	};
}; 