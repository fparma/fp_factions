#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
class CfgPatches
{
	class FP_Factions_KPA
	{
		units[] = 
		{
			"FP_Faction_KPA_URAL_ZU23",
			"FP_Faction_KPA_ZSU_234_AA",
			"FP_Faction_KPA_BTR40",
			"FP_Faction_KPA_BTR40_3MG",
			"FP_Faction_KPA_BTR40_MG",
			"FP_Faction_KPA_BTR40_ZPU2",
			"FP_Faction_KPA_BTR60",
			"FP_Faction_KPA_BTR70",
			"FP_Faction_KPA_BTR80A",
			"FP_Faction_KPA_Korshun",
			"FP_Faction_KPA_T34",
			"FP_Faction_KPA_T34_DSHK",
			"FP_Faction_KPA_SU100",
			"FP_Faction_KPA_D30",
			"FP_Faction_KPA_D30_AT",
			"FP_Faction_KPA_2B14_82MM",
			"FP_Faction_KPA_MAZ_543_SCUD",
			"FP_Faction_KPA_BM21",
			"FP_Faction_KPA_BRDM2",
			"FP_Faction_KPA_BRDM2_ATGM",
			"FP_Faction_KPA_BRDM2UM",
			"FP_Faction_KPA_BRDM2_HQ",
			"FP_Faction_KPA_UAZ",
			"FP_Faction_KPA_UAZ_AGS",
			"FP_Faction_KPA_UAZ_DShKM",
			"FP_Faction_KPA_UAZ_Open",
			"FP_Faction_KPA_UAZ_SPG9",
			"FP_Faction_KPA_ZIL131",
			"FP_Faction_KPA_ZIL131_Flatbed_Cover",
			"FP_Faction_KPA_ZIL131_Open",
			"FP_Faction_KPA_ZIL131_Flatbed",
			"FP_Faction_KPA_Heli_Light_01_F",
			"FP_Faction_KPA_Mi25",
			"FP_Faction_KPA_Mi8MT",
			"FP_Faction_KPA_Mi8MTV3",
			"FP_Faction_KPA_Mi8T",
			"FP_Faction_KPA_Soldier_BASE",
			"FP_Faction_KPA_AmmoBearer",
			"FP_Faction_KPA_AAR",
			"FP_Faction_KPA_AMMG",
			"FP_Faction_KPA_AMANPADS",
			"FP_Faction_KPA_AHAT",
			"FP_Faction_KPA_AMAT",
			"FP_Faction_KPA_AR",
			"FP_Faction_KPA_CrewCommander",
			"FP_Faction_KPA_Crewman",
			"FP_Faction_KPA_Engineer",
			"FP_Faction_KPA_Exp",
			"FP_Faction_KPA_FieldOfficer",
			"FP_Faction_KPA_Pilot",
			"FP_Faction_KPA_Helicrew",
			"FP_Faction_KPA_Helipilot",
			"FP_Faction_KPA_MMG",
			"FP_Faction_KPA_Marksman",
			"FP_Faction_KPA_Medic",
			"FP_Faction_KPA_MANPADS",
			"FP_Faction_KPA_HAT",
			"FP_Faction_KPA_Officer",
			"FP_Faction_KPA_RO",
			"FP_Faction_KPA_Rifleman",
			"FP_Faction_KPA_RAT",
			"FP_Faction_KPA_MAT",
			"FP_Faction_KPA_Rifleman_Unarmed",
			"FP_Faction_KPA_SL",
			"FP_Faction_KPA_TL",
			"FP_Faction_KPA_Light_AAR",
			"FP_Faction_KPA_Light_AMANPADS",
			"FP_Faction_KPA_Light_AR",
			"FP_Faction_KPA_Light_Engineer",
			"FP_Faction_KPA_Light_Exp",
			"FP_Faction_KPA_Light_Marksman",
			"FP_Faction_KPA_Light_Medic",
			"FP_Faction_KPA_Light_MANPADS",
			"FP_Faction_KPA_Light_Rifleman",
			"FP_Faction_KPA_Light_RAT",
			"FP_Faction_KPA_Light_SL",
			"FP_Faction_KPA_Light_TL",
			"FP_Faction_KPA_Marine_AmmoBearer",
			"FP_Faction_KPA_Marine_AAR",
			"FP_Faction_KPA_Marine_AR",
			"FP_Faction_KPA_Marine_CrewCommander",
			"FP_Faction_KPA_Marine_Crewman",
			"FP_Faction_KPA_Marine_Engineer",
			"FP_Faction_KPA_Marine_AMANPADS",
			"FP_Faction_KPA_Marine_MANPADS",
			"FP_Faction_KPA_Marine_Marksman",
			"FP_Faction_KPA_Marine_AMAT",
			"FP_Faction_KPA_Marine_MAT",
			"FP_Faction_KPA_Marine_Medic",
			"FP_Faction_KPA_Marine_AMMG",
			"FP_Faction_KPA_Marine_MMG",
			"FP_Faction_KPA_Marine_Rifleman",
			"FP_Faction_KPA_Marine_RAT",
			"FP_Faction_KPA_Marine_SL",
			"FP_Faction_KPA_Marine_TL",
			"FP_Faction_KPA_WPRG_AAR",
			"FP_Faction_KPA_WPRG_ALMG",
			"FP_Faction_KPA_WPRG_AR",
			"FP_Faction_KPA_WPRG_BR",
			"FP_Faction_KPA_WPRG_LMG",
			"FP_Faction_KPA_WPRG_Marksman",
			"FP_Faction_KPA_WPRG_Rifleman",
			"FP_Faction_KPA_WPRG_RAT",
			"FP_Faction_KPA_WPRG_SL",
			"FP_Faction_KPA_WPRG_TL"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_KPA
	{
		displayName = "FP North Korea";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\KPA\cfgFactionClasses_northkorea_ca.paa";
		flag = "\FP_Factions\KPA\flag_northkorea.paa";
	};
};
class CfgWorlds 
{
	class GenericNames 
	{
		class NorthKoreanMen 
		{
			class FirstNames 
			{
				cho = "Cho";
				choe = "Choe";
				han = "Han";
				hwang = "Hwang";
				jang = "Jang";
				kang = "Kang";
				kim = "Kim";
				mun = "Mun";
				paek = "Paek";
				pak = "Pak";
				park = "Park";
				ri = "Ri";
				rim = "Rim";
				ro = "Ro";
				rodong = "Rodong";
				taepo = "Taepo";
				yang = "Yong";
				yi = "Yi";
				yon = "Yon";
			};
			class LastNames 
			{
				myongnok = "Nyong-Nok";
				jinsu = "Jin-Su";
				suhon = "Su Hon";
				songryol = "Song Ryol";
				jangyop = "Jang Yop";
				songtaek = "Song-Taek";
				cholhwan = "Chol Hwan";
				sokju = "Sok Ju";
				ilchol = "Il Chol";
				ilsong = "Il-Song";
				jaerok = "Jae Rok";
				jongil = "Jong-Il";
				jongun = "Jong-Un";
				kyekwan = "Kye Kwan";
				kyonghui = "Kyong Hui";
				ryongsong = "Ryong Song";
				yongchun = "Yong Chun";
				yongnam = "Yong-Nam";
				ilbong = "Il Bong";
				jongchol = "Jong Chol";
				namsun = "Nam-Sun";
				gilyon = "Gil Yon";
				pongju = "Pong Ju";
				uichun = "Ui Chun";
				gun = "Gun";
				solju = "Sol Ju";
				tongok = "Tong Ok";
				choeyong = "Choe Yong";
				tuchol = "Tu-Chol";
				sinmum = "Sinmum";
				dong = "Dong";
				hyangsop = "Hyang Sop";
				cheson = "Che-Son";
				hyongmuk = "Hyong Muk";
			};
		};
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_KPA_Units
		{
			name = "FP North Korea";
			class Infantry
			{
				name = "Infantry";
				class KPA_InfSquad
				{
					name = "Rifle Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};					
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AmmoBearer";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class KPA_InfTeam_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class KPA_InfTeam_AT
				{
					name = "Anti-tank Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_InfSentry
				{
					name = "Sentries";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class KPA_InfTeam_Marksmen
				{
					name = "Marksman Fireteam";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class KPA_support_CLS
				{
					name = "Medical Support Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_support_MMG
				{
					name = "MMG Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class KPA_support_ENG
				{
					name = "Engineer Support Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_support_MAT
				{
					name = "MAT Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class KPA_support_HAT
				{
					name = "HAT Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_HAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AHAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class KPA_MANPADSTeam
				{
					name = "AA Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class MInfantry
			{
				name = "Marines";
				class KPA_MInfSquad
				{
					name = "Rifle Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_AAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class KPA_MechInfSquad_BMP1
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Rifle Squad";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "FP_Faction_KPA_Korshun";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_AmmoBearer";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
					};
				};
				class KPA_MechMInfSquad_BMP1
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					name = "Mechanized Marine Squad";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "FP_Faction_KPA_Korshun";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_SL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_RAT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_TL";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_AR";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_AmmoBearer";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marine_Medic";
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class KPA_MotInf_Squad_BTR60
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Rifle Squad (BTR-60)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "FP_Faction_KPA_BTR60";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_AmmoBearer";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
					};
				};
				class KPA_MotInf_Squad_BTR70
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Rifle Squad (BTR-70)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "FP_Faction_KPA_BTR70";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_AmmoBearer";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
					};
				};
				class KPA_MotInf_Reinforce
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_ZIL131";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_SL";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Rifleman";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Marksman";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_AmmoBearer";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_Medic";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_Faction_KPA_TL";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_Faction_KPA_AR";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_MAT";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_Faction_KPA_RAT";
					};
				};
			};
			class Militia
			{
				name = "Worker-Peasant Red Guards";
				class KPA_Militiasquad
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Infantry Squad";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_LMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_ALMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_MilitiaBRsquad
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Line Defense Squad";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_LMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_LMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_ALMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_ALMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_BR";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_MilitiaWeaponsSquad
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Team";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_LMG";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_ALMG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_AAR";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Marksman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_MilitiaPatrol
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Fireteam";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_AR";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_MilitiaATTeam
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Anti-tank Team";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_MilitiaSentry
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentries";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_WPRG_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class KPA_Commandosquad
				{
					name = "Commando Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_TL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_JTAC";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_Scout_AT";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_Scout_AT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_KPA_SOF_Medic";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_JSniperTeam
				{
					name = "Jeongchaldae Sniper Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_KPA_JSniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_KPA_JSpotter";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};	
};
class CfgVehicles
{
	class FP_O_TNK_T34;
	class FP_O_TNK_T34_DSHK;
	class FP_Faction_KPA_T34: FP_O_TNK_T34
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_T34_DSHK: FP_O_TNK_T34_DSHK
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class FP_O_TNK_SU100;
	class FP_Faction_KPA_SU100: FP_O_TNK_SU100
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};	
	class FP_O_BTR40_Unarmed;
	class FP_O_BTR40_DShK;
	class FP_O_BTR40_DShK_PKT;
	class FP_O_BTR40_ZPU2;
	class FP_Faction_KPA_BTR40: FP_O_BTR40_Unarmed
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_btr\BTR40\data\cw_sov_o_btr40ext_co.paa"};
	};
	class FP_Faction_KPA_BTR40_MG: FP_O_BTR40_DShK
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_btr\BTR40\data\cw_sov_o_btr40ext_co.paa"};
	};
	class FP_Faction_KPA_BTR40_3MG: FP_O_BTR40_DShK_PKT
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_btr\BTR40\data\cw_sov_o_btr40ext_co.paa"};
	};
	class FP_Faction_KPA_BTR40_ZPU2: FP_O_BTR40_ZPU2
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_btr\BTR40\data\cw_sov_o_btr40ext_co.paa"};
	};
	class UK3CB_O_G_T55;
	class FP_Faction_KPA_Chonmaho: UK3CB_O_G_T55
	{
		class TextureSources
		{
			class KPA_T55_Green
			{
				author="CSLeader";
				displayname = "KPA Green";				
				textures[] = {"\fp_factions\KPA\data\t55\t55_body_kpa_co.paa","\fp_factions\KPA\data\t55\t55_tower_kpa_co.paa"};
				factions[] = {"FP_Faction_KPA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_KPA_Crewman";
		displayName = "Ch'ŏnma-ho";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fp_factions\KPA\data\t55\t55_body_kpa_co.paa","\fp_factions\KPA\data\t55\t55_tower_kpa_co.paa"};
	};
	class UK3CB_CW_SOV_O_EARLY_T72A;
	class FP_Faction_KPA_T72M: UK3CB_CW_SOV_O_EARLY_T72A
	{
		class TextureSources
		{
			class KPA_T72_Green
			{
				author = "www.3commandobrigade.com";
				displayname = "KPA Green";				
				textures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_1_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_2_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_3_co.paa"};
				factions[] = {"FP_Faction_KPA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_KPA_Crewman";
		displayName = "T-72M Pokpung-Ho II";
		faction = "FP_Faction_KPA";
	};
	class UK3CB_CW_SOV_O_EARLY_T72B;
	class FP_Faction_KPA_T72MERA: UK3CB_CW_SOV_O_EARLY_T72B
	{
		class TextureSources
		{
			class KPA_T72_Green
			{
				author = "www.3commandobrigade.com";
				displayname = "KPA Green";				
				textures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_1_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_2_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_3_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t72\data\t72_sov_khk_4_co.paa"};
				factions[] = {"FP_Faction_KPA"};
			};
		};
		author = "FP Mod Team";
		crew = "FP_Faction_KPA_Crewman";
		displayName = "T-72M1 ERA";
		faction = "FP_Faction_KPA";
	};
	class rhs_bmp1_msv;
	class FP_Faction_KPA_Korshun: rhs_bmp1_msv
	{
		editorSubcategory = "EdSubcat_APCs";
		crew = "FP_Faction_KPA_Crewman";
		displayName="Korshun";
		faction = "FP_Faction_KPA";
	};
	class rhsgref_BRDM2_msv;
	class rhsgref_BRDM2_ATGM_msv;
	class rhsgref_BRDM2UM_msv;
	class rhsgref_BRDM2_HQ_msv;
	class FP_Faction_KPA_BRDM2: rhsgref_BRDM2_msv
	{
		crew = "FP_Faction_KPA_Crewman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BRDM2_ATGM: rhsgref_BRDM2_ATGM_msv
	{
		crew = "FP_Faction_KPA_Crewman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BRDM2UM: rhsgref_BRDM2UM_msv
	{
		crew = "FP_Faction_KPA_Crewman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BRDM2_HQ: rhsgref_BRDM2_HQ_msv
	{
		crew = "FP_Faction_KPA_Crewman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};	
	class UK3CB_CW_SOV_O_EARLY_BM21;
	class FP_Faction_KPA_BM21: UK3CB_CW_SOV_O_EARLY_BM21
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
	};	
	class UK3CB_CW_SOV_O_EARLY_ZsuTank;
	class FP_Faction_KPA_ZSU_234_AA: UK3CB_CW_SOV_O_EARLY_ZsuTank
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class rhsgref_nat_uaz;
	class rhsgref_nat_uaz_open;
	class rhsgref_nat_uaz_dshkm;
	class rhsgref_nat_uaz_ags;
	class rhsgref_nat_uaz_spg9;
	class FP_Faction_KPA_UAZ: rhsgref_nat_uaz
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_Open: rhsgref_nat_uaz_open
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_DShKM: rhsgref_nat_uaz_dshkm
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_AGS: rhsgref_nat_uaz_ags
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_UAZ_SPG9: rhsgref_nat_uaz_spg9
	{
		side = 0;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class UK3CB_CW_SOV_O_EARLY_BTR60;
	class UK3CB_CW_SOV_O_EARLY_BTR70;
	class UK3CB_CW_SOV_O_LATE_BTR80a;
	class FP_Faction_KPA_BTR60: UK3CB_CW_SOV_O_EARLY_BTR60
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BTR70: UK3CB_CW_SOV_O_EARLY_BTR70
	{
		crew = "FP_Faction_KPA_Crewman";
		faction = "FP_Faction_KPA";
	};
	class FP_Faction_KPA_BTR80A: UK3CB_CW_SOV_O_LATE_BTR80a
	{
		displayName = "BTR-80A";
		crew = "FP_Faction_KPA_SOF_Crewman";
		faction = "FP_Faction_KPA";
	};
	class Truck_F;
	class RHS_Ural_BaseTurret: Truck_F
	{
		class Turrets;
	};
	class RHS_Ural_Zu23_Base: RHS_Ural_BaseTurret
	{	
		class Turrets: Turrets
		{	
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
		};
	};
	class FP_Faction_KPA_URAL_ZU23: RHS_Ural_Zu23_Base
	{		
		side = 0;
		scope = 2;
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_AAs";
		faction = "FP_Faction_KPA";
		typicalCargo[] = {"FP_Faction_KPA_Rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				gunnerType="FP_Faction_KPA_Rifleman";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="FP_Faction_KPA_SL"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};
	class UK3CB_TKA_O_MAZ_543_SCUD;
	class FP_Faction_KPA_MAZ_543_SCUD: UK3CB_TKA_O_MAZ_543_SCUD
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"fp_factions\KPA\data\maz543\scud_01_co.paa","fp_factions\KPA\data\maz543\scud_02_co.paa","fp_factions\KPA\data\maz543\scud_03_co.paa","fp_factions\KPA\data\maz543\scud_04_co.paa"};
		side = 0;
	};
	class rhsgref_tla_DSHKM_Mini_TriPod;
	class rhsgref_tla_DSHKM;
	class FP_Faction_KPA_KORD: rhsgref_tla_DSHKM_Mini_TriPod
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_Faction_KPA_KORD_High: rhsgref_tla_DSHKM
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class RHS_NSV_TriPod_MSV;
	class FP_Faction_KPA_NSV_Tripod: RHS_NSV_TriPod_MSV
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class RHS_AGS30_TriPod_MSV;
	class FP_Faction_KPA_AGS30_Tripod: RHS_AGS30_TriPod_MSV
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class rhs_SPG9M_MSV;
	class FP_Faction_KPA_SPG9M: rhs_SPG9M_MSV
	{
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_Faction_KPA_Light_SPG9M: rhs_SPG9M_MSV
	{
		displayName = "SPG-9M (Light Infantry)";
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};	
	class rhs_2b14_82mm_msv;
	class FP_Faction_KPA_2B14_82MM: rhs_2b14_82mm_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class rhs_D30_msv;
	class rhs_D30_at_msv;
	class FP_Faction_KPA_D30: rhs_D30_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_Faction_KPA_D30_AT: rhs_D30_at_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_Faction_KPA_Rifleman";
		faction = "FP_Faction_KPA";
		side = 0;
		scope = 2;
		scopeCurator = 2;
	};
	
	class rhs_zil131_msv;
	class rhs_zil131_open_msv;
	class rhs_zil131_flatbed_cover_msv;
	class rhs_zil131_flatbed_msv;
	class FP_Faction_KPA_ZIL131: rhs_zil131_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_Faction_KPA_ZIL131_Open: rhs_zil131_open_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_Faction_KPA_ZIL131_Flatbed_Cover: rhs_zil131_flatbed_cover_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_Faction_KPA_ZIL131_Flatbed: rhs_zil131_flatbed_msv
	{
		crew = "FP_Faction_KPA_Rifleman";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};	
	class rhsgref_cdf_Mi24D_early;
	class FP_Faction_KPA_Mi25: rhsgref_cdf_Mi24D_early
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-25";
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		hiddenselectionstextures[] = 
		{
			"\fp_factions\KPA\data\mi24\mi24p_001_kpa_co.paa",
			"\fp_factions\KPA\data\mi24\mi24p_002_kpa_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
		};
	};
	class RHS_Mi8T_vvsc;
	class RHS_Mi8mt_vvsc;
	class RHS_Mi8MTV3_vvsc;
	class FP_Faction_KPA_Mi8T: RHS_Mi8T_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\fp_factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\fp_factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
	};
	class FP_Faction_KPA_Mi8MT: RHS_Mi8mt_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\fp_factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\fp_factions\KPA\data\mi8\mi8_tv2_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
		typicalCargo[] = {"FP_Faction_KPA_Helicrew"};
	};
	class FP_Faction_KPA_Mi8MTV3: RHS_Mi8MTV3_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\fp_factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\fp_factions\KPA\data\mi8\mi8_tv2_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
		typicalCargo[] = {"FP_Faction_KPA_Helicrew"};
	};
	class C_Heli_Light_01_civil_F;
	class FP_Faction_KPA_Heli_Light_01_F: C_Heli_Light_01_civil_F
	{
		class TextureSources
		{
			class KPAMD500
			{
				author="CSLeader";
				displayname = "KPA Green";				
				textures[] = {"\fp_factions\KPA\data\md500\Heli_Light_01_ext_KPA_CO.paa"};
				factions[] = {"FP_Faction_KPA"};
			};			
		};
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","aiming_dot"};
		hiddenSelectionsTextures[] = {"\fp_factions\KPA\data\md500\Heli_Light_01_ext_KPA_CO.paa"};
		hiddenSelectionsMaterials[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext.rvmat"};		
	};
	class UK3CB_I_G_Antonov_An2_Armed;
	class UK3CB_I_G_Antonov_An2;
	class FP_Faction_KPA_Antonov_An2_Armed: UK3CB_I_G_Antonov_An2_Armed
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		faction = "FP_Faction_KPA";		
	};
	class FP_Faction_KPA_Antonov_An2: UK3CB_I_G_Antonov_An2
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Helipilot";
		faction = "FP_Faction_KPA";		
	};
	class RHS_Su25SM_vvsc;
	class FP_Faction_KPA_Su25K: RHS_Su25SM_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Pilot";
		displayName = "Su-25K";
		faction = "FP_Faction_KPA";			
	};	
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class FP_Faction_KPA_L159_Fighter_dynamicLoadout_F: I_Plane_Fighter_03_dynamicLoadout_F
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_Faction_KPA_Pilot";
		faction = "FP_Faction_KPA";	
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = 
		{
			"\fp_factions\KPA\data\l159\Plane_Fighter_03_body_1_KPA_CO.paa",
			"\fp_factions\KPA\data\l159\Plane_Fighter_03_body_2_KPA_CO.paa"
		};
	};
	
	class B_Carryall_ocamo_Exp;
	class KPA_Carryall_Exp: B_Carryall_ocamo_Exp
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"};
	};
	class B_FieldPack_khk;
	class KPA_FieldPack_RPG_khk: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(RPG7_F,4);
		};		
	};
	class KPA_FieldPack_RPG_Spotter_khk: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(RPG7_F,2);
		};		
	};
	class KPA_Recon_FieldPack_RPG_Light_grn: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(RPG7_F,2);
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Enoch\bags\data\backpack_gorod_RUkhk_co.paa"};
	};
	class KPA_FieldPack_khk_AAR: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(hlc_75Rnd_762x39_b_rpk, 4);
		};		
	};
	class KPA_FieldPack_khk_MMG: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_100Rnd_762x54mmR,3);
		};		
	};
	class KPA_WPRG_FieldPack_khk_AAR: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(100rnd_korob_rpd,4);
		};		
	};
	class KPA_WPRG_FieldPack_khk_LMG: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(47rnd_dpbar,5);
		};		
	};
	class B_Carryall_cbr;
	class B_Carryall_oli;
	class KPA_Carryall_oli_MANPADS: B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_mag_9k38_rocket,3);
		};
	};
	class KPA_Carryall_oli_HAT: B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(Vorona_HE,3);
		};
	};
	class KPA_Carryall_cbr_Ammo: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_762x39mm_89,6);
			mag_xx(rhsgref_10Rnd_792x57_m76,6);
			mag_xx(hlc_VOG25_AK,6);		
			mag_xx(hlc_75Rnd_762x39_b_rpk,3);
		};
	};
	class B_TacticalPack_oli;
	class KPA_TacticalPack_oli_MAT: B_TacticalPack_oli
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_rpg7_PG7VL_mag,4);
		};
	};
	class KPA_TacticalPack_oli_Light_AAR: B_TacticalPack_oli
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(FP_30rnd_762_FAL_m80,10);
		};
	};
	class KPA_B_Carryall_cbr_LightInf: B_Carryall_cbr
	{
		scope = 1
		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_762x39mm_89,12);
			mag_xx(rhs_mag_9x18_8_57N181S, 10);
			mag_xx(rhs_mag_rgd5, 3);
			mag_xx(rhs_mag_rdg2_white,4);			
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
	};
	class KPA_B_Carryall_cbr_LightInf_AR: B_Carryall_cbr
	{
		scope = 1
		class TransportMagazines
		{
			mag_xx(FP_30rnd_762_FAL_m80,10);
			mag_xx(rhs_mag_9x18_8_57N181S, 10);
			mag_xx(rhs_mag_rgd5, 3);
			mag_xx(rhs_mag_rdg2_white,4);			
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
	};
	class KPA_B_TacticalPack_oli_LightInf_Marksman: B_TacticalPack_oli
	{
		class TransportMagazines
		{
			mag_xx(rhs_10Rnd_762x54mmR_7N1,15);
			mag_xx(rhs_30Rnd_762x39mm_89,12);
			mag_xx(rhs_mag_9x18_8_57N181S, 10);
			mag_xx(rhs_mag_rgd5, 3);
			mag_xx(rhs_mag_rdg2_white,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
	};	
	class B_Soldier_F;
	class FP_Faction_KPA_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian",""};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_KPA";
		genericNames = "NorthKoreanMen";
		vehicleClass = "Men";
	    editorSubcategory = "EdSubcat_Personnel";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 0.8;
		sensitivity = 2;
		threat[] = {1,0.1,0.1};
		camouflage = 1;
		minFireTime = 7;
		cost = 20000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "FP_Uniform_BDU_KPA_Woodland";  
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Rifleman: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_Faction_KPA_Rifleman_Unarmed: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};		
	};
	class FP_Faction_KPA_AmmoBearer: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_Carryall_cbr_Ammo";
		displayName = "Ammo Bearer";		
	};	
	class FP_Faction_KPA_AR: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"hlc_rifle_rpk","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","hlc_75Rnd_762x39_b_rpk","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AAR: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autoifleman";
		backpack = "KPA_FieldPack_khk_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_SL: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_V_KPA_TacVest_DigiWld","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_V_KPA_TacVest_DigiWld","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_TL: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_V_KPA_TacVest_DigiWld","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_V_KPA_TacVest_DigiWld","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_FieldOfficer: FP_Faction_KPA_SL
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Field Officer";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		cost = 250000;
		icon = "iconManOfficer";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_Faction_KPA_Officer: FP_Faction_KPA_FieldOfficer
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		uniformClass = "FP_Uniform_SovUniform_Sergeant";  
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		linkedItems[] = {"M67_lite","UK3CB_CW_SOV_O_EARLY_H_Officer_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"M67_lite","UK3CB_CW_SOV_O_EARLY_H_Officer_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_Faction_KPA_RO: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "UK3CB_B_O_Radio_Backpack";
	};
	class FP_Faction_KPA_Marksman: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"vest_chicom_sks","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_RAT: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Medic: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_Faction_KPA_Crewman: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		uniformClass = "FP_GOR_Uniform_Massifjacket_black";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
	};
	class FP_Faction_KPA_CrewCommander: FP_Faction_KPA_Crewman
	{
		displayName = "Crew Commander";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Binocular","Throw","Put"};		
	};
	class FP_Faction_KPA_Engineer: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Exp: FP_Faction_KPA_Engineer
	{
		author = "FP Mod Team";
		backpack = "KPA_Carryall_Exp";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		canDeactivateMines = 1;
		engineer = 0;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class FP_Faction_KPA_MMG: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		weapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AMMG: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machinegunner";
		backpack = "KPA_FieldPack_khk_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_MAT: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Medium AT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		weapons[] = {"FP_Type56","FP_rhs_weap_rpg7_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","FP_rhs_weap_rpg7_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_AMAT: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Rifleman (Medium AT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_HAT: FP_Faction_KPA_MAT
	{
		displayName = "Missile Specialist (Heavy AT)";
		backpack = "KPA_Carryall_oli_HAT";
		weapons[] = {"FP_Type56","launch_O_Vorona_green_F","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","launch_O_Vorona_green_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
	};
	class FP_Faction_KPA_AHAT: FP_Faction_KPA_AMAT
	{
		displayName = "Asst. Missile Specialist (Heavy AT)";
		backpack = "KPA_Carryall_oli_HAT";		
	};
	class FP_Faction_KPA_MANPADS: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		weapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_AMANPADS: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Helipilot: FP_Faction_KPA_Crewman
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		uniformClass = "UK3CB_CW_SOV_O_LATE_U_J_Pilot_Uniform_01_OLI";		
	};
	class FP_Faction_KPA_Helicrew: FP_Faction_KPA_Helipilot
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_oli","UK3CB_TKA_O_H_zsh7a_mike_Des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","UK3CB_TKA_O_H_zsh7a_mike_Des","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class FP_Faction_KPA_Pilot: FP_Faction_KPA_Helipilot
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Parachute";
		displayName = "Fighter Pilot";
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		linkedItems[] = {"V_TacVest_khk","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
		magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		uniformClass = "UK3CB_TKA_I_U_J_Pilot_Des";
	};
	class FP_Faction_KPA_JSniper: FP_Faction_KPA_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		scope = 2;
		scopeCurator = 2;
		displayName = "Jeongchaldae Sniper";
		vehicleClass = "MenSniper";
		uniformClass = "U_I_FullGhillie_lsh";
		weapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"H_Bandanna_khk","H_Bandanna_khk"};
	};
	class FP_Faction_KPA_JSpotter: FP_Faction_KPA_JSniper
	{
		backpack = "KPA_FieldPack_RPG_Spotter_khk";
		displayName = "Jeongchaldae Spotter";
		weapons[] = {"FP_Type56_mount_1P63_762sup_ak","rhs_weap_makarov_pm","launch_RPG7_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P63_762sup_ak","rhs_weap_makarov_pm","launch_RPG7_F","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_30Rnd_762x39mm_U","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class FP_Faction_KPA_SOF_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_KPA";
		genericNames = "NorthKoreanMen";
		vehicleClass = "Men";
	    editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 1.3;
		sensitivity = 2;
		threat[] = {1,0.1,0.1};
		camouflage = 1.5;
		minFireTime = 5;
		cost = 20000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model="a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "FP_Uniform_BDU_Type87";  
		weapons[] = {"FP_hlc_rifle_aks74u_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_aks74u_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_SOF_Scout: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout";		
	};
	class FP_Faction_KPA_SOF_Scout_Unarmed: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout (Unarmed)";	
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_Faction_KPA_SOF_Scout_AT: FP_Faction_KPA_SOF_Soldier_BASE
	{
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout (AT)";
		backpack = "KPA_Recon_FieldPack_RPG_Light_grn";
		weapons[] = {"FP_hlc_rifle_aks74u_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","FP_rhs_weap_rpg7_pgo7v2","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_aks74u_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","FP_rhs_weap_rpg7_pgo7v2","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};		
	};
	class FP_Faction_KPA_SOF_JTAC: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando JTAC";
		backpack = "B_RadioBag_01_black_F";
		weapons[] = {"FP_hlc_rifle_aks74_GL_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_aks74_GL_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		
	};
	class FP_Faction_KPA_SOF_AR: FP_Faction_KPA_SOF_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Autorifleman";
		weapons[] = {"FP_hlc_rifle_rpk74n_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_rpk74n_ekp8_02_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","hlc_60Rnd_545x39_b_rpk","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
class FP_Faction_KPA_SOF_Medic: FP_Faction_KPA_SOF_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Medic";
		attendant = 1;
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_Faction_KPA_SOF_Crewman: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Crewman";
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_H_Crew_Cap"};
	};
	class FP_Faction_KPA_SOF_SL: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Squad Leader";
		weapons[] = {"FP_hlc_rifle_aks74_1p29_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_aks74_1p29_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_GOR_V_SmershVest_Olive_radio_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_SmershVest_Olive_radio_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_SOF_TL: FP_Faction_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Team Leader";
		weapons[] = {"FP_hlc_rifle_aks74_GL_pkas_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_aks74_GL_pkas_545SUP_AK","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","hlc_30Rnd_545x39_S_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_RadioBag_01_wdl_F";
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
	};	
	class FP_Faction_KPA_SOF_Marksman: FP_Faction_KPA_SOF_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Marksman";
		weapons[] = {"FP_rhs_weap_asval_FP_PSO1M21","FP_RH_cz75_gemtech9","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_asval_FP_PSO1M21","FP_RH_cz75_gemtech9","Throw","Put"};
		magazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","rhs_20rnd_9x39mm_SP5","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
		sensitivity = 3;
	};
	class FP_Faction_KPA_WPRG_Base: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		vehicleClass = "fp_men_militia";
	    editorSubcategory = "fp_men_militia_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Militia Man";
		cost = 10000;
		model="sim_extra_gear\chi_type65.p3d";
		uniformClass = "unif_chi_type65_kpa_modern"; 
		weapons[] = {"str_ppsh_old","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_Rifleman: FP_Faction_KPA_WPRG_Base
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_WPRG_Base";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_Faction_KPA_WPRG_BR: FP_Faction_KPA_WPRG_Base
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_WPRG_Base";
		scope = 2;
		scopeCurator = 2;
		displayName = "Battle Rifleman";
		weapons[] = {"str_sks_old","Throw","Put"};
		respawnWeapons[] = {"str_sks_old","Throw","Put"};
		magazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","10rnd_sks_mag","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};		
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_AR: FP_Faction_KPA_WPRG_Base
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"str_rpd","Throw","Put"};
		respawnWeapons[] = {"str_rpd","Throw","Put"};
		magazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","100rnd_korob_rpd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"vest_sov_chestrig","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_chestrig","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_AAR: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_WPRG_FieldPack_khk_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_WPRG_SL: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
	};
	class FP_Faction_KPA_WPRG_TL: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"vest_sov_webgear","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_webgear","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_Marksman: FP_Faction_KPA_WPRG_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 150000;
		sensitivity = 3;
	};
	class FP_Faction_KPA_WPRG_RAT: FP_Faction_KPA_WPRG_Base
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"str_ppsh_old","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","launch_RPG7_F","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","RPG7_F","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","RPG7_F","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_WPRG_LMG: FP_Faction_KPA_WPRG_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Light Machinegunner";
		weapons[] = {"str_pul_DP","Throw","Put"};
		respawnWeapons[] = {"str_pul_DP","Throw","Put"};
		magazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"47rnd_dpbar","47rnd_dpbar","47rnd_dpbar","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"vest_sov_chestrig","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_chestrig","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_WPRG_ALMG: FP_Faction_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Light Machinegunner";
		backpack = "KPA_WPRG_FieldPack_khk_LMG";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};

	class FP_Faction_KPA_Marine_BASE: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		vehicleClass = "fp_men_marine";
	    editorSubcategory = "fp_men_marines_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Marine Base";
		cost = 10000;
		uniformClass = "FP_Uniform_BDU_KPA_DigiWld";
		weapons[] = {"rhs_weap_ak74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"FP_V_KPA_TacVest_DigiWld","FP_PASGT_DigiWld","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_V_KPA_TacVest_DigiWld","FP_PASGT_DigiWld","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Marine_Rifleman: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Marine_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_Faction_KPA_Marine_AmmoBearer: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_Carryall_cbr_Ammo";
		displayName = "Ammo Bearer";		
	};
	class FP_Faction_KPA_Marine_AR: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"rhs_weap_rpk74m","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_rpk74m","Throw","Put"};
		magazines[] = {"rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_60Rnd_545X39_7N22_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
	class FP_Faction_KPA_Marine_AAR: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_FieldPack_khk_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Marine_SL: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_rhs_weap_ak74m_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_rhs_weap_ak74m_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacChestrig_grn_F","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Marine_TL: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_rhs_weap_ak74m_gp25_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_ak74m_gp25_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_TacChestrig_grn_F","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Marine_Marksman: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Marksman";
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
	};
	class FP_Faction_KPA_Marine_RAT: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_Marine_Medic: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_Faction_KPA_Marine_Crewman: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","35rnd_psh_mag","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacChestrig_grn_F","UK3CB_H_Crew_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","UK3CB_H_Crew_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"UK3CB_H_Crew_Cap"};
	};
	class FP_Faction_KPA_Marine_CrewCommander: FP_Faction_KPA_Marine_Crewman
	{
		displayName = "Crew Commander";
		weapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Binocular","Throw","Put"};
		respawnWeapons[] = {"str_ppsh_old","rhs_weap_makarov_pm","Binocular","Throw","Put"};		
	};
	class FP_Faction_KPA_Marine_Engineer: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class FP_Faction_KPA_Marine_MMG: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Gunner";
		weapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
	class FP_Faction_KPA_Marine_AMMG: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "KPA_FieldPack_khk_MMG";
		headgearProbability = 100;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Marine_MAT: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Gunner";
		backpack = "KPA_TacticalPack_oli_MAT";
		weapons[] = {"FP_Type56","FP_rhs_weap_rpg7_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","FP_rhs_weap_rpg7_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Marine_AMAT: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "KPA_TacticalPack_oli_MAT";
		headgearProbability = 33;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Marine_MANPADS: FP_Faction_KPA_Marine_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Gunner";
		backpack = "KPA_Carryall_oli_MANPADS";
		weapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 66;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
	};
	class FP_Faction_KPA_Marine_AMANPADS: FP_Faction_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "KPA_Carryall_oli_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_ssh60","rhsgref_ssh68_ttsko_dark","rhsgref_ssh68_ttsko_mountain"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Light_Soldier_BASE: FP_Faction_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		vehicleClass = "fp_men_light";
	    editorSubcategory = "fp_men_light_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Light Base";
		backpack =  "KPA_B_Carryall_cbr_LightInf";
		cost = 10000;
		weapons[] = {"FP_Type56","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Light_Rifleman: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_KPA_Light_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_Faction_KPA_Light_AR: FP_Faction_KPA_Light_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_MG_s"};
				speechPlural[] = {"veh_infantry_MG_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_MG_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_MG_p";
		nameSound = "veh_infantry_MG_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"FP_bren_L4","Throw","Put"};
		respawnWeapons[] = {"FP_bren_L4","Throw","Put"};
		magazines[] = {"FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","FP_30rnd_762_FAL_m80","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		backpack = "KPA_B_Carryall_cbr_LightInf_AR";
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Light_AAR: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_B_Carryall_cbr_LightInf_AR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_KPA_Light_Marksman: FP_Faction_KPA_Light_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_B_TacticalPack_oli_LightInf_Marksman";
		displayName = "Marksman";
		weapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
	};
	class FP_Faction_KPA_Light_RAT: FP_Faction_KPA_Light_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		backpack = "KPA_FieldPack_RPG_khk";
		weapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_Light_Engineer: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class FP_Faction_KPA_Light_Exp: FP_Faction_KPA_Light_Engineer
	{
		author = "FP Mod Team";
		backpack = "KPA_Carryall_Exp";
		_generalMacro = "FP_Faction_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		canDeactivateMines = 1;
		engineer = 0;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		items[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
		respawnitems[] = {"FirstAidKit","ACE_Clacker","ACE_DefusalKit"};
	};
	class FP_Faction_KPA_Light_SL: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Light_TL: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56_mount_1P29","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_KPA_Light_Medic: FP_Faction_KPA_Light_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_medic_s"};
				speechPlural[] = {"veh_infantry_medic_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_medic_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_medic_p";
		nameSound = "veh_infantry_medic_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_makarov_pm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_Faction_KPA_Light_MANPADS: FP_Faction_KPA_Light_Soldier_BASE
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_AT_s"};
				speechPlural[] = {"veh_infantry_AT_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		weapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_Type56","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_Faction_KPA_Light_AMANPADS: FP_Faction_KPA_Light_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
};
class CfgWeapons
{
	class FP_Type56_mount;
	class FP_Type56_mount_EKP8: FP_Type56_mount
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
		};
	};
	class FP_Type56_mount_EKP8_762sup_ak: FP_Type56_mount
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_762sup_ak";
			};			
		};
	};
	class FP_Type56_mount_1P29: FP_Type56_mount
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
		};
	};
	class FP_Type56_mount_1P63_762sup_ak: FP_Type56_mount
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_762sup_ak";
			};
		};		
	};
	class FP_svd_wood;
	class FP_svd_wood_PSO1M2: FP_svd_wood
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pso1m2";
			};
		};
	};
	class hlc_rifle_aks74u;
	class FP_hlc_rifle_aks74u_ekp8_02_545SUP_AK: hlc_rifle_aks74u
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};

	class hlc_rifle_aks74;
	class FP_hlc_rifle_aks74_1p29_545SUP_AK: hlc_rifle_aks74
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};
	class hlc_rifle_aks74_GL;
	class FP_hlc_rifle_aks74_GL_ekp8_02_545SUP_AK: hlc_rifle_aks74_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};
	class FP_hlc_rifle_aks74_GL_pkas_545SUP_AK : hlc_rifle_aks74_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pkas";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};
	class hlc_rifle_rpk74n;
	class FP_hlc_rifle_rpk74n_ekp8_02_545SUP_AK: hlc_rifle_rpk74n
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_ekp8_02";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "hlc_muzzle_545SUP_AK";
			};
		};		
	};	
	class RH_cz75;
	class FP_RH_cz75_gemtech9: RH_cz75
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "RH_gemtech9";
			};
		};		
	};
	class rhs_weap_asval;
	class FP_rhs_weap_asval_FP_PSO1M21: rhs_weap_asval
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pso1m21";
			};
		};
	};	
	class rhs_weap_rpg7;
	class FP_rhs_weap_rpg7_pgo7v: rhs_weap_rpg7
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pgo7v";
			};
		};
	};	
	class FP_rhs_weap_rpg7_pgo7v2: rhs_weap_rpg7
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_pgo7v2";
			};
		};
	};
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_gp25;
	class FP_rhs_weap_ak74m_1P29: rhs_weap_ak74m
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk";
			};
		};		
	};
	class FP_rhs_weap_ak74m_gp25_1P29: rhs_weap_ak74m_gp25
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p29";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk";
			};
		};		
	};
};