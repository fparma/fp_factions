class CfgPatches
{
	class gordon_reskins_mx
	{
		units[] = {};
		weapons[]=
		{
			"arifle_MX_F",
			"arifle_MX_Black_F",
			"arifle_MX_khk_F",
			"FP_GOR_arifle_MX_FDE_F",
			"arifle_MXC_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_khk_F",
			"FP_GOR_arifle_MXC_fde_F",
			"arifle_MXM_F",
			"arifle_MXM_Black_F",
			"arifle_MXM_khk_F",
			"FP_GOR_arifle_MXM_fde_F",
			"arifle_MX_SW_F",
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_khk_F",
			"FP_GOR_arifle_MX_SW_fde_F",
			"arifle_MX_GL_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_khk_F",
			"FP_GOR_arifle_MX_GL_fde_F"
		};
		magazines[]=
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_fde_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_khaki_mag",
			"30Rnd_65x39_caseless_khaki_mag_Tracer",
			"30Rnd_65x39_caseless_black_mag",
			"30Rnd_65x39_caseless_black_mag_Tracer",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_khaki_mag",
			"100Rnd_65x39_caseless_khaki_mag_Tracer",
			"100Rnd_65x39_caseless_black_mag",
			"100Rnd_65x39_caseless_black_mag_Tracer"
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder",
			"ace_realisticweights",
			"ace_ballistics"
		};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\mx\data\xmx_base.rvmat"}; 
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
	};
	
	class FP_GOR_30Rnd_65x39_caseless_tan_mag: 30Rnd_65x39_caseless_mag
	{
		displayname="6.5 mm 30Rnd Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa"};
	};
	class FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 30Rnd Tracer Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa"};
	};
	
	class FP_GOR_30Rnd_65x39_caseless_fde_mag: 30Rnd_65x39_caseless_mag
	{
		displayname="6.5 mm 30Rnd FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa"};
	};
	class FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 30Rnd Tracer FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa"};
	};
	
	class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_green_co.paa"};
	};
	class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_green_co.paa"};
	};
	
	class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_black_co.paa"};
	};
	class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_black_co.paa"};
	};
	
	
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		hiddenSelectionsMaterials[] = {"\FP_Factions\gordon_reskins\mx\data\xmx_lmg.rvmat"}; 
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
	};
	class FP_GOR_100Rnd_65x39_caseless_tan_mag: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5 mm 100Rnd Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_newtan_co.paa"};
	};
	class FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 100Rnd Tracer Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_newtan_co.paa"};
	};
	class FP_GOR_100Rnd_65x39_caseless_fde_mag: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5 mm 100Rnd FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_fde_co.paa"};
	};
	class FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 100Rnd Tracer FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_fde_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"};
	};
	
	
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim;
	class FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa"};
	};
	class FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa"};
	};
	class FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Black Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_base_black_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	class FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Khaki Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_base_green_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};
	
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim;
	class FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_newtan_co.paa"};
	};
	class FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Black Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_black_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
	};
	class FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Khaki Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
	}; 
	class FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_fde_co.paa"};
	};
	
	class ACE_30Rnd_65_Creedmor_mag;
	class FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag: ACE_30Rnd_65_Creedmor_mag
	{
		displayname="6.5 mm Creedmor 30Rnd Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa"};
	};
	class FP_GOR_ACE_30Rnd_65_creedmor_fde_mag: ACE_30Rnd_65_Creedmor_mag
	{
		displayname="6.5 mm Creedmor 30Rnd FDE Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa"};
	};
	
	class ACE_30Rnd_65x47_Scenar_mag;
	class FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag: ACE_30Rnd_65x47_Scenar_mag
	{
		displayname="6.5x47 mm 30Rnd Tan Mag (HPBT Scenar)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa"};
	};
	class FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag: ACE_30Rnd_65x47_Scenar_mag
	{
		displayname="6.5x47 mm 30Rnd FDE Mag (HPBT Scenar)";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa"};
	};
};
	

class CfgMagazineWells
{
	
	class MX_65x39
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim"
		};
	};
	
	class MX_65x39_Large
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim"
		};
	};
	
	class CBA_65x39_MX
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim"
		};
	};
	
	class CBA_65x39_MX_XL
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag",
			"FP_GOR_30Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_fde_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag",
			"FP_GOR_100Rnd_65x39_caseless_fde_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_fde_mag_Tracer_Dim"
		};
	};
}; 

