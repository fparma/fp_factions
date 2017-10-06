// CfgVehicles for FPX_O_CCR
class FPX_O_NVA_Soldier_Base : O_T_Officer_F {
	author = "FPX Mod Team";
	scope = 1;
	side = 0;
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	faction = "FPX_O_NVA";
	displayName = "Soldier(unarmed)";
	uniformClass = "FP_Uniform_grn";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Soldiers";
	hiddenSelections[] = {"camo", "insignia", "Clan"};
	hiddenSelectionsTextures[] = {"FP_Uniforms\FP_UniformsEverywhereElse\SkinsUniform\officer_grn.paa"};
	backpack="";
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	weapons[] = {"Put","Throw"};
	respawnwWeapons[] = {"Put","Throw"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
	respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
};
class FPX_O_NVA_VC_Base : I_C_Soldier_Para_5_F {
	author = "FPX Mod Team";
	scope = 1;
	side = 0;
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	faction = "FPX_O_NVA";
	displayName = "Vietcong";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Vietcong";
	backpack="";
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	weapons[] = {"Put","Throw"};
	respawnwWeapons[] = {"Put","Throw"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {"ItemCompass"};
	respawnLinkedItems[] = {"ItemCompass"};
};
class FPX_O_NVA_VC_Guerrila : FPX_O_NVA_VC_Base {
	scope = 2;
	displayName = "Vietcong(SKS)";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"str_sks_old","Put","Throw"};
	respawnwWeapons[] = {"str_sks_old","Put","Throw"};
	magazines[] = {
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};	
	linkedItems[] = {"UNS_NVA_HK","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","ItemCompass"};
};
class FPX_O_NVA_VC_Guerrila_AKM : FPX_O_NVA_VC_Base {
	scope = 2;
	displayName = "Vietcong(AKM)";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"hlc_rifle_akms","Put","Throw"};
	respawnwWeapons[] = {"hlc_rifle_akms","Put","Throw"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};	
	linkedItems[] = {"UNS_NVA_HK","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","ItemCompass"};
};
class FPX_O_NVA_VC_Guerrila_AVT : C_man_polo_1_F_asia {
	author = "FPX Mod Team";
	scope = 2;
	side = 0;
	displayName = "Vietcong(AVT)";
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Vietcong";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"str_avt","Put","Throw"};
	respawnwWeapons[] = {"str_avt","Put","Throw"};
	magazines[] = {
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"10rnd_762_svt",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};	
	linkedItems[] = {"UNS_NVA_HK","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","ItemCompass"};
};
class FPX_O_NVA_VC_MG_DP27 : I_C_Soldier_Bandit_8_F {
	scope = 2;
	side = 0;
	displayName = "Machinegunner(DP-27)";
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Vietcong";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"str_pul_DP","Put","Throw"};
	respawnwWeapons[] = {"str_pul_DP","Put","Throw"};
	magazines[] = {
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar"
	};
	respawnMagazines[] = {
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar",
		"47rnd_dpbar"
	};	
	linkedItems[] = {"usm_bdu_boonie_odg","ItemCompass"};
	respawnLinkedItems[] = {"usm_bdu_boonie_odg","ItemCompass"};
};
class FPX_O_NVA_VC_MG_MG42 : FPX_O_NVA_VC_MG_DP27 {
	displayName = "Machinegunner(MG-42)";
	weapons[] = {"hlc_lmg_mg42_bakelite","Put","Throw"};
	respawnwWeapons[] = {"hlc_lmg_mg42_bakelite","Put","Throw"};
	magazines[] = {
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42"
	};
	respawnMagazines[] = {
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42",
		"hlc_50Rnd_792x57_B_MG42"
	};	
	linkedItems[] = {"UNS_NVA_HK","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","ItemCompass"};
};
class FPX_O_NVA_VC_AT : FPX_O_NVA_VC_Guerrila_AVT {
	displayName = "Rifleman(RPG-7)";
	weapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG7V","Put","Throw"};
	respawnwWeapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG7V","Put","Throw"};	
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M"
	};	
	linkedItems[] = {"UNS_NVA_HK","CUP_V_OI_TKI_Jacket1_06","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","CUP_V_OI_TKI_Jacket1_06","ItemCompass"};
};
class FPX_O_NVA_VC_CQC : FPX_O_NVA_VC_MG_DP27 {
	displayName = "Urban Fighter";
	weapons[] = {"str_ppsh_old","Put","Throw"};
	respawnwWeapons[] = {"str_ppsh_old","Put","Throw"};
	magazines[] = {
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar"
	};
	respawnMagazines[] = {
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar",
		"71rnd_psh_bar"
	};	
	linkedItems[] = {"H_Bandanna_khk","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
	respawnLinkedItems[] = {"H_Bandanna_khk","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
};
class FPX_O_NVA_VC_Raider : FPX_O_NVA_VC_Base {
	scope = 2;
	displayName = "Raider";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"hlc_rifle_akms","Put","Throw"};
	respawnwWeapons[] = {"hlc_rifle_akms","Put","Throw"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};	
	linkedItems[] = {"H_Bandanna_khk","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
	respawnLinkedItems[] = {"H_Bandanna_khk","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
};
class FPX_O_NVA_VC_CL : O_T_Officer_F {
	scope = 2;
	side = 0;
	displayName = "Cell Leader";
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	uniformClass = "FP_Uniform_KHK";
	faction = "FPX_O_NVA";
	hiddenSelections[] = {"camo", "insignia", "Clan"};
	hiddenSelectionsTextures[] = {"FP_Uniforms\FP_UniformsEverywhereElse\SkinsUniform\officer_grn.paa"};
	editorSubcategory = "FPX_EDSubCat_O_NVA_Vietcong";
	backpack = "CUP_B_SLA_Medicbag";
	weapons[] = {"hlc_rifle_akm","Put","Throw"};
	respawnwWeapons[] = {"hlc_rifle_akm","Put","Throw"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak"
	};	
	linkedItems[] = {"UNS_NVA_HK","ItemMap","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK","ItemMap","ItemCompass"};
};
class FPX_O_NVA_Soldier_SQL : FPX_O_NVA_Soldier_Base {
  scope = 2;
  displayName = "Squad Leader";
  weapons[] = {"str_pps43","Binocular","RH_tt33","Put","Throw"};
  respawnWeapons[] = {"str_pps43","Binocular","RH_tt33","Put","Throw"};
  backpack="CUP_B_CivPack_WDL";
  magazines[] = {
    "35rnd_psh_trs_mag",
    "35rnd_psh_trs_mag",
    "35rnd_psh_mag",
    "35rnd_psh_mag",
    "35rnd_psh_mag",
	"RH_8Rnd_762_tt33",
	"RH_8Rnd_762_tt33",
    "CUP_HandGrenade_RGD5",
	"FP_HandGrenade_RDG2",
	"FP_HandGrenade_RDG2"
  };
  respawnMagazines[] = {
    "35rnd_psh_trs_mag",
    "35rnd_psh_trs_mag",
    "35rnd_psh_mag",
    "35rnd_psh_mag",
    "35rnd_psh_mag",
	"RH_8Rnd_762_tt33",
	"RH_8Rnd_762_tt33",
    "CUP_HandGrenade_RGD5",
	"FP_HandGrenade_RDG2",
	"FP_HandGrenade_RDG2"
  };
  linkedItems[] = {"UNS_NVA_HG", "CUP_V_O_Ins_Carrier_Rig","ACRE_PRC77", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"UNS_NVA_HG", "CUP_V_O_Ins_Carrier_Rig","ACRE_PRC77", "ItemMap", "ItemCompass"};
};

class FPX_O_NVA_Soldier : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Rifleman";
	weapons[] = {"hlc_rifle_ak47","Put","Throw"};
	respawnWeapons[] = {"hlc_rifle_ak47","Put","Throw"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	linkedItems[] = {"UNS_NVA_HG", "CUP_V_O_Ins_Carrier_Rig", "ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG", "CUP_V_O_Ins_Carrier_Rig", "ItemCompass"};
};
class FPX_O_NVA_Soldier_SKS : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Rifleman(SKS)";
	weapons[] = {"str_sks_old","Put","Throw"};
	respawnWeapons[] = {"str_sks_old","Put","Throw"};
	magazines[] = {
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"FP_HandGrenade_RKG3E",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"10rnd_sks_mag",
		"FP_HandGrenade_RKG3E",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	linkedItems[] = {"UNS_NVA_HG","CUP_V_O_SLA_Carrier_Belt02","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG","CUP_V_O_SLA_Carrier_Belt02","ItemCompass"};
};
class FPX_O_NVA_Soldier_AR : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Autorifleman";
	weapons[] = {"str_rpd","Put","Throw"};
	respawnWeapons[] = {"str_rpd","Put","Throw"};
	backpack = "CUP_B_CivPack_WDL";
	magazines[] = {
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"CUP_HandGrenade_RGD5",
		"FP_HandGrenade_RDG2"
	};
	respawnMagazines[] = {
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"100rnd_korob_rpd",
		"CUP_HandGrenade_RGD5",
		"FP_HandGrenade_RDG2"
	};
	linkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
};
class FPX_O_NVA_Soldier_AT : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Anti-Tank (RPG-7)";
	weapons[] = {"hlc_rifle_akms","CUP_launch_RPG7V","RH_tt33","Put","Throw"};
	respawnWeapons[] = {"hlc_rifle_akms","CUP_launch_RPG7V","RH_tt33","Put","Throw"};
	backpack = "CUP_B_RPGPack_Khaki";
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_762_tt33",
		"RH_8Rnd_762_tt33",
		"RH_8Rnd_762_tt33",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_762_tt33",
		"RH_8Rnd_762_tt33",
		"RH_8Rnd_762_tt33",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_PG7V_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	linkedItems[] = {"H_mas_gue_cap_I", "CUP_V_O_Ins_Carrier_Rig", "ItemCompass"};
	respawnLinkedItems[] = {"H_mas_gue_cap_I", "CUP_V_O_Ins_Carrier_Rig", "ItemCompass"};
};
class FPX_O_NVA_Soldier_AA : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "AA Specialist (Strela)";
	backpack = "CUP_B_HikingPack_Civ";
	weapons[] = {"str_oc_kipa","CUP_launch_9K32Strela","Put","Throw"};
	respawnWeapons[] = {"str_oc_kipa","CUP_launch_9K32Strela","Put","Throw"};
	magazines[] = {
		"CUP_Strela_2_M",
		"CUP_Strela_2_M",
		"30rnd_mag_kedr",
		"30rnd_mag_kedr",
		"30rnd_mag_kedr",
		"30rnd_mag_kedr",
		"30rnd_mag_kedr",
		"FP_HandGrenade_RDG2",
		"FP_HandGrenade_RDG2"
	};
	linkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
};
class FPX_O_NVA_Soldier_Scout : I_C_Soldier_Para_5_F {
  scope = 2;
	displayName = "Scout";
	side = 0;
	identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Soldiers";
	backpack = "CUP_B_HikingPack_Civ";
	weapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG18","RH_mak","Binocular","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG18","RH_mak","Binocular","Put","Throw"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"ACE_PreloadedMissileDummy_RPG18_CUP",
		"CUP_HandGrenade_RGD5",
		"FP_HandGrenade_RDG2"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"ACE_PreloadedMissileDummy_RPG18_CUP",
		"CUP_HandGrenade_RGD5",
		"FP_HandGrenade_RDG2"
	};
	linkedItems[] = {"H_Booniehat_oli","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass"};
	respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_V_O_SLA_Carrier_Belt03","ItemMap","ItemCompass"};
};
class FPX_O_NVA_Soldier_MG : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Machinegunner";
	backpack = "CUP_B_HikingPack_Civ";
	weapons[] = {"str_pkm","RH_mak","Put","Throw"};
	respawnWeapons[] = {"str_pkm","RH_mak","Put","Throw"};
	magazines[] = {
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	respawnMagazines[] = {
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	linkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemCompass"};
};
class FPX_O_NVA_Soldier_Demo : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Engineer";
	backpack = "CUP_B_HikingPack_Civ";
	items[] = {"FirstAidKit","MineDetector","ACE_Clacker"};
	respawnItems[] = {"FirstAidKit","MineDetector","ACE_Clacker"};
	weapons[] = {"CUP_arifle_Sa58V","RH_mak","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","RH_mak","Put","Throw"};
	magazines[] = {
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"ATMine_Range_Mag",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak"
	};
	respawnMagazines[] = {
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"ATMine_Range_Mag",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak"
	};
	linkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HG","CUP_V_O_Ins_Carrier_Rig","ItemMap","ItemCompass"};
};
class FPX_O_NVA_Medic : FPX_O_NVA_Soldier_Base {
  scope = 2;
	displayName = "Medic";
	backpack = "CUP_B_CivPack_WDL";
	weapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
	respawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG"
	};
	linkedItems[] = {"UNS_NVA_HK", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
	respawnLinkedItems[] = {"UNS_NVA_HK", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
};
class FPX_O_NVA_Car_Ural : CUP_O_Ural_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Car";
	displayName = "Ural";
};
class FPX_O_NVA_Car_BM21 : CUP_O_BM21_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Car";
	displayName = "BM-21";
};
class FPX_O_NVA_Car_UAZ : CUP_O_UAZ_Unarmed_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Car";
	displayName = "UAZ";
};
class FPX_O_NVA_Car_UAZ_MG : CUP_O_UAZ_MG_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Car";
	displayName = "UAZ (DShKM)";
};
class FPX_O_NVA_Car_UAZ_SPG : CUP_O_UAZ_SPG9_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Car";
	displayName = "UAZ (SPG-9)";
};
class FPX_O_NVA_APC_BRDM2 : CUP_O_BRDM2_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_APC";
	displayName = "BRDM-2";
};
class FPX_O_NVA_APC_BRDM2HQ : CUP_O_BRDM2_HQ_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_APC";
	displayName = "BRDM-2 (HQ)";
};
class FPX_O_NVA_APC_BTR40_MG : CUP_I_BTR40_MG_TKG {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_APC";
	displayName = "BTR-40 (DShKM)";
};
class FPX_O_NVA_APC_BTR40 : CUP_I_BTR40_TKG {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_APC";
	displayName = "BTR-40";
};
class FPX_O_NVA_AA_Ural : CUP_O_Ural_ZU23_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_AA";
	displayName = "Ural (ZU-23)";
};
class FPX_O_NVA_tank_T55 : CUP_O_T55_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Tank";
	displayName = "T-55";
};
class FPX_O_NVA_tank_T34 : CUP_I_T34_NAPA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Tank";
	displayName = "T-34-85M";
};
class FPX_O_NVA_boat_fishing : CUP_C_Fishing_Boat_Chernarus {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Boat";
	displayName = "Fishing Boat";
};
class FPX_O_NVA_boat_ass : I_G_Boat_Transport_01_F {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Boat";
	displayName = "Rubber Boat";
};
class FPX_O_NVA_turret_podnos : CUP_O_2b14_82mm_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "Podnos Mortar";
};
class FPX_O_NVA_turret_dushka : CUP_O_DSHKM_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "DShKM";
};
class FPX_O_NVA_turret_dushka_mini : CUP_O_DSHKM_MiniTripod_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "DShKM Minitripod";
};
class FPX_O_NVA_turret_SPG9 : CUP_O_SPG9_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "SPG-9";
};
class FPX_O_NVA_turret_ZU23 : CUP_O_ZU23_SLA {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "ZU-23";
};
class FPX_O_NVA_turret_Hawk : fp_mim23 {
	side = 0;
	crew = "FPX_O_NVA_Soldier";
	faction = "FPX_O_NVA";
	editorSubcategory = "FPX_EDSubCat_O_NVA_Turret";
	displayName = "MIM-23";
};
