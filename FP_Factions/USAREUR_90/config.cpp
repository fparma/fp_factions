class CfgPatches
{
	class FP_Factions_USAREUR90
	{
		units[] = {"FP_Faction_USAREUR90_Soldier_BASE","FP_Faction_USAREUR90_Rifleman","FP_Faction_USAREUR90_AR","FP_Faction_USAREUR90_AAR","FP_Faction_USAREUR90_SL","FP_Faction_USAREUR90_TL","FP_Faction_USAREUR90_DM","FP_Faction_USAREUR90_RAT","FP_Faction_USAREUR90_Medic","FP_Faction_USAREUR90_Crewman","FP_Faction_USAREUR90_Engineer","FP_Faction_USAREUR90_MMG","FP_Faction_USAREUR90_AMMG","FP_Faction_USAREUR90_MAT","FP_Faction_USAREUR90_AMAT","FP_Faction_USAREUR90_MANPADS","FP_Faction_USAREUR90_AMANPADS","FP_Faction_USAREUR90_Rifleman_D","FP_Faction_USAREUR90_AR_D","FP_Faction_USAREUR90_AAR_D","FP_Faction_USAREUR90_SL_D","FP_Faction_USAREUR90_TL_D","FP_Faction_USAREUR90_DM_D","FP_Faction_USAREUR90_RAT_D","FP_Faction_USAREUR90_Medic_D","FP_Faction_USAREUR90_Crewman_D","FP_Faction_USAREUR90_Engineer_D","FP_Faction_USAREUR90_MMG_D","FP_Faction_USAREUR90_AMMG_D","FP_Faction_USAREUR90_MAT_D","FP_Faction_USAREUR90_AMAT_D","FP_Faction_USAREUR90_MANPADS_D","FP_Faction_USAREUR90_AMANPADS_D","FP_Faction_USAREUR90_Vehicle_Gavin","FP_Faction_USAREUR90_Vehicle_M163","FP_Faction_USAREUR90_Vehicle_HumveeM2","FP_Faction_USAREUR90_Vehicle_Humvee","FP_Faction_USAREUR90_Vehicle_M60A3","FP_Faction_USAREUR90_Vehicle_M1","FP_Faction_USAREUR90_Vehicle_M2A1","FP_Faction_USAREUR90_Vehicle_TOW","FP_Faction_USAREUR90_Vehicle_M2A1_d"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_TrackedVehicles_M113", "cwr2_M60_tank", "CUP_TrackedVehicles_Bradley", "CUP_TrackedVehicles_M1_Abrams", "CUP_WheeledVehicles_HMMWV"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_USAREUR90
	{
		displayName = "USA (1990)";
		priority = 2;
		side = 1;
		icon = "\FP_Factions\USAREUR_60\cfgFactionClasses_usa_ca.paa";
		flag = "\FP_Factions\USAREUR_60\flag_usa.paa";
	};
};
class CfgGroups
{
	class West
	{
		class FP_Faction_USAREUR90_Units
		{
			name = "USA (1990)";
			class Infantry
			{
				name = "USA (1990) Infantry";
				class USAREUR90_Riflesquad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_WeaponsSquad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_Patrol
				{
					name = "Rifle Patrol";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_RifleSentry
				{
					name = "Sentries";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class USAREUR90_PltHQ
				{
					name = "Platoon HQ";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
				};
			};
			class InfantryDesert
			{
				name = "USA (1990) Infantry Desert";				
				class USAREUR90_Riflesquad_des
				{
					name = "Rifle Squad (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR_D";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT_D";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_WeaponsSquad_des
				{
					name = "Weapons Squad (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG_D";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG_D";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT_D";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG_D";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class USAREUR90_Patrol_des
				{
					name = "Rifle Patrol (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_RifleSentry_des
				{
					name = "Sentries (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class USAREUR90_PltHQ_des
				{
					name = "Platoon HQ (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL_D";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
				};
			};
			class Mechanized
			{
				name = "USA (1990) Mechanized Infantry";
				class USAREUR90_MechRiflesquad
				{
					name = "Mechanized Rifle Squad (M2A1)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_M2A1";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechWeaponsSquad
				{
					name = "Mechanized Weapons Squad (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechPltHQ
				{
					name = "Mechanized Platoon HQ (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
				class USAREUR90_MANPADSTeam
				{
					name = "Mechanized MANPADS Team (Gavin)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_Gavin";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class MechanizedDesert
			{
				name = "USA (1990) Mechanized Infantry Desert";
				class USAREUR90_MechRiflesquad_des
				{
					name = "Mechanized Rifle Squad (M2A1/Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AR_D";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT_D";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_M2A1_d";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechWeaponsSquad_des
				{
					name = "Mechanized Weapons Squad (M2A1/Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG_D";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG_D";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_RAT_D";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG_D";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_M2A1_d";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class USAREUR90_MechPltHQ_des
				{
					name = "Mechanized Platoon HQ (M2A1/Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_SL_D";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {10,-4,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_M2A1_d";
						rank = "PRIVATE";
						position[] = {15,-6,0};
					};
				};
				class USAREUR90_MANPADSTeam_des
				{
					name = "Mechanized MANPADS Team (M2A1/Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Vehicle_M2A1_d";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class Support
			{
				name = "USA (1990) Company Attachments";
				class USAREUR90_DoctorTeam
				{
					name = "Medical Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MMGTeam
				{
					name = "MMG Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MATTeam
				{
					name = "MAT Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class SupportDes
			{
				name = "USA (1990) Company Attachments Desert";
				class USAREUR90_DoctorTeam_Des
				{
					name = "Medical Team (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Medic_D";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Rifleman_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MMGTeam_Des
				{
					name = "MMG Team (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MMG_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMMG_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_EngineerTeam_Des
				{
					name = "Engineering Support Team (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_TL_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer_D";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_Engineer_D";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class USAREUR90_MATTeam_Des
				{
					name = "MAT Team (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MAT_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMAT_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class USAREUR90_MANPADSTeam_Des
				{
					name = "MANPADS Team (Desert)";
					side = 1;
					faction = "FP_Faction_USAREUR90";
					class Unit0
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_MANPADS_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "FP_Faction_USAREUR90_AMANPADS_D";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};
class cfgvehicles
{
	class B_Carryall_cbr;
	class CUP_B_AlicePack_Khaki;
	class B_Carryall_cbr_Eng_USAREUR90: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_AAR_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = 5;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_MMG_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M";
				count = 4;
			};
		};
	};
	class CUP_B_AlicePack_Khaki_MAT_USAREUR90: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VL_mag
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
	};
	class B_FieldPack_cbr_MANPADS_USAREUR90: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
			{
				magazine = "CUP_launch_FIM92Stinger";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_Exp_USAREUR90: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class B_Soldier_F;
	class FP_Faction_USAREUR90_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_CIVIL_male"};
		faceType = "Man_A3";
		side = 1;
		faction = "FP_Faction_USAREUR90";
		genericNames = "NATOMen";
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 2.3;
		sensitivity = 3;
		threat[] = {1,0.1,0.1};
		camouflage = 1.4;
		minFireTime = 7;
		cost = 40000;
		canCarryBackPack = 1;
		scope = 0;
		scopeCurator = 0;
		model = "\us_military_units\usm_uniform_bdu.p3d";
		uniformClass = "usm_bdu_w";  
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_Rifleman: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_USAREUR90_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_AR: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Automatic Rifleman";
		weapons[] = {"CUP_lmg_minimi","RH_m9","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_minimi","RH_m9","Throw","Put"};
		magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"usm_vest_pasgt_lbv_mg","usm_helmet_pasgt_g_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbv_mg","usm_helmet_pasgt_g_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_g_w","usm_helmet_pasgt_g_w"};
	};
	class FP_Faction_USAREUR90_AAR: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_AlicePack_Khaki_AAR_USAREUR90";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_SL: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Squad Leader";
		weapons[] = {"RH_M16A2gl","RH_m9","Throw","Put","Binocular"};
		respawnWeapons[] = {"RH_M16A2gl","RH_m9","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"usm_vest_pasgt_lbv_gr","usm_bdu_8point_wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbv_gr","usm_bdu_8point_wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"usm_bdu_8point_wdl","usm_bdu_8point_wdl"};
	};
	class FP_Faction_USAREUR90_TL: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Team Leader";
		weapons[] = {"RH_M16A2gl","RH_m9","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2gl","RH_m9","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"usm_vest_pasgt_lbv_gr","usm_helmet_pasgt_g_w","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbv_gr","usm_helmet_pasgt_g_w","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_DM: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Designated Marksman";
		weapons[] = {"hlc_rifle_M21_USAREUR90_marksman","RH_m9","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_M21_USAREUR90_marksman","RH_m9","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 150000;
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_RAT: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Rifleman Antitank";
		weapons[] = {"RH_M16A2","CUP_launch_M136","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","CUP_launch_M136","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","CUP_M136_M","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_Medic: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Medic";
		attendant = 1;
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_Crewman: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "Crewman";
		weapons[] = {"RH_M16A2","RH_m9","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","RH_m9","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_HelmetCrew_I"};
	};
	class FP_Faction_USAREUR90_Engineer: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		backpack = "B_Carryall_cbr_Eng_USAREUR90";
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_MMG: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MMG Gunner";
		weapons[] = {"CUP_lmg_M240","RH_m9","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_M240","RH_m9","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","RH_15Rnd_9x19_M9","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"usm_vest_pasgt_lbv_mg","usm_helmet_pasgt_g_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbv_mg","usm_helmet_pasgt_g_w","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_AMMG: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MMG Assistant";
		backpack = "CUP_B_AlicePack_Khaki_MMG_USAREUR90";
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_MAT: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MAT Gunner";
		backpack = "CUP_B_AlicePack_Khaki_MAT_USAREUR90";
		weapons[] = {"RH_M16A2","launch_B_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","launch_B_Titan_short_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_AMAT: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MAT Assistant";
		backpack = "CUP_B_AlicePack_Khaki_MAT_USAREUR90";
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_MANPADS: FP_Faction_USAREUR90_Soldier_BASE
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
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MANPADS Gunner";
		backpack = "B_FieldPack_khk_MANPADS_USAREUR90";
		weapons[] = {"RH_M16A2","CUP_launch_FIM92Stinger","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","CUP_launch_FIM92Stinger","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
	};
	class FP_Faction_USAREUR90_AMANPADS: FP_Faction_USAREUR90_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_woodland";
	    editorSubcategory = "fp_men_woodland_EdSubcat";
		displayName = "MANPADS Assistant";
		backpack = "B_FieldPack_khk_MANPADS_USAREUR90";
		weapons[] = {"RH_M16A2","Throw","Put"};
		respawnWeapons[] = {"RH_M16A2","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShellRed"};
		headgearProbability = 100;
		allowedHeadgear[] = {"usm_helmet_pasgt_w","usm_helmet_pasgt_w"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_USAREUR90_Rifleman_D: FP_Faction_USAREUR90_Rifleman
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_AR_D: FP_Faction_USAREUR90_AR
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_AAR_D: FP_Faction_USAREUR90_AAR
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_TL_D: FP_Faction_USAREUR90_TL
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_SL_D: FP_Faction_USAREUR90_SL
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_DM_D: FP_Faction_USAREUR90_DM
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_RAT_D: FP_Faction_USAREUR90_RAT
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_Medic_D: FP_Faction_USAREUR90_Medic
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_Crewman_D: FP_Faction_USAREUR90_Crewman
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_Engineer_D: FP_Faction_USAREUR90_Engineer
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_MMG_D: FP_Faction_USAREUR90_MMG
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_AMMG_D: FP_Faction_USAREUR90_AMMG
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_MAT_D: FP_Faction_USAREUR90_MAT
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_AMAT_D: FP_Faction_USAREUR90_AMAT
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_g_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_MANPADS_D: FP_Faction_USAREUR90_MANPADS
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_USAREUR90_AMANPADS_D: FP_Faction_USAREUR90_AMANPADS
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "fp_men_desert";
	    editorSubcategory = "fp_men_desert_EdSubcat";
		headgearProbability = 100;
		uniformClass = "usm_bdu_dcu";
		linkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"usm_vest_pasgt_lbe_rmp","usm_helmet_pasgt_dcu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CUP_B_M113_USA;
    class CUP_B_M163_USA;
    class CUP_B_HMMWV_M2_USMC;
	class CUP_B_HMMWV_Unarmed_USMC;
	class CUP_B_HMMWV_TOW_USMC;
	class cwr2_M60A3_USMC;
	class CUP_B_M1A1_Woodland_USMC;
	class CUP_B_M2Bradley_USA_W;
	class CUP_B_M2Bradley_USA_D;
	class FP_Faction_USAREUR90_Vehicle_Gavin: CUP_B_M113_USA
	{
	    displayName = "Gavin";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
		transportAmmo = 0;
	};
	class FP_Faction_USAREUR90_Vehicle_M163: CUP_B_M163_USA
	{
	    displayName = "M163 PIVADS";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_M60A3: cwr2_M60A3_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_M1: CUP_B_M1A1_Woodland_USMC
	{
	    displayName = "M1 Abrams";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_M2A1: CUP_B_M2Bradley_USA_W
	{
	    displayName = "M2A1 Bradley";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_M2A1_d: CUP_B_M2Bradley_USA_D
	{
	    displayName = "M2A1 Bradley (Desert)";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_USAREUR90_Crewman";
	};
	class FP_Faction_USAREUR90_Vehicle_HumveeM2: CUP_B_HMMWV_M2_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		vehicleClass = "Car";
		crew = "FP_Faction_USAREUR90_Rifleman";
	};
	class FP_Faction_USAREUR90_Vehicle_TOW: CUP_B_HMMWV_TOW_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		vehicleClass = "Car";
		crew = "FP_Faction_USAREUR90_Rifleman";
	};
	class FP_Faction_USAREUR90_Vehicle_Humvee: CUP_B_HMMWV_Unarmed_USMC
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_USAREUR90";
		vehicleClass = "Car";
		crew = "FP_Faction_USAREUR90_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class hlc_rifle_M21;
	class hlc_rifle_M21_USAREUR90_marksman: hlc_rifle_M21
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "hlc_optic_LRT_m14";
				slot = "CowsSlot";
			};
		};
	};
};