class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_base.rvmat",
			"\FP_Factions\gordon_reskins\mx\data\xmx_short.rvmat"
		}; 
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_newtan_co.paa"
		};
	};

	class arifle_MX_Black_F: arifle_MX_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_black_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_black_co.paa"
		};
	};
	
	class FP_GOR_arifle_MX_FDE_F: arifle_MX_Black_F
	{
		_generalMacro="FP_GOR_arifle_MX_FDE_F";
		baseWeapon="FP_GOR_arifle_MX_FDE_F";
		displayName="MX (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_fde_co.paa"
		};
		magazines[]={"FP_GOR_30Rnd_65x39_caseless_fde_mag"};
	};
	
	class arifle_MX_khk_F: arifle_MX_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_green_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_green_co.paa"
		};
	};
	
	class arifle_MXC_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_short.rvmat"
		}; 
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_newtan_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68;
		};
	};
	class arifle_MXC_Black_F: arifle_MXC_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_black_co.paa"
		};
	};
	class arifle_MXC_khk_F: arifle_MXC_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_green_co.paa"
		};
	};
	class FP_GOR_arifle_MXC_fde_F: arifle_MXC_Black_F
	{
		_generalMacro="FP_GOR_arifle_MXC_fde_F";
		baseWeapon="FP_GOR_arifle_MXC_fde_F";
		displayName="MXC (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_fde_co.paa"
		};
		magazines[]={"FP_GOR_30Rnd_65x39_caseless_fde_mag"};
	};
	
	class arifle_MXM_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_newtan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_long.rvmat"
		}; 
		magazines[]=
		{
			"ACE_30Rnd_65_Creedmor_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_fde_mag",
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag"
		};
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_black_co.paa"
		};
		magazines[]=
		{
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65_Creedmor_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_fde_mag",
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag"
		};
	};
	class FP_GOR_arifle_MXM_fde_F: arifle_MXM_Black_F
	{
		_generalMacro="FP_GOR_arifle_MXM_fde_F";
		baseWeapon="FP_GOR_arifle_MXM_fde_F";
		displayName="MXM (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_fde_co.paa"
		};
		magazines[]=
		{
			"FP_GOR_ACE_30Rnd_65_creedmor_fde_mag",
			"ACE_30Rnd_65_Creedmor_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag",
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag"
		};
	};
	class arifle_MXM_khk_F: arifle_MXM_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_green_co.paa"
		};
		magazines[]=
		{
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"ACE_30Rnd_65_Creedmor_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_newtan_mag",
			"FP_GOR_ACE_30Rnd_65_creedmor_fde_mag",
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_newtan_mag",
			"FP_GOR_ACE_30Rnd_65x47_Scenar_fde_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag"
		};
	};
	
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_lmg.rvmat"
		}; 
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_newtan_co.paa"
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"
		};
	};
	
	class FP_GOR_arifle_MX_SW_fde_F: arifle_MX_SW_Black_F
	{
		_generalMacro="FP_GOR_arifle_MX_SW_fde_F";
		baseWeapon="FP_GOR_arifle_MX_SW_fde_F";
		displayName="MX LSW (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_fde_co.paa"
		};
		magazines[]={"FP_GOR_100Rnd_65x39_caseless_fde_mag"};
	};
	
	class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"
		};
	};
	
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_base.rvmat",
			"\FP_Factions\gordon_reskins\mx\data\xmx_glx.rvmat"
		}; 
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_newtan_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\GLX_Black_CO.paa"
		};
	};
	class arifle_MX_GL_khk_F: arifle_MX_GL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_green_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\GLX_Black_CO.paa"
		};
	};
	class arifle_MX_GL_Black_F: arifle_MX_GL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_black_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\GLX_Black_CO.paa"
		};
	};
	class FP_GOR_arifle_MX_GL_fde_F: arifle_MX_GL_Black_F
	{
		_generalMacro="FP_GOR_arifle_MX_GL_fde_F";
		baseWeapon="FP_GOR_arifle_MX_GL_fde_F";
		displayName="MX 3GL (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_fde_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\GLX_Black_CO.paa"
		};
	};
};
