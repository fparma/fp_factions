#define quote(var1) #var1
#define mag_xx(a,b) class _xx_##a {magazine = quote(a); count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = quote(a); count = b;}
#define item_xx(a,b) class _xx_##a {name = quote(a); count = b;}
class CfgPatches
{
	class FP_Factions_ROK
	{
		units[] = 
		{
			"FP_B_ROK_AAV",
			"FP_B_ROK_M939_MLRS",
			"FP_B_ROK_MTVR_MLRS",
			"FP_B_ROK_M939_Closed",
			"FP_B_ROK_M939_Guntruck",
			"FP_B_ROK_M939_Open",
			"FP_B_ROK_M939_Reammo",
			"FPB_ROK_M939_Recovery",
			"FP_B_ROK_M939_Refuel",
			"FP_B_ROK_M939_Repair",
			"FP_B_ROK_MTVR_Reammo",
			"FP_B_ROK_MTVR_Closed",
			"FP_B_ROK_MTVR_Open",
			"FP_B_ROK_MTVR_Recovery",
			"FP_B_ROK_MTVR_Refuel",
			"FP_B_ROK_MTVR_Repair",
			"FP_B_ROK_MaxxPro_M2",
			"FP_B_ROK_MaxxPro_MK19",
			"FP_B_ROK_M113",
			"FP_B_ROK_M113_Mk19",
			"FP_B_ROK_M113_M2",
			"FP_B_ROK_Unimog",
			"FP_B_ROK_AH1F",
			"FP_B_ROK_Heli_Transport_02_F",
			"FP_B_ROK_Heli_light_03_dynamicLoadout_F",
			"FP_B_ROK_Heli_light_03_unarmed_F",
			"FP_B_ROK_uh1h_F",
			"FP_B_ROK_Soldier_A_F",
			"FP_B_ROK_Soldier_AAR_F",
			"FP_B_ROK_soldier_AAA_F",
			"FP_B_ROK_Soldier_AAT_F",
			"FP_B_ROK_Soldier_AR_F",
			"FP_B_ROK_Medic_F",
			"FP_B_ROK_Crewman_F",
			"FP_B_ROK_engineer_F",
			"FP_B_ROK_soldier_exp_F",
			"FP_B_ROK_Soldier_GL_F",
			"FP_B_ROK_Helicrew_F",
			"FP_B_ROK_Helipilot_F",
			"FP_B_ROK_MMG_F",
			"FP_B_ROK_soldier_M_F",
			"FP_B_ROK_Soldier_AA_F",
			"FP_B_ROK_Soldier_AT_F",
			"FP_B_ROK_FieldOfficer_F",
			"FP_B_ROK_Officer_F",
			"FP_B_ROK_RadioOperator_F",
			"FP_B_ROK_soldier_repair_F",
			"FP_B_ROK_Soldier_F",
			"FP_B_ROK_Soldier_LAT_F",
			"FP_B_ROK_Soldier_lite_F",
			"FP_B_ROK_Soldier_unarmed_F",
			"FP_B_ROK_Soldier_SL_F",
			"FP_B_ROK_Survivor_F",
			"FP_B_ROK_Soldier_TL_F",
			"FP_B_ROK_Soldier_UAV_F",
			"FP_B_ROK_Marine_A_F",
			"FP_B_ROK_Marine_AAR_F",
			"FP_B_ROK_Marine_AAT_F",
			"FP_B_ROK_Marine_AR_F",
			"FP_B_ROK_Marine_Medic_F",
			"FP_B_ROK_Marine_Crewman_F",
			"FP_B_ROK_Marine_engineer_F",
			"FP_B_ROK_Marine_exp_F",
			"FP_B_ROK_Marine_GL_F",
			"FP_B_ROK_Marine_Helicrew_F",
			"FP_B_ROK_Marine_Helipilot_F",
			"FP_B_ROK_Marine_MMG_F",
			"FP_B_ROK_Marine_M_F",
			"FP_B_ROK_Marine_AA_F",
			"FP_B_ROK_Marine_AT_F",
			"FP_B_ROK_Marine_FieldOfficer_F",
			"FP_B_ROK_Marine_Officer_F",
			"FP_B_ROK_Marine_RadioOperator_F",
			"FP_B_ROK_Marine_repair_F",
			"FP_B_ROK_Marine_F",
			"FP_B_ROK_Marine_LAT_F",
			"FP_B_ROK_Marine_lite_F",
			"FP_B_ROK_Marine_unarmed_F",
			"FP_B_ROK_Marine_SL_F",
			"FP_B_ROK_Marine_Survivor_F",
			"FP_B_ROK_Marine_TL_F",
			"FP_B_ROK_Marine_UAV_F",
			"FP_B_ROK_UDT_sof_exp_F",
			"FP_B_ROK_UDT_sof_JTAC_F",
			"FP_B_ROK_UDT_sof_M_F",
			"FP_B_ROK_UDT_sof_medic_F",
			"FP_B_ROK_UDT_sof_F",
			"FP_B_ROK_UDT_sof_LAT_F",
			"FP_B_ROK_UDT_sof_TL_F",
			"B_Mortar_01_F",
			"FP_B_ROK_HMG_02_high_F",
			"FP_B_ROK_HMG_02_F"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_ROK
	{
		displayName = "FP South Korea";
		priority = 2;
		side = 1;
		icon = "\FP_Factions\ROK\cfgFactionClasses_southkorea_ca.paa";
		flag = "\FP_Factions\ROK\flag_southkorea.paa";
	};
};
class CfgWorlds 
{
	class GenericNames 
	{
		class SouthKoreanMen 
		{
			class FirstNames 
			{
				
