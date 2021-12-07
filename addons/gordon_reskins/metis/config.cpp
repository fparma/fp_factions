class CfgPatches
{
	class gordon_reskins_vorona_metis
	{
		requiredAddons[]=
		{
			"A3_Weapons_F_Tank"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"FP_GOR_launch_O_Vorona_metis_F"
		};
	};
};
class CfgWeapons
{
	class launch_O_Vorona_brown_F;
	class FP_GOR_launch_O_Vorona_metis_F: launch_O_Vorona_brown_F
	{
		author="Gordon Weedman";
		_generalMacro="FP_GOR_launch_O_Vorona_metis_F";
		displayName="Metis-M (Russian)";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\metis\data\Vorona_metis_co.paa",
			"\FP_Factions\gordon_reskins\metis\data\Vorona_metis_co.paa"
		};
	};
};
