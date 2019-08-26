class CfgPatches
{
	class gordon_reskins_massif
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_Uniform_Massif_Woodland",
			"FP_GOR_Uniform_Massif_02_Woodland",
			"FP_GOR_Uniform_Massif_stripeyarid",
			"FP_GOR_Uniform_Massif_02_stripeyarid",
			"FP_GOR_Uniform_Massif_stripeywoodland",
			"FP_GOR_Uniform_Massif_02_stripeywoodland",
			"FP_GOR_Uniform_Massif_stripeydesert",
			"FP_GOR_Uniform_Massif_02_stripeydesert",
			"FP_GOR_Uniform_Massif_frenchlizardc1",
			"FP_GOR_Uniform_Massif_02_frenchlizardc1",
			"FP_GOR_Uniform_Massif_frenchlizarda2",
			"FP_GOR_Uniform_Massif_02_frenchlizarda2",
			"FP_GOR_Uniform_Massif_frenchlizardfictional",
			"FP_GOR_Uniform_Massif_02_frenchlizardfictional",
			"FP_GOR_Uniform_Massif_syndikat",
			"FP_GOR_Uniform_Massif_02_syndikat",
			"FP_GOR_Uniform_Massif_tigerstripejungle",
			"FP_GOR_Uniform_Massif_02_tigerstripejungle",
			"FP_GOR_Uniform_Massif_tigerstripedesert",
			"FP_GOR_Uniform_Massif_02_tigerstripedesert",
			"FP_GOR_Uniform_Massif_tigerstripenaval",
			"FP_GOR_Uniform_Massif_02_tigerstripenaval",
			"FP_GOR_Uniform_Massif_oakleafsummer",
			"FP_GOR_Uniform_Massif_02_oakleafsummer",
			"FP_GOR_Uniform_Massif_oakleaffall",
			"FP_GOR_Uniform_Massif_02_oakleaffall",
			"FP_GOR_Uniform_Massif_auscamdpcu",
			"FP_GOR_Uniform_Massif_02_auscamdpcu",
			"FP_GOR_Uniform_Massif_auscamdpdu",
			"FP_GOR_Uniform_Massif_02_auscamdpdu",
			"FP_GOR_Uniform_Massif_auscammidpoint",
			"FP_GOR_Uniform_Massif_02_auscammidpoint"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgVehicles
{	
	class I_soldier_F;
	class I_Soldier_02_F;
	class FP_GOR_Massif_Woodland: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_Woodland";
		displayName="Massif (M81 Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifwoodland_co.paa"
		};
	};
	class FP_GOR_Massif_02_Woodland: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_Woodland";
		displayName="Massif (M81 Woodland, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifwoodland_co.paa"
		};
	};
	class FP_GOR_Massif_stripeyarid: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_stripeyarid";
		displayName="Massif (DBC Arid)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeyarid_co.paa"
		};
	};
	class FP_GOR_Massif_02_stripeyarid: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_stripeyarid";
		displayName="Massif (DBC Arid, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeyarid_co.paa"
		};
	};
	class FP_GOR_Massif_stripeywoodland: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_stripeywoodland";
		displayName="Massif (DBC Woodland)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeywoodland_co.paa"
		};
	};
	class FP_GOR_Massif_02_stripeywoodland: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_stripeywoodland";
		displayName="Massif (DBC Woodland, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeywoodland_co.paa"
		};
	};
	class FP_GOR_Massif_stripeydesert: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_stripeydesert";
		displayName="Massif (DBC Desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeydesert_co.paa"
		};
	};
	class FP_GOR_Massif_02_stripeydesert: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_stripeydesert";
		displayName="Massif (DBC Desert, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeydesert_co.paa"
		};
	};
	class FP_GOR_Massif_frenchlizardc1: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_frenchlizardc1";
		displayName="Massif (French Lizard C1)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardc1_co.paa"
		};
	};
	class FP_GOR_Massif_02_frenchlizardc1: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_frenchlizardc1";
		displayName="Massif (French Lizard C1, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardc1_co.paa"
		};
	};
	class FP_GOR_Massif_frenchlizarda2: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_frenchlizarda2";
		displayName="Massif (French Lizard A2)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizarda2_co.paa"
		};
	};
	class FP_GOR_Massif_02_frenchlizarda2: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_frenchlizarda2";
		displayName="Massif (French Lizard A2, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizarda2_co.paa"
		};
	};
	class FP_GOR_Massif_frenchlizardfictional: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_frenchlizardfictional";
		displayName="Massif (French Lizard Fictional)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_Massif_02_frenchlizardfictional: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_frenchlizardfictional";
		displayName="Massif (French Lizard Fictional, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_Massif_syndikat: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_syndikat";
		displayName="Combat Fatigues [Syndikat]";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
	};
	class FP_GOR_Massif_02_syndikat: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_syndikat";
		displayName="Combat Fatigues [Syndikat] (Rolled-up)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"
		};
	};
	class FP_GOR_Massif_tigerstripejungle: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_tigerstripejungle";
		displayName="Massif (Tigerstripe jungle)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripejungle_co.paa"
		};
	};
	class FP_GOR_Massif_02_tigerstripejungle: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_tigerstripejungle";
		displayName="Massif (Tigerstripe jungle, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripejungle_co.paa"
		};
	};
	class FP_GOR_Massif_tigerstripedesert: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_tigerstripedesert";
		displayName="Massif (Tigerstripe desert)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripedesert_co.paa"
		};
	};
	class FP_GOR_Massif_02_tigerstripedesert: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_tigerstripedesert";
		displayName="Massif (Tigerstripe desert, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripedesert_co.paa"
		};
	};
	class FP_GOR_Massif_tigerstripenaval: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_tigerstripenaval";
		displayName="Massif (Tigerstripe naval)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripenaval_co.paa"
		};
	};
	class FP_GOR_Massif_02_tigerstripenaval: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_tigerstripenaval";
		displayName="Massif (Tigerstripe naval, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripenaval_co.paa"
		};
	};
	class FP_GOR_Massif_oakleafsummer: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_oakleafsummer";
		displayName="Massif (Oakleaf summer)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleafsummer_co.paa"
		};
	};
	class FP_GOR_Massif_02_oakleafsummer: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_oakleafsummer";
		displayName="Massif (Oakleaf summer, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleafsummer_co.paa"
		};
	};
	class FP_GOR_Massif_oakleaffall: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_oakleaffall";
		displayName="Massif (Oakleaf fall)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleaffall_co.paa"
		};
	};
	class FP_GOR_Massif_02_oakleaffall: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_oakleaffall";
		displayName="Massif (Oakleaf fall, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleaffall_co.paa"
		};
	};
	class FP_GOR_Massif_auscamdpcu: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_auscamdpcu";
		displayName="Massif (AUSCAM DPCU)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpcu_co.paa"
		};
	};
	class FP_GOR_Massif_02_auscamdpcu: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_auscamdpcu";
		displayName="Massif (AUSCAM DPCU, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpcu_co.paa"
		};
	};
	class FP_GOR_Massif_auscamdpdu: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_auscamdpdu";
		displayName="Massif (AUSCAM DPDU)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpdu_co.paa"
		};
	};
	class FP_GOR_Massif_02_auscamdpdu: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_auscamdpdu";
		displayName="Massif (AUSCAM DPDU, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpdu_co.paa"
		};
	};
	class FP_GOR_Massif_auscammidpoint: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_auscammidpoint";
		displayName="Massif (AUSCAM midpoint)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscammidpoint_co.paa"
		};
	};
	class FP_GOR_Massif_02_auscammidpoint: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_auscammidpoint";
		displayName="Massif (AUSCAM midpoint, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscammidpoint_co.paa"
		};
	};
};
class CfgWeapons			
{
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class UniformItem;
	class FP_GOR_Uniform_Massif_Woodland: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (M81 Woodland)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_Woodland: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (M81 Woodland, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_stripeyarid: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (DBC Arid)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_stripeyarid: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (DBC Arid, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_stripeywoodland: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (DBC Woodland)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_stripeywoodland: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (DBC Woodland, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_stripeydesert: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (DBC Desert)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_stripeydesert: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (DBC Desert, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_frenchlizardc1: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (French Lizard C1)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_frenchlizardc1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_frenchlizardc1: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (French Lizard C1, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_frenchlizardc1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_frenchlizarda2: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (French Lizard A2)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_frenchlizarda2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_frenchlizarda2: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (French Lizard A2, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_frenchlizarda2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_frenchlizardfictional: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (French Lizard Fictional)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_frenchlizardfictional";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_frenchlizardfictional: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (French Lizard Fictional, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_frenchlizardfictional";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_syndikat: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues [Syndikat]";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_syndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_syndikat: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues [Syndikat] (Rolled-up)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_syndikat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_tigerstripejungle: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Tigerstripe jungle)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_tigerstripejungle";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_tigerstripejungle: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Tigerstripe jungle, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_tigerstripejungle";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_tigerstripedesert: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Tigerstripe desert)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_tigerstripedesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_tigerstripedesert: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Tigerstripe desert, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_tigerstripedesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_tigerstripenaval: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Tigerstripe naval)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_tigerstripenaval";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_tigerstripenaval: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Tigerstripe naval, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_tigerstripenaval";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_oakleafsummer: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Oakleaf summer)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_oakleafsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_oakleafsummer: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Oakleaf summer, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_oakleafsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_oakleaffall: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Oakleaf fall)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_oakleaffall";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_oakleaffall: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Oakleaf fall, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_oakleaffall";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_auscamdpcu: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (AUSCAM DPCU)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_auscamdpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_auscamdpcu: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (AUSCAM DPCU, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_auscamdpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_auscamdpdu: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (AUSCAM DPDU)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_auscamdpdu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_auscamdpdu: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (AUSCAM DPDU, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_auscamdpdu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_auscammidpoint: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (AUSCAM midpoint)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_auscammidpoint";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_auscammidpoint: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (AUSCAM midpoint, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_auscammidpoint";
			containerClass="Supply40";
			mass=40;
		};
	};
};