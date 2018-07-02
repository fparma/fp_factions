#define MAKENUDE(name)	displayName = #name;\
		model = "\A3\Characters_F\Common\basicbody.p3d";\
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_green_co.paa"};\
		identityTypes[] = {"Default"};\
		faction = "FP_Faction_NUDE_B";\
		uniformClass = "";\
		backpack = "";\
		weapons[] = {"Throw","Put"};\
		Items[] = {};\
		RespawnItems[] = {"Throw","Put"};\
		magazines[] = {};\
		linkedItems[] = {};\
		respawnLinkedItems[] = {};

// model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";\

class CfgPatches
{
	class FP_Factions_nude_B
	{
		units[]={"FP_Faction_nude_B_Soldier_base_F", "FP_Faction_nude_B_Soldier_02_f", "FP_Faction_nude_B_Soldier_03_f", "FP_Faction_nude_B_Soldier_04_f", "FP_Faction_nude_B_Soldier_05_f", "FP_Faction_nude_B_Soldier_F", "FP_Faction_nude_B_RangeMaster_F", "FP_Faction_nude_B_Soldier_lite_F", "FP_Faction_nude_B_Soldier_GL_F", "FP_Faction_nude_B_soldier_AR_F", "FP_Faction_nude_B_Soldier_SL_F", "FP_Faction_nude_B_Soldier_TL_F", "FP_Faction_nude_B_soldier_M_F", "FP_Faction_nude_B_soldier_LAT_F", "FP_Faction_nude_B_medic_F", "FP_Faction_nude_B_soldier_repair_F", "FP_Faction_nude_B_soldier_exp_F", "FP_Faction_nude_B_Helipilot_F", "FP_Faction_nude_B_Soldier_A_F", "FP_Faction_nude_B_soldier_AT_F", "FP_Faction_nude_B_soldier_AA_F", "FP_Faction_nude_B_engineer_F", "FP_Faction_nude_B_crew_F", "FP_Faction_nude_B_officer_F", "FP_Faction_nude_B_Competitor_F", "FP_Faction_nude_B_Pilot_F", "FP_Faction_nude_B_helicrew_F", "FP_Faction_nude_B_soldier_PG_F", "FP_Faction_nude_B_soldier_UAV_F", "FP_Faction_nude_B_Soldier_universal_F", "FP_Faction_nude_B_Survivor_F", "FP_Faction_nude_B_Soldier_unarmed_F", "FP_Faction_nude_B_Soldier_recon_base", "FP_Faction_nude_B_recon_F", "FP_Faction_nude_B_recon_LAT_F", "FP_Faction_nude_B_recon_exp_F", "FP_Faction_nude_B_recon_medic_F", "FP_Faction_nude_B_recon_TL_F", "FP_Faction_nude_B_recon_M_F", "FP_Faction_nude_B_recon_JTAC_F", "FP_Faction_nude_B_Soldier_sniper_base_F", "FP_Faction_nude_B_spotter_F", "FP_Faction_nude_B_sniper_F", "FP_Faction_nude_b_soldier_survival_F", "FP_Faction_nude_B_Soldier_support_base_F", "FP_Faction_nude_B_soldier_AAR_F", "FP_Faction_nude_B_soldier_AAT_F", "FP_Faction_nude_B_soldier_AAA_F", "FP_Faction_nude_B_support_MG_F", "FP_Faction_nude_B_support_GMG_F", "FP_Faction_nude_B_support_Mort_F", "FP_Faction_nude_B_support_AMG_F", "FP_Faction_nude_B_support_AMort_F", "FP_Faction_nude_B_ghillie_base_F", "FP_Faction_nude_B_ghillie_lsh_F", "FP_Faction_nude_B_ghillie_sard_F", "FP_Faction_nude_B_ghillie_ard_F", "FP_Faction_nude_B_Sharpshooter_F", "FP_Faction_nude_B_Recon_Sharpshooter_F", "FP_Faction_nude_B_HeavyGunner_F", "FP_Faction_nude_B_UAV_AI", "FP_Faction_nude_B_UAV_AI_F", "FP_Faction_nude_Underwear_F", "FP_Faction_nude_FP_B_soldier_S_F", "FP_Faction_nude_FP_B_soldier_AR_S_F", "FP_Faction_nude_FP_B_soldier_SL_S_F", "FP_Faction_nude_FP_B_soldier_W_F", "FP_Faction_nude_FP_B_soldier_AR_W_F", "FP_Faction_nude_FP_B_soldier_SL_W_F", "FP_Faction_nude_B_Deck_Crew_F", "FP_Faction_nude_B_Fighter_Pilot_F", "FP_Faction_nude_B_Patrol_Soldier_TL_F", "FP_Faction_nude_B_Patrol_Soldier_UAV_F", "FP_Faction_nude_B_Patrol_Soldier_M_F", "FP_Faction_nude_B_Patrol_Medic_F", "FP_Faction_nude_B_Patrol_Soldier_AR_F", "FP_Faction_nude_B_Patrol_Soldier_MG_F", "FP_Faction_nude_B_Patrol_HeavyGunner_F", "FP_Faction_nude_B_Patrol_Soldier_A_F", "FP_Faction_nude_B_Patrol_Soldier_AT_F", "FP_Faction_nude_B_Patrol_Engineer_F", "FP_Faction_nude_B_soldier_UAV_06_F", "FP_Faction_nude_B_soldier_UAV_06_medical_F", "FP_Faction_nude_B_soldier_mine_F", "FP_Faction_nude_B_soldier_LAT2_F"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_nude_B
	{
		displayName = "Nude Blufor Faction";
		priority = 2;
		side = 1;
	};
};

class CfgGroups {
	class West {
		class FP_Faction_NUDE_B_F {
			name = "Nude Blufor";
		    class Infantry {
		        class BUS_InfSquad {
		            name = "Rifle Squad";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_SL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_F";
		                rank = "PRIVATE";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_LAT_F";
		                rank = "CORPORAL";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_M_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		            class Unit4 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_TL_F";
		                rank = "SERGEANT";
		                position[] = {-10, -10, 0};
		            };

