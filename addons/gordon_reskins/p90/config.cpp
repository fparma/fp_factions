class CfgPatches
{
	class gordon_reskins_p90
	{
		units[] = {};
		weapons[]=
		{
			"FP_GOR_SMG_03C_black_SIGHT",
			"FP_GOR_SMG_03C_khaki_SIGHT",
			"FP_GOR_SMG_03C_camo_SIGHT",
			"FP_GOR_SMG_03C_hex_SIGHT",
			"FP_GOR_SMG_03_black_SIGHT",
			"FP_GOR_SMG_03_khaki_SIGHT",
			"FP_GOR_SMG_03_camo_SIGHT",
			"FP_GOR_SMG_03_hex_SIGHT"
			
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
	class SMG_03C_black;
	class FP_GOR_SMG_03C_black_SIGHT: SMG_03C_black
	{
		_generalMacro="FP_GOR_SMG_03C_black_SIGHT";
		baseWeapon="FP_GOR_SMG_03C_black_SIGHT";
		displayName = "P90 (Black, alternate sight)";
		model = "\FP_Factions\gordon_reskins\p90\data\SMG_03C_SIGHT.p3d";
	};
	
	class SMG_03C_khaki;
	class FP_GOR_SMG_03C_khaki_SIGHT: SMG_03C_khaki
	{
		_generalMacro="FP_GOR_SMG_03C_khaki_SIGHT";
		baseWeapon="FP_GOR_SMG_03C_khaki_SIGHT";
		displayName = "P90 (Khaki, alternate sight)";
		model = "\FP_Factions\gordon_reskins\p90\data\SMG_03C_SIGHT.p3d";
	};
	
	class SMG_03C_camo;
	class FP_GOR_SMG_03C_camo_SIGHT: SMG_03C_camo
	{
		_generalMacro="FP_GOR_SMG_03C_camo_SIGHT";
		baseWeapon="FP_GOR_SMG_03C_camo_SIGHT";
		displayName = "P90 (Camo, alternate sight)";
		model = "\FP_Factions\gordon_reskins\p90\data\SMG_03C_SIGHT.p3d";
	};
	
	class SMG_03C_hex;
	class FP_GOR_SMG_03C_hex_SIGHT: SMG_03C_hex
	{
		_generalMacro="FP_GOR_SMG_03C_hex_SIGHT";
		baseWeapon="FP_GOR_SMG_03C_hex_SIGHT";
		displayName = "P90 (Hex, alternate sight)";
		model = "\FP_Factions\gordon_reskins\p90\data\SMG_03C_SIGHT.p3d";
	};
	
	
	class SMG_03_black;
	class FP_GOR_SMG_03_black_SIGHT: SMG_03_black
	{
		_generalMacro="FP_GOR_SMG_03_black_SIGHT";
		baseWeapon="FP_GOR_SMG_03_black_SIGHT";
		displayName = "PS90 (Black, alternate sight)";
		model = "\FP_Factions\gordon_reskins\P90\data\SMG_03_SIGHT.p3d";
	};
	
	class SMG_03_khaki;
	class FP_GOR_SMG_03_khaki_SIGHT: SMG_03_khaki
	{
		_generalMacro="FP_GOR_SMG_03_khaki_SIGHT";
		baseWeapon="FP_GOR_SMG_03_khaki_SIGHT";
		displayName = "PS90 (Khaki, alternate sight)";
		model = "\FP_Factions\gordon_reskins\P90\data\SMG_03_SIGHT.p3d";
	};
	
	class SMG_03_camo;
	class FP_GOR_SMG_03_camo_SIGHT: SMG_03_camo
	{
		_generalMacro="FP_GOR_SMG_03_camo_SIGHT";
		baseWeapon="FP_GOR_SMG_03_camo_SIGHT";
		displayName = "PS90 (Camo, alternate sight)";
		model = "\FP_Factions\gordon_reskins\P90\data\SMG_03_SIGHT.p3d";
	};
	
	class SMG_03_hex;
	class FP_GOR_SMG_03_hex_SIGHT: SMG_03_hex
	{
		_generalMacro="FP_GOR_SMG_03_hex_SIGHT";
		baseWeapon="FP_GOR_SMG_03_hex_SIGHT";
		displayName = "PS90 (Hex, alternate sight)";
		model = "\FP_Factions\gordon_reskins\P90\data\SMG_03_SIGHT.p3d";
	};
};


