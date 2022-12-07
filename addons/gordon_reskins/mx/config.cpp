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
			"arifle_MXC_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_F",
			"arifle_MXM_Black_F",
			"arifle_MXM_khk_F",
			"arifle_MX_SW_F",
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_khk_F",
			"arifle_MX_GL_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_khk_F"
		};
		magazines[]=
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
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
			"ace_realisticweights"
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
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_tanmag_co.paa"};
	};
	class FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 30Rnd Tracer Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_tanmag_co.paa"};
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
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_tanmag_co.paa"};
	};
	class FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 100Rnd Tracer Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_tanmag_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"};
	};
	class 100Rnd_65x39_caseless_khaki_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_green_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"};
	};
	class 100Rnd_65x39_caseless_black_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"};
	};
	
	
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim;
	class FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_tanmag_co.paa"};
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
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_tanmag_co.paa"};
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
};
	

class CfgMagazineWells
{
	
	class MX_65x39
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim"
		};
	};
	
	class MX_65x39_Large
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim"
		};
	};
	
	class CBA_65x39_MX
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim"
		};
	};
	
	class CBA_65x39_MX_XL
	{
		FP_GOR_Vanilla_Magazines[] =
		{
			"FP_GOR_30Rnd_65x39_caseless_tan_mag",
			"FP_GOR_30Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag",
			"FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer",
			"FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim",
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim"
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
	};
	class arifle_MX_Black_F: arifle_MX_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_black_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\XMX_short_black_co.paa"
		};
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
	
	class arifle_MXM_F: arifle_MX_Base_F
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\xmx_long.rvmat"
		}; 
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_black_co.paa"
		};
	};
	class arifle_MXM_khk_F: arifle_MXM_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_long_green_co.paa"
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
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_lmg_black_co.paa"
		};
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
			"\A3\Weapons_F\Rifles\MX\Data\XMX_base_co.paa",
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
	class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F
	{
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\mx\data\XMX_Base_green_co.paa",
			"\FP_Factions\gordon_reskins\mx\data\GLX_Black_CO.paa"
		};
	};
};