				ban = "Ban";
				dokgo = "Dokgo";
				gu = "Gu";
				han = "Han";
				hyeon = "Hyeon";
				jeung = "Jeung";
				mangjeol = "Mangjeol";
				mok = "Mok";
				mun = "Mun";
				myo = "Myo";
				o = "O";
				ok = "Ok";
				ryeom = "Ryeom";
				rim = "Rim";
				seo = "Seo";
				seol = "Seol";
				seung = "Seung";
				su = "Su";
				un = "Un";
				yeo = "Yeo";
				yuk = "Yuk";
			};
			class LastNames 
			{
				baekhyeon = "Baek-Hyeon";
				chul = "Chul";
				chulmoo = "Chul-Moo";
				dong = "Dong";
				hyun = "Hyun";
				hyunshik = "Hyun-Shik";
				in = "In";
				insu = "In-Su";
				isuel = "Iseul";
				joon = "Joon";
				joongi = "Joon-gi";
				jee = "Jee";
				kwangsun = "Kwang-Sun";
				kyungsam = "Kyung-Sam";
				malchin = "Mal-Chin";
				myung = "Myung";
				myungdae = "Myung-Dae";
				sangkyu = "Sang Kyu";
				seungri = "Seungri";
				shinil = "Shin-Il";
				tae = "Tae";
			};
		};
	};
};
class CfgGroups
{
	class West
	{
		class FP_B_ROK_F
		{
			name = "FP South Korea";
			class Infantry
			{
				name = "Infantry";
				class BROK_InfAssault
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_MMG_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AAR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Medic_F";
					};
				};
				class BROK_InfSentry
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Sentry";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_F";
					};
				};
				class BROK_InfSquad
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Medic_F";
					};
				};
				class BROK_InfSquad_Weapons
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_A_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Medic_F";
					};
				};
				class BROK_InfTeam
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fire Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};				
				};
				class BROK_InfTeam_AA
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Air-defense Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AAA_F";
					};				
				};
				class BROK_InfTeam_AT
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Anti-armor Team";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AAT_F";
					};				
				};
			};
			class Marines
			{
				name = "Marine Infantry";
				class BROKMC_InfAssault
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Assault Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_MMG_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AAR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_M_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_LAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_Medic_F";
					};
				};
				class BROKMC_InfSquad
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Rifle Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_LAT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_TL_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AR_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_Medic_F";
					};
				};
				class BROKMC_InfSquad_Weapons
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Weapons Squad";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_M_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_A_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AAT_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_Medic_F";
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class BROK_Tacom
				{
					name = "TACOM Team";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
					faction = "FP_Faction_ROK";
					class Unit0
					{
						side = 1;
						vehicle = "FP_B_ROK_FieldOfficer_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_B_ROK_RadioOperator_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_B_ROK_Medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_B_ROK_Soldier_UAV_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class BROKMC_Tacom
				{
					name = "TACOM Marine Team";
					side = 1;
					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
					faction = "FP_Faction_ROK";
					class Unit0
					{
						side = 1;
						vehicle = "FP_B_ROK_Marine_FieldOfficer_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_B_ROK_Marine_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_B_ROK_Marine_RadioOperator_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_B_ROK_Marine_Medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_B_ROK_Marine_UAV_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized Infantry";
				class KPA_MotInf_Reinforce_M939
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements (M939)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_M939_Closed";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_F";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Medic_F";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AT_F";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
				};
				class KPA_MotInf_Reinforce_MTVR
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements (MTVR)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_MTVR_Closed";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_F";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Medic_F";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_AT_F";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
				};
			};
			class Mechanized
			{
				name = "Mechanized Infantry";
				class BROK_MechInfSquad_M113
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Rifle Squad | M113A3 (M2)";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "FP_B_ROK_M113";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Medic_F";
					};
				};
			};
			class MechanizedMarines
			{
				name = "Mechanized Marines";
				class BROKMC_MechInfSquad_AAV
				{
					faction = "FP_Faction_ROK";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					name = "Mechanized Rifle Squad | AAVP-7A1";
					side = 1;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 1;
						vehicle = "FP_B_ROK_AAV";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_SL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_LAT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_M_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "FP_B_ROK_Marine_TL_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "CORPORAL";
						side = 1;
						vehicle = "FP_B_ROK_Marine_AR_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_A_F";
					};
					class Unit8
					{
						position[] = {-20,-20,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "FP_B_ROK_Marine_Medic_F";
					};					
				};
			};
		};
	};
};
class CfgVehicles
{
	class FP_GOR_fastpack_woodland;
	class FP_GOR_assaultpack_woodland;
	class FP_GOR_tortila_woodland;
	class FP_ROK_Kitbag_woodland_AAR: FP_GOR_fastpack_woodland
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(hlc_200rnd_556x45_M_SAW,2);
		};
	};	
	class FP_ROK_AssaultPack_woodland_medic: FP_GOR_assaultpack_woodland
		{
		scope = 1;
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Medikit,1);
		};
	};
	class FP_ROK_Carryall_woodland_Ammo: FP_GOR_tortila_woodland
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(hlc_30Rnd_556x45_EPR_sg550,10);
			mag_xx(hlc_20rnd_762x51_b_G3,4);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(hlc_200rnd_556x45_M_SAW,1);
		};		
	};
	class FP_ROK_Carryall_woodland_AT: FP_GOR_tortila_woodland
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(Titan_AT,2);
		};
	};
	class FP_ROK_Carryall_woodland_Engi: FP_GOR_tortila_woodland
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(SatchelCharge_Remote_Mag,1);
			mag_xx(DemoCharge_Remote_Mag,3);
		};
		class TransportItems
		{
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
		};
	};
	class FP_ROK_Carryall_woodland_AA: FP_GOR_tortila_woodland
	{
		scope = 1;
		class TransportMagazines
		{
			mag_xx(rhs_fim92_mag,2);
		};		
	};
	class cwr2_AH1F;
	class I_Heli_Transport_02_F;
	class I_Heli_light_03_dynamicLoadout_F;
	class I_Heli_light_03_unarmed_F;
	class rhs_uh1h_hidf;
	class FP_B_ROK_AH1F: cwr2_AH1F
	{
		scope = 2;
		scopeCurator = 2;
		faction = "FP_Faction_ROK";
		crew = "FP_B_ROK_Helipilot_F";	
	};
	class FP_B_ROK_uh1h_F: rhs_uh1h_hidf
	{
		class TextureSources
		{
			class ROK_Olive
			{
				displayName = "Olive";
				factions[] = {"FP_Faction_ROK"};	
				textures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			};
		};
		side = 1;
		scope = 2;
		scopeCurator = 2;
		faction = "FP_Faction_ROK";
		crew = "FP_B_ROK_Helipilot_F";
		textureList[] =
		{
			"ROK_Olive", 1
		};
		typicalCargo[] = {"FP_B_ROK_Helicrew_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_olv_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_us_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};			
	};
	class FP_B_ROK_Heli_Transport_02_F: I_Heli_Transport_02_F
	{
		class TextureSources
		{
			class ROK_Olive
			{
				displayName = "Olive";
				factions[] = {"FP_Faction_ROK"};	
				textures[] = {"\FP_Factions\ROK\Data\mohawk\CH49_ROK_01_co.paa","\FP_Factions\ROK\Data\mohawk\CH49_ROK_02_co.paa","\FP_Factions\ROK\Data\mohawk\CH49_ROK_03_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
			};
		};
		side = 1;
		scope = 2;
		scopeCurator = 2;
		displayname = "KUH-1 Surion";
		faction = "FP_Faction_ROK";
		crew = "FP_B_ROK_Helipilot_F";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"\FP_Factions\ROK\Data\mohawk\CH49_ROK_01_co.paa","\FP_Factions\ROK\Data\mohawk\CH49_ROK_02_co.paa","\FP_Factions\ROK\Data\mohawk\CH49_ROK_03_co.paa","A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"};
	};
	class FP_B_ROK_Heli_light_03_dynamicLoadout_F: I_Heli_light_03_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		faction = "FP_Faction_ROK";
		crew = "FP_B_ROK_Helipilot_F";	
	};
	class FP_B_ROK_Heli_light_03_unarmed_F: I_Heli_light_03_unarmed_F
	{
		side = 1;
		scope = 2;
		scopeCurator = 2;
		faction = "FP_Faction_ROK";
		crew = "FP_B_ROK_Helipilot_F";	
	};
	class B_Mortar_01_F;
	class FP_B_ROK_Mortar_01_F: B_Mortar_01_F
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";		
	};
	class I_E_HMG_02_F;
	class I_E_HMG_02_high_F;
	class FP_B_ROK_HMG_02_high_F: I_E_HMG_02_high_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_HMG_02_F: I_E_HMG_02_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class UK3CB_B_AAV_US_WDL;
	class FP_B_ROK_AAV: UK3CB_B_AAV_US_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Marine_Crewman_F";
		editorSubcategory = "EdSubcat_APCs";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_AAV\data\aav_ext_merdc_winv_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_AAV\data\aav_ext2_merdc_winv_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\UK3CB_Factions_Vehicles_Common\equipment\us_cw_backpacks_co.paa"};		textureList[] = {"MDC_VW",1,"OLI",0,"WDL",0};
	};
	class UK3CB_B_MaxxPro_M2_US_W;
	class UK3CB_B_MaxxPro_MK19_US_W;
	class FP_B_ROK_MaxxPro_M2: UK3CB_B_MaxxPro_M2_US_W
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		textureList[] = {"US_G",1,"US_W",0,"US",0};
	};
	class FP_B_ROK_MaxxPro_MK19: UK3CB_B_MaxxPro_MK19_US_W
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		textureList[] = {"US_G",1,"US_W",0,"US",0};
	};
	class Unimog_B_verde;
	class FP_B_ROK_Unimog: Unimog_B_verde
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class UK3CB_B_M939_Closed_WDL;
	class UK3CB_B_M939_Guntruck_WDL;
	class UK3CB_B_M939_Open_WDL;
	class UK3CB_B_M939_Reammo_WDL;
	class UK3CB_B_M939_Recovery_WDL;
	class UK3CB_B_M939_Refuel_WDL;
	class UK3CB_B_M939_Repair_WDL;
	class UK3CB_AAF_B_M939_MLRS;
	class FP_B_ROK_M939_Closed: UK3CB_B_M939_Closed_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
	};
	class FP_B_ROK_M939_Guntruck: UK3CB_B_M939_Guntruck_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FP_B_ROK_M939_Open: UK3CB_B_M939_Open_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FP_B_ROK_M939_Reammo: UK3CB_B_M939_Reammo_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FPB_ROK_M939_Recovery: UK3CB_B_M939_Recovery_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FP_B_ROK_M939_Refuel: UK3CB_B_M939_Refuel_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FP_B_ROK_M939_Repair: UK3CB_B_M939_Repair_WDL
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class FP_B_ROK_M939_MLRS: UK3CB_AAF_B_M939_MLRS
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo","Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_01_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_m939\data\truck5t_merdc_w_02_co.paa","\uk3cb_factions\addons\uk3cb_factions_vehicles\wheeled\uk3cb_factions_vehicles_m939\data\truck5t_dash_green_co.paa","\rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa"};
		textureList[] = {"CW_US_MDC_W",1};
	};
	class UK3CB_B_MTVR_Reammo_WDL;
	class UK3CB_B_MTVR_Closed_WDL;
	class UK3CB_B_MTVR_Refuel_WDL;
	class UK3CB_B_MTVR_Open_WDL;
	class UK3CB_B_MTVR_Recovery_WDL;
	class UK3CB_B_MTVR_Repair_WDL;
	class UK3CB_AAF_B_MTVR_MLRS;
	class FP_B_ROK_MTVR_Reammo: UK3CB_B_MTVR_Reammo_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Ammo";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_Closed: UK3CB_B_MTVR_Closed_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Closed";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_Refuel: UK3CB_B_MTVR_Refuel_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Refuel";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_Open: UK3CB_B_MTVR_Open_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Open";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_Recovery:  UK3CB_B_MTVR_Recovery_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Recovery";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_Repair: UK3CB_B_MTVR_Repair_WDL
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "MTVR Repair";
		crew = "FP_B_ROK_Soldier_F";
		editorSubcategory = "EdSubcat_Cars";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_MTVR_MLRS: UK3CB_AAF_B_MTVR_MLRS
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo5","Camo6"};
		hiddenSelectionsTextures[] = {"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_mtvr\data\mtvr_body_wdl_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_mtvr\data\mtvr_body2_wdl_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_mtvr\data\mtvr_interier_co.paa","\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\wheeled\UK3CB_Factions_Vehicles_mtvr\data\mtvr_tarp_oli_co.paa","\rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa"};
	};
	class rhsusf_m1151_usarmy_wd;
	class rhsusf_m1151_m2crows_usarmy_wd;
	class rhsusf_m1151_mk19crows_usarmy_wd;
	class rhsusf_m1151_m2_v1_usarmy_wd;
	class rhsusf_m1151_m240_v1_usarmy_wd;
	class rhsusf_m1151_mk19_v1_usarmy_wd;
	class rhsusf_m1151_m2_v2_usarmy_wd;
	class rhsusf_m1151_m240_v2_usarmy_wd;
	class rhsusf_m1151_mk19_v2_usarmy_wd;
	class rhsusf_m1152_usarmy_wd;
	class rhsusf_m1152_rsv_usarmy_wd;
	class rhsusf_m1152_sicps_usarmy_wd;
	class FP_ROK_M1151: rhsusf_m1151_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_M2CROWS: rhsusf_m1151_m2crows_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_Mk19CROWS: rhsusf_m1151_mk19crows_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_M2_v1: rhsusf_m1151_m2_v1_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_M240_v1: rhsusf_m1151_m240_v1_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_Mk19_v1: rhsusf_m1151_mk19_v1_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_M2_v2: rhsusf_m1151_m2_v2_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_M240_v2: rhsusf_m1151_m240_v2_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1151_Mk19_v2: rhsusf_m1151_mk19_v2_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class FP_ROK_M1152: rhsusf_m1152_usarmy_wd
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Soldier_F";
		faction = "FP_Faction_ROK";
	};
	class rhsusf_m113_usarmy;
	class rhsusf_m113_usarmy_MK19_90;
	class rhsusf_m113_usarmy_M2_90;
	class FP_B_ROK_M113: rhsusf_m113_usarmy
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Crewman_F";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_M113_Mk19: rhsusf_m113_usarmy_MK19_90
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Crewman_F";
		faction = "FP_Faction_ROK";
	};
	class FP_B_ROK_M113_M2: rhsusf_m113_usarmy_M2_90
	{
		scope = 2;
		scopeCurator = 2;
		crew = "FP_B_ROK_Crewman_F";
		faction = "FP_Faction_ROK";
	};
	class B_Soldier_F;
	class FP_ROK_Soldier_BASE_F: B_Soldier_F
	{
		_generalMacro = "FP_ROK_Soldier_BASE_F";		
		class Wounds
		{
			mat[] = {"a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","a3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_Pants_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			tex[] = {};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faceType = "Man_A3";
		faction = "FP_Faction_ROK";
		genericNames = "SouthKoreanMen";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 100000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		uniformClass = "FP_Uniform_BDU_Granite_B";  
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};		
	};
	class FP_ROK_Marine_BASE_F: FP_ROK_Soldier_BASE_F
	{
		uniformClass = "FP_Uniform_BDU_WAVEPAT";
		vehicleClass = "fp_men_marine";
	    editorSubcategory = "fp_men_marines_EdSubcat";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_Soldier_A_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		backpack = "FP_ROK_Carryall_woodland_Ammo";
		cost = 100000;
	};
	class FP_B_ROK_soldier_AAA_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "FP_ROK_Carryall_woodland_AA";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_B_ROK_Soldier_AAR_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "FP_ROK_Kitbag_woodland_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
		class FP_B_ROK_Soldier_AAT_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "FP_ROK_Carryall_woodland_AT";
		cost = 100000;
	};
	class FP_B_ROK_Soldier_AR_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"hlc_lmg_minimi_railed","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimi_railed","RH_p226","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROK_Medic_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Life Saver";
		attendant = 1;
		backpack = "FP_ROK_AssaultPack_woodland_medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_B_ROK_Crewman_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Crewman";
		weapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		linkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROK_engineer_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "FP_ROK_Carryall_woodland_Engi";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";		
	};
	class FP_B_ROK_soldier_exp_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Kitbag_rgr_Exp";
		canDeactivateMines = 1;
		cost = 93000;
		detectSkill = 38;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";		
	};
	class FP_B_ROK_Soldier_GL_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Grenadier";
		cost = 200000;
		camouflage = 1.4;
		sensitivity = 6;
		threat[] = {0.8,0.1,0.1};
		weapons[] = {"hlc_rifle_SG551LB_TAC_GL","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC_GL","RH_p226","Throw","Put"};		
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	class FP_B_ROK_MMG_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		weapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_p226","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_p226","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROK_Helipilot_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		weapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};		
	};
	class FP_B_ROK_Helicrew_F: FP_B_ROK_Helipilot_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};		
	};	
	class FP_B_ROK_soldier_M_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayname = "Marksman";
		weapons[] = {"FP_hlc_rifle_psg1A1_optic_zfsg1_bipod_utgshooters","RH_p226","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_psg1A1_optic_zfsg1_bipod_utgshooters","RH_p226","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		
	};
	class FP_B_ROK_soldier_mine_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Carryall_oli_Mine";
		canDeactivateMines = 1;
		displayname = "Mine Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";		
	};
	class FP_B_ROK_Soldier_AA_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "FP_ROK_Carryall_woodland_AA";
		cost = 100000;
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};
		icon = "iconManAT";
	};
	class FP_B_ROK_Soldier_AT_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AT)";
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","launch_I_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","launch_I_Titan_short_F","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "FP_ROK_Carryall_woodland_AT";
		cost = 100000;
		icon = "iconManAT";	
	};
	class FP_B_ROK_Officer_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		cost = 100000;
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_GraniteB_F","H_Beret_blk","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_GraniteB_F","H_Beret_blk","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManOfficer";	
	};
	class FP_B_ROK_FieldOfficer_F: FP_B_ROK_Officer_F
	{
		displayName = "Field Officer";
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	};	
	class FP_B_ROK_Soldier_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
	};
	class FP_B_ROK_Soldier_LAT_F: FP_ROK_Soldier_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_m72a7","Throw","Put"};
		cost = 100000;
		icon = "iconManAT";
	};
	class FP_B_ROK_Soldier_lite_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Lite)";		
		cost = 100000;		
		linkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROK_Soldier_unarmed_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_B_ROK_RadioOperator_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "FP_B_RadioBag_117_Black";
		cost = 100000;		
	};
	class FP_B_ROK_soldier_repair_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_AssaultPack_rgr_Repair";
		cost = 93000;
		canDeactivateMines = 0;
		engineer = 1;
		detectSkill = 24;
		threat[] = {0.8,0.1,0.1};
		picture = "pictureRepair";
		displayName = "Repair Specialist";
		icon = "iconManEngineer";
	};
	class FP_B_ROK_Soldier_SL_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_hlc_rifle_SG551LB_TAC_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551LB_TAC_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_Survivor_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Survivor";
		items[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
	};
	class FP_B_ROK_Soldier_TL_F: FP_ROK_Soldier_BASE_F
	{

		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_hlc_rifle_SG551LB_TAC_GL_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551LB_TAC_GL_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 250000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_Soldier_UAV_F: FP_ROK_Soldier_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_UAV_01_backpack_F";
		displayName = "UAV Operator";
		cost = 100000;
		linkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"FP_CSL_V_CarrierRigKBT_light_GraniteB_F","FP_H_HelmetIA_ROK","NVGoggles_OPFOR","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};

	class FP_B_ROK_Marine_A_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Ammo Bearer";
		backpack = "FP_ROK_Carryall_woodland_Ammo";
		cost = 100000;
	};
	class FP_B_ROK_Marine_AAR_F: FP_ROK_Marine_BASE_F
		{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Autorifleman";
		backpack = "FP_ROK_Kitbag_woodland_AAR";
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
		class FP_B_ROK_Marine_AAT_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "FP_ROK_Carryall_woodland_AT";
		cost = 100000;
	};
	class FP_B_ROK_Marine_AR_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Autorifleman";
		weapons[] = {"hlc_lmg_minimi_railed","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_lmg_minimi_railed","RH_p226","Throw","Put"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROK_Marine_Medic_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Combat Life Saver";
		attendant = 1;
		backpack = "FP_ROK_AssaultPack_woodland_medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_B_ROK_Marine_Crewman_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Crewman";
		weapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		linkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacChestrig_grn_F","rhsusf_cvc_green_ess","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROK_Marine_engineer_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "FP_ROK_Carryall_woodland_Engi";
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";		
	};
	class FP_B_ROK_Marine_exp_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Kitbag_rgr_Exp";
		canDeactivateMines = 1;
		cost = 93000;
		detectSkill = 38;
		displayName = "Explosive Specialist";
		icon = "iconManExplosive";
		picture = "pictureExplosive";		
	};
	class FP_B_ROK_Marine_GL_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "Grenadier";
		cost = 200000;
		camouflage = 1.4;
		sensitivity = 6;
		threat[] = {0.8,0.1,0.1};
		weapons[] = {"hlc_rifle_SG551LB_TAC_GL","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC_GL","RH_p226","Throw","Put"};		
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};			
	};
	class FP_B_ROK_Marine_Helipilot_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Pilot";
		linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		weapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG553SB_RIS","RH_p226","Throw","Put"};		
	};
	class FP_B_ROK_Marine_Helicrew_F: FP_B_ROK_Marine_Helipilot_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Helicopter Crew";
		linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};		
	};
	class FP_B_ROK_Marine_MMG_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Machinegunner";
		weapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_p226","Throw","Put"};
		respawnWeapons[] = {"FP_rhs_weap_m240G_optic_arco_blk_F","RH_p226","Throw","Put"};
		magazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";	
	};
	class FP_B_ROK_Marine_M_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayname = "Marksman";
		weapons[] = {"FP_hlc_rifle_psg1A1_optic_zfsg1_bipod_utgshooters","RH_p226","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_psg1A1_optic_zfsg1_bipod_utgshooters","RH_p226","Throw","Put"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		
	};
	class FP_B_ROK_Marine_AA_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "FP_ROK_Carryall_woodland_AA";
		cost = 100000;
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell","rhs_fim92_mag"};
		icon = "iconManAT";
	};
	class FP_B_ROK_Marine_AT_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Missile Specialist (AT)";
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","launch_I_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","launch_I_Titan_short_F","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","Titan_AT","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "FP_ROK_Carryall_woodland_AT";
		cost = 100000;	
		icon = "iconManAT";
	};
	class FP_B_ROK_Marine_Officer_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Officer";
		cost = 100000;
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Beret_blk","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Beret_blk","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManOfficer";	
	};
	class FP_B_ROK_Marine_FieldOfficer_F: FP_B_ROK_Marine_Officer_F
	{
		displayName = "Field Officer";
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROK_Marine_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman";
		cost = 100000;
	};
	class FP_B_ROK_Marine_LAT_F: FP_ROK_Marine_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (AT)";
		weapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_SG551LB_TAC","RH_p226","rhs_weap_m72a7","Throw","Put"};
		cost = 100000;
		icon = "iconManAT";
	};
	class FP_B_ROK_Marine_lite_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Lite)";		
		cost = 100000;		
		linkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_oli","FP_H_MilCap_blk","NVGoggles_OPFOR","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class FP_B_ROK_Marine_unarmed_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Rifleman (Unarmed)";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
	};
	class FP_B_ROK_Marine_RadioOperator_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Radio Operator";
		backpack = "FP_B_RadioBag_117_Black";
		cost = 100000;		
	};
	class FP_B_ROK_Marine_repair_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_AssaultPack_rgr_Repair";
		cost = 93000;
		canDeactivateMines = 0;
		engineer = 1;
		detectSkill = 24;
		threat[] = {0.8,0.1,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		displayName = "Repair Specialist";
	};
	class FP_B_ROK_Marine_SL_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"FP_hlc_rifle_SG551LB_TAC_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551LB_TAC_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_Marine_Survivor_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Survivor";
		items[] = {};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
	};
	class FP_B_ROK_Marine_TL_F: FP_ROK_Marine_BASE_F
	{

		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"FP_hlc_rifle_SG551LB_TAC_GL_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551LB_TAC_GL_rhsusf_acc_acog","RH_p226","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_SOST_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","RH_15Rnd_9x19_SIG","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		cost = 250000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_Marine_UAV_F: FP_ROK_Marine_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		backpack = "B_UAV_01_backpack_F";
		displayName = "UAV Operator";
		cost = 100000;
		linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","FP_H_HelmetIA_ROKMC","NVGoggles_OPFOR","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};	
	};
	class B_Soldier_recon_base;
	class FP_ROK_UDT_BASE_F: B_Soldier_recon_base
	{
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_HAF_default"};
		faceType = "Man_A3";
		faction = "FP_Faction_ROK";
		genericNames = "SouthKoreanMen";
		uniformClass = "VSM_Multicam_Crye_Camo";
		weapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT","FP_RH_usp_ROK_UDT","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT","FP_RH_usp_ROK_UDT","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"VSM_LBT6094_operator_Multicam","opscorem","JAS_GPNVG18_Tan","rhs_ess_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_LBT6094_operator_Multicam","opscorem","JAS_GPNVG18_Tan","rhs_ess_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_UDT_sof_exp_F: FP_ROK_UDT_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Demo Specialist";
	};
	class FP_B_ROK_UDT_sof_JTAC_F: FP_ROK_UDT_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT JTAC";
		backpack = "FP_B_RadioBag_117_Mtp";
		weapons[] = {"FP_hlc_rifle_SG551SB_TAC_GL_ROK_UDT","FP_RH_usp_ROK_UDT","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551SB_TAC_GL_ROK_UDT","FP_RH_usp_ROK_UDT","Throw","Put"};
		magazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","hlc_30Rnd_556x45_EPR_sg550","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		linkedItems[] = {"VSM_RAV_operator_Multicam","VSM_Mich2000_Multicam","JAS_GPNVG18_Tan","rhs_ess_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"VSM_RAV_operator_Multicam","VSM_Mich2000_Multicam","JAS_GPNVG18_Tan","rhs_ess_black","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_B_ROK_UDT_sof_M_F: FP_ROK_UDT_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Marksman";
		weapons[] = {"FP_srifle_DMR_06_olive_ROK_UDT_F","FP_RH_usp_ROK_UDT","Throw","Put"};
		respawnWeapons[] = {"FP_srifle_DMR_06_olive_ROK_UDT_F","FP_RH_usp_ROK_UDT","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
	};
	class FP_B_ROK_UDT_sof_medic_F: FP_ROK_UDT_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Paramedic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_ReconMedic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
	};
	class FP_B_ROK_UDT_sof_F: FP_ROK_UDT_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Scout";
	};
	class FP_B_ROK_UDT_sof_LAT_F: FP_ROK_UDT_BASE_F
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
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Scout (AT)";
		weapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT","FP_RH_usp_ROK_UDT","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT","FP_RH_usp_ROK_UDT","rhs_weap_m72a7","Throw","Put"};
		icon = "iconManAT";
	};
	class FP_B_ROK_UDT_sof_TL_F: FP_ROK_UDT_BASE_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "UDT Team Leader";
		weapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT_TL","FP_RH_usp_ROK_UDT","Throw","Put"};
		respawnWeapons[] = {"FP_hlc_rifle_SG551SB_TAC_ROK_UDT_TL","FP_RH_usp_ROK_UDT","Throw","Put"};
		cost = 250000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
	};
};
class CfgWeapons
{
	class hlc_rifle_SG551LB_TAC;
	class hlc_rifle_SG551LB_TAC_GL;
	class hlc_rifle_SG551SB_TAC;
	class hlc_rifle_SG551SB_TAC_GL;
	class hlc_rifle_psg1A1;
	class rhs_weap_m240G;
	class RH_usp;
	class srifle_DMR_06_olive_F;
	class FP_hlc_rifle_SG551LB_TAC_rhsusf_acc_acog: hlc_rifle_SG551LB_TAC
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_acog";
			};
		};
	};
	class FP_hlc_rifle_SG551LB_TAC_GL_rhsusf_acc_acog: hlc_rifle_SG551LB_TAC_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_acog";
			};
		};
	};
	class FP_hlc_rifle_psg1A1_optic_zfsg1_bipod_utgshooters: hlc_rifle_psg1A1
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "hlc_optic_zfsg1";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "hlc_bipod_utgshooters";
			};
		};		
	};
	class FP_rhs_weap_m240G_optic_arco_blk_F: rhs_weap_m240G
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
		};		
	};
	class FP_hlc_rifle_SG551SB_TAC_ROK_UDT: hlc_rifle_SG551SB_TAC
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rksl_optic_eot552";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
		};		
	};
	class FP_hlc_rifle_SG551SB_TAC_ROK_UDT_TL: hlc_rifle_SG551SB_TAC
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_erco_blk_f";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
		};		
	};
	class FP_hlc_rifle_SG551SB_TAC_GL_ROK_UDT: hlc_rifle_SG551SB_TAC_GL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rksl_optic_eot552";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
		};		
	};
	class FP_RH_usp_ROK_UDT: RH_usp
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rh_gemtech45";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rh_m6x";
			};
		};		
	};
	class FP_srifle_DMR_06_olive_ROK_UDT_F: srifle_DMR_06_olive_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_sos";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_f_blk";
			};
		};		
	};					
};