		            class Unit5 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AR_F";
		                rank = "CORPORAL";
		                position[] = {15, -15, 0};
		            };

		            class Unit6 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_A_F";
		                rank = "PRIVATE";
		                position[] = {-15, -15, 0};
		            };

		            class Unit7 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_medic_F";
		                rank = "PRIVATE";
		                position[] = {20, -20, 0};
		            };

		        };

		        class BUS_InfSquad_Weapons {
		            name = "Weapons Squad";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_SL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AR_F";
		                rank = "PRIVATE";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_GL_F";
		                rank = "CORPORAL";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_M_F";
		                rank = "SERGEANT";
		                position[] = {10, -10, 0};
		            };

		            class Unit4 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AT_F";
		                rank = "CORPORAL";
		                position[] = {-10, -10, 0};
		            };

		            class Unit6 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AAT_F";
		                rank = "PRIVATE";
		                position[] = {15, -15, 0};
		            };

		            class Unit5 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_A_F";
		                rank = "PRIVATE";
		                position[] = {-15, -15, 0};
		            };

		            class Unit7 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_medic_F";
		                rank = "PRIVATE";
		                position[] = {20, -20, 0};
		            };

		        };

		        class BUS_InfTeam {
		            name = "Fire Team";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Soldier_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Soldier_AR_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_GL_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_LAT_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		        };

		        class BUS_InfTeam_AT {
		            name = "Anti-armor Team";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Soldier_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AT_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AT_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AAT_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		        };

		        class BUS_InfTeam_AA {
		            name = "Air-defense Team";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Soldier_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AA_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AA_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AAA_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		        };

		        class BUS_InfSentry {
		            name = "Sentry";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_GL_F";
		                rank = "CORPORAL";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_F";
		                rank = "PRIVATE";
		                position[] = {5, -5, 0};
		            };

		        };

		        class BUS_ReconTeam {
		            name = "Recon Team";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_M_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_medic_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_LAT_F";
		                rank = "CORPORAL";
		                position[] = {10, -10, 0};
		            };

		            class Unit4 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_JTAC_F";
		                rank = "PRIVATE";
		                position[] = {-10, -10, 0};
		            };

		            class Unit5 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_exp_F";
		                rank = "PRIVATE";
		                position[] = {15, -15, 0};
		            };

		        };

		        class BUS_ReconPatrol {
		            name = "Recon Patrol";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_M_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_medic_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		        };

		        class BUS_ReconSentry {
		            name = "Recon Sentry";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_M_F";
		                rank = "CORPORAL";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_F";
		                rank = "PRIVATE";
		                position[] = {5, -5, 0};
		            };

		        };

		        class BUS_SniperTeam {
		            name = "Sniper Team";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_sniper_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_spotter_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		        };

		        class BUS_InfAssault {
		            name = "Assault Squad";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Soldier_SL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AR_F";
		                rank = "PRIVATE";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_HeavyGunner_F";
		                rank = "CORPORAL";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AAR_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		            class Unit4 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_M_F";
		                rank = "PRIVATE";
		                position[] = {-10, -10, 0};
		            };

		            class Unit5 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Sharpshooter_F";
		                rank = "CORPORAL";
		                position[] = {15, -15, 0};
		            };

		            class Unit6 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_LAT_F";
		                rank = "PRIVATE";
		                position[] = {-15, -15, 0};
		            };

		            class Unit7 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_medic_F";
		                rank = "PRIVATE";
		                position[] = {20, -20, 0};
		            };

		        };

		        class BUS_ReconSquad {
		            name = "Recon Squad";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_M_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_medic_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		            class Unit4 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_LAT_F";
		                rank = "PRIVATE";
		                position[] = {-10, -10, 0};
		            };

		            class Unit5 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_JTAC_F";
		                rank = "PRIVATE";
		                position[] = {15, -15, 0};
		            };

		            class Unit6 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_recon_exp_F";
		                rank = "PRIVATE";
		                position[] = {-15, -15, 0};
		            };

		            class Unit7 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_Recon_Sharpshooter_F";
		                rank = "CORPORAL";
		                position[] = {20, -20, 0};
		            };

		        };

		        name = "Infantry";
		        class B_InfTeam_Light {
		            name = "Fire Team (Light)";
		            side = 1;
		            faction = "FP_Faction_NUDE_B";
		            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
		            class Unit0 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_TL_F";
		                rank = "SERGEANT";
		                position[] = {0, 0, 0};
		            };

		            class Unit1 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_AR_F";
		                rank = "CORPORAL";
		                position[] = {5, -5, 0};
		            };

		            class Unit2 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_F";
		                rank = "PRIVATE";
		                position[] = {-5, -5, 0};
		            };

		            class Unit3 {
		                side = 1;
		                vehicle = "FP_Faction_nude_B_soldier_LAT2_F";
		                rank = "PRIVATE";
		                position[] = {10, -10, 0};
		            };

		        };

		    };



