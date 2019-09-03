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
			"FP_GOR_Uniform_Massifjacket_Woodland",
			"FP_GOR_Uniform_Massifjacket_02_Woodland",
			"FP_GOR_Uniform_Massif_stripeyarid",
			"FP_GOR_Uniform_Massif_02_stripeyarid",
			"FP_GOR_Uniform_Massifjacket_stripeyarid",
			"FP_GOR_Uniform_Massifjacket_02_stripeyarid",
			"FP_GOR_Uniform_Massif_stripeywoodland",
			"FP_GOR_Uniform_Massif_02_stripeywoodland",
			"FP_GOR_Uniform_Massifjacket_stripeywoodland",
			"FP_GOR_Uniform_Massifjacket_02_stripeywoodland",
			"FP_GOR_Uniform_Massif_stripeydesert",
			"FP_GOR_Uniform_Massif_02_stripeydesert",
			"FP_GOR_Uniform_Massifjacket_stripeydesert",
			"FP_GOR_Uniform_Massifjacket_02_stripeydesert",
			"FP_GOR_Uniform_Massif_frenchlizardc1",
			"FP_GOR_Uniform_Massif_02_frenchlizardc1",
			"FP_GOR_Uniform_Massifjacket_frenchlizardc1",
			"FP_GOR_Uniform_Massifjacket_02_frenchlizardc1",
			"FP_GOR_Uniform_Massif_frenchlizarda2",
			"FP_GOR_Uniform_Massif_02_frenchlizarda2",
			"FP_GOR_Uniform_Massifjacket_frenchlizarda2",
			"FP_GOR_Uniform_Massifjacket_02_frenchlizarda2",
			"FP_GOR_Uniform_Massif_frenchlizardfictional",
			"FP_GOR_Uniform_Massif_02_frenchlizardfictional",
			"FP_GOR_Uniform_Massifjacket_frenchlizardfictional",
			"FP_GOR_Uniform_Massifjacket_02_frenchlizardfictional",
			"FP_GOR_Uniform_Massif_syndikat",
			"FP_GOR_Uniform_Massif_02_syndikat",
			"FP_GOR_Uniform_Massif_tigerstripejungle",
			"FP_GOR_Uniform_Massif_02_tigerstripejungle",
			"FP_GOR_Uniform_Massifjacket_tigerstripejungle",
			"FP_GOR_Uniform_Massifjacket_02_tigerstripejungle",
			"FP_GOR_Uniform_Massif_tigerstripedesert",
			"FP_GOR_Uniform_Massif_02_tigerstripedesert",
			"FP_GOR_Uniform_Massifjacket_tigerstripedesert",
			"FP_GOR_Uniform_Massifjacket_02_tigerstripedesert",
			"FP_GOR_Uniform_Massif_tigerstripenaval",
			"FP_GOR_Uniform_Massif_02_tigerstripenaval",
			"FP_GOR_Uniform_Massifjacket_tigerstripenaval",
			"FP_GOR_Uniform_Massifjacket_02_tigerstripenaval",
			"FP_GOR_Uniform_Massif_oakleafsummer",
			"FP_GOR_Uniform_Massif_02_oakleafsummer",
			"FP_GOR_Uniform_Massifjacket_oakleafsummer",
			"FP_GOR_Uniform_Massifjacket_02_oakleafsummer",
			"FP_GOR_Uniform_Massif_oakleaffall",
			"FP_GOR_Uniform_Massif_02_oakleaffall",
			"FP_GOR_Uniform_Massifjacket_oakleaffall",
			"FP_GOR_Uniform_Massifjacket_02_oakleaffall",
			"FP_GOR_Uniform_Massif_auscamdpcu",
			"FP_GOR_Uniform_Massif_02_auscamdpcu",
			"FP_GOR_Uniform_Massifjacket_auscamdpcu",
			"FP_GOR_Uniform_Massifjacket_02_auscamdpcu",
			"FP_GOR_Uniform_Massif_auscamdpdu",
			"FP_GOR_Uniform_Massif_02_auscamdpdu",
			"FP_GOR_Uniform_Massifjacket_auscamdpdu",
			"FP_GOR_Uniform_Massifjacket_02_auscamdpdu",
			"FP_GOR_Uniform_Massif_auscammidpoint",
			"FP_GOR_Uniform_Massif_02_auscammidpoint",
			"FP_GOR_Uniform_Massifjacket_auscammidpoint",
			"FP_GOR_Uniform_Massifjacket_02_auscammidpoint",
			"FP_GOR_Uniform_Massif_smk",
			"FP_GOR_Uniform_Massif_02_smk",
			"FP_GOR_Uniform_Massifjacket_smk",
			"FP_GOR_Uniform_Massifjacket_02_smk",
			"FP_GOR_Uniform_Massif_cropat",
			"FP_GOR_Uniform_Massif_02_cropat",
			"FP_GOR_Uniform_Massifjacket_cropat",
			"FP_GOR_Uniform_Massifjacket_02_cropat",
			"FP_GOR_Uniform_Massif_honor",
			"FP_GOR_Uniform_Massif_02_honor",
			"FP_GOR_Uniform_Massifjacket_honor",
			"FP_GOR_Uniform_Massifjacket_02_honor"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Data_F_Enoch_Loadorder"
		};
	};
};
class CfgVehicles
{	
	class I_soldier_F;
	class I_Soldier_02_F;
	class I_E_Uniform_01_F;
	class I_E_Uniform_01_shortsleeve_F;
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
	class FP_GOR_Massifjacket_Woodland: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_Woodland";
		displayName="Massif (M81 Woodland, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketwoodland_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifwoodland_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_Woodland: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_Woodland";
		displayName="Massif (M81 Woodland, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketwoodland_co.paa",
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
	class FP_GOR_Massifjacket_stripeyarid: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_stripeyarid";
		displayName="Massif (DBC Arid, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeyarid_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeyarid_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_stripeyarid: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_stripeyarid";
		displayName="Massif (DBC Arid, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeyarid_co.paa",
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
	class FP_GOR_Massifjacket_stripeywoodland: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_stripeywoodland";
		displayName="Massif (DBC Woodland, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeywoodland_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeywoodland_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_stripeywoodland: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_stripeywoodland";
		displayName="Massif (DBC Woodland, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeywoodland_co.paa",
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
	class FP_GOR_Massifjacket_stripeydesert: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_stripeydesert";
		displayName="Massif (DBC Desert, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeydesert_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifstripeydesert_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_stripeydesert: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_stripeydesert";
		displayName="Massif (DBC Desert, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeydesert_co.paa",
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
	class FP_GOR_Massifjacket_frenchlizardc1: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_frenchlizardc1";
		displayName="Massif (French Lizard C1, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardc1_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardc1_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_frenchlizardc1: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_frenchlizardc1";
		displayName="Massif (French Lizard C1, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardc1_co.paa",
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
	class FP_GOR_Massifjacket_frenchlizarda2: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_frenchlizarda2";
		displayName="Massif (French Lizard A2, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizarda2_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizarda2_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_frenchlizarda2: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_frenchlizarda2";
		displayName="Massif (French Lizard A2, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizarda2_co.paa",
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
	class FP_GOR_Massifjacket_frenchlizardfictional: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_frenchlizardfictional";
		displayName="Massif (French Lizard Fictional, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardfictional_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiffrenchlizardfictional_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_frenchlizardfictional: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_frenchlizardfictional";
		displayName="Massif (French Lizard Fictional, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardfictional_co.paa",
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
	class FP_GOR_Massifjacket_tigerstripejungle: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_tigerstripejungle";
		displayName="Massif (Tigerstripe jungle, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripejungle_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripejungle_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_tigerstripejungle: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_tigerstripejungle";
		displayName="Massif (Tigerstripe jungle, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripejungle_co.paa",
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
	class FP_GOR_Massifjacket_tigerstripedesert: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_tigerstripedesert";
		displayName="Massif (Tigerstripe desert, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripedesert_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripedesert_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_tigerstripedesert: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_tigerstripedesert";
		displayName="Massif (Tigerstripe desert, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripedesert_co.paa",
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
	class FP_GOR_Massifjacket_tigerstripenaval: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_tigerstripenaval";
		displayName="Massif (Tigerstripe naval, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripenaval_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massiftigerstripenaval_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_tigerstripenaval: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_tigerstripenaval";
		displayName="Massif (Tigerstripe naval, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripenaval_co.paa",
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
	class FP_GOR_Massifjacket_oakleafsummer: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_oakleafsummer";
		displayName="Massif (Oakleaf summer, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleafsummer_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleafsummer_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_oakleafsummer: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_oakleafsummer";
		displayName="Massif (Oakleaf summer, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleafsummer_co.paa",
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
	class FP_GOR_Massifjacket_oakleaffall: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_oakleaffall";
		displayName="Massif (Oakleaf fall, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleaffall_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifoakleaffall_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_oakleaffall: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_oakleaffall";
		displayName="Massif (Oakleaf fall, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleaffall_co.paa",
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
	class FP_GOR_Massifjacket_auscamdpcu: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_auscamdpcu";
		displayName="Massif (AUSCAM DPCU, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpcu_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpcu_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_auscamdpcu: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_auscamdpcu";
		displayName="Massif (AUSCAM DPCU, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpcu_co.paa",
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
	class FP_GOR_Massifjacket_auscamdpdu: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_auscamdpdu";
		displayName="Massif (AUSCAM DPDU, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpdu_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscamdpdu_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_auscamdpdu: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_auscamdpdu";
		displayName="Massif (AUSCAM DPDU, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpdu_co.paa",
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
	class FP_GOR_Massifjacket_auscammidpoint: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_auscammidpoint";
		displayName="Massif (AUSCAM midpoint, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscammidpoint_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscammidpoint_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_auscammidpoint: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_auscammidpoint";
		displayName="Massif (AUSCAM midpoint, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscammidpoint_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifauscammidpoint_co.paa"
		};
	};
	class FP_GOR_Massif_smk: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_smk";
		displayName="Massif (SMK)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifsmk_co.paa"
		};
	};
	class FP_GOR_Massif_02_smk: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_smk";
		displayName="Massif (SMK, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifsmk_co.paa"
		};
	};
	class FP_GOR_Massifjacket_smk: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_smk";
		displayName="Massif (SMK, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketsmk_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifsmk_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_smk: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_smk";
		displayName="Massif (SMK, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketsmk_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifsmk_co.paa"
		};
	};
	class FP_GOR_Massif_cropat: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_cropat";
		displayName="Massif (CROPAT)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifcropat_co.paa"
		};
	};
	class FP_GOR_Massif_02_cropat: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_cropat";
		displayName="Massif (CROPAT, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifcropat_co.paa"
		};
	};
	class FP_GOR_Massifjacket_cropat: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_cropat";
		displayName="Massif (CROPAT, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketcropat_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifcropat_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_cropat: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_cropat";
		displayName="Massif (CROPAT, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketcropat_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifcropat_co.paa"
		};
	};
	class FP_GOR_Massif_honor: I_soldier_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_honor";
		displayName="Massif (Project Honor)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifhonor_co.paa"
		};
	};
	class FP_GOR_Massif_02_honor: I_Soldier_02_F
	{
		author="Gordon Weedman";
		_generalMacro="I_Soldier_02_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massif_02_honor";
		displayName="Massif (Project Honor, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\massifhonor_co.paa"
		};
	};
	class FP_GOR_Massifjacket_honor: I_E_Uniform_01_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_honor";
		displayName="Massif (Project Honor, jacket)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackethonor_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifhonor_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_GOR_Massifjacket_02_honor: I_E_Uniform_01_shortsleeve_F
	{
		author="Gordon Weedman";
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Massifjacket_02_honor";
		displayName="Massif (Project Honor, jacket, sleeves)";
		nakedUniform="U_BasicBody";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackethonor_co.paa",
			"\FP_Factions\gordon_reskins\massifreskin\data\massifhonor_co.paa"
		};
	};
};
class CfgWeapons			
{
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_I_E_Uniform_01_F;
	class U_I_E_Uniform_01_shortsleeve_F;
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
	class FP_GOR_Uniform_Massifjacket_Woodland: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (M81 Woodland, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketwoodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_Woodland: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (M81 Woodland, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketwoodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_Woodland";
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
	class FP_GOR_Uniform_Massifjacket_stripeyarid: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (DBC Arid, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeyarid_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_stripeyarid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_stripeyarid: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (DBC Arid, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeyarid_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_stripeyarid";
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
	class FP_GOR_Uniform_Massifjacket_stripeywoodland: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (DBC Woodland, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeywoodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_stripeywoodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_stripeywoodland: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (DBC Woodland, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeywoodland_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_stripeywoodland";
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
	class FP_GOR_Uniform_Massifjacket_stripeydesert: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (DBC Desert, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeydesert_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_stripeydesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_stripeydesert: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (DBC Desert, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketstripeydesert_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_stripeydesert";
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
	class FP_GOR_Uniform_Massifjacket_frenchlizardc1: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (French Lizard C1, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardc1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_frenchlizardc1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_frenchlizardc1: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (French Lizard C1, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardc1_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_frenchlizardc1";
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
	class FP_GOR_Uniform_Massifjacket_frenchlizarda2: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (French Lizard A2, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizarda2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_frenchlizarda2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_frenchlizarda2: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (French Lizard A2, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizarda2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_frenchlizarda2";
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
	class FP_GOR_Uniform_Massifjacket_frenchlizardfictional: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (French Lizard Fictional, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardfictional_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_frenchlizardfictional";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_frenchlizardfictional: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (French Lizard Fictional, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketfrenchlizardfictional_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_frenchlizardfictional";
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
	class FP_GOR_Uniform_Massifjacket_tigerstripejungle: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Tigerstripe jungle, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripejungle_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_tigerstripejungle";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_tigerstripejungle: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Tigerstripe jungle, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripejungle_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_tigerstripejungle";
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
	class FP_GOR_Uniform_Massifjacket_tigerstripedesert: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Tigerstripe desert, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripedesert_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_tigerstripedesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_tigerstripedesert: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Tigerstripe desert, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripedesert_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_tigerstripedesert";
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
	class FP_GOR_Uniform_Massifjacket_tigerstripenaval: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Tigerstripe naval, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripenaval_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_tigerstripenaval";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_tigerstripenaval: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Tigerstripe naval, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackettigerstripenaval_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_tigerstripenaval";
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
	class FP_GOR_Uniform_Massifjacket_oakleafsummer: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Oakleaf summer, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleafsummer_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_oakleafsummer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_oakleafsummer: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Oakleaf summer, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleafsummer_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_oakleafsummer";
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
	class FP_GOR_Uniform_Massifjacket_oakleaffall: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Oakleaf fall, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleaffall_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_oakleaffall";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_oakleaffall: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Oakleaf fall, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketoakleaffall_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_oakleaffall";
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
	class FP_GOR_Uniform_Massifjacket_auscamdpcu: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (AUSCAM DPCU, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpcu_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_auscamdpcu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_auscamdpcu: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (AUSCAM DPCU, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpcu_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_auscamdpcu";
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
	class FP_GOR_Uniform_Massifjacket_auscamdpdu: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (AUSCAM DPDU, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpdu_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_auscamdpdu";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_auscamdpdu: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (AUSCAM DPDU, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscamdpdu_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_auscamdpdu";
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
	class FP_GOR_Uniform_Massifjacket_auscammidpoint: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (AUSCAM midpoint, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscammidpoint_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_auscammidpoint";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_auscammidpoint: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (AUSCAM midpoint, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketauscammidpoint_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_auscammidpoint";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_smk: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (SMK)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_smk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_smk: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (SMK, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_smk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_smk: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (SMK, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketsmk_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_smk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_smk: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (SMK, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketsmk_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_smk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_cropat: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (CROPAT)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_cropat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_cropat: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (CROPAT, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_cropat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_cropat: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (CROPAT, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketcropat_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_cropat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_cropat: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (CROPAT, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jacketcropat_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_cropat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_honor: U_I_CombatUniform
	{
		scope=2;
		displayName="Massif (Project Honor)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_honor";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massif_02_honor: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Massif (Project Honor, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massif_02_honor";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_honor: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Massif (Project Honor, jacket)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackethonor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_honor";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Massifjacket_02_honor: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Massif (Project Honor, jacket, sleeves)";
		author="Gordon Weedman";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\massifreskin\data\jackethonor_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Massifjacket_02_honor";
			containerClass="Supply40";
			mass=40;
		};
	};
};