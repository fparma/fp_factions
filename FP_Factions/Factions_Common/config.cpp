class CfgPatches
{
	class FP_Factions_Common
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class fp_men_woodland
	{
		displayName="Men (Woodland)";
	};
	class fp_men_desert
	{
		displayName="Men (Desert)";
	};
	class fp_men_universal
	{
		displayName="Men (Universal)";
	};
	class fp_men_winter
	{
		displayName="Men (Winter)";
	};
	class fp_men_shockwoodland
	{
		displayName="Men (Shocktroops, Woodland)";
	};
	class fp_men_shockdesert
	{
		displayName="Men (Shocktroops, Desert)";
	};
	class fp_men_marinewoodland
	{
		displayName="Men (Marines, Woodland)";
	};
	class fp_men_marinedesert
	{
		displayName="Men (Marines, Desert)";
	};
	class fp_men_sfwoodland
	{
		displayName="Men (Special Forces, Woodland)";
	};
	class fp_men_sfdesert
	{
		displayName="Men (Special Forces, Desert)";
	};
	class fp_men_mps
	{
		displayName="Men (Military Police)";
	};
	class fp_men_reserves
	{
		displayName="Men (Reservists)";
	};
	class fp_men_militia
	{
		displayName="Men (Militia)";
	};
	class fp_men_armedcivs
	{
		displayName="Men (Armed Civilians)";
	};
};
class CfgEditorSubcategories
{
	class fp_men_woodland_EdSubcat
	{
		displayName="Men (Woodland)";
	};
	class fp_men_desert_EdSubcat
	{
		displayName="Men (Desert)";
	};
	class fp_men_universal_EdSubcat
	{
		displayName="Men (Universal)";
	};
	class fp_men_winter_EdSubcat
	{
		displayName="Men (Winter)";
	};
	class fp_men_shockwoodland_EdSubcat
	{
		displayName="Men (Shocktroops, Woodland)";
	};
	class fp_men_shockdesert_EdSubcat
	{
		displayName="Men (Shocktroops, Desert)";
	};
	class fp_men_marineswoodland_EdSubcat
	{
		displayName="Men (Marines, Woodland)";
	};
	class fp_men_marinesdesert_EdSubcat
	{
		displayName="Men (Marines, Desert)";
	};
	class fp_men_sfwoodland_EdSubcat
	{
		displayName="Men (Special Forces, Woodland)";
	};
	class fp_men_sfdesert_EdSubcat
	{
		displayName="Men (Special Forces, Desert)";
	};
	class fp_men_mps_EdSubcat
	{
		displayName="Men (Military Police)";
	};
	class fp_men_reserves_EdSubcat
	{
		displayName="Men (Reservists)";
	};
	class fp_men_militia_EdSubcat
	{
		displayName="Men (Militia)";
	};
	class fp_men_armedcivs_EdSubcat
	{
		displayName="Men (Armed Civilians)";
	};
};
class cfgWeapons
{
	class CUP_srifle_SVD;
	class CUP_srifle_SVD_FPFac_PSO: CUP_srifle_SVD
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "CUP_optic_PSO_1";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_DMR_07_blk_F;
	class srifle_DMR_07_blk_F_FPFac_Kahlia: srifle_DMR_07_blk_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_old";
				slot = "CowsSlot";
			};
		};
	};
};
class cfgMarkers
{
    class flag_MEC
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\MEC_ca.paa";
		markerClass = "Flags";
		name = "Middle Eastern Coalition";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\MEC_ca.paa";
	};
    class flag_Daesh
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Daesh_ca.paa";
		markerClass = "Flags";
		name = "Daesh";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Daesh_ca.paa";
	};
    class flag_FEC
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\FEC_ca.paa";
		markerClass = "Flags";
		name = "Freedom East Coalition";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\FEC_ca.paa";
	};
    class flag_Finland
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Finland_ca.paa";
		markerClass = "Flags";
		name = "Finland";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Finland_ca.paa";
	};
    class flag_GDR
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\GDR_ca.paa";
		markerClass = "Flags";
		name = "German Democratic Republic";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\GDR_ca.paa";
	};
    class flag_IDF
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\IDF_ca.paa";
		markerClass = "Flags";
		name = "Israel";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\IDF_ca.paa";
	};
    class flag_Japan
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Japan_ca.paa";
		markerClass = "Flags";
		name = "Japan";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Japan_ca.paa";
	};
    class flag_Oz
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Oz_ca.paa";
		markerClass = "Flags";
		name = "Australia";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Oz_ca.paa";
	};
    class flag_PRC
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\PRC_ca.paa";
		markerClass = "Flags";
		name = "People's Republic of China";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\PRC_ca.paa";
	};
    class flag_RUS
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\RUS_ca.paa";
		markerClass = "Flags";
		name = "Russian Federation";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\RUS_ca.paa";
	};
    class flag_SAR
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\SAR_ca.paa";
		markerClass = "Flags";
		name = "Syrian Arab Republic";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\SAR_ca.paa";
	};
    class flag_Somalia
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Somalia_ca.paa";
		markerClass = "Flags";
		name = "Somalians";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Somalia_ca.paa";
	};
    class flag_USSR
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\USSR_ca.paa";
		markerClass = "Flags";
		name = "United Soviet Socialist Republics";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\USSR_ca.paa";
	};
    class flag_Yellow
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Yellow_ca.paa";
		markerClass = "Flags";
		name = "Yellow Nation";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Yellow_ca.paa";
	};
    class flag_Belka
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Belka_ca.paa";
		markerClass = "Flags";
		name = "Principality of Belka";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Belka_ca.paa";
	};
    class flag_FSA
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\FSA_ca.paa";
		markerClass = "Flags";
		name = "Free Syrian Army";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\FSA_ca.paa";
	};
    class flag_Hamas
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\hamas_ca.paa";
		markerClass = "Flags";
		name = "Hamas";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\hamas_ca.paa";
	};
    class flag_Kyrelia
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\KY_ca.paa";
		markerClass = "Flags";
		name = "Kyrelia";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\KY_ca.paa";
	};
    class flag_Novo
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\novo_ca.paa";
		markerClass = "Flags";
		name = "Novorossiya";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\novo_ca.paa";
	};
    class flag_Taliban
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Taliban_ca.paa";
		markerClass = "Flags";
		name = "Taliban";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Taliban_ca.paa";
	};
    class flag_Ukraine
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\ukr_ca.paa";
		markerClass = "Flags";
		name = "Ukraine";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\ukr_ca.paa";
	};
    class flag_BlackCountry
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\blkcunt_ca.paa";
		markerClass = "Flags";
		name = "Black Country";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\blkcunt_ca.paa";
	};
    class flag_NorthKorea
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Nork_ca.paa";
		markerClass = "Flags";
		name = "North Korea";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Nork_ca.paa";
	};
    class flag_SouthKorea
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\Sork_ca.paa";
		markerClass = "Flags";
		name = "South Korea";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\Sork_ca.paa";
	};
    class flag_osea
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\osea_ca.paa";
		markerClass = "Flags";
		name = "Osean Federation";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\osea_ca.paa";
	};
    class flag_yukt
	{
	    color[] = {1,1,1,1};
		icon = "\FP_Factions\Factions_Common\yukt_ca.paa";
		markerClass = "Flags";
		name = "Union of Yuktobanian Republics";
		scope = 1;
		shadow = 0;
		size = 32;
		texture = "\FP_Factions\Factions_Common\yukt_ca.paa";
	};
}
