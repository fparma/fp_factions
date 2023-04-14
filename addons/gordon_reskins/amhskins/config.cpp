class CfgPatches
{
	class gordon_reskins_amhskins
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_H_HelmetHBK_tan_F",
			"FP_GOR_H_HelmetHBK_headset_tan_F",
			"FP_GOR_H_HelmetHBK_ear_tan_F",
			"FP_GOR_H_HelmetHBK_chops_tan_F",
			"FP_GOR_H_HelmetHBK_coyote_F",
			"FP_GOR_H_HelmetHBK_headset_coyote_F",
			"FP_GOR_H_HelmetHBK_ear_coyote_F",
			"FP_GOR_H_HelmetHBK_chops_coyote_F",
			"FP_GOR_H_HelmetHBK_Black_F",
			"FP_GOR_H_HelmetHBK_headset_Black_F",
			"FP_GOR_H_HelmetHBK_ear_Black_F",
			"FP_GOR_H_HelmetHBK_chops_Black_F"
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
	class FP_GOR_H_HelmetHBK_tan_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_tan_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Tan)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_tan_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_headset_tan_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_tan_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Tan, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_tan_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_ear_tan_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_tan_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Tan, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_tan_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_chops_tan_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_tan_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Tan, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_tan_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_coyote_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_coyote_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Coyote)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_coyote_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_headset_coyote_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_coyote_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Coyote, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_coyote_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_ear_coyote_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_coyote_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Coyote, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_coyote_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_chops_coyote_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_coyote_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Coyote, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_coyote_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_Black_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_Black_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Black)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Black_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_headset_Black_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_Black_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Black, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Black_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_ear_Black_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_Black_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Black, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Black_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_chops_Black_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_Black_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Black, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Black_CO.paa"};
	};
	
	class FP_GOR_H_HelmetHBK_AAF_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_headset_AAF_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_ear_AAF_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
	};
	class FP_GOR_H_HelmetHBK_chops_AAF_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
	};
};