//
		};
	};
};




class CfgVehicles {


    class B_Soldier_base_F;
    class FP_Faction_nude_B_Soldier_base_F: B_Soldier_base_F
    {
        MAKENUDE(Rifleman)
    };

    class B_Soldier_02_f;
    class FP_Faction_nude_B_Soldier_02_f: B_Soldier_02_f
    {
        MAKENUDE(Rifleman 2)
    };

    class B_Soldier_03_f;
    class FP_Faction_nude_B_Soldier_03_f: B_Soldier_03_f
    {
        MAKENUDE(Rifleman 3)
    };

    class B_Soldier_04_f;
    class FP_Faction_nude_B_Soldier_04_f: B_Soldier_04_f
    {
        MAKENUDE(Rifleman 4)
    };

    class B_Soldier_05_f;
    class FP_Faction_nude_B_Soldier_05_f: B_Soldier_05_f
    {
        MAKENUDE(Rifleman 5)
    };

    class B_Soldier_F;
    class FP_Faction_nude_B_Soldier_F: B_Soldier_F
    {
        MAKENUDE(Rifleman)
    };

    class B_RangeMaster_F;
    class FP_Faction_nude_B_RangeMaster_F: B_RangeMaster_F
    {
        MAKENUDE(Range Master)
    };

    class B_Soldier_lite_F;
    class FP_Faction_nude_B_Soldier_lite_F: B_Soldier_lite_F
    {
        MAKENUDE(Rifleman (Light))
    };

