class CfgPatches
{
	class gordon_reskins_gorka
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_Uniform_Gorka_Summer",
			"FP_GOR_Uniform_Gorka_Armour_Summer",
			"FP_GOR_Uniform_Gorka_Autumn",
			"FP_GOR_Uniform_Gorka_Armour_Autumn",
			"FP_GOR_Uniform_Gorka_PautRev",
			"FP_GOR_Uniform_Gorka_Armour_PautRev",
			"FP_GOR_Uniform_Gorka_EMR",
			"FP_GOR_Uniform_Gorka_Armour_EMR",
			"FP_GOR_Uniform_Gorka_Skol",
			"FP_GOR_Uniform_Gorka_Armour_Skol",
			"FP_GOR_Uniform_Gorka_Birch",
			"FP_GOR_Uniform_Gorka_Armour_Birch",
			"FP_GOR_Uniform_Gorka_Sunray",
			"FP_GOR_Uniform_Gorka_Armour_Sunray",
			"FP_GOR_Uniform_Gorka_SURPAT",
			"FP_GOR_Uniform_Gorka_Armour_SURPAT"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_Beta",
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Data_F_Oldman_Loadorder"
		};
	};
};
class CfgVehicles
{	class O_R_Gorka_base_F;
	class O_R_Gorka_F: O_R_Gorka_base_F
	{
		class Hitpoints;
	};
	class FP_GOR_Gorka_Summer: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Summer";
		displayName="Gorka (Partizan Summer, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Summer_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_Summer: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_Summer";
		displayName="Gorka (Partizan Summer)";
		nakedUniform="U_BasicBody";
		class HitPoints: Hitpoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
		armor = 2;
		armorStructural = 3;
		explosionShielding = 0.3;
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Summer_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Autumn: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Autumn";
		displayName="Gorka (Partizan Autumn, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Autumn_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_Autumn: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_Autumn";
		displayName="Gorka (Partizan Autumn)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Autumn_CO.paa"
		};
	};
	class FP_GOR_Gorka_PautRev: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_PautRev";
		displayName="Gorka (Partizan PautRev, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_PautRev_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_PautRev: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_PautRev";
		displayName="Gorka (Partizan PautRev)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_PautRev_CO.paa"
		};
	};
	class FP_GOR_Gorka_EMR: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_EMR";
		displayName="Gorka (EMR, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_EMR_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_EMR: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_EMR";
		displayName="Gorka (EMR)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_EMR_CO.paa"
		};
	};
	class FP_GOR_Gorka_Skol: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Skol";
		displayName="Gorka (Skol, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Skol_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_Skol: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_Skol";
		displayName="Gorka (Skol)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Skol_CO.paa"
		};
	};
	class FP_GOR_Gorka_Birch: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Birch";
		displayName="Gorka (Birch, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Birch_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_Birch: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_Birch";
		displayName="Gorka (Birch)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Birch_CO.paa"
		};
	};
	class FP_GOR_Gorka_Sunray: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Sunray";
		displayName="Gorka (Sunray, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Sunray_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_Sunray: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_Sunray";
		displayName="Gorka (Sunray)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Sunray_CO.paa"
		};
	};
	class FP_GOR_Gorka_SURPAT: O_R_Gorka_F
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_SURPAT";
		displayName="Gorka (SURPAT, armoured)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_SURPAT_CO.paa"
		};
	}; 
	class FP_GOR_Gorka_Armour_SURPAT: FP_GOR_Gorka_Armour_Summer
	{
		author="Gordon Weedman";
		_generalMacro="O_R_Gorka_F";
		scope=1;
		uniformClass="FP_GOR_Uniform_Gorka_Armour_SURPAT";
		displayName="Gorka (SURPAT)";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_SURPAT_CO.paa"
		};
	};
};
class CfgWeapons			
{
	class U_O_R_Gorka_01_F;
	class UniformItem;
	class FP_GOR_Uniform_Gorka_Summer: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan Summer, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasummer_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Summer_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Summer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_Summer: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan Summer)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasummer_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Summer_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_Summer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Autumn: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan Autumn, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaautumn_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Autumn_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Autumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_Autumn: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan Autumn)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaautumn_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Autumn_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_Autumn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_PautRev: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan PautRev, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkapautrev_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_PautRev_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_PautRev";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_PautRev: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan PautRev)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkapautrev_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_PautRev_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_PautRev";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_EMR: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (EMR, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaemr_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_EMR_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_EMR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_EMR: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (EMR)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaemr_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_EMR_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_EMR";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Skol: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Skol, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaskol_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Skol_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Skol";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_Skol: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Skol)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkaskol_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Skol_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_Skol";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Birch: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Birch, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkabirch_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Birch_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Birch";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_Birch: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Birch)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkabirch_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Birch_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_Birch";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Sunray: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Sunray, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasunray_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Sunray_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Sunray";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_Sunray: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Sunray)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasunray_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_Sunray_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_Sunray";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_SURPAT: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (SURPAT, armoured)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasurpat_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_SURPAT_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_SURPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_GOR_Uniform_Gorka_Armour_SURPAT: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (SURPAT)";
		picture="\FP_Factions\gordon_reskins\gorka\data\icons\icon_gorkasurpat_ca.paa";
		author="Gordon Weedman";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\FP_Factions\gordon_reskins\gorka\data\Gorka_SURPAT_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_GOR_Gorka_Armour_SURPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
};