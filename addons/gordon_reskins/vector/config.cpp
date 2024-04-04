class CfgPatches
{
	class gordon_reskins_vector
	{
		units[] = {};
		weapons[]=
		{
			"FP_GOR_SMG_01_Black_F",
			"FP_GOR_SMG_01_Olive_F",
			"FP_GOR_SMG_01_White_F"
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgWeapons
{
	class SMG_01_F;
	class FP_GOR_SMG_01_Black_F: SMG_01_F 
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_SMG_01_Black_F";
		baseWeapon="FP_GOR_SMG_01_Black_F";
		displayName="Vector SMG (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vector\data\SMG_01_black_co.paa",
			"\a3\weapons_f\data\vectoratt_co.paa",
			"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
	};
	
	class FP_GOR_SMG_01_Olive_F: SMG_01_F 
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_SMG_01_Olive_F";
		baseWeapon="FP_GOR_SMG_01_Olive_F";
		displayName="Vector SMG (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vector\data\SMG_01_olive_co.paa",
			"\a3\weapons_f\data\vectoratt_co.paa",
			"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
	};
	
	class FP_GOR_SMG_01_White_F: SMG_01_F 
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_SMG_01_White_F";
		baseWeapon="FP_GOR_SMG_01_White_F";
		displayName="Vector SMG (White)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vector\data\SMG_01_white_co.paa",
			"\a3\weapons_f\data\vectoratt_co.paa",
			"\a3\weapons_f\acc\data\battlesight_co.paa"
		};
	};
};


