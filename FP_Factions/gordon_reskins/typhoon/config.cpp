class CfgPatches
{
	class gordon_reskins_typhoon
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_Truck_03_ammo_F",
			"FP_GOR_B_Truck_03_covered_F",
			"FP_GOR_B_Truck_03_device_F",
			"FP_GOR_B_Truck_03_fuel_F",
			"FP_GOR_B_Truck_03_medical_F",
			"FP_GOR_B_Truck_03_repair_F",
			"FP_GOR_B_Truck_03_transport_F",
			"FP_GOR_B_T_Truck_03_ammo_F",
			"FP_GOR_B_T_Truck_03_covered_F",
			"FP_GOR_B_T_Truck_03_device_F",
			"FP_GOR_B_T_Truck_03_fuel_F",
			"FP_GOR_B_T_Truck_03_medical_F",
			"FP_GOR_B_T_Truck_03_repair_F",
			"FP_GOR_B_T_Truck_03_transport_F",
			"FP_GOR_I_Truck_03_ammo_F",
			"FP_GOR_I_Truck_03_covered_F",
			"FP_GOR_I_Truck_03_device_F",
			"FP_GOR_I_Truck_03_fuel_F",
			"FP_GOR_I_Truck_03_medical_F",
			"FP_GOR_I_Truck_03_repair_F",
			"FP_GOR_I_Truck_03_transport_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Soft_F",
			"A3_Soft_F_Beta"
		};
	};
};
class CfgVehicles
{
	class Truck_03_base_F;
	class O_Truck_03_transport_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_transport_F: O_Truck_03_transport_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_transport_F: O_Truck_03_transport_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_transport_F: O_Truck_03_transport_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa"
		};
	};
	class O_Truck_03_covered_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_AAF_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_covered_F: O_Truck_03_covered_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_blufor_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_covered_F: O_Truck_03_covered_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_blufor_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_covered_F: O_Truck_03_covered_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_AAF_co.paa"
		};
	};
	class O_Truck_03_repair_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_AAF_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_repair_F: O_Truck_03_repair_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_blufor_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_repair_F: O_Truck_03_repair_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_bluforpacific_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_repair_F: O_Truck_03_repair_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ammo_AAF_co.paa"
		};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_csatgrey_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_black_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_winter_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae1_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae2_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae3_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_t-pat_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_ammo_F: O_Truck_03_ammo_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_ammo_F: O_Truck_03_ammo_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_ammo_F: O_Truck_03_ammo_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_colors_04_co.paa"
		};
	};
	class O_Truck_03_fuel_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_AAF_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_fuel_F: O_Truck_03_fuel_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_blufor_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_fuel_F: O_Truck_03_fuel_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_bluforpacific_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_fuel_F: O_Truck_03_fuel_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_fuel_AAF_co.paa"
		};
	};
	class O_Truck_03_medical_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_csatgrey_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_blufor_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_bluforpacific_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_black_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_winter_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae1_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae2_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_rae3_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_t-pat_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_AAF_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_medical_F: O_Truck_03_medical_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_blufor_co.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_medical_F: O_Truck_03_medical_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_bluforpacific_co.paa"
		};
	};
	class FP_GOR_I_Truck_03_medical_F: O_Truck_03_medical_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cover_AAF_co.paa"
		};
	};
	class O_Truck_03_device_F: Truck_03_base_F
	{
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Greyhex
			{
				displayname = "Grey Hex";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_csatgrey_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_csatgrey_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_black_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_black_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_winter_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_winter_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae1_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae1_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae2_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae2_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_rae3_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_rae3_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_t-pat_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
					"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
	};
	class FP_GOR_B_Truck_03_device_F: O_Truck_03_device_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_F";
		crew = "B_soldier_f";
		typicalCargo[] = 
		{
			"B_soldier_f",
			"B_soldier_f"
		};
		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_blufor_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_blufor_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	class FP_GOR_B_T_Truck_03_device_F: O_Truck_03_device_F
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_soldier_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f",
			"B_T_soldier_f"
		};
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_bluforpacific_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_bluforpacific_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
	class FP_GOR_I_Truck_03_device_F: O_Truck_03_device_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_soldier_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F",
			"I_Soldier_lite_F"
		};
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext01_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_ext02_AAF_co.paa",
			"\FP_Factions\gordon_reskins\typhoon\data\Truck_03_cargo_AAF_co.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
	};
};