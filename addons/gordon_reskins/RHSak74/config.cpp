class CfgPatches
{
	class gordon_reskins_RHSAK74stuff
	{
		units[]={};
		weapons[]=
		{
			"rhs_weap_ak74m_camo_npz",
			"FP_GOR_rhs_weap_ak74m_camo_gp25",
			"FP_GOR_rhs_weap_ak74m_camo_gp25_npz",
			"FP_GOR_rhs_weap_ak74m_desert_gp25",
			"FP_GOR_rhs_weap_ak74m_desert_gp25_npz"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_c_weapons",
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class CfgWeapons
{
	class rhs_weap_ak74m_npz;
	class rhs_weap_ak74m_camo_npz: rhs_weap_ak74m_npz
	{
		displayName="AK-74M (Camo/B-13)";
		baseWeapon="rhs_weap_ak74m_camo_npz";
	};
	class rhs_weap_ak74m_gp25;
	class FP_GOR_rhs_weap_ak74m_camo_gp25: rhs_weap_ak74m_gp25
	{
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		magazines[]=
		{
			rhs_30Rnd_545x39_7N22_camo_AK,
			rhs_30Rnd_545x39_7N22_AK,
			rhs_30Rnd_545x39_7N22_plum_AK,
			rhs_30Rnd_545x39_7N22_desert_AK
		};
		displayName="AK-74M (Camo/GP-25)";
		rhs_npz="FP_GOR_rhs_weap_ak74m_camo_gp25_npz";
		baseWeapon="FP_GOR_rhs_weap_ak74m_camo_gp25";
	};
	class rhs_weap_ak74m_gp25_npz;
	class FP_GOR_rhs_weap_ak74m_camo_gp25_npz: rhs_weap_ak74m_gp25_npz
	{
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
		magazines[]=
		{
			rhs_30Rnd_545x39_7N22_camo_AK,
			rhs_30Rnd_545x39_7N22_AK,
			rhs_30Rnd_545x39_7N22_plum_AK,
			rhs_30Rnd_545x39_7N22_desert_AK
		};
		displayName="AK-74M (Camo/GP-25/B-13)";
		rhs_npz="FP_GOR_rhs_weap_ak74m_camo_gp25";
		baseWeapon="FP_GOR_rhs_weap_ak74m_camo_gp25_npz";
	};
	class FP_GOR_rhs_weap_ak74m_desert_gp25: rhs_weap_ak74m_gp25
	{
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		magazines[]=
		{
			rhs_30Rnd_545x39_7N22_desert_AK,
			rhs_30Rnd_545x39_7N22_AK,
			rhs_30Rnd_545x39_7N22_plum_AK,
			rhs_30Rnd_545x39_7N22_camo_AK
		};
		displayName="AK-74M (Desert/GP-25)";
		rhs_npz="FP_GOR_rhs_weap_ak74m_desert_gp25_npz";
		baseWeapon="FP_GOR_rhs_weap_ak74m_desert_gp25";
	};
	class FP_GOR_rhs_weap_ak74m_desert_gp25_npz: rhs_weap_ak74m_gp25_npz
	{
		hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};
		magazines[]=
		{
			rhs_30Rnd_545x39_7N22_desert_AK,
			rhs_30Rnd_545x39_7N22_AK,
			rhs_30Rnd_545x39_7N22_plum_AK,
			rhs_30Rnd_545x39_7N22_camo_AK
		};
		displayName="AK-74M (Desert/GP-25/B-13)";
		rhs_npz="FP_GOR_rhs_weap_ak74m_desert_gp25";
		baseWeapon="FP_GOR_rhs_weap_ak74m_desert_gp25_npz";
	};
};