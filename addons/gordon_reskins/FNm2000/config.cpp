class CfgPatches
{
	class gordon_reskins_FNm2000
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_arifle_Mk20_F_black",
			"FP_GOR_arifle_Mk20C_F_black",
			"FP_GOR_arifle_Mk20_GL_F_black",
			"FP_GOR_arifle_Mk20_F_olive",
			"FP_GOR_arifle_Mk20C_F_olive",
			"FP_GOR_arifle_Mk20_GL_F_olive",
			"FP_GOR_arifle_Mk20_F_gray",
			"FP_GOR_arifle_Mk20C_F_gray",
			"FP_GOR_arifle_Mk20_GL_F_gray"
		};
	};
};
class CfgWeapons
{
	class arifle_Mk20_plain_F;
	class FP_GOR_arifle_Mk20_F_black: arifle_Mk20_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_F_black";
		baseWeapon="FP_GOR_arifle_Mk20_F_black";
		displayName="F2000 (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_black_co.paa"
		};
	};
	class FP_GOR_arifle_Mk20_F_olive: arifle_Mk20_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_F_olive";
		baseWeapon="FP_GOR_arifle_Mk20_F_olive";
		displayName="F2000 (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_olive_co.paa"
		};
	};
	class FP_GOR_arifle_Mk20_F_gray: arifle_Mk20_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_F_gray";
		baseWeapon="FP_GOR_arifle_Mk20_F_gray";
		displayName="F2000 (Gray)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_gray_co.paa"
		};
	};
	
	
	class arifle_Mk20C_plain_F;
	class FP_GOR_arifle_Mk20C_F_black: arifle_Mk20C_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20C_F_black";
		baseWeapon="FP_GOR_arifle_Mk20C_F_black";
		displayName="F2000 Tactical (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_black_co.paa"
		};
	};
	class FP_GOR_arifle_Mk20C_F_olive: arifle_Mk20C_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20C_F_olive";
		baseWeapon="FP_GOR_arifle_Mk20C_F_olive";
		displayName="F2000 Tactical (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_olive_co.paa"
		};
	};
	class FP_GOR_arifle_Mk20C_F_gray: arifle_Mk20C_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20C_F_gray";
		baseWeapon="FP_GOR_arifle_Mk20C_F_gray";
		displayName="F2000 Tactical (Gray)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_gray_co.paa"
		};
	};
	
	
	class arifle_Mk20_GL_plain_F;
	class FP_GOR_arifle_Mk20_GL_F_black: arifle_Mk20_GL_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_GL_F_black";
		baseWeapon="FP_GOR_arifle_Mk20_GL_F_black";
		displayName="F2000 EGLM (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_black_co.paa",
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"
		};
	};
	class FP_GOR_arifle_Mk20_GL_F_olive: arifle_Mk20_GL_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_GL_F_olive";
		baseWeapon="FP_GOR_arifle_Mk20_GL_F_olive";
		displayName="F2000 EGLM (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_olive_co.paa",
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"
		};
	};
	class FP_GOR_arifle_Mk20_GL_F_gray: arifle_Mk20_GL_plain_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_Mk20_GL_F_gray";
		baseWeapon="FP_GOR_arifle_Mk20_GL_F_gray";
		displayName="F2000 EGLM (Gray)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\FNm2000\data\mk20_gray_co.paa",
			"\A3\Weapons_F_Beta\Rifles\MK20\Data\mk20_utilities_CO.paa"
		};
	};
};