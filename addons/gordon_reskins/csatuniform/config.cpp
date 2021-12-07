class CfgPatches
{
	class gordon_reskins_csatuniform
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_Uniform_CSATfatigues_Russian"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};
class CfgVehicles
{	
	class O_Soldier_F;
	class FP_GOR_CSATfatigues_Russian: O_Soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="O_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_CSATfatigues_Russian";
		displayName="Fatigues (Russian)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa",
			"\a3\characters_f\OPFOR\Data\tech_rus_co.paa"
		};
	}; 
};
class CfgWeapons			
{
	class U_O_CombatUniform_ocamo;
	class UniformItem;
	class FP_GOR_Uniform_CSATfatigues_Russian: U_O_CombatUniform_ocamo
	{
		scope=2;
		displayName="Fatigues (Russian)";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_CSATfatigues_Russian";
			containerClass="Supply40";
			mass=40;
		};
	};
};