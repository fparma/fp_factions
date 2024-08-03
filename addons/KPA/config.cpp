#define quote(var1) #var1
#define mag_xx(a,b) class _xx_##a {magazine = quote(a); count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = quote(a); count = b;}
#define item_xx(a,b) class _xx_##a {name = quote(a); count = b;}
class CfgPatches
{
	class FP_Factions_KPA
	{
		units[] = 
		{
			"FP_CSL_O_KPA_URAL_ZU23",
			"FP_CSL_O_KPA_ZSU_234_AA",
			"FP_CSL_O_KPA_BTR40",
			"FP_CSL_O_KPA_BTR40_3MG",
			"FP_CSL_O_KPA_BTR40_MG",
			"FP_CSL_O_KPA_BTR40_ZPU2",
			"FP_CSL_O_KPA_BTR50",
			"FP_CSL_O_KPA_BTR50_Ammo",
			"FP_CSL_O_KPA_BTR50_DShK",
			"FP_CSL_O_KPA_BTR60",
			"FP_CSL_O_KPA_BTR70",
			"FP_CSL_O_KPA_BTR80A",
			"FP_CSL_O_KPA_bmp1",
			"FP_CSL_O_KPA_T34",
			"FP_CSL_O_KPA_T34_DSHK",
			"FP_CSL_O_KPA_PT76B",
			"FP_CSL_O_KPA_SU100",
			"FP_CSL_O_KPA_T55",
			"FP_CSL_O_KPA_T72M",
			"FP_CSL_O_KPA_T90S",
			"FP_CSL_O_KPA_D30",
			"FP_CSL_O_KPA_D30_AT",
			"FP_CSL_O_KPA_2B14_82MM",
			/*"FP_CSL_O_KPA_MAZ_543_SCUD",*/
			"FP_CSL_O_KPA_BM21",
			"FP_CSL_O_KPA_BRDM2",
			"FP_CSL_O_KPA_BRDM2_ATGM",
			"FP_CSL_O_KPA_BRDM2UM",
			"FP_CSL_O_KPA_BRDM2_HQ",
			"FP_CSL_O_KPA_UAZ",
			"FP_CSL_O_KPA_UAZ_AGS",
			"FP_CSL_O_KPA_UAZ_DShKM",
			"FP_CSL_O_KPA_UAZ_Open",
			"FP_CSL_O_KPA_UAZ_SPG9",
			"FP_CSL_O_KPA_ZIL131",
			"FP_CSL_O_KPA_ZIL131_Flatbed_Cover",
			"FP_CSL_O_KPA_ZIL131_Open",
			"FP_CSL_O_KPA_ZIL131_Flatbed",
			"FP_CSL_O_KPA_Heli_Light_01_F",
			"FP_CSL_O_KPA_Mi25",
			"FP_CSL_O_KPA_Mi8MT",
			"FP_CSL_O_KPA_Mi8MTV3",
			"FP_CSL_O_KPA_Mi8T",
			"FP_CSL_O_KPA_Su25K",
			"FP_CSL_O_KPA_L159_Fighter_dynamicLoadout_F",
			"FP_KPA_Soldier_BASE",
			"FP_CSL_O_KPA_Soldier_A_F",
			"FP_CSL_O_KPA_Soldier_AAR_F",
			"FP_CSL_O_KPA_Soldier_AMMG_F",
			"FP_CSL_O_KPA_Soldier_AAA_F",
			"FP_CSL_O_KPA_Soldier_AHAT_F",
			"FP_CSL_O_KPA_Soldier_AMAT_F",
			"FP_CSL_O_KPA_Soldier_AR_F",
			"FP_CSL_O_KPA_CrewCommander_F",
			"FP_CSL_O_KPA_Crewman_F",
			"FP_CSL_O_KPA_engineer_F",
			"FP_CSL_O_KPA_soldier_exp_F",
			"FP_CSL_O_KPA_FieldOfficer_F",
			"FP_CSL_O_KPA_Pilot_F",
			"FP_CSL_O_KPA_Helicrew_F",
			"FP_CSL_O_KPA_Helipilot_F",
			"FP_CSL_O_KPA_Soldier_MMG_F",
			"FP_CSL_O_KPA_Soldier_M_F",
			"FP_CSL_O_KPA_Medic_F",
			"FP_CSL_O_KPA_Soldier_AA_F",
			"FP_CSL_O_KPA_Soldier_HAT_F",
			"FP_CSL_O_KPA_Officer_F",
			"FP_CSL_O_KPA_RadioOperator_F",
			"FP_CSL_O_KPA_Soldier_F",
			"FP_CSL_O_KPA_Soldier_LAT_F",
			"FP_CSL_O_KPA_Soldier_MAT_F",
			"FP_CSL_O_KPA_Soldier_unarmed_F",
			"FP_CSL_O_KPA_Soldier_SL_F",
			"FP_CSL_O_KPA_Soldier_TL_F",
			"FP_CSL_O_KPA_Soldier_UAV_F",
			"FP_CSL_O_KPA_Soldier_lite_A_F",
			"FP_CSL_O_KPA_Soldier_lite_AAR_F",
			"FP_CSL_O_KPA_Soldier_lite_AAA_F",
			"FP_CSL_O_KPA_Soldier_lite_AR_F",
			"FP_CSL_O_KPA_Soldier_lite_Engineer_F",
			"FP_CSL_O_KPA_Soldier_lite_exp_F",
			"FP_CSL_O_KPA_Soldier_lite_M_F",
			"FP_CSL_O_KPA_Soldier_lite_AMAT_F",
			"FP_CSL_O_KPA_Soldier_lite_MAT_F",
			"FP_CSL_O_KPA_Medic_lite_F",
			"FP_CSL_O_KPA_Soldier_lite_AA_F",
			"FP_CSL_O_KPA_Soldier_lite_F",
			"FP_CSL_O_KPA_Soldier_lite_unarmed_F",
			"FP_CSL_O_KPA_Soldier_lite_LAT_F",
			"FP_CSL_O_KPA_Soldier_lite_SL_F",
			"FP_CSL_O_KPA_Soldier_lite_TL_F",
			"FP_CSL_O_KPA_Soldier_lite_RadioOperator_F",
			"FP_CSL_O_KPA_Marine_A_F",
			"FP_CSL_O_KPA_Marine_AAR_F",
			"FP_CSL_O_KPA_Marine_AR_F",
			"FP_CSL_O_KPA_Marine_CrewCommander_F",
			"FP_CSL_O_KPA_Marine_Crewman_F",
			"FP_CSL_O_KPA_Marine_Engineer_F",
			"FP_CSL_O_KPA_Marine_AAA_F",
			"FP_CSL_O_KPA_Marine_AA_F",
			"FP_CSL_O_KPA_Marine_GL_F",
			"FP_CSL_O_KPA_Marine_M_F",
			"FP_CSL_O_KPA_Marine_AMAT_F",
			"FP_CSL_O_KPA_Marine_MAT_F",
			"FP_CSL_O_KPA_Marine_Medic_F",
			"FP_CSL_O_KPA_Marine_AMMG_F",
			"FP_CSL_O_KPA_Marine_MMG_F",
			"FP_CSL_O_KPA_Marine_F",
			"FP_CSL_O_KPA_Marine_unarmed_F",
			"FP_CSL_O_KPA_Marine_LAT_F",
			"FP_CSL_O_KPA_Marine_SL_F",
			"FP_CSL_O_KPA_Marine_TL_F",
			"FP_CSL_O_KPA_WPRG_AAR_F",
			"FP_CSL_O_KPA_WPRG_ALMG_F",
			"FP_CSL_O_KPA_WPRG_AR_F",
			"FP_CSL_O_KPA_WPRG_LMG_F",
			"FP_CSL_O_KPA_WPRG_M_F",
			"FP_CSL_O_KPA_WPRG_F",
			"FP_CSL_O_KPA_WPRG_M1903A1_F",
			"FP_CSL_O_KPA_WPRG_SKS_F",
			"FP_CSL_O_KPA_WPRG_SVT40_F",
			"FP_CSL_O_KPA_WPRG_unarmed_F",
			"FP_CSL_O_KPA_WPRG_LAT_F",
			"FP_CSL_O_KPA_WPRG_SL_F",
			"FP_CSL_O_KPA_WPRG_TL_F"
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
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_MAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AMAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};					
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_A_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};
			class LightInfantry
			{
				name = "Light Infantry";
				class KPA_Light_InfSquad
				{
					name = "Rifle Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_TL_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_LAT_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_Light_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_MAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_TL_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_AMAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};					
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_lite_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class KPA_Light_InfTeam_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class KPA_Light_InfTeam_AT
				{
					name = "Anti-tank Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_Light_InfSentry
				{
					name = "Sentries";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class KPA_Light_InfTeam_Marksmen
				{
					name = "Marksman Fireteam";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class KPA_Tacom
				{
					name = "TACOM Team";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
					faction = "FP_Faction_ROK";
					class Unit0
					{
						side = 1;
						vehicle = "FP_CSL_O_KPA_FieldOfficer_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_CSL_O_KPA_RadioOperator_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_CSL_O_KPA_Medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_CSL_O_KPA_Soldier_UAV_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class KPA_support_CLS
				{
					name = "Medical Support Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_MMG_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AMMG_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_engineer_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_engineer_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_engineer_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_MAT_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AMAT_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_HAT_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AHAT_F";
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
						vehicle = "FP_CSL_O_KPA_Soldier_AA_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AAA_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Marines
			{
				name = "Marines";
				class KPA_Marine_InfSquad
				{
					name = "Rifle Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_Medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_Marine_InfSquad_Weapons
				{
					name = "Weapons Squad";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AR_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_MAT_F";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AMAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};					
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_Medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class KPA_Marine_InfTeam_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class KPA_Marine_InfTeam_AT
				{
					name = "Anti-tank Team";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class KPA_Marine_InfSentry
				{
					name = "Sentries";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class KPA_Marine_InfTeam_Marksmen
				{
					name = "Marksman Fireteam";
					side = 0;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					faction = "FP_Faction_KPA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
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
						vehicle = "FP_CSL_O_KPA_bmp1";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
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
						vehicle = "FP_CSL_O_KPA_bmp1";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Marine_Medic_F";
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
						vehicle = "FP_CSL_O_KPA_BTR60";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
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
						vehicle = "FP_CSL_O_KPA_BTR70";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
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
						vehicle = "FP_CSL_O_KPA_ZIL131";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_F";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Medic_F";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_TL_F";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_MAT_F";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_CSL_O_KPA_Soldier_LAT_F";
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
						vehicle = "FP_CSL_O_KPA_WPRG_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LMG_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_ALMG_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LAT_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_SVT40_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_M1903A1_F";
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
						vehicle = "FP_CSL_O_KPA_WPRG_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LMG_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_SKS_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_ALMG_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_SVT40_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_SVT40_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_M1903A1_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_M1903A1_F";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class KPA_MilitiaWeaponsSquad
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Squad";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LMG_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_AR_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_ALMG_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_AAR_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_M_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class KPA_MilitiaPatrol
				{
					faction = "FP_Faction_KPA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fireteam";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_F";
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
						vehicle = "FP_CSL_O_KPA_WPRG_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LAT_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_LAT_F";
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
						vehicle = "FP_CSL_O_KPA_WPRG_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_WPRG_F";
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
						vehicle = "FP_CSL_O_KPA_SOF_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_TL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_JTAC";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_Scout_AT";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_Scout_AT";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_SOF_Medic";
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
						vehicle = "FP_CSL_O_KPA_JSniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_CSL_O_KPA_JSpotter";
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
	class FP_CSL_O_KPA_T34: FP_O_TNK_T34
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_T34_DSHK: FP_O_TNK_T34_DSHK
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_O_TNK_SU100;
	class FP_CSL_O_KPA_SU100: FP_O_TNK_SU100
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_O_APC_BTR152_ammo;
	class FP_O_APC_BTR152_dshk;
	class FP_O_APC_BTR152_ZPU;
	class FP_O_APC_BTR152;
	class FP_CSL_O_KPA_APC_BTR152: FP_O_APC_BTR152
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_APC_BTR152_ammo: FP_O_APC_BTR152_ammo
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_APC_BTR152_dshk: FP_O_APC_BTR152_dshk
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_APC_BTR152_ZPU: 	FP_O_APC_BTR152_ZPU
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};	
	class FP_O_BTR40_Unarmed;
	class FP_O_BTR40_DShK;
	class FP_O_BTR40_DShK_PKT;
	class FP_O_BTR40_ZPU2;
	class FP_CSL_O_KPA_BTR40: FP_O_BTR40_Unarmed
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR40_MG: FP_O_BTR40_DShK
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR40_3MG: FP_O_BTR40_DShK_PKT
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR40_ZPU2: FP_O_BTR40_ZPU2
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};
	class FP_O_APC_BTR50;
	class FP_O_APC_BTR50_Ammo;
	class FP_O_APC_BTR50_DShK;
	class FP_CSL_O_KPA_BTR50: FP_O_APC_BTR50
	{
		author = "FP Mod Team";
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR50_Ammo: FP_O_APC_BTR50_Ammo
	{
		author = "FP Mod Team";
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR50_DShK: FP_O_APC_BTR50_DShK 
	{
		author = "FP Mod Team";
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_O_APC_BTR50_open;
	class FP_O_APC_BTR50_Open_DShK;
	class FP_CSL_O_KPA_APC_BTR50_open: FP_O_APC_BTR50_open
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class FP_O_TNK_T55;
	class FP_CSL_O_KPA_T55: FP_O_TNK_T55
	{
		author = "FP Mod Team";
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\t55\t_55a_body_dprk_co.paa","\FP_Factions\KPA\data\t55\t_55a_turret_dprk_co.paa","\FP_Factions\KPA\data\t55\t_55a_gun_dprk_co.paa","sim_WT_tanks\T55\t_55a_mount_co.paa"};
	};
	class FP_O_TNK_PT76B;
	class FP_CSL_O_KPA_PT76B: FP_O_TNK_PT76B
	{
		author = "FP Mod Team";
		crew = "FP_CSL_O_KPA_Marine_Crewman_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo","camo2","camo3","markings"};
		hiddenselectionstextures[] = {"\FP_Factions\KPA\data\pt76b\pt_76b_body_dprk_co.paa","\FP_Factions\KPA\data\pt76b\pt_76b_turret_dprk_co.paa","\FP_Factions\KPA\data\pt76b\pt_76b_gun_dprk_co.paa","a3\data_f\clear_empty.paa"};
	};
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};
	class FP_KPA_A3T72Tank_Base: Tank_F
	{
		dlc = "RHS_AFRF";
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Default']","['Label',cRHST72PlnSymPlaces, 'Platoon',8]"};
		category = "Armored";
		allowTabLock = 0;
		destrType = "DestructDefault";
		driveOnComponent[] = {"Track_L","Track_R","Slide"};
		author = "$STR_RHS_AUTHOR_FULL";
		vehicleClass = "rhs_vehclass_tank";
		editorSubcategory = "EdSubcat_Tanks";
		displayName = "$STR_T72BA_Name";
		accuracy = 0.3;
		supplyRadius = 1;
		memoryPointSupply = "pos driver";
		model = "\rhsafrf\addons\rhs_t72\rhs_t72b_c";
		picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon = "\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
		mapSize = 9.5;
		tf_range_api = 45000;
		irTarget = 1;
		irTargetSize = 1;
		visualTarget = 1;
		visualTargetSize = 0.7;
		radarTarget = 1;
		radarTargetSize = 1.1;
		precision = 1;
		crew = "rhs_msv_crew";
		typicalCargo[] = {};
		side = 0;
		faction = "rhs_faction_tv";
		driverCanSee = "2+4+8";
		gunnerCanSee = "2+4+8";
		commanderCanSee = "2+4+8";
		unitInfoType = "RHS_RscInfoT72";
		enableGPS = 0;
		incomingMissileDetectionSystem = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "rhs_t72_driver";
		driverDoor = "hatchD";
		driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		LODDriverTurnedIn = 0;
		LODDriverTurnedOut = 0;
		LODDriverOpticsIn = 0;
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
				hitpoint = "Hit_Optic_Driver";
				initFov = 0.7;
				minFov = 0.7;
				maxFov = 0.7;
			};
		};
		weapons[] = {"rhs_weap_smokegen"};
		magazines[] = {"rhs_mag_smokegen"};
		soundGetIn[] = {"rhsafrf\addons\rhs_t72\sounds\T72_inside_door1",1.5848932,1,9};
		soundGetOut[] = {"rhsafrf\addons\rhs_t72\sounds\T72_inside_door1",1.5848932,1,25};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside_startup",1.5848932,1.0};
		soundEngineOnExt[] = {"\rhsafrf\addons\rhs_t72\sounds\T72_outside_startup",4.466836,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",0.70794576,1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside_shutdown",1.6309574,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-d_idle1","3.5*0.79432821",1,200};
				frequency = "0.95	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","3.5*0.89125091",1,340};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","3.5*1.1220185",1,380};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","3.5*1.2589254",1,420};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","3.5*1.4125376",1,460};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","3.5*1.5848932",1,500};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","3.5*1.7782794",1,540};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1","3.5*1.1220185",1,200};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2","3*1.4125376",1,200};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3","3*1.7782794",1,230};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4","3*1.9952624",1,290};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5","3*1.7782794",1,350};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6","3*2.2387211",1,400};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7","3*2.5118864",1,450};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_inside_idle1","3*0.50118721",1};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",0.35481337,1};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",0.39810717,1};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",0.63095737,1};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",0.39810717,1};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",0.4466836,1};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.8912509,1,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_01","3*0.39810717",1,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_02","3*0.44668359",1,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_03","3*0.50118721",1,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_04","3*0.56234133",1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_hard_05","3*0.56234133",1,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_01","3*0.31622776",1,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_02","3*0.35481337",1,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_03","3*0.39810717",1,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_04","3*0.44668359",1,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\ext_treads_soft_05","3*0.50118721",1,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_01","2*0.25118864",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_02","2*0.2818383",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_03","2*0.31622776",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_04","2*0.35481337",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_hard_05","2*0.39810717",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_01","2*0.31622776",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-0) max 0)*1.57/	60),(((-5) max 5)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-15) max 15)*1.57/	60),(((-10) max 10)*1.57/	60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_02","2*0.31622776",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-10) max 10)*1.57/	60),(((-15) max 15)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-30) max 30)*1.57/	60),(((-25) max 25)*1.57/	60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_03","2*0.35481337",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-25) max 25)*1.57/	60),(((-30) max 30)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-45) max 45)*1.57/	60),(((-40) max 40)*1.57/	60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_04","2*0.35481337",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-40) max 40)*1.57/	60),(((-45) max 45)*1.57/	60)])	*	((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-55) max 55)*1.57/	60),(((-50) max 50)*1.57/	60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\int_treads_soft_05","2*0.39810717",1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)*1.57/	60) factor[(((-49) max 49)*1.57/	60),(((-53) max 53)*1.57/	60)])";
			};
		};
		simulation = "tankX";
		normalSpeedForwardCoef = 0.75;
		slowSpeedForwardCoef = 0.25;
		fuelCapacity = 29.5;
		RHS_fuelCapacity = 1200;
		brakeIdleSpeed = 1.78;
		maxSpeed = 60;
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterLeakiness = 10;
		torqueCurve[] = {{0,0},{0.478261,0.853329},{0.521739,0.986803},{0.565217,1},{0.608696,1},{0.695652,0.980804},{0.869565,0.884823},{1.43478,0}};
		engineMOI = 11;
		enginePower = 626;
		peakTorque = 3334;
		minOmega = 80;
		maxOmega = 240.86;
		idleRPM = 800;
		redRPM = 2300;
		thrustDelay = 0.0;
		engineBrakeCoef = 0.9;
		tankTurnForce = 950000.0;
		tankTurnForceAngMinSpd = 0.7;
		tankTurnForceAngSpd = 0.92;
		accelAidForceCoef = 2.5;
		accelAidForceYOffset = -5.5;
		accelAidForceSpd = 2.23;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 42;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 75;
		engineLosses = 35;
		transmissionLosses = 45;
		clutchStrength = 40.0;
		latency = 1.3;
		switchTime = 0.0;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.434783,0.434783,0,0.956522,0.434783,0.956522,0.782609,0.913043,0.782609,0.913043,0.782609,0.869565,0.73913,0.826087,0.695652,1,0.608696};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-16.35,"N",0,"D1",8.173,"D2",4.4,"D3",3.485,"D4",2.787,"D5",2.027,"D6",1.467,"D7",1};
			TransmissionRatios[] = {"High",9.05};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
		class Wheels
		{
			class L2
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				steering = 0;
				width = 0.459;
				mass = 193;
				MOI = 17.069;
				maxBrakeTorque = 20000;
				sprungMass = 3750;
				springStrength = 484000;
				springDamperRate = 11000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				dampingRate = 3145.0;
				dampingRateInAir = 3145.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				latStiffX = 1;
				latStiffY = 40;
				longitudinalStiffnessPerUnitGravity = 72000;
				frictionVsSlipGraph[] = {{0.0,0.4},{0.18,1.0},{0.7,0.75}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		tracksSpeed = -1;
		wheelCircumference = 2.51;
		attenuationEffectType = "TankAttenuation";
		extCameraPosition[] = {0,2.2,-11};
		viewDriverInExternal = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		cost = 1500000;
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_545x39_7N10_AK
			{
				magazine = "rhs_30Rnd_545x39_7N10_AK";
				count = 10;
			};
			class _xx_rhs_mag_rgd5
			{
				magazine = "rhs_mag_rgd5";
				count = 10;
			};
			class _xx_rhs_mag_nspn_red
			{
				magazine = "rhs_mag_nspn_red";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
		armor = 450;
		armorStructural = 220;
		explosionShielding = 100;
		crewExplosionProtection = 0.9999995;
		minTotalDamageThreshold = 0.5;
		fireResistance = -1;
		crewVulnerable = 0;
		class HitPoints: HitPoints
		{
			class Armor_Composite_75
			{
				armor = 999;
				material = -1;
				name = "Armor_CE_75_Hit";
				armorComponent = "Armor_CE_75";
				simulation = "RHS_Composite_75";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0.0;
				radius = 0.001;
				visual = "-";
			};
			class Armor_Composite_80
			{
				armor = 999;
				material = -1;
				name = "Armor_CE_80_Hit";
				armorComponent = "Armor_CE_80";
				simulation = "RHS_Composite_80";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0.0;
				radius = 0.001;
				visual = "-";
			};
			class Armor_Composite_85
			{
				armor = 999;
				material = -1;
				name = "Armor_CE_85_Hit";
				armorComponent = "Armor_CE_85";
				simulation = "RHS_Composite_85";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0.0;
				radius = 0.001;
				visual = "-";
			};
			class Armor_Composite_95
			{
				armor = 999;
				material = -1;
				name = "Armor_CE_95_Hit";
				armorComponent = "Armor_CE_95";
				simulation = "RHS_Composite_95";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0.0;
				radius = 0.001;
				visual = "-";
			};
			class Sideskirt_1_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_1";
				armorComponent = "Skirt_1";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_2_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_2";
				armorComponent = "Skirt_2";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_3_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_3";
				armorComponent = "Skirt_3";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_4_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_4";
				armorComponent = "Skirt_4";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_5_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_5";
				armorComponent = "Skirt_5";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_6_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_6";
				armorComponent = "Skirt_6";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_7_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_7";
				armorComponent = "Skirt_7";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_8_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_8";
				armorComponent = "Skirt_8";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_9_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_9";
				armorComponent = "Skirt_9";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class Sideskirt_10_hitpoint
			{
				simulation = "RHS_Sideskirt_Rubber";
				armor = -80;
				material = -1;
				name = "Skirt_10";
				armorComponent = "Skirt_10";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.2;
				radius = 0.16;
				visual = "-";
			};
			class HitFuelTank_Left
			{
				armor = -80;
				material = -1;
				name = "Hit_FuelTank_Left";
				armorComponent = "Hit_FuelTank_Left";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.3;
				explosionShielding = 0;
				radius = 0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name = "Hit_FuelTank_Right";
				armorComponent = "Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor = 999;
				name = "Hit_Fuel";
				armorComponent = "Hit_Fuel";
				visual = "-";
				passThrough = 0;
				minimalHit = 1;
				explosionShielding = 0;
				radius = 0.01;
				depends = "(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitHull: HitHull
			{
				armor = -100;
				name = "Hit_Hull";
				armorComponent = "Hit_Carousel";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.04;
				explosionShielding = 0.01;
				radius = 0.1;
			};
			class HitEngine: HitEngine
			{
				armor = -150;
				material = -1;
				name = "Hit_Engine";
				armorComponent = "Hit_Engine";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.009;
				radius = 0.18;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
						enabled = "engineDamage";
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor = -150;
				armorComponent = "Hit_TrackL";
				name = "Hit_TrackL";
				passThrough = 0;
				material = -1;
				minimalHit = -0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = -150;
				armorComponent = "Hit_TrackR";
				name = "Hit_TrackR";
				material = -1;
				passThrough = 0;
				minimalHit = -0.25;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class Hit_Optic_Driver
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_driver";
				armorComponent = "Hit_Optic_Driver";
				passThrough = 0;
			};
			class Hit_Optic_Periscope
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_gunperiscope";
				armorComponent = "Hit_Optic_Periscope";
				passThrough = 0;
			};
			class Hit_Optic_TPD1K
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_tpd1k";
				armorComponent = "Hit_Optic_TPD1K";
				passThrough = 0;
			};
			class Hit_Optic_1K13
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_1K13";
				armorComponent = "Hit_Optic_1K13";
				passThrough = 0;
			};
			class Hit_Optic_TKN3
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_TKN3";
				armorComponent = "Hit_Optic_TKN3";
				passThrough = 0;
			};
		};
		enableManualFire = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						LODTurnedOut = 1200;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -5;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {};
						magazines[] = {};
						turretInfoType = "RHS_RscWeaponTKN3_FCS";
						discreteDistance[] = {100};
						discreteDistanceInitIndex = 0;
						canUseScanners = 0;
						allowTabLock = 0;
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.101;
							minFov = 0.102;
							maxFov = 0.102;
							visionMode[] = {"Normal"};
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								opticsDisplayName = "TKN3";
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
								gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
								initFov = "0.7/5";
								hitpoint = "Hit_Optic_TKN3";
							};
							class Night: Wide
							{
								initFov = "0.7/4.2";
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
								visionMode[] = {"NVG"};
							};
							class Periscope: ViewOptics
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.26;
								minFov = 0.26;
								maxFov = 0.26;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
						gunnerAction = "RHS_passenger_inside_6";
						gunnerInAction = "rhs_t72_commander";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						personTurretAction = "RHS_passenger_inside_6";
						isPersonTurret = 1;
						gunnerDoor = "hatchC";
						gunnerType = "FP_CSL_O_KPA_CrewCommander_F";
						startEngine = 0;
						viewGunnerInExternal = 1;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret = 1;
								armor = -999;
								material = -1;
								name = "vezVelitele";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 1;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGunCom
							{
								isGun = 1;
								armor = -999;
								material = -1;
								name = "zbranVelitele";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 1;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
						selectionFireAnim = "";
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
							};
						};
					};
					class CommanderMG: CommanderOptics
					{
						gunnername = "Commander HMG";
						proxyindex = 2;
						dontCreateAi = 1;
						cantCreateAI = 1;
						body = "mg_turret";
						gun = "mg_gun";
						animationSourceBody = "mg_turret";
						animationSourceGun = "mg_gun";
						gunnerDoor = "";
						memoryPointGun = "mg_end";
						gunBeg = "mg_end";
						gunEnd = "mg_start";
						stabilizedInAxes = 0;
						gunnerAction = "rhs_t72_commander_mg";
						gunnerInAction = "rhs_t72_commander_mg";
						canHideGunner = 0;
						isPersonTurret = 0;
						memoryPointGunnerOutOptics = "commander_out_view";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						soundAttenuationTurret = "HeliAttenuationGunner";
						disableSoundAttenuation = 1;
						animationSourceStickX = "mg_Turret_Inertia";
						animationSourceStickY = "mg_Gun_Inertia";
						gunnerLeftHandAnimName = "";
						gunnerRightHandAnimName = "mg_handle2";
						turretInfoType = "RHS_RscWeaponZeroing";
						maxVerticalRotSpeed = 0.35;
						minElev = -6;
						maxElev = 45;
						initElev = 44;
						initTurn = -180;
						LODOpticsOut = 1200;
						LODOpticsIn = 1200;
						discreteDistance[] = {100,200,300,400,500,600,800,900,1000,1100,1200,1400,1500,1800,1900,2000};
						discreteDistanceInitIndex = 2;
						weapons[] = {"rhs_weap_nsvt_t72"};
						magazines[] = {"rhs_mag_127x108mm_50","rhs_mag_127x108mm_50","rhs_mag_127x108mm_50"};
						selectionFireAnim = "zasleh4";
						class OpticsIn: OpticsIn
						{
							class Wide: Wide
							{
								visionMode[] = {"Normal"};
								initFov = 0.583333;
								minFov = 0.583333;
								maxFov = 0.583333;
							};
						};
						class HitPoints
						{
							class HitTurretNSVT
							{
								isTurret = 1;
								armor = 0.3;
								material = -1;
								name = "nsvt_turret";
								armorComponent = "Hit_NSVT_Turret";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGunNSVT
							{
								isGun = 1;
								armor = 0.3;
								material = -1;
								name = "nsvt_gun";
								armorComponent = "Hit_NSVT_Gun";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
						gunnercompartments = "Compartment5";
					};
				};
				LODTurnedOut = 0;
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zaslehCoax";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				startEngine = 0;
				weapons[] = {"rhs_weap_2a46m","rhs_weap_pkt","rhs_weap_902a","rhs_weap_fcs"};
				magazines[] = {"rhs_mag_3bm42_7","rhs_mag_3bk18m_6","rhs_mag_3of26_5","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17","rhs_laserfcsmag","rhs_laserfcsmag"};
				maxHorizontalRotSpeed = 0.35;
				maxVerticalRotSpeed = 0.07;
				minElev = -5;
				maxElev = 14;
				initElev = 10;
				initTurn = -13;
				soundServo[] = {"rhsafrf\addons\rhs_t72\sounds\traverse",7,1.0,30};
				class TurnIn
				{
					limitsArrayTop[] = {{14,-180},{14,180}};
					limitsArrayBottom[] = {{-1.9,-180},{-1.9,-134.6867},{-4.7683,-133.6867},{-5,0},{-4.7173,133.6372},{-1.9,134.6867},{-1.9,180}};
				};
				turretInfoType = "RHS_RscWeaponT72_FCS";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				canUseScanners = 0;
				allowTabLock = 0;
				enableManualFire = 0;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				class ViewOptics;
				class OpticsIn
				{
					class Day: ViewOptics
					{
						opticsDisplayName = "DAY";
						minFov = 0.0777778;
						maxFov = 0.0777778;
						initFov = 0.0777778;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpdk1_empty";
						HitPoint = "Hit_Optic_TPD1K";
					};
					class 1k113: ViewOptics
					{
						opticsDisplayName = "ATGM";
						camPos = "view_1k13";
						initFov = 0.0875;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k113.p3d";
						HitPoint = "Hit_Optic_1K13";
					};
					class Periscope: Day
					{
						opticsDisplayName = "PERISCOPE";
						camPos = "view_periscope";
						initFov = 0.466666;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
						HitPoint = "Hit_Optic_Periscope";
					};
					class Night: Day
					{
						opticsDisplayName = "NIGHT";
						camPos = "view_1k13";
						initFov = 0.1;
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1kn.p3d";
						HitPoint = "Hit_Optic_1K13";
					};
				};
				lockWhenDriverOut = 1;
				gunnerAction = "rhs_t80a_gunner_out";
				gunnerInAction = "rhs_t80a_gunner_in";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				gunnerDoor = "hatchG";
				forceHideGunner = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = -150;
						material = -1;
						name = "vez";
						armorComponent = "Hit_Turret";
						visual = "vez";
						passThrough = 0;
						minimalHit = -0.2;
						explosionShielding = 0.0009;
						radius = 0.1;
					};
					class HitGun
					{
						armor = -150;
						material = -1;
						name = "zbran";
						armorComponent = "Hit_Gun";
						visual = "-";
						passThrough = 0;
						minimalHit = -0.2;
						explosionShielding = 0.0001;
						radius = 0.1;
					};
				};
				class Reflectors
				{
					class Searchlight_FG125
					{
						color[] = {1900,1300,950};
						ambient[] = {5,5,5};
						position = "Light_FG125";
						direction = "Light_FG125_end";
						hitpoint = "Light_FG125";
						selection = "Light_FG125";
						size = 1;
						innerAngle = 8;
						outerAngle = 15;
						coneFadeCoef = 1;
						intensity = 45;
						useFlare = 1;
						dayLight = 1;
						flareSize = 0.85;
						class Attenuation
						{
							start = 1;
							constant = 0;
							linear = 0;
							quadratic = 0.02;
							hardLimitStart = 630;
							hardLimitEnd = 660;
						};
					};
					class Searchlight_FG125_Flare
					{
						color[] = {7,6,6.5};
						ambient[] = {22,22,22};
						position = "Light_FG125";
						direction = "Light_FG125_end";
						hitpoint = "Light_FG125";
						selection = "Light_FG125";
						size = 1;
						innerAngle = 30;
						outerAngle = 175;
						coneFadeCoef = 10;
						intensity = 100;
						useFlare = 1;
						dayLight = 0;
						flareSize = 1.85;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 0;
							quadratic = 10;
							hardLimitStart = 0.0;
							hardLimitEnd = 0.9;
						};
					};
				};
				armorLights = 0.1;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
				};
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","n1","n2","n3","i1","i2",""};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources
		{
			class standard
			{
				displayName = "Standard";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b_01a_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_02a_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"};
				factions[] = {};
			};
			class rhs_Sand: standard
			{
				displayName = "Sand";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa"};
			};
			class rhs_chdkz: rhs_Sand
			{
				displayName = "CHDKZ";
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_chdkz_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_chdkz_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa"};
			};
			class r1: standard
			{
				displayName = "#1";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)","#(argb,8,8,3)color(0.92,0.87,0.92,1)"};
			};
			class r2: standard
			{
				displayName = "#2";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)","#(argb,8,8,3)color(0.07,0.98,0,1)"};
			};
			class r3: standard
			{
				displayName = "#3";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)","#(argb,8,8,3)color(0,0.11,0.67,1)"};
			};
			class r4: standard
			{
				displayName = "#4";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)","#(argb,8,8,3)color(0.99,0.27,0.25,1)"};
			};
			class r5: standard
			{
				displayName = "#5";
				author = "$STR_RHS_AUTHOR_FULL";
				textures[] = {"#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)","#(argb,8,8,3)color(00.41,0.4,0,1)"};
			};
		};
		textureList[] = {};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rhs_decalNumber_type
			{
				displayName = "Define font type of plate number";
				tooltip = "Define kind of font that will be drawn on vehicle.";
				property = "rhs_decalNumber_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];[_this,[['Number', cRHST72NumberPlaces, _value]]] call rhs_fnc_decalsInit";
				defaultValue = 0;
				typeName = "STRING";
				class values
				{
					class Default
					{
						name = "Default";
						value = "Default";
						defaultValue = "Default";
					};
					class DefaultRed
					{
						name = "Default (Red)";
						value = "DefaultRed";
					};
					class BoldRed
					{
						name = "Bold Red";
						value = "BoldRed";
					};
					class CDF
					{
						name = "CDF";
						value = "CDF";
					};
					class Handpaint
					{
						name = "Handpaint";
						value = "Handpaint";
					};
					class HandpaintBlack
					{
						name = "Handpaint Black";
						value = "HandpaintBlack";
					};
					class Iraqi
					{
						name = "Iraqi";
						value = "Iraqi";
					};
					class LicensePlate
					{
						name = "License Plate";
						value = "LicensePlate";
					};
				};
			};
			class rhs_decalNumber
			{
				collapsed = 1;
				displayName = "Set side number";
				tooltip = "Set side number. 3 numbers are required. Type 0 to hide numbers complety & leave at -1 to get random number";
				property = "rhs_decalNumber";
				control = "Edit";
				validate = "Number";
				typeName = "Number";
				defaultValue = "-1";
				expression = "if( _value >= 0)then{if( _value == 0)then{{[_this setobjectTexture [_x,'a3\data_f\clear_empty.paa']]}foreach cRHST72NumberPlaces}else{[_this, [['Number', cRHST72NumberPlaces, _this getVariable ['rhs_decalNumber_type','Default'], _value] ] ] call rhs_fnc_decalsInit}};";
			};
			class rhs_decalPlatoon_type
			{
				displayName = "Define platoon symbol type";
				tooltip = "Decal type";
				property = "rhs_decalPlatoon_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = "0";
				typeName = "STRING";
				class values
				{
					class Platoon
					{
						name = "Platoon";
						value = "Platoon";
					};
					class PlatoonGDR
					{
						name = "Platoon GDR";
						value = "PlatoonGDR";
					};
					class PlatoonVDV
					{
						name = "Platoon VDV";
						value = "PlatoonVDV";
					};
					class Army
					{
						name = "Army";
						value = "Army";
						defaultValue = "1";
					};
					class Honor
					{
						name = "Honor";
						value = "Honor";
						defaultValue = "0";
					};
					class HonorGDR
					{
						name = "Honor GDR";
						value = "HonorGDR";
					};
				};
			};
			class rhs_decalPlatoon
			{
				displayName = "Set platoon symbol";
				tooltip = "Set platoon symbol located on turret. Usually used for platoon symbols. -1 leaves current symbol & 0 clears decal.";
				property = "rhs_decalPlatoon";
				control = "Edit";
				validate = "none";
				defaultValue = "-1";
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72PlnSymPlaces,  _this getVariable ['rhs_decalPlatoon_type','Platoon'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_decalHonor_type: rhs_decalPlatoon_type
			{
				displayName = "Define honor symbol type";
				property = "rhs_decalHonor_type";
				class values: values
				{
					class Honor: Honor{};
					class HonorGDR: HonorGDR{};
					class Platoon: Platoon{};
					class PlatoonGDR: PlatoonGDR{};
					class PlatoonVDV: PlatoonVDV{};
					class Army: Army{};
				};
			};
			class rhs_decalHonor: rhs_decalPlatoon
			{
				displayName = "Set honor symbol";
				tooltip = "Define symbol located on IR Lamp ('84-'89 type tanks only). Usually used for honor symbols. -1 leaves current symbol & 0 clears decal.";
				property = "rhs_decalHonor";
				expression = "if(parseNumber _value >= 0)then{ [_this, [ [ 'Label', cRHST72HnrSymPlaces,  _this getVariable ['rhs_decalHonor_type','Honor'],call compile _value] ] ] call rhs_fnc_decalsInit};";
			};
			class rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [AP rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values
				{
					class rhs_mag_3bm42_10
					{
						name = "$STR_rhs_mag_3bm42";
						value = "rhs_mag_3bm42";
						defaultValue = "rhs_mag_3bm42";
					};
					class rhs_mag_3bm9_10
					{
						name = "$STR_rhs_mag_3bm9";
						value = "rhs_mag_3bm9";
						defaultValue = "rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name = "$STR_rhs_mag_3bm12";
						value = "rhs_mag_3bm12";
						defaultValue = "rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name = "$STR_rhs_mag_3bm15";
						value = "rhs_mag_3bm15";
						defaultValue = "rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name = "$STR_rhs_mag_3bm17";
						value = "rhs_mag_3bm17";
						defaultValue = "rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name = "$STR_rhs_mag_3bm22";
						value = "rhs_mag_3bm22";
						defaultValue = "rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name = "$STR_rhs_mag_3bm29";
						value = "rhs_mag_3bm29";
						defaultValue = "rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name = "$STR_rhs_mag_3bm26";
						value = "rhs_mag_3bm26";
						defaultValue = "rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name = "$STR_rhs_mag_3bm32";
						value = "rhs_mag_3bm32";
						defaultValue = "rhs_mag_3bm32";
					};
					class rhs_mag_3bm42m_10
					{
						name = "$STR_rhs_mag_3bm42m";
						value = "rhs_mag_3bm42m";
						defaultValue = "rhs_mag_3bm42m";
					};
					class rhs_mag_3bm46_10
					{
						name = "$STR_rhs_mag_3bm46";
						value = "rhs_mag_3bm46";
						defaultValue = "rhs_mag_3bm46";
					};
				};
			};
			class rhs_ammoslot_1
			{
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 22. Leave -1 for default loadout";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{ [_this,_value,'%s',22] spawn rhs_fnc_TTanks_DefineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [HEAT rounds]";
				property = "rhs_ammoslot_2_type";
				class values
				{
					class rhs_mag_3bk21_8
					{
						name = "$STR_rhs_mag_3bk21";
						value = "rhs_mag_3bk21";
						defaultValue = "rhs_mag_3bk21";
					};
					class rhs_mag_3bk12_8
					{
						name = "$STR_rhs_mag_3bk12";
						value = "rhs_mag_3bk12";
						defaultValue = "rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name = "$STR_rhs_mag_3bk14";
						value = "rhs_mag_3bk14";
						defaultValue = "rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name = "$STR_rhs_mag_3bk18";
						value = "rhs_mag_3bk18";
						defaultValue = "rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name = "$STR_rhs_mag_3bk18m";
						value = "rhs_mag_3bk18m";
						defaultValue = "rhs_mag_3bk18m";
					};
					class rhs_mag_3bk29_8
					{
						name = "$STR_rhs_mag_3bk29";
						value = "rhs_mag_3bk29";
						defaultValue = "rhs_mag_3bk29";
					};
					class rhs_mag_3bk31_8
					{
						name = "$STR_rhs_mag_3bk31";
						value = "rhs_mag_3bk31";
						defaultValue = "rhs_mag_3bk31";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1
			{
				displayName = "Ammo slot #2 count";
				tooltip = "Define number of rounds stored inside of type #2. Max 22. Leave -1 for default loadout";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot [HE rounds]";
				property = "rhs_ammoslot_3_type";
				class values
				{
					class rhs_mag_3of26_6
					{
						name = "$STR_rhs_mag_3of26";
						value = "rhs_mag_3of26";
						defaultValue = "rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name = "$STR_rhs_mag_3of11";
						value = "rhs_mag_3of11";
						defaultValue = "rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1
			{
				displayName = "Ammo slot #3 count";
				tooltip = "Define number of rounds stored inside of type #3. Max 22. Leave -1 for default loadout";
				property = "rhs_ammoslot_3";
			};
			class rhs_ammoslot_4_type: rhs_ammoslot_1_type
			{
				displayName = "Ammo slot #4 type";
				tooltip = "Define type of shell for #4 slot [ATGM rounds]";
				property = "rhs_ammoslot4_type";
				class values
				{
					class rhs_mag_9m119m_6
					{
						name = "$STR_rhs_mag_9m119m";
						value = "rhs_mag_9m119m";
						defaultValue = "rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name = "$STR_rhs_mag_9m119";
						value = "rhs_mag_9m119";
						defaultValue = "rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name = "$STR_rhs_mag_9m119f";
						value = "rhs_mag_9m119f";
						defaultValue = "rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_1
			{
				displayName = "Ammo slot #4 count";
				tooltip = "Define number of rounds stored inside of type #4. Max 22. Leave -1 for default loadout";
				property = "rhs_ammoslot_4";
			};
			class rhs_hide_com_shield
			{
				displayName = "Remove commander shield";
				property = "rhs_hide_com_shield";
				control = "CheckboxNumber";
				expression = "_this animate ['hide_com_shield',_value,true]";
				defaultValue = "0";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_t72\data\periscope.rvmat","rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat","rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.7;
			minFov = 0.7;
			maxFov = 0.7;
		};
		class AnimationSources: AnimationSources
		{
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902a";
			};
			class recoil_source
			{
				source = "door";
				animPeriod = 6;
				initPhase = 0;
			};
			class reload_source
			{
				weapon = "rhs_weap_2a46m";
				source = "reload";
			};
			class reload_magazine_source: reload_source
			{
				source = "reloadMagazine";
			};
			class muzzle_rot_cannon: reload_source
			{
				source = "ammorandom";
			};
			class muzzle_rot_mg1: muzzle_rot_cannon
			{
				weapon = "rhs_weap_pkt";
			};
			class autoloader
			{
				source = "user";
				animPeriod = 3.25;
				initPhase = 0;
			};
			class turretHide: autoloader
			{
				animPeriod = 1e-10;
			};
			class hide_com_shield: autoloader
			{
				animPeriod = 1e-10;
				displayName = "hide commander shield";
				mass = 1;
			};
			class hide_sideskirts: autoloader
			{
				displayName = "hide side skirts";
				useSource = 1;
				mass = 0;
				animPeriod = 0.01;
			};
			class TCOverrideTurret
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};
			class sightHide: autoloader
			{
				animPeriod = 1e-10;
			};
			class sightRange
			{
				source = "user";
				animPeriod = 0.0005;
				initPhase = 0;
			};
			class sightElevationAPFSDS: sightRange
			{
				animPeriod = 0.4;
				initPhase = 7.46;
			};
			class sightElevationHEAT: sightRange
			{
				animPeriod = 0.065;
			};
			class sightElevationHEF: sightRange
			{
				animPeriod = 0.08;
			};
			class HatchC
			{
				source = "door";
				animPeriod = 2.1;
			};
			class HatchG: HatchC{};
			class HatchD: HatchC{};
			class muzzle_rot_hmg: muzzle_rot_cannon
			{
				weapon = "rhs_weap_nsvt_t72";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "rhs_weap_nsvt_t72";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class skirt_1_source
			{
				source = "Hit";
				hitpoint = "sideskirt_1_hitpoint";
			};
			class skirt_2_source
			{
				source = "Hit";
				hitpoint = "sideskirt_2_hitpoint";
			};
			class skirt_3_source
			{
				source = "Hit";
				hitpoint = "sideskirt_3_hitpoint";
			};
			class skirt_4_source
			{
				source = "Hit";
				hitpoint = "sideskirt_4_hitpoint";
			};
			class skirt_5_source
			{
				source = "Hit";
				hitpoint = "sideskirt_5_hitpoint";
			};
			class skirt_6_source
			{
				source = "Hit";
				hitpoint = "sideskirt_6_hitpoint";
			};
			class skirt_7_source
			{
				source = "Hit";
				hitpoint = "sideskirt_7_hitpoint";
			};
			class skirt_8_source
			{
				source = "Hit";
				hitpoint = "sideskirt_8_hitpoint";
			};
			class skirt_9_source
			{
				source = "Hit";
				hitpoint = "sideskirt_9_hitpoint";
			};
			class skirt_10_source
			{
				source = "Hit";
				hitpoint = "sideskirt_10_hitpoint";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaustl";
				direction = "exhaustl_dir";
				effect = "ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position = "exhaustr";
				direction = "exhaustr_dir";
				effect = "ExhaustEffectTankSide";
			};
		};
		class Reflectors
		{
			class Driver_FG125_Cover
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 35;
				outerAngle = 75;
				coneFadeCoef = 5;
				intensity = 15;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.2;
					hardLimitStart = 130;
					hardLimitEnd = 160;
				};
			};
			class Driver_FG125_Cover_Flare: Driver_FG125_Cover
			{
				intensity = 5;
				innerAngle = 55;
				outerAngle = 155;
				flareSize = 0.3;
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Driver_FG125_Cover","Driver_FG125_Cover_Flare"}};
		armorLights = 0.1;
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init = "_this call RHS_fnc_T72_init;";
				postInit = "_this call rhs_fnc_reapplyTextures";
				fired = "_this call RHS_fnc_T72_autoloader;";
				hitpart = "_this call rhs_fnc_hitSpall";
				killed = "[_this select 0,'rhs_Wreck_T72_turret_F'] call rhs_fnc_turretBlow";
				getOut = "_this call rhs_fnc_t72_hatch;_this call rhs_fnc_hatchAbandon";
				engine = "[_this select 0,_this select 1,2.7] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
			};
		};
		class UserActions
		{
			class trunk_open
			{
				displayName = "Use NSVT";
				position = "trunk_action";
				radius = 2;
				onlyForplayer = 0;
				condition = "this animationPhase 'HatchCommander'>0.5 and ((call rhs_fnc_findPlayer) == commander this)";
				statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,0],true]] remoteExecCall ['lockTurret']";
			};
			class trunk_close: trunk_open
			{
				displayName = "Leave NSVT";
				condition = "vehicle (call rhs_fnc_findPlayer) turretUnit [0,1] == (call rhs_fnc_findPlayer)";
				statement = "(call rhs_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret']";
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
			};
		};
	};
	class FP_KPA_T72BD_Base: FP_KPA_A3T72Tank_Base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t72bd_tv.paa";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		displayName = "$STR_T72BD_Name";
		picture = "\rhsafrf\addons\rhs_t72\icons\t72b3_ca.paa";
		normalSpeedForwardCoef = 0.75;
		slowSpeedForwardCoef = 0.25;
		fuelCapacity = 29.5;
		RHS_fuelCapacity = 1200;
		brakeIdleSpeed = 1.78;
		maxSpeed = 68;
		torqueCurve[] = {{0,0},{0.478261,0.853329},{0.521739,0.986803},{0.565217,1},{0.608696,1},{0.695652,0.980804},{0.869565,0.884823},{1.43478,0}};
		engineMOI = 17;
		enginePower = 745;
		peakTorque = 4321;
		minOmega = 80;
		maxOmega = 240.86;
		idleRPM = 800;
		redRPM = 2300;
		changeGearOmegaRatios[] = {1,0.434783,0.434783,0,0.956522,0.434783,0.956522,0.782609,0.913043,0.782609,0.913043,0.782609,0.869565,0.73913,0.826087,0.695652,1,0.608696};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-16.35,"N",0,"D1",8.173,"D2",4.4,"D3",3.485,"D4",2.787,"D5",2.027,"D6",1.467,"D7",1};
			TransmissionRatios[] = {"High",9.05};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width = 0.504;
				MOI = 17.069;
				sprungMass = -1;
				dampingRate = 3143.0;
				dampingRateInAir = 3143.0;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		model = "\rhsafrf\addons\rhs_t72\rhs_t72b_d";
		enableGPS = 1;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources: textureSources
		{
			class standard: standard
			{
				textures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa"};
			};
			class rhs_Sand: rhs_Sand
			{
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_turret_sand_co.paa"};
			};
			class rhs_chdkz: rhs_chdkz
			{
				displayName = "";
			};
		};
		crew = "rhs_msv_emr_armoredcrew";
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_t72\data\periscope.rvmat","rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat","rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902a";
			};
			class reload_source
			{
				weapon = "rhs_weap_2a46m_5";
				source = "reload";
			};
			class reload_magazine_source: reload_source
			{
				source = "reloadMagazine";
			};
			class muzzle_rot_cannon: reload_source
			{
				source = "ammorandom";
			};
			class hide_com_shield: autoloader{};
			class era_1_source
			{
				source = "Hit";
				hitpoint = "era_1_hitpoint";
			};
			class era_2_source
			{
				source = "Hit";
				hitpoint = "era_2_hitpoint";
			};
			class era_3_source
			{
				source = "Hit";
				hitpoint = "era_3_hitpoint";
			};
			class era_4_source
			{
				source = "Hit";
				hitpoint = "era_4_hitpoint";
			};
			class era_5_source
			{
				source = "Hit";
				hitpoint = "era_5_hitpoint";
			};
			class era_6_source
			{
				source = "Hit";
				hitpoint = "era_6_hitpoint";
			};
			class era_7_source
			{
				source = "Hit";
				hitpoint = "era_7_hitpoint";
			};
			class era_8_source
			{
				source = "Hit";
				hitpoint = "era_8_hitpoint";
			};
			class era_9_source
			{
				source = "Hit";
				hitpoint = "era_9_hitpoint";
			};
			class era_10_source
			{
				source = "Hit";
				hitpoint = "era_10_hitpoint";
			};
			class era_11_source
			{
				source = "Hit";
				hitpoint = "era_11_hitpoint";
			};
			class era_12_source
			{
				source = "Hit";
				hitpoint = "era_12_hitpoint";
			};
			class era_13_source
			{
				source = "Hit";
				hitpoint = "era_13_hitpoint";
			};
			class era_14_source
			{
				source = "Hit";
				hitpoint = "era_14_hitpoint";
			};
			class era_15_source
			{
				source = "Hit";
				hitpoint = "era_15_hitpoint";
			};
			class era_16_source
			{
				source = "Hit";
				hitpoint = "era_16_hitpoint";
			};
			class era_17_source
			{
				source = "Hit";
				hitpoint = "era_17_hitpoint";
			};
			class era_18_source
			{
				source = "Hit";
				hitpoint = "era_18_hitpoint";
			};
			class era_19_source
			{
				source = "Hit";
				hitpoint = "era_19_hitpoint";
			};
			class era_20_source
			{
				source = "Hit";
				hitpoint = "era_20_hitpoint";
			};
			class era_21_source
			{
				source = "Hit";
				hitpoint = "era_21_hitpoint";
			};
			class era_22_source
			{
				source = "Hit";
				hitpoint = "era_22_hitpoint";
			};
			class era_23_source
			{
				source = "Hit";
				hitpoint = "era_23_hitpoint";
			};
			class era_24_source
			{
				source = "Hit";
				hitpoint = "era_24_hitpoint";
			};
			class era_25_source
			{
				source = "Hit";
				hitpoint = "era_25_hitpoint";
			};
			class era_26_source
			{
				source = "Hit";
				hitpoint = "era_26_hitpoint";
			};
			class era_27_source
			{
				source = "Hit";
				hitpoint = "era_27_hitpoint";
			};
			class era_28_source
			{
				source = "Hit";
				hitpoint = "era_28_hitpoint";
			};
			class era_29_source
			{
				source = "Hit";
				hitpoint = "era_29_hitpoint";
			};
			class era_30_source
			{
				source = "Hit";
				hitpoint = "era_30_hitpoint";
			};
			class era_31_source
			{
				source = "Hit";
				hitpoint = "era_31_hitpoint";
			};
			class era_32_source
			{
				source = "Hit";
				hitpoint = "era_32_hitpoint";
			};
			class elev
			{
				source = "user";
				animperiod = 0.0016;
			};
			class elev_bank
			{
				source = "user";
				animperiod = 0.0016;
			};
			class lead
			{
				source = "user";
				animperiod = 0.001;
			};
			class offset
			{
				source = "user";
				animperiod = 0.0002;
			};
		};
		class HitPoints: HitPoints
		{
			class Hit_Optic_SosnaU
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_essa";
				armorComponent = "Hit_Optic_ESSA";
				passThrough = 0;
			};
			class era_1_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e1";
				armorComponent = "e1";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e1";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_2_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e2";
				armorComponent = "e2";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e2";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e2";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_3_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e3";
				armorComponent = "e3";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e3";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e3";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_4_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e4";
				armorComponent = "e4";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e4";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e4";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_5_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e5";
				armorComponent = "e5";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e5";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e5";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_6_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e6";
				armorComponent = "e6";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e6";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e6";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_7_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e7";
				armorComponent = "e7";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e7";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e7";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_8_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e8";
				armorComponent = "e8";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e8";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e8";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_9_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e9";
				armorComponent = "e9";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e9";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e9";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_10_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e10";
				armorComponent = "e10";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e10";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e10";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_11_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e11";
				armorComponent = "e11";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e11";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e11";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_12_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e12";
				armorComponent = "e12";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e12";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e12";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_13_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e13";
				armorComponent = "e13";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e13";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e13";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_14_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e14";
				armorComponent = "e14";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e14";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e14";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_15_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e15";
				armorComponent = "e15";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e15";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e15";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_16_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e16";
				armorComponent = "e16";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e16";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e16";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_17_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e17";
				armorComponent = "e17";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e17";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e17";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_18_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e18";
				armorComponent = "e18";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e18";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e18";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_19_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e19";
				armorComponent = "e19";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e19";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e19";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_20_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e20";
				armorComponent = "e20";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e20";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e20";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_21_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e21";
				armorComponent = "e21";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e21";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e21";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_22_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e22";
				armorComponent = "e22";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e22";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e22";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_23_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e23";
				armorComponent = "e23";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e23";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e23";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_24_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e24";
				armorComponent = "e24";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e24";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e24";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_25_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e25";
				armorComponent = "e25";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e25";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e25";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_26_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e26";
				armorComponent = "e26";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e26";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e26";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_27_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e27";
				armorComponent = "e27";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e27";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e27";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_28_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e28";
				armorComponent = "e28";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e28";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e28";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_29_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e29";
				armorComponent = "e29";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e29";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e29";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_30_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e30";
				armorComponent = "e30";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e30";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e30";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_31_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e31";
				armorComponent = "e31";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e31";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e31";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_32_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e32";
				armorComponent = "e32";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e32";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e32";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
		};
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "FP_CSL_O_KPA_CrewCommander_F";
						gunnerAction = "passenger_inside_6";
						personTurretAction = "passenger_inside_6";
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
						};
					};
					class CommanderMG: CommanderMG{};
				};
				maxHorizontalRotSpeed = 0.88;
				memoryPointGunnerOptics = "gunnerview2";
				weapons[] = {"rhs_weap_2a46m_5","rhs_weap_pkt","rhs_weap_902a","rhs_weap_fcs"};
				magazines[] = {"rhs_mag_3bm46_8","rhs_mag_3bk31_3","rhs_mag_3of26_7","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17","rhs_laserfcsmag","rhs_laserfcsmag"};
				turretInfoType = "RHS_RscWeaponSosnaU_FCS";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos = "gunnerview2";
						hitpoint = "Hit_Optic_SosnaU";
						opticsDisplayName = "TI1";
						initFov = 0.233333;
						minFov = 0.233333;
						maxFov = 0.233333;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "TI2";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName = "TI3";
						initFov = 0.0291667;
						minFov = 0.0291667;
						maxFov = 0.0291667;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName = "AUTOTRACK";
						directionStabilized = 1;
					};
				};
			};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rhs_decalNumber_type: rhs_decalNumber_type{};
			class rhs_decalNumber: rhs_decalNumber{};
			class rhs_decalPlatoon_type: rhs_decalPlatoon_type{};
			class rhs_decalPlatoon: rhs_decalPlatoon{};
			class rhs_ammoslot_1_type: rhs_ammoslot_1_type
			{
				class values
				{
					class rhs_mag_3bm46_10
					{
						name = "$STR_rhs_mag_3bm46";
						value = "rhs_mag_3bm46";
						defaultValue = "rhs_mag_3bm46";
					};
					class rhs_mag_3bm9_10
					{
						name = "$STR_rhs_mag_3bm9";
						value = "rhs_mag_3bm9";
						defaultValue = "rhs_mag_3bm9";
					};
					class rhs_mag_3bm12_10
					{
						name = "$STR_rhs_mag_3bm12";
						value = "rhs_mag_3bm12";
						defaultValue = "rhs_mag_3bm12";
					};
					class rhs_mag_3bm15_10
					{
						name = "$STR_rhs_mag_3bm15";
						value = "rhs_mag_3bm15";
						defaultValue = "rhs_mag_3bm15";
					};
					class rhs_mag_3bm17_10
					{
						name = "$STR_rhs_mag_3bm17";
						value = "rhs_mag_3bm17";
						defaultValue = "rhs_mag_3bm17";
					};
					class rhs_mag_3bm22_10
					{
						name = "$STR_rhs_mag_3bm22";
						value = "rhs_mag_3bm22";
						defaultValue = "rhs_mag_3bm22";
					};
					class rhs_mag_3bm29_10
					{
						name = "$STR_rhs_mag_3bm29";
						value = "rhs_mag_3bm29";
						defaultValue = "rhs_mag_3bm29";
					};
					class rhs_mag_3bm26_10
					{
						name = "$STR_rhs_mag_3bm26";
						value = "rhs_mag_3bm26";
						defaultValue = "rhs_mag_3bm26";
					};
					class rhs_mag_3bm32_10
					{
						name = "$STR_rhs_mag_3bm32";
						value = "rhs_mag_3bm32";
						defaultValue = "rhs_mag_3bm32";
					};
					class rhs_mag_3bm42_10
					{
						name = "$STR_rhs_mag_3bm42";
						value = "rhs_mag_3bm42";
						defaultValue = "rhs_mag_3bm42";
					};
					class rhs_mag_3bm42m_10
					{
						name = "$STR_rhs_mag_3bm42m";
						value = "rhs_mag_3bm42m";
						defaultValue = "rhs_mag_3bm42m";
					};
				};
			};
			class rhs_ammoslot_1: rhs_ammoslot_1{};
			class rhs_ammoslot_2_type: rhs_ammoslot_2_type
			{
				class values
				{
					class rhs_mag_3bk31_8
					{
						name = "$STR_rhs_mag_3bk31";
						value = "rhs_mag_3bk31";
						defaultValue = "rhs_mag_3bk31";
					};
					class rhs_mag_3bk12_8
					{
						name = "$STR_rhs_mag_3bk12";
						value = "rhs_mag_3bk12";
						defaultValue = "rhs_mag_3bk12";
					};
					class rhs_mag_3bk14_8
					{
						name = "$STR_rhs_mag_3bk14";
						value = "rhs_mag_3bk14";
						defaultValue = "rhs_mag_3bk14";
					};
					class rhs_mag_3bk18_8
					{
						name = "$STR_rhs_mag_3bk18";
						value = "rhs_mag_3bk18";
						defaultValue = "rhs_mag_3bk18";
					};
					class rhs_mag_3bk18m_8
					{
						name = "$STR_rhs_mag_3bk18m";
						value = "rhs_mag_3bk18m";
						defaultValue = "rhs_mag_3bk18m";
					};
					class rhs_mag_3bk21_8
					{
						name = "$STR_rhs_mag_3bk21";
						value = "rhs_mag_3bk21";
						defaultValue = "rhs_mag_3bk21";
					};
					class rhs_mag_3bk29_8
					{
						name = "$STR_rhs_mag_3bk29";
						value = "rhs_mag_3bk29";
						defaultValue = "rhs_mag_3bk29";
					};
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_2{};
			class rhs_ammoslot_3_type: rhs_ammoslot_3_type
			{
				class values
				{
					class rhs_mag_3of26_6
					{
						name = "$STR_rhs_mag_3of26";
						value = "rhs_mag_3of26";
						defaultValue = "rhs_mag_3of26";
					};
					class rhs_mag_3of11_6
					{
						name = "$STR_rhs_mag_3of11";
						value = "rhs_mag_3of11";
						defaultValue = "rhs_mag_3of11";
					};
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_3{};
			class rhs_ammoslot_4_type: rhs_ammoslot_4_type
			{
				class values
				{
					class rhs_mag_9m119m_6
					{
						name = "$STR_rhs_mag_9m119m";
						value = "rhs_mag_9m119m";
						defaultValue = "rhs_mag_9m119m";
					};
					class rhs_mag_9m119_6
					{
						name = "$STR_rhs_mag_9m119";
						value = "rhs_mag_9m119";
						defaultValue = "rhs_mag_9m119";
					};
					class rhs_mag_9m119f_6
					{
						name = "$STR_rhs_mag_9m119f";
						value = "rhs_mag_9m119f";
						defaultValue = "rhs_mag_9m119f";
					};
				};
			};
			class rhs_ammoslot_4: rhs_ammoslot_4{};
		};
	};
	class FP_KPA_T90_Base: FP_KPA_T72BD_Base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90_tv.paa";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		displayName = "$STR_T90_Name";
		picture = "\rhsafrf\addons\rhs_t72\icons\t90_ca.paa";
		model = "\rhsafrf\addons\rhs_t72\rhs_t90";
		simulation = "tankX";
		normalSpeedForwardCoef = 0.75;
		slowSpeedForwardCoef = 0.25;
		fuelCapacity = 29.5;
		RHS_fuelCapacity = 1200;
		brakeIdleSpeed = 1.78;
		maxSpeed = 60;
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterLeakiness = 10;
		torqueCurve[] = {{0,0},{0.478261,0.853329},{0.521739,0.986803},{0.565217,1},{0.608696,1},{0.695652,0.980804},{0.869565,0.884823},{1.43478,0}};
		engineMOI = 11;
		enginePower = 626;
		peakTorque = 3334;
		minOmega = 80;
		maxOmega = 240.86;
		idleRPM = 800;
		redRPM = 2300;
		thrustDelay = 0.0;
		engineBrakeCoef = 0.9;
		tankTurnForce = 950000.0;
		tankTurnForceAngMinSpd = 0.7;
		tankTurnForceAngSpd = 0.92;
		accelAidForceCoef = 2.5;
		accelAidForceYOffset = -5.5;
		accelAidForceSpd = 2.23;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 42;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 75;
		engineLosses = 35;
		transmissionLosses = 45;
		clutchStrength = 40.0;
		latency = 1.3;
		switchTime = 0.0;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.434783,0.434783,0,0.956522,0.434783,0.956522,0.782609,0.913043,0.782609,0.913043,0.782609,0.869565,0.73913,0.826087,0.695652,1,0.608696};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-16.35,"N",0,"D1",8.173,"D2",4.4,"D3",3.485,"D4",2.787,"D5",2.027,"D6",1.467,"D7",1};
			TransmissionRatios[] = {"High",9.05};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
		class Wheels
		{
			class L2
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				steering = 0;
				width = 0.459;
				mass = 193;
				MOI = 17.069;
				maxBrakeTorque = 20000;
				sprungMass = 3750;
				springStrength = 484000;
				springDamperRate = 11000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				dampingRate = 3145.0;
				dampingRateInAir = 3145.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				latStiffX = 1;
				latStiffY = 40;
				longitudinalStiffnessPerUnitGravity = 72000;
				frictionVsSlipGraph[] = {{0.0,0.4},{0.18,1.0},{0.7,0.75}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		gunnerHasFlares = 0;
		enableGPS = 1;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","dazzler","dazzlerlight","camo11","n1","n2","n3","i1","dazzlerglass"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_02d_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources: textureSources
		{
			class standard: standard
			{
				textures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_02d_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"};
			};
			class rhs_Sand: rhs_Sand
			{
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02d_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","","rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa"};
			};
			class RHS_CDF
			{
				scope = 0;
				displayName = "";
			};
		};
		rhs_aps_shtora = 1;
		unitInfoType = "RHS_RscInfoT90";
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				init = "_this call RHS_fnc_T72_init;";
			};
		};
		lockDetectionSystem = 4;
		class AnimationSources: AnimationSources
		{
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902b";
			};
			class reload_source
			{
				weapon = "rhs_weap_2a46m_4";
				source = "reload";
			};
			class reload_magazine_source: reload_source
			{
				source = "reloadMagazine";
			};
			class muzzle_rot_cannon: reload_source
			{
				source = "ammorandom";
			};
			class ShtoraTurn
			{
				source = "user";
				animperiod = 2;
			};
			class Unhide_vis_optic_d_driver
			{
				source = "hit";
				hitpoint = "Hit_Optic_Driver";
			};
			class Unhide_vis_optic_d_gunperiscope
			{
				source = "hit";
				hitpoint = "Hit_Optic_Periscope";
			};
			class Unhide_vis_optic_d_sosnau
			{
				source = "hit";
				hitpoint = "Hit_Optic_ESSA";
			};
			class Unhide_vis_optic_d_1g46
			{
				source = "hit";
				hitpoint = "Hit_Optic_1G46";
			};
			class Unhide_vis_optic_d_tkn4
			{
				source = "hit";
				hitpoint = "Hit_Optic_TKN4S";
			};
			class Unhide_vis_optic_d_1pz3
			{
				source = "hit";
				hitpoint = "Hit_Optic_NSVT";
			};
			class Unhide_vis_optic_d_periscope1
			{
				source = "hit";
				hitpoint = "Hit_Optic_Periscope1";
			};
			class Unhide_vis_optic_d_periscope2
			{
				source = "hit";
				hitpoint = "Hit_Optic_Periscope1";
			};
			class Unhide_vis_optic_d_periscope3
			{
				source = "hit";
				hitpoint = "Hit_Optic_Periscope1";
			};
			class Unhide_vis_optic_d_periscope4
			{
				source = "hit";
				hitpoint = "Hit_Optic_Periscope1";
			};
			class Unhide_vis_lwr_d_1
			{
				source = "hit";
				hitpoint = "Hit_LWR_1";
			};
			class Unhide_vis_lwr_d_2
			{
				source = "hit";
				hitpoint = "Hit_LWR_2";
			};
			class Unhide_vis_lwr_d_3
			{
				source = "hit";
				hitpoint = "Hit_LWR_3";
			};
			class Unhide_vis_lwr_d_4
			{
				source = "hit";
				hitpoint = "Hit_LWR_4";
			};
			class Unhide_vis_lwr_d_5
			{
				source = "hit";
				hitpoint = "Hit_LWR_5";
			};
			class Unhide_vis_lwr_d_6
			{
				source = "hit";
				hitpoint = "Hit_LWR_6";
			};
		};
		class HitPoints: HitPoints
		{
			class Hit_Optic_Driver
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_driver";
				armorComponent = "Hit_Optic_Driver";
				passThrough = 0;
			};
			class Hit_Optic_Periscope
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_gunperiscope";
				armorComponent = "Hit_Optic_Periscope";
				passThrough = 0;
			};
			class Hit_Optic_1G46
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_1g46";
				armorComponent = "Hit_Optic_1G46";
				passThrough = 0;
			};
			class Hit_Optic_TPN4
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_TPN4";
				armorComponent = "Hit_Optic_ESSA";
				passThrough = 0;
			};
			class Hit_Optic_ESSA
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_essa";
				armorComponent = "Hit_Optic_ESSA";
				passThrough = 0;
			};
			class Hit_Optic_NSVT
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_1pz3";
				armorComponent = "Hit_Optic_NSVT";
				passThrough = 0;
			};
			class Hit_Optic_TKN4S
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_tkn4s";
				armorComponent = "Hit_Optic_TKN4S";
				passThrough = 0;
			};
			class Hit_Optic_Periscope1
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_periscope1";
				armorComponent = "Hit_Optic_Periscope1";
				passThrough = 0;
			};
			class Hit_Optic_Periscope2
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_periscope2";
				armorComponent = "Hit_Optic_Periscope2";
				passThrough = 0;
			};
			class Hit_Optic_Periscope3
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_periscope3";
				armorComponent = "Hit_Optic_Periscope3";
				passThrough = 0;
			};
			class Hit_Optic_Periscope4
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_optic_periscope4";
				armorComponent = "Hit_Optic_Periscope4";
				passThrough = 0;
			};
			class Hit_Shtora_L
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_shtora_l";
				armorComponent = "Hit_Shtora_L";
				passThrough = 0;
			};
			class Hit_Shtora_R
			{
				armor = -40;
				explosionShielding = 0;
				name = "";
				visual = "vis_shtora_r";
				armorComponent = "Hit_Shtora_R";
				passThrough = 0;
			};
			class Hit_LWR_1
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_1";
				armorComponent = "aps_s1";
				passThrough = 0;
			};
			class Hit_LWR_2
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_2";
				armorComponent = "aps_s2";
				passThrough = 0;
			};
			class Hit_LWR_3
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_3";
				armorComponent = "aps_s3";
				passThrough = 0;
			};
			class Hit_LWR_4
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_4";
				armorComponent = "aps_s4";
				passThrough = 0;
			};
			class Hit_LWR_5
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_5";
				armorComponent = "aps_s5";
				passThrough = 0;
			};
			class Hit_LWR_6
			{
				armor = -20;
				explosionShielding = 0;
				name = "";
				visual = "vis_lwr_6";
				armorComponent = "aps_s6";
				passThrough = 0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed = 0.48;
				weapons[] = {"rhs_weap_2a46m_4","rhs_weap_pkt","rhs_weap_902b","rhs_weap_fcs"};
				magazines[] = {"rhs_mag_3bm46_8","rhs_mag_3bk31_3","rhs_mag_3of26_7","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17_12","rhs_laserfcsmag","rhs_laserfcsmag"};
				turretInfoType = "rhs_gui_optic_t90_rangefinder";
				class OpticsIn
				{
					class day1
					{
						camPos = "view_1g46";
						hitpoint = "Hit_Optic_1G46";
						opticsDisplayName = "DAY";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.179487;
						minFov = 0.179487;
						maxFov = 0.179487;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
						gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
					class day2: day1
					{
						opticsDisplayName = "DAYZOOM";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
						visionMode[] = {"Normal"};
					};
					class Periscope: day1
					{
						camPos = "view_periscope";
						hitpoint = "Hit_Optic_Periscope";
						opticsDisplayName = "PERISCOPE";
						initFov = 0.466667;
						minFov = 0.466667;
						maxFov = 0.466667;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class night3: day1
					{
						camPos = "view_tpn4";
						hitpoint = "Hit_Optic_tpn4";
						opticsDisplayName = "NIGHT";
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
						gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gun = "obsGun";
						animationSourceGun = "obsGun";
						weapons[] = {"rhs_weap_nsvt_t72"};
						magazines[] = {"rhs_mag_127x108mm_150","rhs_mag_127x108mm_150"};
						discreteDistance[] = {100,200,300,400,500,600,800,900,1000,1100,1200,1400,1500,1800,1900,2000};
						discreteDistanceInitIndex = 2;
						memoryPointGun = "mg_end";
						gunBeg = "mg_end";
						gunEnd = "mg_start";
						minElev = -7;
						maxElev = 60;
						minTurn = -180;
						maxTurn = 180;
						initElev = 0;
						LodTurnedOut = 0;
						turretInfoType = "rhs_gui_optic_TKN4S_rangefinder";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","BWTV","OpticsBlur2","OpticsCHAbera3"};
						class OpticsIn
						{
							class day1aa
							{
								camPos = "commanderview_aa";
								hitpoint = "Hit_Optic_NSVT";
								opticsDisplayName = "AA";
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.291667;
								minFov = 0.291667;
								maxFov = 0.291667;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5.p3d";
								gunnerOpticsEffect[] = {"OpticsBlur2","OpticsCHAbera3"};
							};
							class day1: day1aa
							{
								camPos = "commanderview";
								hitpoint = "Hit_Optic_TKN4S";
								opticsDisplayName = "DAY";
								initFov = 0.7;
								minFov = 0.7;
								maxFov = 0.7;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","BWTV","OpticsBlur2","OpticsCHAbera3"};
							};
							class day2: day1
							{
								opticsDisplayName = "DAYZOOM";
								initFov = 0.0875;
								minFov = 0.0875;
								maxFov = 0.0875;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
							};
							class night3: day1
							{
								opticsDisplayName = "NIGHT";
								initFov = 0.1;
								minFov = 0.1;
								maxFov = 0.1;
								visionMode[] = {"NVG"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
								gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
							};
						};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "passenger_inside_6";
						gunnerInAction = "rhs_t90_commander";
						personTurretAction = "passenger_inside_6";
						selectionFireAnim = "zasleh4";
						lockWhenDriverOut = 0;
						maxHorizontalRotSpeed = 0.9;
						maxVerticalRotSpeed = 0.47;
					};
					delete CommanderMG;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_t72\data\periscope.rvmat","rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat","rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class UserActions{};
	};
	class FP_KPA_T90A_Base: FP_KPA_T90_Base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90a_tv.paa";
		displayName = "$STR_T90A_Name";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		model = "\rhsafrf\addons\rhs_t72\rhs_t90a";
		picture = "\rhsafrf\addons\rhs_t72\icons\t90a_ca.paa";
		normalSpeedForwardCoef = 0.75;
		slowSpeedForwardCoef = 0.25;
		fuelCapacity = 29.5;
		RHS_fuelCapacity = 1200;
		brakeIdleSpeed = 1.78;
		maxSpeed = 68;
		torqueCurve[] = {{0,0},{0.478261,0.853329},{0.521739,0.986803},{0.565217,1},{0.608696,1},{0.695652,0.980804},{0.869565,0.884823},{1.43478,0}};
		engineMOI = 17;
		enginePower = 736;
		peakTorque = 3920;
		minOmega = 80;
		maxOmega = 240.86;
		idleRPM = 800;
		redRPM = 2300;
		changeGearOmegaRatios[] = {1,0.434783,0.434783,0,0.956522,0.434783,0.956522,0.782609,0.913043,0.782609,0.913043,0.782609,0.869565,0.73913,0.826087,0.695652,1,0.608696};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-16.35,"N",0,"D1",8.173,"D2",4.4,"D3",3.485,"D4",2.787,"D5",2.027,"D6",1.467,"D7",1};
			TransmissionRatios[] = {"High",9.05};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
		class Wheels: Wheels
		{
			class L2: L2
			{
				width = 0.504;
				MOI = 17.069;
				sprungMass = -1;
				dampingRate = 3143.0;
				dampingRateInAir = 3143.0;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa","","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources: textureSources
		{
			class standard: standard
			{
				textures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa","","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa","rhsafrf\addons\rhs_t72\data\rhs_dazzler_co.paa"};
			};
			class rhs_Sand: rhs_Sand
			{
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa","","rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_dazzler_sand_co.paa"};
			};
		};
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		crew = "rhs_msv_emr_armoredcrew";
		rhs_aps_shtora = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed = 0.88;
				weapons[] = {"rhs_weap_2a46m_5","rhs_weap_pkt","rhs_weap_902b","rhs_weap_fcs"};
				magazines[] = {"rhs_mag_3bm46_8","rhs_mag_3bk31_3","rhs_mag_3of26_7","rhs_mag_9m119_4","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17_12","rhs_laserfcsmag","rhs_laserfcsmag"};
				turretInfoType = "RHS_RscWeaponPlissa_T90_FCS";
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						camPos = "view_periscope";
						hitpoint = "Hit_Optic_Periscope";
						opticsDisplayName = "PERISCOPE";
						minFov = 0.466667;
						maxFov = 0.466667;
						initFov = 0.466667;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					};
					class day1: Periscope
					{
						camPos = "view_1g46";
						hitpoint = "Hit_Optic_1G46";
						opticsDisplayName = "DAY";
						initFov = 0.175;
						minFov = 0.175;
						maxFov = 0.175;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
					};
					class day2: day1
					{
						opticsDisplayName = "DAYZOOM";
						initFov = 0.0583333;
						minFov = 0.0583333;
						maxFov = 0.0583333;
						visionMode[] = {"Normal"};
					};
					class thermal1: day1
					{
						camPos = "gunnerview2";
						hitpoint = "Hit_Optic_ESSA";
						opticsDisplayName = "TI1";
						initFov = 0.466667;
						minFov = 0.466667;
						maxFov = 0.466667;
						visionMode[] = {"Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
					};
					class thermal2: thermal1
					{
						opticsDisplayName = "TI2";
						initFov = 0.155556;
						minFov = 0.155556;
						maxFov = 0.155556;
					};
					class thermal3: thermal2
					{
						opticsDisplayName = "TI3";
						initFov = 0.0388889;
						minFov = 0.0388889;
						maxFov = 0.0388889;
					};
					class thermal4: thermal3
					{
						opticsDisplayName = "AUTOTRACK";
						directionStabilized = 1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class MinimapDisplay
								{
									componentType = "MinimapDisplayComponent";
									resource = "RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType = "EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType = "CrewDisplayComponent";
									resource = "RscCustomInfoCrew";
								};
								class MinimapDisplay
								{
									componentType = "MinimapDisplayComponent";
									resource = "RscCustomInfoMiniMap";
								};
								class VehiclePrimaryGunnerDisplay
								{
									componentType = "TransportFeedDisplayComponent";
									source = "PrimaryGunner";
								};
							};
						};
					};
					delete CommanderMG;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class reload_source
			{
				weapon = "rhs_weap_2a46m_5";
				source = "reload";
			};
			class reload_magazine_source: reload_source
			{
				source = "reloadMagazine";
			};
			class muzzle_rot_cannon: reload_source
			{
				source = "ammorandom";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers: RHS_EventHandlers
			{
				killed = "[_this select 0,'rhs_Wreck_T90a_turret_F'] call rhs_fnc_turretBlow";
			};
		};
	};
	class FP_KPA_T90SAA_Base: FP_KPA_T90A_Base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_t90saa_tv.paa";
		displayName = "$STR_T90SAA_Name";
		author = "$STR_RHS_AUTHOR_FULL";
		scope = 1;
		model = "\rhsafrf\addons\rhs_t72\rhs_t90sa_a";
		picture = "\rhsafrf\addons\rhs_t72\icons\t90a_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class textureSources: textureSources
		{
			class standard: standard
			{
				textures[] = {"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90parts_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90a_02_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t90sa_co.paa"};
			};
			class rhs_Sand: rhs_Sand
			{
				textures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_01_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b3_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90parts_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90a_02_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t90sa_sand_co.paa"};
			};
		};
		class HitPoints: HitPoints
		{
			class era_1_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e1";
				armorComponent = "e1";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e1";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e1";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_2_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e2";
				armorComponent = "e2";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e2";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e2";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e2";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_3_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e3";
				armorComponent = "e3";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e3";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e3";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e3";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_4_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e4";
				armorComponent = "e4";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e4";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e4";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e4";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_5_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e5";
				armorComponent = "e5";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e5";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e5";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e5";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_6_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e6";
				armorComponent = "e6";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e6";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e6";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e6";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_7_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e7";
				armorComponent = "e7";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e7";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e7";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e7";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_8_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e8";
				armorComponent = "e8";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e8";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e8";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e8";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_9_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e9";
				armorComponent = "e9";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e9";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e9";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e9";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_10_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e10";
				armorComponent = "e10";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e10";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e10";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e10";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_11_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e11";
				armorComponent = "e11";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e11";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e11";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e11";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_12_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e12";
				armorComponent = "e12";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e12";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e12";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e12";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_13_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e13";
				armorComponent = "e13";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e13";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e13";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e13";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_14_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e14";
				armorComponent = "e14";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e14";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e14";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e14";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_15_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e15";
				armorComponent = "e15";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e15";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e15";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e15";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_16_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e16";
				armorComponent = "e16";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e16";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e16";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e16";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_17_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e17";
				armorComponent = "e17";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e17";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e17";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e17";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_18_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e18";
				armorComponent = "e18";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e18";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e18";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e18";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_19_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e19";
				armorComponent = "e19";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e19";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e19";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e19";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_20_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e20";
				armorComponent = "e20";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e20";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e20";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e20";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_21_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e21";
				armorComponent = "e21";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e21";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e21";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e21";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_22_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e22";
				armorComponent = "e22";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e22";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e22";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e22";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_23_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e23";
				armorComponent = "e23";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e23";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e23";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e23";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_24_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e24";
				armorComponent = "e24";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e24";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e24";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e24";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_25_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e25";
				armorComponent = "e25";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e25";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e25";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e25";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_26_hitpoint
			{
				simulation = "RHS_ERA_K1";
				armor = -80;
				material = -1;
				name = "e26";
				armorComponent = "e26";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e26";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e26";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e26";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_27_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e27";
				armorComponent = "e27";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e27";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e27";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e27";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_28_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e28";
				armorComponent = "e28";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e28";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e28";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e28";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_29_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e29";
				armorComponent = "e29";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e29";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e29";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e29";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_30_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e30";
				armorComponent = "e30";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e30";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e30";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e30";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_31_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e31";
				armorComponent = "e31";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e31";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e31";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e31";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
			class era_32_hitpoint
			{
				simulation = "RHS_ERA_K5";
				armor = -100;
				material = -1;
				name = "e32";
				armorComponent = "e32";
				passThrough = 0;
				minimalHit = -0.5;
				explosionShielding = 0.01;
				radius = 0.16;
				visual = "-";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_ERA_Flash
					{
						simulation = "particles";
						type = "RHS_ERA_Flash";
						position = "fx_e32";
						intensity = 0.5;
						interval = 1;
						lifeTime = 0.006;
					};
					class RHS_ERA_Sound
					{
						simulation = "sound";
						type = "RHS_ERA_Explosion_Sound";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 1;
					};
					class RHS_ERA_Smoke
					{
						simulation = "particles";
						type = "RHS_ERA_Smoke";
						position = "fx_e32";
						intensity = 0.1;
						interval = 1;
						lifeTime = 0.04;
					};
					class RHS_ERA_Shard
					{
						simulation = "particles";
						type = "RHS_ERA_Shard";
						position = "fx_e32";
						intensity = 1;
						interval = 1;
						lifeTime = 0.03;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_t72\data\periscope.rvmat","rhsafrf\addons\rhs_t72\data\periscope_damage.rvmat","rhsafrf\addons\rhs_t72\data\periscope_destroyed.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t90a_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t90parts.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_dazzler.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_03.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_04.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b_05.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72c_tracks.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_01.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t72b3_turret.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t72b3_turret.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_A.rvmat","rhsafrf\addons\rhs_t80\data\materials\turret_destroy.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_dam_bmd4_02.rvmat","rhsafrf\addons\rhs_bmd_34\data\rhs_destr_bmd4_02.rvmat","rhsafrf\addons\rhs_t72\data\rhs_t90sa.rvmat","rhsafrf\addons\rhs_t72\data\rhs_dam_t90sa.rvmat","rhsafrf\addons\rhs_t72\data\rhs_destr_t90sa.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
	};
	class FP_CSL_O_KPA_T90S: FP_KPA_T90SAA_Base
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		side = 0;
		scope = 2;
		displayName = "T-90S";
		faction = "FP_Faction_KPA";
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="FP_CSL_O_KPA_CrewCommander_F";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
	class FP_CSL_O_KPA_T72M: FP_KPA_T72BD_Base
	{
		rhs_decalParameters[]={};
		side = 0;
		scope = 2;
		displayName = "T-72M";
		faction = "FP_Faction_KPA";
		crew = "FP_CSL_O_KPA_Crewman_F";
		picture = "\rhsafrf\addons\rhs_t72\icons\t72b3_ca.paa";
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
			"rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
			"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
		};
		class AnimationSources: AnimationSources
		{
			class hide_com_shield: hide_com_shield
			{
				initPhase=1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_3bm46_8",
					"rhs_mag_3bk31_3",
					"rhs_mag_3of26_7",
					"rhs_mag_9m119_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag","rhs_laserfcsmag"
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="FP_CSL_O_KPA_CrewCommander_F";
					};
					class CommanderMG: CommanderMG {};
				};
			};
		};
	};
	class rhs_bmp1_vdv;
	class FP_CSL_O_KPA_bmp1: rhs_bmp1_vdv
	{
		editorSubcategory = "EdSubcat_APCs";
		crew = "FP_CSL_O_KPA_Crewman_F";
		faction = "FP_Faction_KPA";
	};
	class rhsgref_BRDM2_msv;
	class rhsgref_BRDM2_ATGM_msv;
	class rhsgref_BRDM2UM_msv;
	class rhsgref_BRDM2_HQ_msv;
	class FP_CSL_O_KPA_BRDM2: rhsgref_BRDM2_msv
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BRDM2_ATGM: rhsgref_BRDM2_ATGM_msv
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BRDM2UM: rhsgref_BRDM2UM_msv
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BRDM2_HQ: rhsgref_BRDM2_HQ_msv
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};	
	class RHS_BM21_MSV_01;
	class FP_CSL_O_KPA_BM21: RHS_BM21_MSV_01
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
	};	
	class rhs_zsu234_aa;
	class FP_CSL_O_KPA_ZSU234_AA: rhs_zsu234_aa
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_AAs";
		faction = "FP_Faction_KPA";
	};
	class rhsgref_nat_uaz;
	class rhsgref_nat_uaz_open;
	class rhsgref_nat_uaz_dshkm;
	class rhsgref_nat_uaz_ags;
	class rhsgref_nat_uaz_spg9;
	class FP_CSL_O_KPA_UAZ: rhsgref_nat_uaz
	{
		side = 0;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_UAZ_Open: rhsgref_nat_uaz_open
	{
		side = 0;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_UAZ_DShKM: rhsgref_nat_uaz_dshkm
	{
		side = 0;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_UAZ_AGS: rhsgref_nat_uaz_ags
	{
		side = 0;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_UAZ_SPG9: rhsgref_nat_uaz_spg9
	{
		side = 0;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
	};
	class rhs_btr60_vmf;
	class rhs_btr70_vmf;
	class rhs_btr80a_vmf;
	class FP_CSL_O_KPA_BTR60: rhs_btr60_vmf
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_APCs";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR70: rhs_btr70_vmf
	{
		crew = "FP_CSL_O_KPA_Crewman_F";
		editorSubcategory = "EdSubcat_APCs";
		faction = "FP_Faction_KPA";
	};
	class FP_CSL_O_KPA_BTR80A: rhs_btr80a_vmf
	{
		displayName = "BTR-80A";
		crew = "FP_CSL_O_KPA_SOF_Crewman";
		editorSubcategory = "EdSubcat_APCs";
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
	class FP_CSL_O_KPA_URAL_ZU23: RHS_Ural_Zu23_Base
	{		
		side = 0;
		scope = 2;
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_AAs";
		faction = "FP_Faction_KPA";
		typicalCargo[] = {"FP_CSL_O_KPA_Soldier_F"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
				gunnerType="FP_CSL_O_KPA_Soldier_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType="FP_CSL_O_KPA_Soldier_SL_F"; //someone with binocular recomended
			};
			class CargoTurret_02: CargoTurret_02 {};
			class CargoTurret_03: CargoTurret_03 {};
		};
	};
//	class UK3CB_TKA_O_MAZ_543_SCUD;
/*	class FP_CSL_O_KPA_MAZ_543_SCUD: UK3CB_TKA_O_MAZ_543_SCUD
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\maz543\scud_01_co.paa","\FP_Factions\KPA\data\maz543\scud_02_co.paa","\FP_Factions\KPA\data\maz543\scud_03_co.paa","\FP_Factions\KPA\data\maz543\scud_04_co.paa"};
		side = 0;
	};*/
	class rhsgref_tla_DSHKM_Mini_TriPod;
	class rhsgref_tla_DSHKM;
	class FP_CSL_O_KPA_KORD: rhsgref_tla_DSHKM_Mini_TriPod
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_CSL_O_KPA_KORD_High: rhsgref_tla_DSHKM
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class RHS_NSV_TriPod_MSV;
	class FP_CSL_O_KPA_NSV_Tripod: RHS_NSV_TriPod_MSV
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class RHS_AGS30_TriPod_MSV;
	class FP_CSL_O_KPA_AGS30_Tripod: RHS_AGS30_TriPod_MSV
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class rhs_SPG9M_MSV;
	class FP_CSL_O_KPA_SPG9M: rhs_SPG9M_MSV
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_CSL_O_KPA_Lite_SPG9M: rhs_SPG9M_MSV
	{
		displayName = "SPG-9M (Light Infantry)";
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};	
	class rhs_2b14_82mm_msv;
	class FP_CSL_O_KPA_2B14_82MM: rhs_2b14_82mm_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class rhs_D30_msv;
	class rhs_D30_at_msv;
	class FP_CSL_O_KPA_D30: rhs_D30_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
	};
	class FP_CSL_O_KPA_D30_AT: rhs_D30_at_msv
	{
		editorSubcategory = "EdSubcat_Artillery";
		crew = "FP_CSL_O_KPA_Soldier_F";
		faction = "FP_Faction_KPA";
		side = 0;
		scope = 2;
		scopeCurator = 2;
	};
	
	class rhs_zil131_msv;
	class rhs_zil131_open_msv;
	class rhs_zil131_flatbed_cover_msv;
	class rhs_zil131_flatbed_msv;
	class FP_CSL_O_KPA_ZIL131: rhs_zil131_msv
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_CSL_O_KPA_ZIL131_Open: rhs_zil131_open_msv
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_CSL_O_KPA_ZIL131_Flatbed_Cover: rhs_zil131_flatbed_cover_msv
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};
	class FP_CSL_O_KPA_ZIL131_Flatbed: rhs_zil131_flatbed_msv
	{
		crew = "FP_CSL_O_KPA_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_KPA";
		scope = 2;
		scopeCurator = 2;
	};	
	class rhsgref_cdf_Mi24D_early;
	class FP_CSL_O_KPA_Mi25: rhsgref_cdf_Mi24D_early
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		displayName = "Mi-25";
		crew = "FP_CSL_O_KPA_Helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		hiddenselectionstextures[] = 
		{
			"\FP_Factions\KPA\data\mi24\mi24p_001_kpa_co.paa",
			"\FP_Factions\KPA\data\mi24\mi24p_002_kpa_co.paa",
			"\rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
		};
	};
	class RHS_Mi8T_vvsc;
	class RHS_Mi8mt_vvsc;
	class RHS_Mi8MTV3_vvsc;
	class FP_CSL_O_KPA_Mi8T: RHS_Mi8T_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\FP_Factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\FP_Factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
	};
	class FP_CSL_O_KPA_Mi8MT: RHS_Mi8mt_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\FP_Factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\FP_Factions\KPA\data\mi8\mi8_tv2_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
		typicalCargo[] = {"FP_CSL_O_KPA_Helicrew_F"};
	};
	class FP_CSL_O_KPA_Mi8MTV3: RHS_Mi8MTV3_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"Camo1","Camo2","Camo8","Camo4","n1","n2","tail_decals"};
		hiddenselectionstextures[] = 
		{
			"\FP_Factions\KPA\data\mi8\mi_171_kpa_co.paa",
			"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
			"\FP_Factions\KPA\data\mi8\mi8_tv2_kpa_co.paa",
			"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
		};
		typicalCargo[] = {"FP_CSL_O_KPA_Helicrew_F"};
	};
	class C_Heli_Light_01_civil_F;
	class FP_CSL_O_KPA_Heli_Light_01_F: C_Heli_Light_01_civil_F
	{
		class TextureSources
		{
			class KPAMD500
			{
				author="CSLeader";
				displayname = "KPA Green";				
				textures[] = {"\FP_Factions\KPA\md500\Heli_Light_01_ext_KPA_CO.paa"};
				factions[] = {"FP_Faction_KPA"};
			};			
		};
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		editorSubcategory = "EdSubcat_Helicopters";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","aiming_dot"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\md500\Heli_Light_01_ext_KPA_CO.paa"};
		hiddenSelectionsMaterials[] = {"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext.rvmat"};		
	};
