class CfgPatches
{
	class FP_Factions_CUP_CDF
	{
		/// REPLACE with a regular weapon replacement config when CUP releases CDF assets.
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = 
		{
			"CUP_Creatures_People_Military_DummyInfantrySet", 
			"CUP_Weapons_Ammunition"
		};
	};
};
class CfgWeapons
{
	class str_svd;
	class hlc_rifle_aks74u;
	class str_ak74m;
	class str_ak74m_gp;
	class FP_Factions_CUP_CDF_str_svd_pso : str_svd
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_str_pso1";
				slot = "CowsSlot";
			};
		};
	};
	class FP_Factions_CUP_CDF_hlc_aks74un_snds : hlc_rifle_aks74u
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "hlc_muzzle_545SUP_AK";
				slot = "MuzzleSlot";
			};
		};
	};
	class FP_Factions_CUP_CDF_str_ak74m_pso : str_ak74m
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_str_pso1";
				slot = "CowsSlot";
			};
		};
	};
	class FP_Factions_CUP_CDF_str_ak74m_kobra : str_ak74m
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_str_kobra";
				slot = "CowsSlot";
			};
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class SoldierWB;
	class CUP_B_AlicePack_Bedroll;
	class CUP_B_RPGPack_Khaki;
	class B_FieldPack_khk;
	class B_Kitbag_cbr;
	class FP_Factions_CUP_CDF_B_Kitbag_cbr_9K38 : B_Kitbag_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_Igla_M
			{
				magazine = "CUP_Igla_M";
				count = 1;
			};
		};
	};
	class FP_Factions_CUP_CDF_B_RPGPack_Khaki: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7VM_M
			{
				magazine = "CUP_PG7VM_M";
				count = 3;
			};
		};
	};
	class FP_Factions_CUP_CDF_B_FieldPack_khk_PKM : B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100rnd_korob_trs_pkp
			{
				magazine = "100rnd_korob_trs_pkp";
				count = 4;
			};
		};
	};
	class FP_Factions_CUP_CDF_B_AlicePack_Bedroll_RPK : CUP_B_AlicePack_Bedroll
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_45Rnd_762x39_t_rpk
			{
				magazine = "hlc_45Rnd_762x39_t_rpk";
				count = 6;
			};
		};
	};
	class CUP_B_CDF_Soldier_Base : SoldierWB
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['FP_Helmet_PASGT_HelmetCoverTTsKO',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'L_Shemagh_OD', 0.2, 'L_Shemagh_Tan', 0.2, 'PU_shemagh_OD', 0.2, 'PU_shemagh_Tan', 0.2, 'G_Sport_Blackred', 0.2, 'G_Combat', 0.2, 'G_Bandanna_sport', 0.2, 'G_Bandanna_oli', 0.2, 'G_Bandanna_khk', 0.2, 'G_Bandanna_blk', 0.2, 'G_Bandanna_aviator', 0.2, 'G_Balaclava_oli', 0.2, 'G_Aviator', 0.2, 'G_Balaclava_blk', 0.2, 'rhs_balaclava',0.2,'', 0.2, 'rhs_balaclava1_olive',0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		class Wounds
		{
			tex[] = {};
			mat[] = 
			{
				"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
				"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		nakedUniform = "U_BasicBody";
		identityTypes[] = 
		{
			"CUP_D_Language_CZ_ACR",
			"Head_NATO",
			"NoGlasses"
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_CDF_Fatigue_01";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"FP_UniformsEasternEurope\SkinsUniform\u_cdf_cdf.paa"
		};
		weapons[] = 
		{
			"str_ak74m",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"16Rnd_9x21_Mag", 
			"16Rnd_9x21_Mag", 
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnWeapons[] = 
		{
			"str_ak74m",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnMagazines[] = 
		{
			"16Rnd_9x21_Mag", 
			"16Rnd_9x21_Mag", 
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		linkedItems[] = 
		{
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"CUP_V_O_SLA_Flak_Vest03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"CUP_V_O_SLA_Flak_Vest03",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class CUP_B_CDF_Soldier : CUP_B_CDF_Soldier_Base 
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "LOP_U_CDF_Fatigue_01";
	};
	class CUP_B_CDF_Soldier_Light: CUP_B_CDF_Soldier_Base
	{
		uniformClass = "LOP_U_CDF_Fatigue_01_slv";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = 
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"Throw",
			"Put"
		};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class CUP_B_CDF_Soldier_GL: CUP_B_CDF_Soldier_Base
	{
		backpack = "B_AssaultPack_khk";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = 
		{
			"str_ak74m_gp",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"str_ak74m_gp",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_GRD_White",
			"hlc_GRD_White",
			"hlc_GRD_White"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_VOG25_AK",
			"hlc_GRD_White",
			"hlc_GRD_White",
			"hlc_GRD_White"
		};
	};
	class CUP_B_CDF_Militia: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['CUP_H_SLA_Helmet',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'L_Shemagh_OD', 0.2, 'L_Shemagh_Tan', 0.2, 'PU_shemagh_OD', 0.2, 'PU_shemagh_Tan', 0.2, 'G_Sport_Blackred', 0.2, 'G_Combat', 0.2, 'G_Bandanna_sport', 0.2, 'G_Bandanna_oli', 0.2, 'G_Bandanna_khk', 0.2, 'G_Bandanna_blk', 0.2, 'G_Bandanna_aviator', 0.2, 'G_Balaclava_oli', 0.2, 'G_Aviator', 0.2, 'G_Balaclava_blk', 0.2, 'rhs_balaclava',0.2,'', 0.2, 'rhs_balaclava1_olive',0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		linkedItems[] = 
		{
			"CUP_H_SLA_Helmet",
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_H_SLA_Helmet",
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = 
		{
			"hlc_rifle_ak47",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_ak47",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
	};
	class CUP_B_CDF_Medic: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		icon = "iconManMedic";
		backpack = "B_FieldPack_cbr_Medic";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "LOP_U_CDF_Fatigue_01_slv";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap","ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		picture = "pictureHeal";
		scope = 2;
		displayName = "Medic";
		attendant = 1;
		accuracy = 3.7;
		cost = 60000;
		weapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange"
		};
	};
	class CUP_B_CDF_Sniper: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['H_mas_gue_cap_O',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'L_Shemagh_OD', 0.2, 'L_Shemagh_Tan', 0.2, 'PU_shemagh_OD', 0.2, 'PU_shemagh_Tan', 0.2, 'G_Sport_Blackred', 0.2, 'G_Combat', 0.2, 'G_Bandanna_sport', 0.2, 'G_Bandanna_oli', 0.2, 'G_Bandanna_khk', 0.2, 'G_Bandanna_blk', 0.2, 'G_Bandanna_aviator', 0.2, 'G_Balaclava_oli', 0.2, 'G_Aviator', 0.2, 'G_Balaclava_blk', 0.2, 'rhs_balaclava',0.2,'', 0.2, 'rhs_balaclava1_olive',0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		author = "$STR_CUP_AUTHOR_STRING";
		identityTypes[] = 
		{
			"CUP_D_Language_CZ_ACR",
			"Head_NATO",
			"G_NATO_sniper"
		};
		uniformClass = "U_B_GhillieSuit";
		model = "A3\Characters_F\BLUFOR\b_sniper.p3d";
		linkedItems[] = 
		{
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_Ins_Carrier_Rig_Com",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		displayName = "Sniper";
		scope = 2;
		accuracy = 3.9;
		camouflage = 0.5;
		threat[] = {1,0.5,0.1};
		cost = 250000;
		weapons[] = 
		{
			"FP_Factions_CUP_CDF_str_svd_pso",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[] = 
		{
			"FP_Factions_CUP_CDF_str_svd_pso",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[] = 
		{
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_trs_762_svd",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShellOrange"
		};
		respawnMagazines[] = 
		{
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_762_svd",
			"10rnd_trs_762_svd",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShellOrange"
		};
	};
	class CUP_B_CDF_Spotter: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "specop";
		textPlural = "specops";
		nameSound = "veh_infantry_SF_s";
		displayName = "Spotter";
		scope = 2;
		accuracy = 3.9;
		camouflage = 0.5;
		threat[] = {1,0.5,0.1};
		cost = 150000;
		weapons[] = 
		{
			"FP_Factions_CUP_CDF_hlc_aks74un_snds",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"FP_Factions_CUP_CDF_hlc_aks74un_snds",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange",
			"SmokeShell"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange",
			"SmokeShell"
		};
	};
	class CUP_B_CDF_Soldier_Marksman: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "Marksman";
		accuracy = 3.9;
		camouflage = 0.8;
		cost = 200000;
		weapons[] = 
		{
			"FP_Factions_CUP_CDF_str_ak74m_pso",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"CUP_arifle_AKS74_pso",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange",
			"SmokeShell"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShellOrange",
			"SmokeShell"
		};
	};
	class CUP_B_CDF_Soldier_LAT: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		backpack = "FP_Factions_CUP_CDF_B_RPGPack_Khaki";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		icon = "iconManAT";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest01",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] =
		{
			"CUP_V_O_SLA_Flak_Vest01",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "AT Specialist";
		cost = 120000;
		accuracy = 3.5;
		camouflage = 1.6;
		threat[] = {1,0.9,0.1};
		weapons[] = 
		{
			"hlc_rifle_akm",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_akm",
			"CUP_launch_RPG7V",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"CUP_PG7VL_M",
			"CUP_PG7VL_M",
			"CUP_PG7VL_M"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"CUP_PG7VL_M",
			"CUP_PG7VL_M",
			"CUP_PG7VL_M"
		};
	};
	class CUP_B_CDF_Soldier_AA: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		backpack = "FP_Factions_CUP_CDF_B_Kitbag_cbr_9K38";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		icon = "iconManAT";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest03",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "AA Specialist";
		accuracy = 3.5;
		camouflage = 1.7;
		cost = 100000;
		weapons[] = 
		{
			"hlc_rifle_ak74_dirty",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_ak74_dirty",
			"CUP_launch_9K32Strela",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_Strela_2_M"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_Strela_2_M"
		};
		threat[] = 
		{
			1,
			0.5,
			0.9
		};
	};
	class CUP_B_CDF_Soldier_AR: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		backpack = "FP_Factions_CUP_CDF_B_AlicePack_Bedroll_RPK";
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		icon = "iconManMG";
		uniformClass = "LOP_U_CDF_Fatigue_01";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest01",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest01",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "Automatic Rifleman";
		accuracy = 3.7;
		cost = 80000;
		threat[] = {1,0.1,0.4};
		weapons[] = 
		{
			"hlc_rifle_rpk",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_rpk",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] = 
		{
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"hlc_45Rnd_762x39_t_rpk",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class CUP_B_CDF_Soldier_MG: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		cost = 90000;
		accuracy = 3.7;
		displayName = "Machinegunner";
		backpack = "FP_Factions_CUP_CDF_B_FieldPack_khk_PKM";
		weapons[] = 
		{
			"str_pkm_lh",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"str_pkm_lh",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"100rnd_korob_trs_pkp",
			"100rnd_korob_trs_pkp",
			"100rnd_korob_trs_pkp"
		};
		respawnMagazines[] = 
		{
			"100rnd_korob_trs_pkp",
			"100rnd_korob_trs_pkp",
			"100rnd_korob_trs_pkp"
		};
		threat[] = {1,0.1,0.8};
	};
	class CUP_B_CDF_Soldier_TL: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['FP_Helmet_PASGT_HelmetCoverTTsKO',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'L_Shemagh_OD', 0.2, 'L_Shemagh_Tan', 0.2, 'PU_shemagh_OD', 0.2, 'PU_shemagh_Tan', 0.2, 'G_Sport_Blackred', 0.2, 'G_Combat', 0.2, 'G_Bandanna_sport', 0.2, 'G_Bandanna_oli', 0.2, 'G_Bandanna_khk', 0.2, 'G_Bandanna_blk', 0.2, 'G_Bandanna_aviator', 0.2, 'G_Balaclava_oli', 0.2, 'G_Aviator', 0.2, 'G_Balaclava_blk', 0.2, 'rhs_balaclava',0.2,'', 0.2, 'rhs_balaclava1_olive',0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		author = "$STR_CUP_AUTHOR_STRING";
		icon = "iconManLeader";
		backpack = "B_AssaultPack_cbr";
		model = "A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass = "LOP_U_CDF_Fatigue_01_slv";
		linkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_SLA_Flak_Vest02",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "Team Leader";
		accuracy = 3.6;
		cost = 350000;
		weapons[] = 
		{
			"FP_Factions_CUP_CDF_str_ak74m_kobra",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"FP_Factions_CUP_CDF_str_ak74m_kobra",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellOrange",
			"SmokeShellBlue"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellOrange",
			"SmokeShellBlue"
		};
	};
	class CUP_B_CDF_Officer: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['H_mas_gue_cap_O',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'G_Sport_Blackred', 0.2, 'G_Aviator', 0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "officer";
		textPlural = "officers";
		nameSound = "veh_infantry_officer_s";
		identityTypes[] = 
		{
			"CUP_D_Language_CZ_ACR",
			"Head_NATO",
			"NoGlasses"
		};
		icon = "iconManOfficer";
		linkedItems[] = 
		{
			"V_BandollierB_rgr",
			"H_mas_gue_cap_O",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"V_BandollierB_rgr",
			"H_mas_gue_cap_O",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "Officer";
		accuracy = 3.6;
		camouflage = 1.2;
		cost = 700000;
		weapons[] = 
		{
			"hlc_rifle_aks74u",
			"RH_mak",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_aks74u",
			"RH_mak",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak"
		};
	};
	class CUP_B_CDF_Commander: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['H_mas_gue_cap_O',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'G_Sport_Blackred', 0.2, 'G_Aviator', 0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2 ]] call BIS_fnc_unitHeadgear";
        };
		author = "$STR_CUP_AUTHOR_STRING";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "officer";
		textPlural = "officers";
		nameSound = "veh_infantry_officer_s";
		identityTypes[] = {"CUP_D_Language_CZ_ACR","Head_NATO","G_NATO_casual"};
		icon = "iconManOfficer";
		linkedItems[] = 
		{
			"V_BandollierB_rgr",
			"H_mas_gue_cap_O",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"V_BandollierB_rgr",
			"H_mas_gue_cap_O",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		scope = 2;
		displayName = "General";
		accuracy = 3.6;
		camouflage = 1.2;
		cost = 900000;
		weapons[] = 
		{
			"hlc_rifle_aks74u",
			"RH_mak",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_aks74u",
			"RH_mak",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak",
			"RH_8Rnd_9x18_Mak"
		};
	};
	class CUP_B_CDF_Pilot: CUP_B_CDF_Soldier_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['H_PilotHelmetFighter_B',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'rhs_balaclava', 0.2, 'rhs_balaclava1_olive', 0.2,'G_Balaclava_blk',0.2,'G_Balaclava_oli',0.2, '', 0.2 ]] call BIS_fnc_unitHeadgear";
        };
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_pilot_s"};
				speechPlural[] = {"veh_infantry_pilot_p"};
			};
		};
		textSingular = "pilot";
		textPlural = "pilots";
		nameSound = "veh_infantry_pilot_s";
		uniformClass = "U_B_PilotCoveralls";
		linkedItems[] = 
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		accuracy = 3.2;
		camouflage = 1.2;
		cost = 20000;
		scope = 2;
		displayName = "Pilot";
		weapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"SmokeShellOrange",
			"SmokeShellBlue"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"SmokeShellOrange",
			"SmokeShellBlue"
		};
	};
	class CUP_B_CDF_Crew: CUP_B_CDF_Soldier_Base
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['usm_helmet_cvc',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'rhs_balaclava', 0.2, 'rhs_balaclava1_olive', 0.2,'G_Balaclava_blk',0.2,'G_Balaclava_oli',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		uniformClass = "LOP_U_CDF_Fatigue_01";
		author = "$STR_CUP_AUTHOR_STRING";
		linkedItems[] = 
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"usm_helmet_cvc",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"CUP_V_O_Ins_Carrier_Rig_Light",
			"usm_helmet_cvc",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		accuracy = 3.4;
		camouflage = 1.4;
		cost = 20000;
		scope = 2;
		displayName = "Crewman";
		weapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_aks74u",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5"
		};
	};
	class CUP_B_CDF_Engineer: CUP_B_CDF_Soldier
	{
		class EventHandlers: EventHandlers
        { 
            init = "[_this select 0, ['FP_Helmet_PASGT_HelmetCoverTTsKO',1],['', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, '', 0.2, 'L_Shemagh_OD', 0.2, 'L_Shemagh_Tan', 0.2, 'PU_shemagh_OD', 0.2, 'PU_shemagh_Tan', 0.2, 'G_Sport_Blackred', 0.2, 'G_Combat', 0.2, 'G_Bandanna_sport', 0.2, 'G_Bandanna_oli', 0.2, 'G_Bandanna_khk', 0.2, 'G_Bandanna_blk', 0.2, 'G_Bandanna_aviator', 0.2, 'G_Balaclava_oli', 0.2, 'G_Aviator', 0.2, 'G_Balaclava_blk', 0.2, 'rhs_balaclava',0.2,'', 0.2, 'rhs_balaclava1_olive',0.2,'G_Squares_Tinted',0.2,'G_Tactical_Clear',0.2, '', 0.2]] call BIS_fnc_unitHeadgear";
        };
		model = "A3\Characters_F_Beta\INDEP\ia_soldier_02";
		uniformClass = "LOP_U_CDF_Fatigue_01_slv";
		backpack = "B_Carryall_cbr_Eng";
		linkedItems[] = 
		{
			"V_Chestrig_rgr",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[] = 
		{
			"V_Chestrig_rgr",
			"FP_Helmet_PASGT_HelmetCoverTTsKO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		weapons[] = 
		{
			"hlc_rifle_ak74_dirty",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"hlc_rifle_ak74_dirty",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_Mine_M",
			"CUP_Mine_M"
		};
		respawnMagazines[] = 
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_t_AK",
			"CUP_HandGrenade_RGD5",
			"CUP_HandGrenade_RGD5",
			"CUP_Mine_M",
			"CUP_Mine_M"
		};
	};
};