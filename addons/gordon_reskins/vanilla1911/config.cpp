class CfgPatches
{
	class gordon_reskins_vanilla1911
	{
		requiredAddons[]=
		{
			"A3_Data_F_AOW_Loadorder"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_hgun_ACPC2_black_F",
			"FP_GOR_hgun_ACPC2_green_F",
			"FP_GOR_hgun_ACPC2_fde_F",
			"FP_GOR_hgun_ACPC2_fdeslide_F",
			"FP_GOR_hgun_ACPC2_chromeslide_F",
			"FP_GOR_hgun_ACPC2_chromereceiver_F",
			"FP_GOR_hgun_ACPC2_chrome_F"
		};
	};
};
class CfgWeapons
{
	class hgun_ACPC2_F;
	
	class FP_GOR_hgun_ACPC2_black_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_black_F";
		baseWeapon="FP_GOR_hgun_ACPC2_black_F";
		displayName="Custom Covert II (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_black_co.paa"
		};
	};
	class FP_GOR_hgun_ACPC2_green_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_green_F";
		baseWeapon="FP_GOR_hgun_ACPC2_green_F";
		displayName="Custom Covert II (Green)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_green_co.paa"
		};
	};
	class FP_GOR_hgun_ACPC2_fde_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_fde_F";
		baseWeapon="FP_GOR_hgun_ACPC2_fde_F";
		displayName="Custom Covert II (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_fde_co.paa"
		};
	};
	class FP_GOR_hgun_ACPC2_fdeslide_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_fdeslide_F";
		baseWeapon="FP_GOR_hgun_ACPC2_fdeslide_F";
		displayName="Custom Covert II (FDE slide)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_fdeslide_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_slide.rvmat"
		}; 
	};
	class FP_GOR_hgun_ACPC2_chromeslide_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_chromeslide_F";
		baseWeapon="FP_GOR_hgun_ACPC2_chromeslide_F";
		displayName="Custom Covert II (Two-tone)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromeslide_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromeslide.rvmat"
		}; 
	};
	class FP_GOR_hgun_ACPC2_chromereceiver_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_chromereceiver_F";
		baseWeapon="FP_GOR_hgun_ACPC2_chromereceiver_F";
		displayName="Custom Covert II (Two-tone inverted)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromereceiver_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromereceiver.rvmat"
		}; 
	};
	class FP_GOR_hgun_ACPC2_chrome_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_ACPC2_chrome_F";
		baseWeapon="FP_GOR_hgun_ACPC2_chrome_F";
		displayName="Custom Covert II (Chrome)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chrome_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chrome.rvmat"
		}; 
	};
};