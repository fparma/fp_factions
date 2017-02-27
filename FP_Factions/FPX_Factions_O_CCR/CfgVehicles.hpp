// CfgVehicles for FPX_O_CCR
class FPX_O_CCR_Soldier_AKM : CUP_O_TK_Soldier {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_O_CCR";
  displayName = "Rifleman (AK)";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  hiddenSelections[] = {"camo","Insignia","Clan"};
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "hispanicMen";
  weapons[] = {"hlc_rifle_akm","Put","Throw"};
  respawnWeapons[] = {"hlc_rifle_akm","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "hlc_30Rnd_762x39_b_ak",
    "HandGrenade"
  };
  linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Carrier_Belt02", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Carrier_Belt02", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Soldier_M16 : CUP_O_TK_Crew {
  displayName = "Rifleman (M16)";
  faction = "FPX_O_CCR";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  weapons[] = {"RH_M16a1","Put","Throw"};
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "EnglishMen";
  respawnWeapons[] = {"RH_M16a1","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "HandGrenade"
  };
  linkedItems[] = {"CUP_H_SLA_Helmet", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Soldier_Crew : CUP_O_TK_Crew {
  displayName = "Crewman";
  faction = "FPX_O_CCR";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "hispanicMen";
  weapons[] = {"RH_muzi","Put","Throw"};
  respawnWeapons[] = {"RH_muzi","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
	"SmokeShell",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
    "RH_30Rnd_9x19_UZI",
	"SmokeShell",
    "HandGrenade"
  };
  linkedItems[] = {"usm_bdu_cap_portliz", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
  respawnLinkedItems[] = {"usm_bdu_cap_portliz", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Soldier_SA58 : FPX_O_CCR_Soldier_AKM {
  displayName = "Rifleman (SA58)";
  weapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
  respawnWeapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
  items[] = {"FirstAidKit"};
  backpack="CUP_B_AlicePack_Bedroll";
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "CUP_30Rnd_Sa58_M_TracerR",
    "HandGrenade"
  };
  linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Soldier_AT : FPX_O_CCR_Soldier_M16 {
  displayName = "Rifleman (AT)";
  weapons[] = {"RH_M16a1","CUP_launch_RPG18","Put","Throw"};
  respawnWeapons[] = {"RH_M16a1","CUP_launch_RPG18","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
	"ACE_PreloadedMissileDummy_RPG18_CUP",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
    "hlc_30rnd_556x45_SOST",
	"ACE_PreloadedMissileDummy_RPG18_CUP",
    "HandGrenade"
  };
  linkedItems[] = {"usm_bdu_boonie_portliz", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"usm_bdu_boonie_portliz", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Soldier_AR : FPX_O_CCR_Soldier_AKM {
  displayName = "Autorifleman";
  weapons[] = {"hlc_rifle_rpk","Put","Throw"};
  respawnWeapons[] = {"hlc_rifle_rpk","Put","Throw"};
  items[] = {"FirstAidKit"};
  identityTypes[] = {"head_African","NoGlasses","LanguageFRE_F"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_75Rnd_762x39_m_rpk",
	"hlc_75Rnd_762x39_m_rpk",
    "HandGrenade"
  };
  respawnMagazines[] = {
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_45Rnd_762x39_m_rpk",
	"hlc_75Rnd_762x39_m_rpk",
	"hlc_75Rnd_762x39_m_rpk",
    "HandGrenade"
  };
  backpack="CUP_B_AlicePack_Bedroll";
  linkedItems[] = {"FP_Beret_Maroon", "FP_V_TK_Kamysh", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"FP_Beret_Maroon", "FP_V_TK_Kamysh", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Soldier_TL : CUP_O_SLA_Miltia {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_O_CCR";
  displayName = "Team Leader";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "hispanicMen";
  weapons[] = {"CUP_arifle_AKS","RH_mak","Put","Throw"};
  respawnWeapons[] = {"CUP_arifle_AKS","RH_mak","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  backpack="CUP_B_AssaultPack_Coyote";
  magazines[] = {
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
    "HandGrenade"
  };
  linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass","ItemRadio"};
  respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Soldier_SL : CUP_O_SLA_Soldier_Desert {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_O_CCR";
  displayName = "Squad Leader";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  hiddenSelections[] = {"camo","Insignia","Clan"};
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "EnglishMen";
  weapons[] = {"CUP_arifle_AKS","RH_mak","Put","Throw"};
  respawnWeapons[] = {"CUP_arifle_AKS","RH_mak","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  backpack="usm_pack_st138_prc77";
  magazines[] = {
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
    "CUP_30Rnd_762x39_AK47_M",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
    "HandGrenade"
  };
  linkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_SLA_Flak_Vest03", "ItemMap", "ItemCompass","ItemRadio"};
  respawnLinkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_SLA_Flak_Vest03", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Soldier_M : CUP_O_Partisans_Soldier_MG {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_O_CCR";
  displayName = "Marksman";
  editorSubcategory = "FPX_EDSubCat_O_CCR_Men";
  hiddenSelections[] = {"camo","Insignia","Clan"};
  identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
  genericNames = "hispanicMen";
  weapons[] = {"FPX_O_CCR_rifle_Nugget","RH_mak","Put","Throw"};
  respawnWeapons[] = {"FPX_O_CCR_rifle_Nugget","RH_mak","Put","Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
	"SmokeShell",
    "HandGrenade"
  };
  respawnMagazines[] = {
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
    "5rnd_762_mos",
	"RH_8Rnd_9x18_Mak",
	"RH_8Rnd_9x18_Mak",
	"SmokeShell",
	"SmokeShell",
    "HandGrenade"
  };
  linkedItems[] = {"usm_bdu_cap_erdl", "V_mas_gue_alice_webb2_she", "ItemMap", "ItemCompass"};
  respawnLinkedItems[] = {"usm_bdu_cap_erdl", "V_mas_gue_alice_webb2_she", "ItemMap", "ItemCompass"};
};
class FPX_O_CCR_Cuban_Soldier_AKM : I_C_Soldier_Camo_F {
	side = 0;
	author = "FPX Mod Team";
	faction = "FPX_O_CCR";
	displayName = "Cuban Rifleman";
	genericNames = "hispanicMen";
	identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
	editorSubcategory = "FPX_EDSubCat_O_CCR_Elite";
	weapons[] = {"hlc_rifle_akm","RH_mak","Put","Throw"};
	respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Put","Throw"};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Flak_Vest01", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Flak_Vest01", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_Scout : I_C_Soldier_Para_3_F {
	side = 0;
	scope = 2;
	displayName = "Cuban Scout";
	faction = "FPX_O_CCR";
	genericNames = "hispanicMen";
	identityTypes[] = {"head_NATO","NoGlasses","LanguageFRE_F"};
	editorSubcategory = "FPX_EDSubCat_O_CCR_Elite";
	weapons[] = {"CUP_arifle_Sa58P","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58P","Put","Throw"};
	backpack = "CUP_B_AlicePack_Bedroll";
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"SmokeShell",
		"SmokeShell",
		"HandGrenade",
		"HandGrenade"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"SmokeShell",
		"SmokeShell",
		"HandGrenade",
		"HandGrenade"
	};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	linkedItems[] = {"usm_bdu_cap_odg", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_cap_odg", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_SS : FPX_O_CCR_Cuban_Soldier_Scout {
	displayName = "Cuban Scout Sniper";
	backpack = "";
	weapons[] = {"FPX_O_CCR_srifle_SVD","RH_mak","Put","Throw"};
	respawnWeapons[] = {"FPX_O_CCR_srifle_SVD","RH_mak","Put","Throw"};
	magazines[] = {
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"SmokeShell",
		"HandGrenade"
	};
	respawnMagazines[] = {
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"SmokeShell",
		"HandGrenade"
	};
	linkedItems[] = {"usm_bdu_boonie_portliz", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_boonie_portliz", "CUP_V_I_RACS_Carrier_Rig_wdl_2", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_Demo : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Sapper";
	backpack = "CUP_B_AlicePack_Khaki";
	items[] = {"FirstAidKit","MineDetector","ACE_Clacker"};
	respawnItems[] = {"FirstAidKit","MineDetector","ACE_Clacker"};
	magazines[] = {
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"ATMine_Range_Mag",
		"ATMine_Range_Mag",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"APERSMine_Range_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"ATMine_Range_Mag",
		"ATMine_Range_Mag",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"SmokeShell"
	};
};
class FPX_O_CCR_Cuban_Soldier_AR : I_C_Soldier_Para_2_F {
	side = 0;
	displayName = "Cuban Autorifleman";
	faction = "FPX_O_CCR";
	genericNames = "hispanicMen";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Elite";
	backpack = "CUP_B_HikingPack_Civ";
	weapons[] = {"hlc_rifle_rpk","put","throw"};
	respawnWeapons[] = {"hlc_rifle_rpk","put","throw"};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	magazines[] = {
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"HandGrenade",
		"HandGrenade"
	};
	respawnMagazines[] = {
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"hlc_75Rnd_762x39_m_rpk",
		"HandGrenade",
		"HandGrenade"
	};
	linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_MG : FPX_O_CCR_Cuban_Soldier_AR {
	displayName = "Cuban Machinegunner";
	backpack = "CUP_B_AlicePack_Khaki";
	weapons[] = {"str_pkm","RH_mak","put","throw"};
	respawnWeapons[] = {"str_pkm","RH_mak","put","throw"};
	magazines[] = {
		"100rnd_korob_trs_pkp",
		"100rnd_korob_trs_pkp",
		"100rnd_korob_trs_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade"
	};
	respawnMagazines[] = {
		"100rnd_korob_trs_pkp",
		"100rnd_korob_trs_pkp",
		"100rnd_korob_trs_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"100rnd_korob_pkp",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade"
	};
};
class FPX_O_CCR_Cuban_Soldier_AT : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Rifleman (AT)";
	weapons[] = {"hlc_rifle_akm","CUP_launch_RPG18","RH_mak","Put","Throw"};
	respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG18","RH_mak","Put","Throw"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"ACE_PreloadedMissileDummy_RPG18_CUP",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"ACE_PreloadedMissileDummy_RPG18_CUP",
		"HandGrenade",
		"SmokeShell"
	};
};
class FPX_O_CCR_Cuban_Soldier_ATspec : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban AT Specialist";
	backpack = "CUP_B_AlicePack_Khaki";
	identityTypes[] = {"head_African","NoGlasses","LanguageFRE_F"};
	weapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG7V","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","CUP_launch_RPG7V","Put","Throw"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_ATasst : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban AT Assistant";
	backpack = "CUP_B_AlicePack_Khaki";
	weapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"CUP_PG7VL_M",
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_Medic : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Medic";
	backpack = "CUP_B_AlicePack_Khaki";
	weapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	items[] = {"FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
	respawnItems[] = {"FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
	respawnWeapons[] = {"CUP_arifle_Sa58V","Put","Throw"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"CUP_30Rnd_Sa58_M_TracerG",
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_cap_odg", "V_mas_gue_ind_chicom_she", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_AMS : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Sniper (AM)";
	weapons[] = {"FPX_O_CCR_srifle_LLR","Put","Throw"};
	respawnWeapons[] = {"FPX_O_CCR_srifle_LLR","Put","Throw"};
	items[] = {"FirstAidKit"};
	identityTypes[] = {"head_African","NoGlasses","LanguageFRE_F"};
	respawnItems[] = {"FirstAidKit"};
	magazines[] = {
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"HandGrenade",
		"SmokeShell"
	};
	linkedItems[] = {"usm_bdu_boonie_portliz", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_boonie_portliz", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_TL : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Team Leader";
	backpack = "usm_pack_alice";
	weapons[] = {"hlc_rifle_akm","RH_mak","Put","Throw"};
	respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Put","Throw"};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	magazines[] = {
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"hlc_30Rnd_762x39_b_ak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell"
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
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell"
	};
	linkedItems[] = {"usm_bdu_cap_odg", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"usm_bdu_cap_odg", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_SL : FPX_O_CCR_Cuban_Soldier_TL {
	displayName = "Cuban Squad Leader";
	backpack = "usm_pack_alice_prc119";
	linkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_SLA_Flak_Vest02", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Cuban_Soldier_AA : FPX_O_CCR_Cuban_Soldier_Scout {
	displayName = "Cuban AA Specialist";
	weapons[] = {"CUP_arifle_Sa58P","CUP_launch_Igla","put","throw"};
	respawnWeapons[] = {"CUP_arifle_Sa58P","CUP_launch_Igla","put","throw"};
	magazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_Igla_M",
		"HandGrenade",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_30Rnd_Sa58_M_TracerR",
		"CUP_Igla_M",
		"HandGrenade",
		"SmokeShell"
	};
};
class FPX_O_CCR_Cuban_Soldier_Officer : FPX_O_CCR_Cuban_Soldier_AKM {
	displayName = "Cuban Officer";
	weapons[] = {"RH_mak","put","throw"};
	respawnWeapons[] = {"RH_mak","put","throw"};
	magazines[] = {
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell"
	};
	respawnMagazines[] = {
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"RH_8Rnd_9x18_Mak",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell"
	};
	linkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass","ItemRadio"};
	respawnLinkedItems[] = {"FP_Beret_Maroon", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass","ItemRadio"};
};
class FPX_O_CCR_Car_DatsunPK : CUP_O_Datsun_PK_Random {
	side = 0;
	crew = "FPX_O_CCR_Soldier_Crew";
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	displayName = "Pickup (PK)";
};
class FPX_O_CCR_Car_LR : CUP_B_LR_Transport_GB_W {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Land Rover (Transport)";
};
class FPX_O_CCR_Car_LR_M2 : CUP_B_LR_MG_GB_W {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Land Rover (M2)";
};
class FPX_O_CCR_Car_Ural : CUP_O_Ural_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Ural";
};
class FPX_O_CCR_Car_Ural_Open : CUP_O_Ural_Open_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Ural (Open)";
};
class FPX_O_CCR_Car_Ural_ZU23 : CUP_O_Ural_ZU23_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Car";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Ural (ZU-23)";
};
class FPX_O_CCR_APC_BTR40 : CUP_I_BTR40_TKG {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BTR-40 (Unarmed)";
};
class FPX_O_CCR_APC_BTR40_MG : CUP_I_BTR40_MG_TKG {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BTR-40 (DSHKM)";
};
class FPX_O_CCR_APC_BRDM2 : CUP_O_BRDM2_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BRDM-2";
};
class FPX_O_CCR_APC_BRDM2_ATGM : CUP_O_BRDM2_ATGM_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BRDM-2 (ATGM)";
};
class FPX_O_CCR_APC_BRDM2_HQ : CUP_O_BRDM2_HQ_SLA {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BRDM-2 (HQ)";
};
class FPX_O_CCR_APC_BTR60 : FP_Faction_GSFG70_Vehicle_BTR60 {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BTR-60PB";
};
class FPX_O_CCR_APC_BMP1 : CUP_I_BMP1_TK_GUE {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_APC";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "BMP-1";
};
class FPX_O_CCR_Armor_T55 : CUP_I_T55_TK_GUE {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Armor";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "T-55";
};
class FPX_O_CCR_Boat_RHIB : I_C_Boat_Transport_02_F {
	side = 0;
	faction = "FPX_O_CCR";
	editorSubcategory = "FPX_EDSubCat_O_CCR_Boat";
	crew = "FPX_O_CCR_Soldier_Crew";
	displayName = "Patrol Boat";
};