    class B_Soldier_GL_F;
    class FP_Faction_nude_B_Soldier_GL_F: B_Soldier_GL_F
    {
        MAKENUDE(Grenadier)
    };

    class B_soldier_AR_F;
    class FP_Faction_nude_B_soldier_AR_F: B_soldier_AR_F
    {
        MAKENUDE(Autorifleman)
    };

    class B_Soldier_SL_F;
    class FP_Faction_nude_B_Soldier_SL_F: B_Soldier_SL_F
    {
        MAKENUDE(Squad Leader)
    };

    class B_Soldier_TL_F;
    class FP_Faction_nude_B_Soldier_TL_F: B_Soldier_TL_F
    {
        MAKENUDE(Team Leader)
    };

    class B_soldier_M_F;
    class FP_Faction_nude_B_soldier_M_F: B_soldier_M_F
    {
        MAKENUDE(Marksman)
    };

    class B_soldier_LAT_F;
    class FP_Faction_nude_B_soldier_LAT_F: B_soldier_LAT_F
    {
        MAKENUDE(Rifleman (AT))
    };

    class B_medic_F;
    class FP_Faction_nude_B_medic_F: B_medic_F
    {
        MAKENUDE(Combat Life Saver)
    };

    class B_soldier_repair_F;
    class FP_Faction_nude_B_soldier_repair_F: B_soldier_repair_F
    {
        MAKENUDE(Repair Specialist)
    };

    class B_soldier_exp_F;
    class FP_Faction_nude_B_soldier_exp_F: B_soldier_exp_F
    {
        MAKENUDE(Explosive Specialist)
    };

    class B_Helipilot_F;
    class FP_Faction_nude_B_Helipilot_F: B_Helipilot_F
    {
        MAKENUDE(Helicopter Pilot)
    };

    class B_Soldier_A_F;
    class FP_Faction_nude_B_Soldier_A_F: B_Soldier_A_F
    {
        MAKENUDE(Ammo Bearer)
    };

    class B_soldier_AT_F;
    class FP_Faction_nude_B_soldier_AT_F: B_soldier_AT_F
    {
        MAKENUDE(Missile Specialist (AT))
    };

    class B_soldier_AA_F;
    class FP_Faction_nude_B_soldier_AA_F: B_soldier_AA_F
    {
        MAKENUDE(Missile Specialist (AA))
    };

    class B_engineer_F;
    class FP_Faction_nude_B_engineer_F: B_engineer_F
    {
        MAKENUDE(Engineer)
    };

    class B_crew_F;
    class FP_Faction_nude_B_crew_F: B_crew_F
    {
        MAKENUDE(Crewman)
    };

    class B_officer_F;
    class FP_Faction_nude_B_officer_F: B_officer_F
    {
        MAKENUDE(Officer)
    };

    class B_Competitor_F;
    class FP_Faction_nude_B_Competitor_F: B_Competitor_F
    {
        MAKENUDE(Competitor)
    };

