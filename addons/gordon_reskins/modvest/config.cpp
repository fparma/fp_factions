class CfgPatches
{
	class gordon_reskins_modvest
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_V_CarrierRigKBT_Woodland_F",
			"FP_GOR_V_CarrierRigKBT_light_Woodland_F",
			"FP_GOR_V_CarrierRigKBT_heavy_Woodland_F", 
			"FP_GOR_V_CarrierRigKBT_Tan_F",
			"FP_GOR_V_CarrierRigKBT_light_Tan_F",
			"FP_GOR_V_CarrierRigKBT_heavy_Tan_F",
			"FP_GOR_V_CarrierRigKBT_Coyote_F",
			"FP_GOR_V_CarrierRigKBT_light_Coyote_F",
			"FP_GOR_V_CarrierRigKBT_heavy_Coyote_F",
			"FP_GOR_V_CarrierRigKBT_Black_F",
			"FP_GOR_V_CarrierRigKBT_light_Black_F",
			"FP_GOR_V_CarrierRigKBT_heavy_Black_F",
			"FP_GOR_V_CarrierRigKBT_stripeyarid_F",
			"FP_GOR_V_CarrierRigKBT_light_stripeyarid_F",
			"FP_GOR_V_CarrierRigKBT_heavy_stripeyarid_F",
			"FP_GOR_V_CarrierRigKBT_stripeydesert_F",
			"FP_GOR_V_CarrierRigKBT_light_stripeydesert_F",
			"FP_GOR_V_CarrierRigKBT_heavy_stripeydesert_F",
			"FP_GOR_V_CarrierRigKBT_stripeywoodland_F",
			"FP_GOR_V_CarrierRigKBT_light_stripeywoodland_F",
			"FP_GOR_V_CarrierRigKBT_heavy_stripeywoodland_F",
			"FP_GOR_V_CarrierRigKBT_winter_F",
			"FP_GOR_V_CarrierRigKBT_light_winter_F",
			"FP_GOR_V_CarrierRigKBT_heavy_winter_F",
			"FP_GOR_V_CarrierRigKBT_marpatwd_F",
			"FP_GOR_V_CarrierRigKBT_light_marpatwd_F",
			"FP_GOR_V_CarrierRigKBT_heavy_marpatwd_F",
			"FP_GOR_V_CarrierRigKBT_mtp_F",
			"FP_GOR_V_CarrierRigKBT_light_mtp_F",
			"FP_GOR_V_CarrierRigKBT_heavy_mtp_F",
			"FP_GOR_V_CarrierRigKBT_multicamcontactwoodland_F",
			"FP_GOR_V_CarrierRigKBT_light_multicamcontactwoodland_F",
			"FP_GOR_V_CarrierRigKBT_heavy_multicamcontactwoodland_F",
			"FP_GOR_V_CarrierRigKBT_us4ceswoodland_F",
			"FP_GOR_V_CarrierRigKBT_light_us4ceswoodland_F",
			"FP_GOR_V_CarrierRigKBT_heavy_us4ceswoodland_F",
			"FP_GOR_V_CarrierRigKBT_us4cestransitional_F",
			"FP_GOR_V_CarrierRigKBT_light_us4cestransitional_F",
			"FP_GOR_V_CarrierRigKBT_heavy_us4cestransitional_F",
			"FP_GOR_V_CarrierRigKBT_us4cesarid_F",
			"FP_GOR_V_CarrierRigKBT_light_us4cesarid_F",
			"FP_GOR_V_CarrierRigKBT_heavy_us4cesarid_F",
			"FP_GOR_V_CarrierRigKBT_us4cesocie_F",
			"FP_GOR_V_CarrierRigKBT_light_us4cesocie_F",
			"FP_GOR_V_CarrierRigKBT_heavy_us4cesocie_F"
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
	class V_CarrierRigKBT_01_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class FP_GOR_V_CarrierRigKBT_Woodland_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (M81 Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_woodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Woodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_Woodland_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (M81 Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_woodland_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Woodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_Woodland_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (M81 Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_woodland_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Woodland_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_Tan_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Tan)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Tan_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_Tan_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Tan)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_tan_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Tan_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_Tan_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Tan)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_tan_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Tan_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_Coyote_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Coyote)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_coyote_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Coyote_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_Coyote_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Coyote)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_coyote_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Coyote_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_Coyote_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Coyote)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_coyote_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Coyote_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_Black_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Black)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_black_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Black_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_Black_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Black)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_black_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Black_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_Black_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Black)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_black_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_Black_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_stripeyarid_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (DBC Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeyarid_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeyarid_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_stripeyarid_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (DBC Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeyarid_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeyarid_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_stripeyarid_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (DBC Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeyarid_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeyarid_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_stripeydesert_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (DBC Desert)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeydesert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeydesert_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_stripeydesert_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (DBC Desert)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeydesert_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeydesert_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_stripeydesert_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (DBC Desert)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeydesert_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeydesert_CO.paa"
		};
	}; 
	class FP_GOR_V_CarrierRigKBT_stripeywoodland_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (DBC Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeywoodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeywoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_stripeywoodland_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (DBC Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeywoodland_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeywoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_stripeywoodland_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (DBC Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_stripeywoodland_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_stripeywoodland_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_winter_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Winter)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_winter_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_winter_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_winter_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Winter)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_winter_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_winter_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_winter_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Winter)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_winter_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_winter_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_marpatwd_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (MARPAT Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_marpatwd_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_marpatwd_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_marpatwd_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (MARPAT Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_marpatwd_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_marpatwd_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_marpatwd_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (MARPAT Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_marpatwd_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_marpatwd_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_mtp_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (British MTP)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_mtp_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_mtp_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_mtp_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (British MTP)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_mtp_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_mtp_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_mtp_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (British MTP)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_mtp_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_mtp_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_multicamcontactwoodland_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Contact Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_multicamcontactwoodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_multicamcontactwoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_multicamcontactwoodland_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Contact Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_multicamcontactwoodland_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_multicamcontactwoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_multicamcontactwoodland_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Contact Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_multicamcontactwoodland_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_multicamcontactwoodland_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_us4ceswoodland_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (US4CES Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4ceswoodland_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4ceswoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_us4ceswoodland_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (US4CES Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4ceswoodland_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4ceswoodland_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_us4ceswoodland_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (US4CES Woodland)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4ceswoodland_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4ceswoodland_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_us4cestransitional_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (US4CES Transitional)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cestransitional_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cestransitional_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_us4cestransitional_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (US4CES Transitional)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cestransitional_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cestransitional_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_us4cestransitional_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (US4CES Transitional)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cestransitional_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cestransitional_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_us4cesarid_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (US4CES Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesarid_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesarid_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_us4cesarid_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (US4CES Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesarid_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesarid_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_us4cesarid_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (US4CES Arid)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesarid_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesarid_CO.paa"
		};
	}; 
	
	class FP_GOR_V_CarrierRigKBT_us4cesocie_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (US4CES OCIE)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesocie_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesocie_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_light_us4cesocie_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (US4CES OCIE)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesocie_light_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesocie_CO.paa"
		};
	};
	class FP_GOR_V_CarrierRigKBT_heavy_us4cesocie_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (US4CES OCIE)";
		picture="\fp_factions\gordon_reskins\modvest\data\icons\icon_modvest_us4cesocie_heavy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_us4cesocie_CO.paa"
		};
	}; 
};