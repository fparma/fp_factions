class CfgPatches
{
	class gordon_reskins_mx
	{
		units[] = {};
		weapons[] = {};
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
			"FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim"
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_mag_Tracer;
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim;
	
	class 100Rnd_65x39_caseless_mag;
	class 100Rnd_65x39_caseless_mag_Tracer;
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim;
	
	
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
	
	class FP_GOR_ACE_30Rnd_65x39_caseless_tan_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_Base_tanmag_co.paa"};
	};
	class FP_GOR_ACE_30Rnd_65x39_caseless_black_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Black Mag";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
	};
	class FP_GOR_ACE_30Rnd_65x39_caseless_khaki_mag_Tracer_Dim: ACE_30Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 30Rnd Tracer IR-DIM Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
	};
	
	
	class FP_GOR_100Rnd_65x39_caseless_tan_mag: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5 mm 100Rnd Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_tanmag_co.paa"};
	};
	
	class FP_GOR_100Rnd_65x39_caseless_tan_mag_Tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5 mm 100Rnd Tracer Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_tanmag_co.paa"};
	};
	
	class FP_GOR_ACE_100Rnd_65x39_caseless_tan_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Tan Mag";
		hiddenSelectionsTextures[] = {"\FP_Factions\gordon_reskins\mx\data\XMX_LMG_tanmag_co.paa"};
	};
	class FP_GOR_ACE_100Rnd_65x39_caseless_black_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Black Mag";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"};
		picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
	};
	class FP_GOR_ACE_100Rnd_65x39_caseless_khaki_mag_Tracer_Dim: ACE_100Rnd_65x39_caseless_mag_Tracer_Dim
	{
		displayname="6.5 mm 100Rnd Tracer IR-DIM Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"};
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