    class B_Pilot_F;
    class FP_Faction_nude_B_Pilot_F: B_Pilot_F
    {
        MAKENUDE(Pilot)
    };

    class B_helicrew_F;
    class FP_Faction_nude_B_helicrew_F: B_helicrew_F
    {
        MAKENUDE(Helicopter Crew)
    };

    class B_soldier_PG_F;
    class FP_Faction_nude_B_soldier_PG_F: B_soldier_PG_F
    {
        MAKENUDE(Para Trooper)
    };

    class B_soldier_UAV_F;
    class FP_Faction_nude_B_soldier_UAV_F: B_soldier_UAV_F
    {
        MAKENUDE(UAV Operator)
    };

    class B_Soldier_universal_F;
    class FP_Faction_nude_B_Soldier_universal_F: B_Soldier_universal_F
    {
        MAKENUDE(Soldier)
    };

    class B_Survivor_F;
    class FP_Faction_nude_B_Survivor_F: B_Survivor_F
    {
        MAKENUDE(Survivor)
    };

    class B_Soldier_unarmed_F;
    class FP_Faction_nude_B_Soldier_unarmed_F: B_Soldier_unarmed_F
    {
        MAKENUDE(Rifleman (Unarmed))
    };

    class B_Soldier_recon_base;
    class FP_Faction_nude_B_Soldier_recon_base: B_Soldier_recon_base
    {
        MAKENUDE(Recon)
    };

    class B_recon_F;
    class FP_Faction_nude_B_recon_F: B_recon_F
    {
        MAKENUDE(Recon Scout)
    };

    class B_recon_LAT_F;
    class FP_Faction_nude_B_recon_LAT_F: B_recon_LAT_F
    {
        MAKENUDE(Recon Scout (AT))
    };

    class B_recon_exp_F;
    class FP_Faction_nude_B_recon_exp_F: B_recon_exp_F
    {
        MAKENUDE(Recon Demo Specialist)
    };

    class B_recon_medic_F;
    class FP_Faction_nude_B_recon_medic_F: B_recon_medic_F
    {
        MAKENUDE(Recon Paramedic)
    };

    class B_recon_TL_F;
    class FP_Faction_nude_B_recon_TL_F: B_recon_TL_F
    {
        MAKENUDE(Recon Team Leader)
    };

    class B_recon_M_F;
    class FP_Faction_nude_B_recon_M_F: B_recon_M_F
    {
        MAKENUDE(Recon Marksman)
    };

    class B_recon_JTAC_F;
    class FP_Faction_nude_B_recon_JTAC_F: B_recon_JTAC_F
    {
        MAKENUDE(Recon JTAC)
    };

    class B_Soldier_sniper_base_F;
    class FP_Faction_nude_B_Soldier_sniper_base_F: B_Soldier_sniper_base_F
    {
        MAKENUDE(Sniper)
    };

    class B_spotter_F;
    class FP_Faction_nude_B_spotter_F: B_spotter_F
    {
        MAKENUDE(Spotter)
    };

    class B_sniper_F;
    class FP_Faction_nude_B_sniper_F: B_sniper_F
    {
        MAKENUDE(Sniper)
    };

    class b_soldier_survival_F;
    class FP_Faction_nude_b_soldier_survival_F: b_soldier_survival_F
    {
        MAKENUDE(Survival Fatigues)
    };

    class B_Soldier_support_base_F;
    class FP_Faction_nude_B_Soldier_support_base_F: B_Soldier_support_base_F
    {
        MAKENUDE(Support)
    };

    class B_soldier_AAR_F;
    class FP_Faction_nude_B_soldier_AAR_F: B_soldier_AAR_F
    {
        MAKENUDE(Asst. Autorifleman)
    };

    class B_soldier_AAT_F;
    class FP_Faction_nude_B_soldier_AAT_F: B_soldier_AAT_F
    {
        MAKENUDE(Asst. Missile Specialist (AT))
    };

