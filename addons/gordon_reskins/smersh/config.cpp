class CfgPatches
{
	class gordon_reskins_smersh
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_V_SmershVest_Olive_F",
			"FP_GOR_V_SmershVest_Olive_radio_F"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};
class CfgWeapons
{
	class V_SmershVest_01_F;
	class V_SmershVest_01_radio_F;
	class FP_GOR_V_SmershVest_Olive_F: V_SmershVest_01_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_SmershVest_01_F";
		scope = 2;
		displayName = "Smersh Vest (Olive)";
		picture="\fp_factions\gordon_reskins\smersh\data\icons\icon_smersh_olive_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\smersh\data\smersh_Olive_co.paa",
			"\FP_Factions\gordon_reskins\smersh\data\smersh_Olive_miscellaneous_co.paa"
		};
	};
	class FP_GOR_V_SmershVest_Olive_radio_F: V_SmershVest_01_radio_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_SmershVest_01_radio_F";
		scope = 2;
		displayName = "Smersh Vest (Olive, Tactical Radio)";
		picture="\fp_factions\gordon_reskins\smersh\data\icons\icon_smersh_olive_radio_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\smersh\data\smersh_Olive_co.paa",
			"\FP_Factions\gordon_reskins\smersh\data\smersh_Olive_miscellaneous_co.paa"
		};
	};
};