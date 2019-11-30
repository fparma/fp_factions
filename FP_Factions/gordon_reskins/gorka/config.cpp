class CfgPatches
{
	class gordon_reskins_gorka
	{
		// List of units defined in this "PBO"
		units[]={};
		weapons[]=
		{
			"FP_GOR_Gorka_Summer",
			"FP_GOR_Gorka_Armour_Summer",
			"FP_GOR_Gorka_Autumn",
			"FP_GOR_Gorka_Armour_Autumn",
			"FP_GOR_Gorka_PautRev",
			"FP_GOR_Gorka_Armour_PautRev" 
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
	class O_R_Gorka_F;
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
		class HitPoints
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
};
class CfgWeapons			
{
	class U_O_R_Gorka_01_F;
	class UniformItem;
	class FP_GOR_Uniform_Gorka_Summer: U_O_R_Gorka_01_F
	{
		scope=2;
		displayName="Gorka (Partizan Summer, armoured)";
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
};