    class B_soldier_AAA_F;
    class FP_Faction_nude_B_soldier_AAA_F: B_soldier_AAA_F
    {
        MAKENUDE(Asst. Missile Specialist (AA))
    };

    class B_support_MG_F;
    class FP_Faction_nude_B_support_MG_F: B_support_MG_F
    {
        MAKENUDE(Gunner (HMG))
    };

    class B_support_GMG_F;
    class FP_Faction_nude_B_support_GMG_F: B_support_GMG_F
    {
        MAKENUDE(Gunner (GMG))
    };

    class B_support_Mort_F;
    class FP_Faction_nude_B_support_Mort_F: B_support_Mort_F
    {
        MAKENUDE(Gunner (Mk6))
    };

    class B_support_AMG_F;
    class FP_Faction_nude_B_support_AMG_F: B_support_AMG_F
    {
        MAKENUDE(Asst. Gunner (HMG/GMG))
    };

    class B_support_AMort_F;
    class FP_Faction_nude_B_support_AMort_F: B_support_AMort_F
    {
        MAKENUDE(Asst. Gunner (Mk6))
    };

    class B_ghillie_base_F;
    class FP_Faction_nude_B_ghillie_base_F: B_ghillie_base_F
    {
        MAKENUDE(Sniper)
    };

    class B_ghillie_lsh_F;
    class FP_Faction_nude_B_ghillie_lsh_F: B_ghillie_lsh_F
    {
        MAKENUDE(Sniper (Lush))
    };

    class B_ghillie_sard_F;
    class FP_Faction_nude_B_ghillie_sard_F: B_ghillie_sard_F
    {
        MAKENUDE(Sniper (Semi-Arid))
    };

    class B_ghillie_ard_F;
    class FP_Faction_nude_B_ghillie_ard_F: B_ghillie_ard_F
    {
        MAKENUDE(Sniper (Arid))
    };

    class B_Sharpshooter_F;
    class FP_Faction_nude_B_Sharpshooter_F: B_Sharpshooter_F
    {
        MAKENUDE(Sharpshooter)
    };

    class B_Recon_Sharpshooter_F;
    class FP_Faction_nude_B_Recon_Sharpshooter_F: B_Recon_Sharpshooter_F
    {
        MAKENUDE(Recon Sharpshooter)
    };

    class B_HeavyGunner_F;
    class FP_Faction_nude_B_HeavyGunner_F: B_HeavyGunner_F
    {
        MAKENUDE(Heavy Gunner)
    };

    class B_UAV_AI;
    class FP_Faction_nude_B_UAV_AI: B_UAV_AI
    {
        MAKENUDE(AI)
    };

    class B_UAV_AI_F;
    class FP_Faction_nude_B_UAV_AI_F: B_UAV_AI_F
    {
        MAKENUDE(AI)
    };

    class Underwear_F;
    class FP_Faction_nude_Underwear_F: Underwear_F
    {
        MAKENUDE(TEST: Underwear)
    };

    class FP_B_soldier_S_F;
    class FP_Faction_nude_FP_B_soldier_S_F: FP_B_soldier_S_F
    {
        MAKENUDE(Rifleman (Sage))
    };

    class FP_B_soldier_AR_S_F;
    class FP_Faction_nude_FP_B_soldier_AR_S_F: FP_B_soldier_AR_S_F
    {
        MAKENUDE(Autorifleman (Sage))
    };

    class FP_B_soldier_SL_S_F;
    class FP_Faction_nude_FP_B_soldier_SL_S_F: FP_B_soldier_SL_S_F
    {
        MAKENUDE(Squad Leader (Sage))
    };

    class FP_B_soldier_W_F;
    class FP_Faction_nude_FP_B_soldier_W_F: FP_B_soldier_W_F
    {
        MAKENUDE(Rifleman (Woodland))
    };

