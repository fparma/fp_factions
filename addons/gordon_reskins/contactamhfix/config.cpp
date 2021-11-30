class CfgPatches
{
	class gordon_reskins_contactamhfix
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_H_HelmetHBK_geo_F",
			"FP_GOR_H_HelmetHBK_headset_olive_F",
			"FP_GOR_H_HelmetHBK_ear_olive_F",
			"FP_GOR_H_HelmetHBK_chops_olive_F"
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
	class H_HelmetHBK_F;
	class H_HelmetHBK_headset_F;
	class H_HelmetHBK_ear_F;
	class H_HelmetHBK_chops_F;
	class FP_GOR_H_HelmetHBK_geo_F: H_HelmetHBK_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "FP_GOR_H_HelmetHBK_geo_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Geometric)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_co.paa"};
	};
	class FP_GOR_H_HelmetHBK_headset_olive_F: H_HelmetHBK_headset_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_olive_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Olive, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
	class FP_GOR_H_HelmetHBK_ear_olive_F: H_HelmetHBK_ear_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_olive_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Olive, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
	class FP_GOR_H_HelmetHBK_chops_olive_F: H_HelmetHBK_chops_F
	{
		author = "Bohemia Interactive";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_olive_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Olive, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\headgear\data\h_helmethbk_01_olive_co.paa"};
	};
};