class CfgPatches
{
	class gordon_reskins_rfdeagle
	{
		units[] = {};
		weapons[]=
		{
			"FP_GOR_hgun_DEagle_chrome_RF"
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"RF_Weapons_Pistols_DEagle"
		};
		skipWhenMissingDependencies = 1;
	};
};

class CfgWeapons
{
	class hgun_DEagle_gold_RF;
	class FP_GOR_hgun_DEagle_chrome_RF: hgun_DEagle_gold_RF
	{
		_generalMacro="FP_GOR_hgun_DEagle_chrome_RF";
		baseWeapon="FP_GOR_hgun_DEagle_chrome_RF";
		picture="\lxRF\weapons_rf\Pistols\DEagle\data\ui\gear_deagle_classic_ca.paa";
		displayName="Desert Eagle Mark XIX L5 (Chrome)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rfdeagle\data\deagle_chrome_co.paa",
			"\FP_Factions\gordon_reskins\rfdeagle\data\deagle_grip_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\rfdeagle\data\deagle_chrome.rvmat"
		};
	};
};