    class FP_B_soldier_AR_W_F;
    class FP_Faction_nude_FP_B_soldier_AR_W_F: FP_B_soldier_AR_W_F
    {
        MAKENUDE(Autorifleman (Woodland))
    };

    class FP_B_soldier_SL_W_F;
    class FP_Faction_nude_FP_B_soldier_SL_W_F: FP_B_soldier_SL_W_F
    {
        MAKENUDE(Squad Leader (Woodland))
    };

    class B_Deck_Crew_F;
    class FP_Faction_nude_B_Deck_Crew_F: B_Deck_Crew_F
    {
        MAKENUDE(Deck Crew)
    };

    class B_Fighter_Pilot_F;
    class FP_Faction_nude_B_Fighter_Pilot_F: B_Fighter_Pilot_F
    {
        MAKENUDE(Fighter Pilot)
    };

    class B_Patrol_Soldier_TL_F;
    class FP_Faction_nude_B_Patrol_Soldier_TL_F: B_Patrol_Soldier_TL_F
    {
        MAKENUDE(Team Leader)
    };

    class B_Patrol_Soldier_UAV_F;
    class FP_Faction_nude_B_Patrol_Soldier_UAV_F: B_Patrol_Soldier_UAV_F
    {
        MAKENUDE(UAV Operator)
    };

    class B_Patrol_Soldier_M_F;
    class FP_Faction_nude_B_Patrol_Soldier_M_F: B_Patrol_Soldier_M_F
    {
        MAKENUDE(Marksman)
    };

    class B_Patrol_Medic_F;
    class FP_Faction_nude_B_Patrol_Medic_F: B_Patrol_Medic_F
    {
        MAKENUDE(Combat Life Saver)
    };

    class B_Patrol_Soldier_AR_F;
    class FP_Faction_nude_B_Patrol_Soldier_AR_F: B_Patrol_Soldier_AR_F
    {
        MAKENUDE(Autorifleman)
    };

    class B_Patrol_Soldier_MG_F;
    class FP_Faction_nude_B_Patrol_Soldier_MG_F: B_Patrol_Soldier_MG_F
    {
        MAKENUDE(Machine Gunner)
    };

    class B_Patrol_HeavyGunner_F;
    class FP_Faction_nude_B_Patrol_HeavyGunner_F: B_Patrol_HeavyGunner_F
    {
        MAKENUDE(Heavy Gunner)
    };

    class B_Patrol_Soldier_A_F;
    class FP_Faction_nude_B_Patrol_Soldier_A_F: B_Patrol_Soldier_A_F
    {
        MAKENUDE(Ammo Bearer)
    };

    class B_Patrol_Soldier_AT_F;
    class FP_Faction_nude_B_Patrol_Soldier_AT_F: B_Patrol_Soldier_AT_F
    {
        MAKENUDE(Missile Specialist (AT))
    };

    class B_Patrol_Engineer_F;
    class FP_Faction_nude_B_Patrol_Engineer_F: B_Patrol_Engineer_F
    {
        MAKENUDE(Engineer)
    };

    class B_soldier_UAV_06_F;
    class FP_Faction_nude_B_soldier_UAV_06_F: B_soldier_UAV_06_F
    {
        MAKENUDE(UAV Operator (AL-6))
    };

    class B_soldier_UAV_06_medical_F;
    class FP_Faction_nude_B_soldier_UAV_06_medical_F: B_soldier_UAV_06_medical_F
    {
        MAKENUDE(UAV Operator (AL-6, Medical))
    };

    class B_soldier_mine_F;
    class FP_Faction_nude_B_soldier_mine_F: B_soldier_mine_F
    {
        MAKENUDE(Mine Specialist)
    };

    class B_soldier_LAT2_F;
    class FP_Faction_nude_B_soldier_LAT2_F: B_soldier_LAT2_F
    {
        MAKENUDE(Rifleman (Light AT))
    };

};