/*	class UK3CB_I_G_Antonov_An2_Armed;
	class UK3CB_I_G_Antonov_An2;
	class FP_CSL_O_KPA_Antonov_An2_Armed: UK3CB_I_G_Antonov_An2_Armed
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		faction = "FP_Faction_KPA";		
	};
	class FP_CSL_O_KPA_Antonov_An2: UK3CB_I_G_Antonov_An2
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Helipilot_F";
		faction = "FP_Faction_KPA";		
	};*/
	class RHS_Su25SM_vvsc;
	class FP_CSL_O_KPA_Su25K: RHS_Su25SM_vvsc
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		displayName = "Su-25K";
		faction = "FP_Faction_KPA";			
	};	
	class I_Plane_Fighter_03_dynamicLoadout_F;
	class FP_CSL_O_KPA_L159_Fighter_dynamicLoadout_F: I_Plane_Fighter_03_dynamicLoadout_F
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		faction = "FP_Faction_KPA";	
		hiddenSelections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = 
		{
			"\FP_Factions\KPA\data\l159\Plane_Fighter_03_body_1_KPA_CO.paa",
			"\FP_Factions\KPA\data\l159\Plane_Fighter_03_body_2_KPA_CO.paa"
		};
	};
/*	class UK3CB_CW_SOV_O_LATE_MIG21_AA;
	class UK3CB_CW_SOV_O_LATE_MIG21_AT;
	class UK3CB_CW_SOV_O_LATE_MIG21;
	class UK3CB_CW_SOV_O_LATE_MIG21_CAS;
	class FP_CSL_O_KPA_MIG21_AA: UK3CB_CW_SOV_O_LATE_MIG21_AA
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","gunsight"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\mig21\mig-21_1_kpa_co.paa","\FP_Factions\KPA\data\mig21\mig-21_2_KPA_co.paa","\FP_Factions\KPA\data\mig21\mig-21_3_kpa_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\air\UK3CB_Factions_Vehicles_MIG21\data\gunsight1_ca.paa"};			
	};
	class FP_CSL_O_KPA_MIG21_AT: UK3CB_CW_SOV_O_LATE_MIG21_AT
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","gunsight"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\mig21\mig-21_1_kpa_co.paa","\FP_Factions\KPA\data\mig21\mig-21_2_KPA_co.paa","\FP_Factions\KPA\data\mig21\mig-21_3_kpa_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\air\UK3CB_Factions_Vehicles_MIG21\data\gunsight1_ca.paa"};			
	};
	class FP_CSL_O_KPA_MIG21: UK3CB_CW_SOV_O_LATE_MIG21
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","gunsight"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\mig21\mig-21_1_kpa_co.paa","\FP_Factions\KPA\data\mig21\mig-21_2_KPA_co.paa","\FP_Factions\KPA\data\mig21\mig-21_3_kpa_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\air\UK3CB_Factions_Vehicles_MIG21\data\gunsight1_ca.paa"};			
	};
	class FP_CSL_O_KPA_MIG21_CAS: UK3CB_CW_SOV_O_LATE_MIG21_CAS
	{
		side = 0;
		scope = 2;
		scopeCurator = 2;
		crew = "FP_CSL_O_KPA_Pilot_F";
		faction = "FP_Faction_KPA";
		hiddenSelections[] = {"camo1","camo2","camo3","gunsight"};
		hiddenSelectionsTextures[] = {"\FP_Factions\KPA\data\mig21\mig-21_1_kpa_co.paa","\FP_Factions\KPA\data\mig21\mig-21_2_KPA_co.paa","\FP_Factions\KPA\data\mig21\mig-21_3_kpa_co.paa","UK3CB_Factions\addons\UK3CB_Factions_Vehicles\air\UK3CB_Factions_Vehicles_MIG21\data\gunsight1_ca.paa"};			
	};*/
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
	class KPA_FieldPack_RPG2_khk: B_FieldPack_khk
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(FP_PG2_magazine,4);
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
			mag_xx(FP_GOR_rhs_60Rnd_545X39_7N24_AK, 4);
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
			mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
			mag_xx(rhsgref_10Rnd_792x57_m76,6);
			mag_xx(hlc_VOG25_AK,6);		
			mag_xx(FP_GOR_rhs_60Rnd_545X39_7N24_AK,3);
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
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_545x39_7N10_AK,12);
			mag_xx(RH_8Rnd_762_tt33, 10);
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
		scope = 1;
		class TransportMagazines
		{
			mag_xx(FP_30rnd_762_FAL_m80,10);
			mag_xx(RH_8Rnd_762_tt33, 10);
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
			mag_xx(rhs_30Rnd_545x39_7N10_AK,12);
			mag_xx(RH_8Rnd_762_tt33, 10);
			mag_xx(rhs_mag_rgd5, 3);
			mag_xx(rhs_mag_rdg2_white,4);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
	};	
	class B_Soldier_F;
	class FP_KPA_Soldier_BASE: B_Soldier_F
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_CSL_O_KPA_Soldier_unarmed_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};		
	};
	class FP_CSL_O_KPA_Soldier_A_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_Carryall_cbr_Ammo";
		displayName = "Ammo Bearer";		
	};	
	class FP_CSL_O_KPA_Soldier_AR_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"FP_RPK74_mount","Throw","Put"};
		respawnWeapons[] = {"FP_RPK74_mount","Throw","Put"};
		magazines[] = {"FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","FP_GOR_rhs_60Rnd_545X39_7N24_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_AAR_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autoifleman";
		backpack = "KPA_FieldPack_khk_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Soldier_SL_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_TL_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_gp25_acc_1P29","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_gp25_acc_1P29","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_FieldOfficer_F: FP_CSL_O_KPA_Soldier_SL_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Field Officer";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put"};
		cost = 250000;
		icon = "iconManOfficer";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_CSL_O_KPA_Officer_F: FP_CSL_O_KPA_FieldOfficer_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		uniformClass = "unif_chi_type65_kpa_modern";  
		weapons[] = {"RH_tt33","Throw","Put"};
		respawnWeapons[] = {"RH_tt33","Throw","Put"};
		magazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		respawnMagazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33"};
		linkedItems[] = {"vest_sov_holster","FP_CSL_ParadeDressCap_01_KPA_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_holster","FP_CSL_ParadeDressCap_01_KPA_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_CSL_O_KPA_RadioOperator_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "B_RadioBag_01_wdl_F";
	};
	class FP_CSL_O_KPA_Soldier_M_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"vest_chicom_sks","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
	};
	class FP_CSL_O_KPA_Soldier_LAT_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Medic_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_CSL_O_KPA_Crewman_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		uniformClass = "FP_GOR_Uniform_Massifjacket_black";
		weapons[] = {"FP_KPA_Type88UN","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88UN","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
	};
	class FP_CSL_O_KPA_CrewCommander_F: FP_CSL_O_KPA_Crewman_F
	{
		displayName = "Crew Commander";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"FP_KPA_Type88UN","RH_tt33","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88UN","RH_tt33","Binocular","Throw","Put"};		
	};
	class FP_CSL_O_KPA_engineer_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class FP_CSL_O_KPA_soldier_exp_F: FP_CSL_O_KPA_engineer_F
	{
		author = "FP Mod Team";
		backpack = "KPA_Carryall_Exp";
		_generalMacro = "FP_KPA_Soldier_BASE";
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
	class FP_CSL_O_KPA_Soldier_MMG_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"rhs_weap_pkm","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_AMMG_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Machinegunner";
		backpack = "KPA_FieldPack_khk_MMG";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Soldier_MAT_F: FP_KPA_Soldier_BASE
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
		displayName = "Rifleman (MAT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Soldier_AMAT_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Rifleman (MAT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Soldier_HAT_F: FP_CSL_O_KPA_Soldier_MAT_F
	{
		displayName = "Missile Specialist (Heavy AT)";
		backpack = "KPA_Carryall_oli_HAT";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_O_Vorona_green_F","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_O_Vorona_green_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
	};
	class FP_CSL_O_KPA_Soldier_AHAT_F: FP_CSL_O_KPA_Soldier_AMAT_F
	{
		displayName = "Asst. Missile Specialist (Heavy AT)";
		backpack = "KPA_Carryall_oli_HAT";		
	};
	class FP_CSL_O_KPA_Soldier_AA_F: FP_KPA_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Soldier_AAA_F: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Soldier_UAV_F: FP_KPA_Soldier_BASE
		{
		scope = 2;
		scopeCurator = 2;
		backpack = "O_UAV_01_backpack_F";
		displayName = "UAV Operator";
		cost = 100000;
		linkedItems[] = {"chestrig_chic","rhs_ssh60","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","rhs_ssh60","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_CSL_O_KPA_Helipilot_F: FP_CSL_O_KPA_Crewman_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		uniformClass = "U_C_WorkerCoveralls";		
	};
	class FP_CSL_O_KPA_Helicrew_F: FP_CSL_O_KPA_Helipilot_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","rhs_zsh7a_mike_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};	
	class FP_CSL_O_KPA_Pilot_F: FP_CSL_O_KPA_Helipilot_F
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Parachute";
		displayName = "Fighter Pilot";
		weapons[] = {"RH_tt33","Throw","Put"};
		respawnWeapons[] = {"RH_tt33","Throw","Put"};
		linkedItems[] = {"V_TacVest_khk","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhs_zsh7a_alt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
		magazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		uniformClass = "U_C_WorkerCoveralls";
	};
	class FP_CSL_O_KPA_JSniper: FP_KPA_Soldier_BASE
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
		weapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Binocular","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_oli_F","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
	};
	class FP_CSL_O_KPA_JSpotter: FP_CSL_O_KPA_JSniper
	{
		backpack = "KPA_FieldPack_RPG_Spotter_khk";
		displayName = "Jeongchaldae Spotter";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1p63_muzzle_rhs_acc_dtk4short","RH_tt33","launch_RPG7_F","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1p63_muzzle_rhs_acc_dtk4short","RH_tt33","launch_RPG7_F","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RPG7_F","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class FP_CSL_O_KPA_SOF_Soldier_BASE: B_Soldier_F
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
		weapons[] = {"FP_rhs_weap_aks74un_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_aks74un_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_SmershVest_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_SOF_Scout: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout";		
	};
	class FP_CSL_O_KPA_SOF_Scout_Unarmed: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout (Unarmed)";	
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_CSL_O_KPA_SOF_Scout_AT: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		textSingular = "$STR_A3_nameSound_veh_infantry_AT_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_AT_p";
		nameSound = "veh_infantry_AT_s";
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Scout (AT)";
		backpack = "KPA_Recon_FieldPack_RPG_Light_grn";
		weapons[] = {"FP_rhs_weap_aks74un_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","FP_launch_RPG7_F_pgo7v2","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_aks74un_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","FP_launch_RPG7_F_pgo7v2","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_rpg7_PG7VL_mag","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};		
	};
	class FP_CSL_O_KPA_SOF_JTAC: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_SOF_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando JTAC";
		backpack = "B_RadioBag_01_black_F";
		weapons[] = {"FP_rhs_weap_aks74n_gp25_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_aks74n_gp25_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		
	};
	class FP_CSL_O_KPA_SOF_AR: FP_CSL_O_KPA_SOF_Soldier_BASE
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
		weapons[] = {"FP_rhs_weap_rpk74m_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_rpk74m_ekp8_02_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","FP_GOR_96rnd_545x39_7U1_RPK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
class FP_CSL_O_KPA_SOF_Medic: FP_CSL_O_KPA_SOF_Soldier_BASE
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
	class FP_CSL_O_KPA_SOF_Crewman: FP_CSL_O_KPA_SOF_Soldier_BASE
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
	};
	class FP_CSL_O_KPA_SOF_SL: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Squad Leader";
		weapons[] = {"FP_rhs_weap_aks74n_1p29_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_aks74n_1p29_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_GOR_V_SmershVest_Olive_radio_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_GOR_V_SmershVest_Olive_radio_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_SOF_TL: FP_CSL_O_KPA_SOF_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Commando Team Leader";
		weapons[] = {"FP_rhs_weap_aks74n_gp25_pkas_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_aks74n_gp25_pkas_muzzle_rhs_acc_dtk4short","FP_RH_cz75_gemtech9","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_7U1_AK","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","RH_16Rnd_9x19_CZ","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_RadioBag_01_wdl_F";
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
	};	
	class FP_CSL_O_KPA_SOF_Marksman: FP_CSL_O_KPA_SOF_Soldier_BASE
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
	class FP_CSL_O_KPA_WPRG_BASE: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		vehicleClass = "fp_men_militia";
	    editorSubcategory = "fp_men_militia_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Militia Man";
		cost = 10000;
		model="sim_extra_gear\chi_type65.p3d";
		uniformClass = "unif_chi_type65_kpa_modern"; 
		weapons[] = {"FP_PPSh_41","Throw","Put"};
		respawnWeapons[] = {"FP_PPSh_41","Throw","Put"};
		magazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_WPRG_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_CSL_O_KPA_WPRG_unarmed_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";	
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_CSL_O_KPA_WPRG_SKS_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_WPRG_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (SKS)";
		weapons[] = {"FP_SKS","Throw","Put"};
		respawnWeapons[] = {"FP_SKS","Throw","Put"};
		magazines[] = {"FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","FP_SKS_10rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};		
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_M1903A1_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_WPRG_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (M1903A1)";
		weapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M1903A1","Throw","Put"};
		magazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","hlc_5rnd_3006_1903","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};		
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_SVT40_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_WPRG_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (SVT-40)";
		weapons[] = {"FP_SVT40","Throw","Put"};
		respawnWeapons[] = {"FP_SVT40","Throw","Put"};
		magazines[] = {"FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","FP_SVT_10rnd","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};		
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_AR_F: FP_CSL_O_KPA_WPRG_BASE
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
	class FP_CSL_O_KPA_WPRG_AAR_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_WPRG_FieldPack_khk_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_WPRG_SL_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_AK47_Type56","rhs_weap_type94_new","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_AK47_Type56","rhs_weap_type94_new","Throw","Put","Binocular"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		magazines[] = {"FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","FP_30rnd_762x39mm_slabside","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_TL_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_PPSh_41","rhs_weap_type94_new","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_PPSh_41","rhs_weap_type94_new","Throw","Put","Binocular"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		magazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_6x8mm_mhp","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_webgear","cap_chi_type65_kpa_modern","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_Engineer: FP_CSL_O_KPA_WPRG_BASE
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
	class FP_CSL_O_KPA_WPRG_M_F: FP_CSL_O_KPA_WPRG_BASE
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
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		linkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_chicom_sks","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 150000;
		sensitivity = 3;
	};
	class FP_CSL_O_KPA_WPRG_LAT_F: FP_CSL_O_KPA_WPRG_BASE
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
		backpack = "KPA_FieldPack_RPG2_khk";
		weapons[] = {"FP_PPSh_41","FP_RPG2","Throw","Put"};
		respawnWeapons[] = {"FP_PPSh_41","FP_RPG2","Throw","Put"};
		magazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PG2_magazine","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PPSh41_71rnd","FP_PG2_magazine","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_WPRG_LMG_F: FP_CSL_O_KPA_WPRG_BASE
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
		linkedItems[] = {"vest_sov_chestrig","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"vest_sov_chestrig","cap_chi_type65_kpa_modern","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_WPRG_ALMG_F: FP_CSL_O_KPA_WPRG_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Light Machinegunner";
		backpack = "KPA_WPRG_FieldPack_khk_LMG";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};

	class FP_CSL_O_KPA_Marine_BASE: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
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
	class FP_CSL_O_KPA_Marine_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Marine_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_CSL_O_KPA_Marine_unarmed_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Marine_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};		
	};
	class FP_CSL_O_KPA_Marine_A_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Marine_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_Carryall_cbr_Ammo";
		displayName = "Ammo Bearer";		
	};
	class FP_CSL_O_KPA_Marine_AR_F: FP_CSL_O_KPA_Marine_BASE
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
	class FP_CSL_O_KPA_Marine_AAR_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_FieldPack_khk_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Marine_SL_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_rhs_weap_ak74m_1P29","RH_tt33","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_rhs_weap_ak74m_1P29","RH_tt33","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_V_KPA_TacVest_DigiWld","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_V_KPA_TacVest_DigiWld","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Marine_TL_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_rhs_weap_ak74m_gp25_1P29","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_ak74m_gp25_1P29","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_V_KPA_TacVest_DigiWld","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_V_KPA_TacVest_DigiWldF","FP_PASGT_DigiWld","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Marine_GL_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Grenadier";
		weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","Chemlight_red","Chemlight_red"};
	
	};
	class FP_CSL_O_KPA_Marine_M_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_FP_PSO1M2","RH_tt33","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
	};
	class FP_CSL_O_KPA_Marine_LAT_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Marine_Medic_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_CSL_O_KPA_Marine_Crewman_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"FP_KPA_Type88UN","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88UN","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
	};
	class FP_CSL_O_KPA_Marine_CrewCommander_F: FP_CSL_O_KPA_Marine_Crewman_F
	{
		displayName = "Crew Commander";
		weapons[] = {"FP_PPSh_41","RH_tt33","Binocular","Throw","Put"};
		respawnWeapons[] = {"FP_PPSh_41","RH_tt33","Binocular","Throw","Put"};		
	};
	class FP_CSL_O_KPA_Marine_Engineer_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
	};
	class FP_CSL_O_KPA_Marine_MMG_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"rhs_weap_pkm","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
	};
	class FP_CSL_O_KPA_Marine_AMMG_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "KPA_FieldPack_khk_MMG";
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Marine_MAT_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Marine_AMAT_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "KPA_TacticalPack_oli_MAT";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Marine_AA_F: FP_CSL_O_KPA_Marine_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Marine_AAA_F: FP_CSL_O_KPA_Marine_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "KPA_Carryall_oli_MANPADS";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Lite_Soldier_BASE: FP_KPA_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		vehicleClass = "fp_men_light";
	    editorSubcategory = "fp_men_light_EdSubcat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Light Base";
		backpack =  "KPA_B_Carryall_cbr_LightInf";
		cost = 10000;
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_lite_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Lite_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";		
	};
	class FP_CSL_O_KPA_Soldier_lite_unarmed_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Lite_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};		
	};
	class FP_CSL_O_KPA_Soldier_lite_A_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_KPA_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		backpack = "KPA_Carryall_cbr_Ammo";
		displayName = "Ammo Bearer";		
	};
	class FP_CSL_O_KPA_Soldier_lite_AR_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
	class FP_CSL_O_KPA_Soldier_lite_AAR_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "KPA_B_Carryall_cbr_LightInf_AR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Soldier_lite_M_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
		weapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_svd_wood_PSO1M2","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 150000;
	};
	class FP_CSL_O_KPA_Soldier_lite_LAT_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_RPG7_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RPG7_F","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
		class FP_CSL_O_KPA_Soldier_lite_MAT_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
		displayName = "Rifleman (MAT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","FP_launch_RPG7_F_pgo7v","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_rpg7_PG7VL_mag","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Soldier_lite_AMAT_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Rifleman (MAT)";
		backpack = "KPA_TacticalPack_oli_MAT";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_CSL_O_KPA_Lite_HAT: FP_CSL_O_KPA_Soldier_lite_MAT_F
	{
		displayName = "Missile Specialist (Heavy AT)";
		backpack = "KPA_Carryall_oli_HAT";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_O_Vorona_green_F","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","launch_O_Vorona_green_F","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","Vorona_HE","rhs_mag_rdg2_white","SmokeShellRed"};
	};
	class FP_CSL_O_KPA_Soldier_lite_Engineer_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
	class FP_CSL_O_KPA_Soldier_lite_exp_F: FP_CSL_O_KPA_Soldier_lite_Engineer_F
	{
		author = "FP Mod Team";
		backpack = "KPA_Carryall_Exp";
		_generalMacro = "FP_KPA_Soldier_BASE";
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
	class FP_CSL_O_KPA_Soldier_lite_SL_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_acc_1P29","RH_tt33","Throw","Put","Binocular"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_lite_TL_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_gp25_acc_1P29","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n_gp25_acc_1P29","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rgd5","rhs_mag_rgd5","O_IR_Grenade","O_IR_Grenade","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"chestrig_chic","FP_fieldcap_KPA_Woodland","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_CSL_O_KPA_Soldier_lite_RadioOperator_F: FP_CSL_O_KPA_Lite_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_CSL_O_KPA_Lite_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "B_RadioBag_01_wdl_F";
	};
	class FP_CSL_O_KPA_Medic_lite_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","RH_tt33","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","RH_8Rnd_762_tt33","rhs_mag_rdg2_white","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_CSL_O_KPA_Soldier_lite_AA_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
		weapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"FP_KPA_Type88_rhs_weap_aks74n","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9k38_rocket","rhs_mag_rdg2_white","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
	};
	class FP_CSL_O_KPA_Soldier_lite_AAA_F: FP_CSL_O_KPA_Lite_Soldier_BASE
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
	class rhs_weap_aks74un;
	class FP_rhs_weap_aks74un_ekp8_02_muzzle_rhs_acc_dtk4short: rhs_weap_aks74un
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
				item = "rhs_acc_dtk4short";
			};
		};		
	};

	class rhs_weap_aks74n;
	class FP_rhs_weap_aks74n_1p29_muzzle_rhs_acc_dtk4short: rhs_weap_aks74n
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
				item = "rhs_acc_dtk4short";
			};
		};		
	};
	class rhs_weap_aks74n_gp25;
	class FP_rhs_weap_aks74n_gp25_ekp8_02_muzzle_rhs_acc_dtk4short: rhs_weap_aks74n_gp25
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
				item = "rhs_acc_dtk4short";
			};
		};		
	};
	class FP_rhs_weap_aks74n_gp25_pkas_muzzle_rhs_acc_dtk4short : rhs_weap_aks74n_gp25
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
				item = "rhs_acc_dtk4short";
			};
		};		
	};
	class rhs_weap_rpk74m;
	class FP_rhs_weap_rpk74m_ekp8_02_muzzle_rhs_acc_dtk4short: rhs_weap_rpk74m
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
				item = "rhs_acc_dtk4short";
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
	class launch_RPG7_F;
	class FP_launch_RPG7_F_pgo7v: launch_RPG7_F
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
	class FP_launch_RPG7_F_pgo7v2: launch_RPG7_F
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
	class rhs_weap_aks74n;
	class rhs_weap_aks74n_gp25;
	class FP_KPA_Type88_rhs_weap_aks74n: rhs_weap_aks74n
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk1983";
			};
		};		
	};
	class FP_KPA_Type88_rhs_weap_aks74n_gp25: rhs_weap_aks74n_gp25
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk1983";
			};
		};		
	};
	class FP_KPA_Type88_rhs_weap_aks74n_acc_1P29: rhs_weap_aks74n
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
				item = "rhs_acc_dtk1983";
			};
		};
	};
	class FP_KPA_Type88_rhs_weap_aks74n_gp25_acc_1P29: rhs_weap_aks74n_gp25
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
				item = "rhs_acc_dtk1983";
			};
		};
	};
	class FP_KPA_Type88_rhs_weap_aks74n_acc_1p63_muzzle_rhs_acc_dtk4short: rhs_weap_aks74n
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_acc_1p63";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_dtk4short";
			};
		};		
	};
	class rhs_weap_aks74un;
	class FP_KPA_Type88UN: rhs_weap_aks74un
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhs_acc_pgs64_74un";
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
