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
			"FP_GOR_H_HelmetHBK_chops_Black_F",
			"FP_GOR_H_HelmetHBK_AAF_F",
			"FP_GOR_H_HelmetHBK_headset_AAF_F",
			"FP_GOR_H_HelmetHBK_ear_AAF_F",
			"FP_GOR_H_HelmetHBK_chops_AAF_F",
			"FP_GOR_H_HelmetHBK_Woodland_F",
			"FP_GOR_H_HelmetHBK_headset_Woodland_F",
			"FP_GOR_H_HelmetHBK_ear_Woodland_F",
			"FP_GOR_H_HelmetHBK_chops_stripeywoodland_F",
			"FP_GOR_H_HelmetHBK_headset_stripeywoodland_F",
			"FP_GOR_H_HelmetHBK_ear_stripeywoodland_F",
			"FP_GOR_H_HelmetHBK_chops_stripeywoodland_F",
			"FP_GOR_H_HelmetHBK_chops_stripeyarid_F",
			"FP_GOR_H_HelmetHBK_headset_stripeyarid_F",
			"FP_GOR_H_HelmetHBK_ear_stripeyarid_F",
			"FP_GOR_H_HelmetHBK_chops_stripeyarid_F",
			"FP_GOR_H_HelmetHBK_chops_stripeydesert_F",
			"FP_GOR_H_HelmetHBK_headset_stripeydesert_F",
			"FP_GOR_H_HelmetHBK_ear_stripeydesert_F",
			"FP_GOR_H_HelmetHBK_chops_stripeydesert_F"
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
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_AAF_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_AAF_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_AAF_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_AAF_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (AAF, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_AAF_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_Woodland_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_Woodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (M81 Woodland)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Woodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_Woodland_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_Woodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (M81 Woodland, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Woodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_Woodland_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_Woodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (M81 Woodland, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Woodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_Woodland_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_Woodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (M81 Woodland, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_Woodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_stripeywoodland_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_stripeywoodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Woodland)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeywoodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_stripeywoodland_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_stripeywoodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Woodland, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeywoodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_stripeywoodland_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_stripeywoodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Woodland, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeywoodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_stripeywoodland_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_stripeywoodland_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Woodland, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeywoodland_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_stripeyarid_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_stripeyarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Arid)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeyarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_stripeyarid_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_stripeyarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Arid, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeyarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_stripeyarid_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_stripeyarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Arid, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeyarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_stripeyarid_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_stripeyarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Arid, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeyarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_stripeydesert_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_stripeydesert_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Desert)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeydesert_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_stripeydesert_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_stripeydesert_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Desert, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeydesert_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_stripeydesert_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_stripeydesert_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Desert, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeydesert_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_stripeydesert_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_stripeydesert_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DBC Desert, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_stripeydesert_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_multicam_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_multicam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_multicam_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_multicam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_multicam_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_multicam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_multicam_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_multicam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_multicamarid_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_multicamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Arid)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_multicamarid_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_multicamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Arid, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_multicamarid_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_multicamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Arid, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_multicamarid_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_multicamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Arid, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_multicamjungle_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_multicamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Tropic)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_multicamjungle_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_multicamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Tropic, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_multicamjungle_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_multicamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Tropic, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_multicamjungle_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_multicamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Tropic, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_multicamblack_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_multicamblack_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Black)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamblack_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_multicamblack_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_multicamblack_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Black, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamblack_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_multicamblack_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_multicamblack_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Black, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamblack_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_multicamblack_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_multicamblack_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (Multicam Black, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_multicamblack_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_dancam_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_dancam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_dancam_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_dancam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_dancam_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_dancam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_dancam_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_dancam_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancam_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_dancamarid_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_dancamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Arid)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_dancamarid_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_dancamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Arid, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_dancamarid_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_dancamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Arid, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_dancamarid_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_dancamarid_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Arid, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamarid_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	
	class FP_GOR_H_HelmetHBK_dancamjungle_F: H_HelmetHBK_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_dancamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Tropic)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_headset_dancamjungle_F: H_HelmetHBK_headset_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_headset_dancamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Tropic, headset)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_ear_dancamjungle_F: H_HelmetHBK_ear_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_ear_dancamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Tropic, ear protectors)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
	class FP_GOR_H_HelmetHBK_chops_dancamjungle_F: H_HelmetHBK_chops_F
	{
		author = "Gordon Weedman";
		_generalMacro = "FP_GOR_H_HelmetHBK_chops_dancamjungle_F";
		scope = 2;
		displayName = "Advanced Modular Helmet (DanCam Tropic, chops)";
		picture = "\a3\Characters_F_Enoch\Headgear\data\UI\icon_H_HelmetHBK_F_CA.paa";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\amhskins\data\ModHelmet_dancamjungle_CO.paa"};
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\amhskins\data\H_HelmetHBK_01.rvmat"};
	};
};