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
class CfgAmmo
{
	class B_45ACP_Ball;
	class FP_GOR_B_10mm_ball: B_45ACP_Ball
	{
		ACE_barrelLengths=[127];
		ACE_bulletMass=12;
		ACE_caliber=10.17;
		ACE_damageType="bullet";
		ACE_dragModel=1;
		ACE_muzzleVelocities=[420];
		hit=6.5;
		caliber=1.1;
		typicalspeed=400;
	};
};

class CfgMagazines
{
	class 9Rnd_45ACP_Mag;
	class FP_GOR_9Rnd_10mm_Mag: 9Rnd_45ACP_Mag
	{
		ammo="FP_GOR_B_10mm_ball";
		author="Gordon Weedman";
		count=9;
		descriptionShort="Caliber: 10mm Auto<br />Rounds: 9<br />Used in: Custom Covert X";
		displayname="10mm Auto 9Rnd Mag";
		displaynameshort="10mm Auto";
		initSpeed=400;
	};
};

class CfgMagazineWells
{
	class FP_GOR_10mmAuto_1911
	{
		FP_GOR_Magazines[]=
		{
			"FP_GOR_9Rnd_10mm_Mag"
		};
	};
};

class CfgWeapons
{
	class Pistol_Base_F;
	class hgun_ACPC2_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	
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
	
	

	class FP_GOR_hgun_CCX_F: hgun_ACPC2_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_F";
		baseWeapon="FP_GOR_hgun_CCX_F";
		displayName="Custom Covert X";
		magazines[]=
		{
			"FP_GOR_9Rnd_10mm_Mag"
		};
		magazineWell[]=
		{
			"FP_GOR_10mmAuto_1911"
		};
		initSpeed=-1.05;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=26;
		};
	};
	class FP_GOR_hgun_CCX_black_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_black_F";
		baseWeapon="FP_GOR_hgun_CCX_black_F";
		displayName="Custom Covert X (Black)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_black_co.paa"
		};
	};
	class FP_GOR_hgun_CCX_green_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_green_F";
		baseWeapon="FP_GOR_hgun_CCX_green_F";
		displayName="Custom Covert X (Green)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_green_co.paa"
		};
	};
	class FP_GOR_hgun_CCX_fde_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_fde_F";
		baseWeapon="FP_GOR_hgun_CCX_fde_F";
		displayName="Custom Covert X (FDE)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_fde_co.paa"
		};
	};
	class FP_GOR_hgun_CCX_fdeslide_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_fdeslide_F";
		baseWeapon="FP_GOR_hgun_CCX_fdeslide_F";
		displayName="Custom Covert X (FDE slide)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_fdeslide_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_slide.rvmat"
		}; 
	};
	class FP_GOR_hgun_CCX_chromeslide_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_chromeslide_F";
		baseWeapon="FP_GOR_hgun_CCX_chromeslide_F";
		displayName="Custom Covert X (Two-tone)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromeslide_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromeslide.rvmat"
		}; 
	};
	class FP_GOR_hgun_CCX_chromereceiver_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_chromereceiver_F";
		baseWeapon="FP_GOR_hgun_CCX_chromereceiver_F";
		displayName="Custom Covert X (Two-tone inverted)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromereceiver_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\FP_Factions\gordon_reskins\vanilla1911\data\Acpc2_chromereceiver.rvmat"
		}; 
	};
	class FP_GOR_hgun_CCX_chrome_F: FP_GOR_hgun_CCX_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_hgun_CCX_chrome_F";
		baseWeapon="FP_GOR_hgun_CCX_chrome_F";
		displayName="Custom Covert X (Chrome)";
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