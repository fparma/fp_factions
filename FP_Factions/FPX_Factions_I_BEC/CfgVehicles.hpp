// CfgVehicles for FPX_I_BEC
class FPX_I_BEC_Soldier_TL : I_G_Soldier_GL_F {
  author = "FPX Mod Team";
  scope = 2;
  side = 2;
  faction = "FPX_I_BEC";
  identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Team Leader";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  weapons[] = {"hlc_rifle_auga1carb_t", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_auga1carb_t", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"SmokeShell",
    "SmokeShell",
    "HandGrenade",
	"B_IR_Grenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
    "hlc_30Rnd_556x45_T_AUG",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"SmokeShell",
    "SmokeShell",
    "HandGrenade",
	"B_IR_Grenade",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Booniehat_khk_hs", "CUP_V_B_RRV_Officer", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"H_Booniehat_khk_hs", "CUP_V_B_RRV_Officer", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_G36 : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Mercenary (G36)";
  uniformClass = "FP_Uniform_BlkKhk";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"};
  weapons[] = {"hlc_rifle_G36A1", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_G36A1", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "hlc_30rnd_556x45_EPR_G36",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"CUP_H_USArmy_Helmet_M1_Olive", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_AK : FPX_I_BEC_Soldier_G36 {
  displayName = "Mercenary (AK-74)";
  weapons[] = {"hlc_rifle_aks74_MTK", "Put", "Throw"};
  respawnWeapons[] = {"hlc_rifle_aks74_MTK", "Put", "Throw"};
  magazines[] = {
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "hlc_30Rnd_545x39_B_AK",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_RUS_6B27", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"CUP_H_RUS_6B27", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Crew : FPX_I_BEC_Soldier_TL {
  displayName = "Transporter";
  weapons[] = {"SMG_03C_TR_khaki", "Put", "Throw"};
  respawnWeapons[] = {"SMG_03C_TR_khaki", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  linkedItems[] = {"CUP_H_PMC_Cap_PRR_Tan", "V_BandollierB_khk", "ItemMap", "ItemCompass", "ItemRadio"}; 
  respawnLinkedItems[] = {"CUP_H_PMC_Cap_PRR_Tan", "V_BandollierB_khk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Security : I_G_Soldier_exp_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Security Detail";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  weapons[] = {"SMG_03C_TR_khaki", "RH_g17", "Put", "Throw"};
  backpack = "";
  respawnWeapons[] = {"SMG_03C_TR_khaki", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
    "50Rnd_570x28_SMG_03",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Cap_blk", "LOP_V_Carrier_TAN", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"H_Cap_blk", "LOP_V_Carrier_TAN", "ItemMap", "ItemCompass", "ItemRadio"};
};
/*class FPX_I_BEC_Soldier_Func : CUP_C_C_Functionary_01 {
  author = "FPX Mod Team";
  scope = 2;
  side = 2;
  faction = "FPX_I_BEC";
  identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
  model = "cup\CUP_Creatures_People_Civil_Chernarus\CUP_Civil_Functionary.p3d";
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Functionary (Armed)";
  uniformClass = "FPX_I_BEC_uniform_Functionary";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"cup\CUP_Creatures_People_Civil_Chernarus\data\functionary_co.paa"};
  weapons[] = {"str_oc_kipa", "Put", "Throw"};
  respawnWeapons[] = {"str_oc_kipa", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr"
  };
  respawnMagazines[] = {
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr",
    "30rnd_mag_kedr"
  };
  linkedItems[] = {"CUP_H_FR_Headset", "CUP_V_O_TK_OfficerBelt", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"CUP_H_FR_Headset", "CUP_V_O_TK_OfficerBelt", "ItemMap", "ItemCompass", "ItemRadio"};
};*/
class FPX_I_BEC_Soldier_AR : FPX_I_BEC_Soldier_G36 {
  displayName = "Autorifleman";
  weapons[] = {"str_pkp_bp", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"str_pkp_bp", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "100rnd_korob_pkp",
    "100rnd_korob_pkp",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "100rnd_korob_pkp",
    "100rnd_korob_pkp",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"FP_Helmet_PASGT", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"FP_Helmet_PASGT", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_M : FPX_I_BEC_Soldier_G36 {
  displayName = "Marksman";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  weapons[] = {"FPX_I_BEC_arifle_Cyrus", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"FPX_I_BEC_arifle_Cyrus", "RH_g17", "Put", "Throw"};
  items[] = {"FirstAidKit"};
  respawnItems[] = {"FirstAidKit"};
  magazines[] = {
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
    "10Rnd_93x64_DMR_05_Mag",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "HandGrenade",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Booniehat_khk", "V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"H_Booniehat_khk", "V_BandollierB_cbr", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Medic : I_Soldier_F {
  author = "FPX Mod Team";
  scope = 2;
  faction = "FPX_I_BEC";
  identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
  editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
  displayName = "Combat Life Saver";
  uniformClass = "FP_Uniform_Khaki";
  hiddenSelections[] = {"camo", "insignia", "Clan"};
  hiddenSelectionsTextures[] = {"FP_UniformsEverywhereElse\SkinsUniform\FP_Khaki400.paa"};
  weapons[] = {"hlc_smg_mp510", "RH_g17", "Put", "Throw"};
  respawnWeapons[] = {"hlc_smg_mp510", "RH_g17", "Put", "Throw"};
  items[] = {"Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
  respawnItems[] = {"Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
  magazines[] = {
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  respawnMagazines[] = {
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
    "hlc_30Rnd_10mm_B_MP5",
	"RH_17Rnd_9x19_g17",
	"RH_17Rnd_9x19_g17",
    "SmokeShell",
    "Chemlight_green"
  };
  linkedItems[] = {"H_Watchcap_blk", "V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemRadio"};
  respawnLinkedItems[] = {"H_Watchcap_blk", "V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemRadio"};
};
class FPX_I_BEC_Soldier_Helipilot : I_helipilot_F {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
	editorSubcategory = "FPX_EDSubCat_I_BEC_Men_Merc";
};
class FPX_I_BEC_Wildcat : I_Heli_light_03_unarmed_F {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "WG-13 Super Lynx";
};
class FPX_I_BEC_Datsun_PK : CUP_I_Datsun_PK_TK {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Car";
	crew = "FPX_I_BEC_Soldier_Crew";
	displayName = "Pickup (PK)";
};
class FPX_I_BEC_SUV : CUP_I_SUV_ION {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Car";
	crew = "FPX_I_BEC_Soldier_Crew";
	displayName = "SUV";
};
class FPX_I_BEC_Armored_SUV : CUP_I_SUV_Armored_ION {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Car";
	crew = "FPX_I_BEC_Soldier_Crew";
	displayName = "Armored SUV";
};
class FPX_I_BEC_Heli_MH6 : B_Heli_Light_01_F {
	side = 2;
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "MD 530F";
	};
class FPX_I_BEC_Heli_UH60L : CUP_I_UH60L_Unarmed_RACS {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "S-70i Sandhawk (Unarmed)";
	hiddenSelectionsTextures[] = {"FP_Factions\FPX_factions_I_BEC\data\uh60m_fuselage_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_engine_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_dust_filter_tan_co.paa"};
};
class FPX_I_BEC_Heli_UH60L_FFV : CUP_I_UH60L_Unarmed_FFV_RACS {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "S-70i Sandhawk FFV (Unarmed)";
	hiddenSelectionsTextures[] = {"FP_Factions\FPX_factions_I_BEC\data\uh60m_fuselage_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_engine_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_dust_filter_tan_co.paa"};
};
class FPX_I_BEC_Heli_UH60L_A : CUP_I_UH60L_RACS {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "S-70i Sandhawk";
	hiddenSelectionsTextures[] = {"FP_Factions\FPX_factions_I_BEC\data\uh60m_fuselage_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_engine_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_dust_filter_tan_co.paa"};
};
class FPX_I_BEC_Heli_UH60L_FFV_A : CUP_I_UH60L_FFV_RACS {
	author = "CUP & FPX Mod Team";
	faction = "FPX_I_BEC";
	editorSubcategory = "FPX_EDSubCat_I_BEC_Heli";
	crew = "FPX_I_BEC_Soldier_Helipilot";
	displayName = "S-70i Sandhawk FFV";
	hiddenSelectionsTextures[] = {"FP_Factions\FPX_factions_I_BEC\data\uh60m_fuselage_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_engine_tan_co.paa","FP_Factions\FPX_factions_I_BEC\data\uh60m_dust_filter_tan_co.paa"};
};