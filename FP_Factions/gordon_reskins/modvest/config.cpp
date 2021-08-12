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
			"FP_GOR_V_CarrierRigKBT_heavy_marpatwd_F"
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
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\modvest\data\ModVest_marpatwd_CO.paa"
		};
	}; 
};