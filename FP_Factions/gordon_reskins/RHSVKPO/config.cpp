class CfgPatches
{
	class gordon_reskins_6b7_1m
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_rhs_uniform_vkpo_syrian",
			"FP_GOR_rhs_uniform_vkpo_gloves_syrian",
			"FP_GOR_rhs_uniform_vkpo_desertpink",
			"FP_GOR_rhs_uniform_vkpo_gloves_desertpink",
			"FP_GOR_rhs_uniform_vkpo_desertemr",
			"FP_GOR_rhs_uniform_vkpo_gloves_desertemr",
			"FP_GOR_rhs_uniform_vkpo_surpat",
			"FP_GOR_rhs_uniform_vkpo_gloves_surpat"
		
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_c_troops",
			"A3_Data_F_AOW_Loadorder"
		};
	};
};

class CfgVehicles
{	
	class rhs_vkpo_base;
	class rhs_vkpo_gloves_base;
	
	class FP_GOR_rhs_uniform_vkpo_base_syrian: rhs_vkpo_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_syrian";
		displayName="VKPO (Russian Syria camo)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_syrian_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_syrian_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_base_syrian: rhs_vkpo_gloves_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_gloves_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_syrian";
		displayName="VKPO (Russian Syria camo, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_syrian_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_syrian_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_uniform_vkpo_base_desertpink: rhs_vkpo_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_desertpink";
		displayName="VKPO (Desert pink)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertpink_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertpink_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_base_desertpink: rhs_vkpo_gloves_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_gloves_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_desertpink";
		displayName="VKPO (Desert pink, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertpink_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertpink_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_uniform_vkpo_base_desertemr: rhs_vkpo_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_desertemr";
		displayName="VKPO (Desert EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertemr_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertemr_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_base_desertemr: rhs_vkpo_gloves_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_gloves_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_desertemr";
		displayName="VKPO (Desert EMR, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertemr_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_desertemr_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
	
	class FP_GOR_rhs_uniform_vkpo_base_surpat: rhs_vkpo_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_surpat";
		displayName="VKPO (SURPAT)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_surpat_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_surpat_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_base_surpat: rhs_vkpo_gloves_base
	{
		author="Gordon Weedman";
		_generalMacro="rhs_vkpo_gloves_base";
		scope=1;
		uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_surpat";
		displayName="VKPO (SURPAT, gloves)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_surpat_vest_co.paa",
			"\FP_Factions\gordon_reskins\rhsvkpo\data\lodu_surpat_pant_co.paa",
			"rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"
		};
	}; 	
};

class CfgWeapons			
{
	class rhs_uniform_vkpo;
	class rhs_uniform_vkpo_gloves;
	class UniformItem;
	
	class FP_GOR_rhs_uniform_vkpo_syrian: rhs_uniform_vkpo
	{
		scope=2;
		displayName="VKPO (Russian Syria camo)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_base_syrian";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_syrian: rhs_uniform_vkpo_gloves
	{
		scope=2;
		displayName="VKPO (Russian Syria camo, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_base_syrian";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_vkpo_desertemr: rhs_uniform_vkpo
	{
		scope=2;
		displayName="VKPO (Desert EMR)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_base_desertemr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_desertemr: rhs_uniform_vkpo_gloves
	{
		scope=2;
		displayName="VKPO (Desert EMR, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_base_desertemr";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_vkpo_desertpink: rhs_uniform_vkpo
	{
		scope=2;
		displayName="VKPO (Desert pink)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_base_desertpink";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_desertpink: rhs_uniform_vkpo_gloves
	{
		scope=2;
		displayName="VKPO (Desert pink, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_base_desertpink";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class FP_GOR_rhs_uniform_vkpo_surpat: rhs_uniform_vkpo
	{
		scope=2;
		displayName="VKPO (SURPAT)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_base_surpat";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_rhs_uniform_vkpo_gloves_surpat: rhs_uniform_vkpo_gloves
	{
		scope=2;
		displayName="VKPO (SURPAT, gloves)";
		author="Gordon Weedman";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_rhs_uniform_vkpo_gloves_base_surpat";
			containerClass="Supply40";
			mass=40;
		};
	};
};
	