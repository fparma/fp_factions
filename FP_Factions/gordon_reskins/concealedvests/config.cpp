class CfgPatches
{
	class gordon_reskins_modvest
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_V_TacVest_inv",
			"FP_GOR_V_TacVest_inv_space",
			"FP_GOR_V_PlateCarrier2_inv", 
			"FP_GOR_V_PlateCarrier2_inv_space"
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
	class V_TacVest_oli;
	class FP_GOR_V_TacVest_base: V_TacVest_oli
	{
		scope = 0;
		class ItemInfo;
	};
	class FP_GOR_V_TacVest_inv_space: FP_GOR_V_TacVest_base
	{
		author = "Gordon Weedman";
		_generalMacro = "V_TacVest_oli";
		scope = 2;
		displayName = "Concealed kevlar vest (Carry space)";
		class ItemInfo: ItemInfo
		{
			author = "Gordon Weedman";
			uniformModel = "\A3\Weapons_F\empty.p3d";
		};
		model = "\A3\Weapons_F\empty.p3d";
	};
	class FP_GOR_V_TacVest_inv: FP_GOR_V_TacVest_base
	{
		author = "Gordon Weedman";
		_generalMacro = "V_TacVest_oli";
		scope = 2;
		displayName = "Concealed kevlar vest";
		class ItemInfo: ItemInfo
		{
			author = "Gordon Weedman";
			containerClass = "Supply0";
			uniformModel = "\A3\Weapons_F\empty.p3d";
		};
		model = "\A3\Weapons_F\empty.p3d";
	};
	
	class V_PlateCarrier2_rgr;
	class FP_GOR_V_PlateCarrier2_base: V_PlateCarrier2_rgr
	{
		scope = 0;
		class ItemInfo;
	};
	class FP_GOR_V_PlateCarrier2_inv_space: FP_GOR_V_PlateCarrier2_base
	{
		author = "Gordon Weedman";
		_generalMacro = "V_PlateCarrier2_rgr";
		scope = 2;
		displayName = "Concealed plate carrier (Carry space)";
		class ItemInfo: ItemInfo
		{
			author = "Gordon Weedman";
			uniformModel = "\A3\Weapons_F\empty.p3d";
		};
		model = "\A3\Weapons_F\empty.p3d";
	};
	
	class FP_GOR_V_PlateCarrier2_inv: FP_GOR_V_PlateCarrier2_base
	{
		author = "Gordon Weedman";
		_generalMacro = "V_PlateCarrier2_rgr";
		scope = 2;
		displayName = "Concealed plate carrier";
		class ItemInfo: ItemInfo
		{
			author = "Gordon Weedman";
			containerClass = "Supply0";
			uniformModel = "\A3\Weapons_F\empty.p3d";
		};
		model = "\A3\Weapons_F\empty.p3d";
	};
};