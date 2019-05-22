class CfgPatches
{
	class gordon_reskins_stoner
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_LMG_Mk200_F_black",
			"FP_GOR_LMG_Mk200_F_FDE_blackbox",
			"FP_GOR_LMG_Mk200_F_olive_blackbox",
			"FP_GOR_LMG_Mk200_F_carc",
			"FP_GOR_LMG_Mk200_F_carcdes",
			"FP_GOR_LMG_Mk200_F_carcwin",
			"FP_GOR_LMG_Mk200_F_black_greenbox",
			"FP_GOR_LMG_Mk200_F_black_tanbox",			
			"FP_GOR_LMG_Mk200_F_black_woodbox"
		};
	};
};
class CfgWeapons
{
	class LMG_Mk200_F;
	class FP_GOR_LMG_Mk200_F_black: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black";
		baseWeapon="FP_GOR_LMG_Mk200_F_black";
		displayName="Stoner 99 LMG (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_FDE_blackbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_FDE_blackbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_FDE_blackbox";
		displayName="Stoner 99 LMG (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_fde_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_olive_blackbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_olive_blackbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_olive_blackbox";
		displayName="Stoner 99 LMG (Olive)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_blackbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_olive_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_carc: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_carc";
		baseWeapon="FP_GOR_LMG_Mk200_F_carc";
		displayName="Stoner 99 LMG (CARC)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_greenbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_carc_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_carcdes: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_carcdes";
		baseWeapon="FP_GOR_LMG_Mk200_F_carcdes";
		displayName="Stoner 99 LMG (CARC Desert)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_tanbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_carcdes_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_carcwin: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_carcwin";
		baseWeapon="FP_GOR_LMG_Mk200_F_carcwin";
		displayName="Stoner 99 LMG (CARC Winter)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_whitebox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_carcwin_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_black_greenbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_greenbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_greenbox";
		displayName="Stoner 99 LMG (Black, green ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_greenbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_black_tanbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_tanbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_tanbox";
		displayName="Stoner 99 LMG (Black, tan ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_tanbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
	class FP_GOR_LMG_Mk200_F_black_woodbox: LMG_Mk200_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_LMG_Mk200_F_black_woodbox";
		baseWeapon="FP_GOR_LMG_Mk200_F_black_woodbox";
		displayName="Stoner 99 LMG (Black, woodland ammobox)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\1st_person_black_woodbox_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\body_black_co.paa",
			"\FP_Factions\gordon_reskins\stoner\data\grip_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_1st_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\vig_m200_body_metal.rvmat",
			"\FP_Factions\gordon_reskins\stoner\data\grip_metal.rvmat"
		}; 
	};
};