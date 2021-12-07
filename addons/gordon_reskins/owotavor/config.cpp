class CfgPatches
{
	class gordon_reskins_tavor
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_arifle_TRG21_F_black", // TAR-21
			"FP_GOR_arifle_TRG21_GL_F_black", // GTAR-21 EGLM
			"FP_GOR_arifle_TRG20_F_black" // CTAR-21
		};
	};
};
class CfgWeapons
{
	class arifle_TRG21_F;
	class FP_GOR_arifle_TRG21_F_black: arifle_TRG21_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_TRG21_F_black";
		baseWeapon="FP_GOR_arifle_TRG21_F_black";
		displayName="TAR-21 (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\owotavor\data\tar21_black_co.paa"
		};
	};
	
	
	class arifle_TRG20_F;
	class FP_GOR_arifle_TRG20_F_black: arifle_TRG20_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_TRG20_F_black";
		baseWeapon="FP_GOR_arifle_TRG20_F_black";
		displayName="CTAR-21 (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\owotavor\data\tar21_black_co.paa"
		};
	};
	
	
	class arifle_TRG21_GL_F;
	class FP_GOR_arifle_TRG21_GL_F_black: arifle_TRG21_GL_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_arifle_TRG21_GL_F_black";
		baseWeapon="FP_GOR_arifle_TRG21_GL_F_black";
		displayName="GTAR-21 EGLM (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\owotavor\data\tar21_black_co.paa",
			"\a3\weapons_f\rifles\trg20\data\tar21_eglm_co.paa",
			"\a3\weapons_f\data\gl_holo_co.paa"
		};
	};
};