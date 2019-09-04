class CfgPatches
{
	class gordon_reskins_pasgthelmet
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_PASGThelmet_woodland",
			"FP_GOR_PASGThelmet_woodland_rhino",
			"FP_GOR_PASGThelmet_stripeyarid",
			"FP_GOR_PASGThelmet_stripeyarid_rhino",
			"FP_GOR_PASGThelmet_stripeydesert",
			"FP_GOR_PASGThelmet_stripeydesert_rhino",
			"FP_GOR_PASGThelmet_stripeywoodland",
			"FP_GOR_PASGThelmet_stripeywoodland_rhino",
			"FP_GOR_PASGThelmet_frenchlizardc1",
			"FP_GOR_PASGThelmet_frenchlizardc1_rhino",
			"FP_GOR_PASGThelmet_frenchlizarda2",
			"FP_GOR_PASGThelmet_frenchlizarda2_rhino",
			"FP_GOR_PASGThelmet_frenchlizardfictional",
			"FP_GOR_PASGThelmet_frenchlizardfictional_rhino",
			"FP_GOR_PASGThelmet_tigerstripejungle",
			"FP_GOR_PASGThelmet_tigerstripejungle_rhino",
			"FP_GOR_PASGThelmet_tigerstripedesert",
			"FP_GOR_PASGThelmet_tigerstripedesert_rhino",
			"FP_GOR_PASGThelmet_tigerstripenaval",
			"FP_GOR_PASGThelmet_tigerstripenaval_rhino" 
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
class CfgWeapons
{
	class rhsgref_helmet_pasgt_erdl;
	class rhsgref_helmet_pasgt_erdl_rhino;
	class FP_GOR_PASGThelmet_woodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (M81 Woodland)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\woodland.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_woodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (M81 Woodland, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\woodland.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_woodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeyarid : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Arid)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeyarid.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeyarid_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeyarid_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Arid, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeyarid.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeyarid_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeydesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Desert)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeydesert.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeydesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeydesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Desert, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeydesert.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeydesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeywoodland : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (DBC Woodland)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeywoodland.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_stripeywoodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (DBC Woodland, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\stripeywoodland.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_stripeywoodland_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardc1 : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard C1)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizardc1.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardc1_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard C1, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizardc1.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardc1_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizarda2 : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard A2)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizarda2.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizarda2_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard A2, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizarda2.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizarda2_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardfictional : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (French Lizard Fictional)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizardfictional.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_frenchlizardfictional_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (French Lizard Fictional, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\frenchlizardfictional.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_frenchlizardfictional_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripejungle : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe jungle)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripejungle.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripejungle_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe jungle, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripejungle.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripejungle_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripedesert : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe desert)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripedesert.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripedesert_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe desert, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripedesert.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripedesert_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripenaval : rhsgref_helmet_pasgt_erdl
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl";
		scope=2;
		displayName="PASGT (Tigerstripe naval)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripenaval.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripenaval_co.paa"
		};
	};
	class FP_GOR_PASGThelmet_tigerstripenaval_rhino : rhsgref_helmet_pasgt_erdl_rhino
	{
		author="Gordon Weedman";
		_generalMacro="rhsgref_helmet_pasgt_erdl_rhino";
		scope=2;
		displayName="PASGT (Tigerstripe naval, Rhino)";
		picture="\FP_Factions\gordon_reskins\universalstuff\icons\uniforms\tigerstripenaval.paa";
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\pasgthelmet\data\pasgt_helmet_tigerstripenaval_co.paa"
		};
	};
};