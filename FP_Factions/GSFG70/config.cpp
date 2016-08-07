class CfgPatches
{
	class FP_Factions_GSFG70
	{
		units[] = {"FP_Faction_GSFG70_Soldier_BASE","FP_Faction_GSFG70_Rifleman","FP_Faction_GSFG70_AR","FP_Faction_GSFG70_AAR","FP_Faction_GSFG70_SL","FP_Faction_GSFG70_TL","FP_Faction_GSFG70_DM","FP_Faction_GSFG70_RAT","FP_Faction_GSFG70_Medic","FP_Faction_GSFG70_Crewman","FP_Faction_GSFG70_Engineer","FP_Faction_GSFG70_MMG","FP_Faction_GSFG70_AMMG","FP_Faction_GSFG70_MAT","FP_Faction_GSFG70_AMAT","FP_Faction_GSFG70_MANPADS","FP_Faction_GSFG70_AMANPADS","FP_Faction_GSFG70_Vehicle_BTR60","FP_Faction_GSFG70_Vehicle_BMP1","FP_Faction_GSFG70_Vehicle_T55"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_RPG7", "CUP_TrackedVehicles_BMP", "CUP_TrackedVehicles_T55", "CUP_WheeledVehicles_BTR60"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_GSFG70
	{
		displayName = "Soviet Union (1970)";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\GSFG70\cfgfactionclasses_ussr_ca.paa";
		flag = "\FP_Factions\GSFG70\flag_ussr.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_GSFG70_Units
		{
			name = "Soviet Union (1970)";
			class Infantry
			{
				name = "Soviet Union (1970) Infantry";
				class GSFG70_Riflesquad
				{
					name = "Rifle Section";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class GSFG70_RiflesquadMarksman
				{
					name = "Rifle Section (Marksman)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_DM";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class GSFG70_WeaponsSquad
				{
					name = "Machinegun Section";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class GSFG70_Patrol
				{
					name = "Rifle Patrol";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class GFSG70_RifleSentry
				{
					name = "Sentries";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class GFSG70_PltHQ
				{
					name = "Platoon HQ";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Motorized
			{
				name = "Soviet Union (1970) Motorized Infantry";
				class GSFG70_MotoRiflesquad
				{
					name = "Motorized Rifle Section (BTR-60)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BTR60";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GSFG70_MotoRiflesquadMarksman
				{
					name = "Motorized Rifle Section (Marksman/BTR-60)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_DM";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BTR60";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GSFG70_MotoWeaponsSquad
				{
					name = "Motorized Machinegun Section (BTR-60)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BTR60";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GFSG70_MotoPltHQ
				{
					name = "Motorized Platoon HQ (BTR-60)";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BTR60";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class GFSG70_MotoMANPADSTeam
				{
					name = "Motorized MANPADS Team (BTR-60)";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BTR60";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};
            };
			class Mechanized
			{
				name = "Soviet Union (1970) Mechanized Infantry";
				class GSFG70_MechRiflesquad
				{
					name = "Mechanized Rifle Section (BMP-1)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BMP1";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GSFG70_MechRiflesquadMarksman
				{
					name = "Mechanized Rifle Section (Marksman/BMP-1)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_DM";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BMP1";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GSFG70_MechWeaponsSquad
				{
					name = "Mechanized Machinegun Section (BMP-1)";
					side = 0;
					faction = "FP_Faction_GSFG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BMP1";
						rank = "CORPORAL";
						position[] = {20,-15,0};
					};
				};
				class GFSG70_MechPltHQ
				{
					name = "Mechanized Platoon HQ (BMP-1)";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Medic";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BMP1";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
				};
				class GFSG70_MechMANPADSTeam
				{
					name = "Mechanized MANPADS Team (BMP-1)";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMANPADS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Vehicle_BMP1";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
				};
            };
			class Support
			{
				name = "Soviet Union (1970) Company Attachments";
				class GFSG70_DoctorTeam
				{
					name = "Doctor Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Medic";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Medic";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class GFSG70_MMGTeam
				{
					name = "MMG Team";
					side = 0;
					faction = "FP_Faction_PLA";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MMG";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMMG";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class GFSG70_EngineerTeam
				{
					name = "Engineering Support Team";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Engineer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Engineer";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_Engineer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class GFSG70_MATTeam
				{
					name = "MAT Team";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MAT";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMAT";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				class GFSG70_MANPADSTeam
				{
					name = "MANPADS Team";
					side = 0;
					faction = "FP_Faction_GFSG70";
					class Unit0
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_MANPADS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "FP_Faction_GSFG70_AMANPADS";
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
	class CUP_B_CivPack_WDL;
	class B_Carryall_cbr_Eng_GSFG70: B_Carryall_cbr
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
	class CUP_B_CivPack_WDL_GSFG70_AAR: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_75Rnd_762x39_m_rpk
			{
				magazine = "hlc_75Rnd_762x39_m_rpk";
				count = 5;
			};
		};
	};
	class CUP_B_CivPack_WDL_GSFG70_MMG: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_100rnd_korob_pkp
			{
				magazine = "100rnd_korob_pkp";
				count = 4;
			};
		};
	};
	class CUP_B_CivPack_WDL_GSFG70_MAT: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7VL_M
			{
				magazine = "CUP_PG7VL_M";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_GSFG70_MANPADS: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_Strela_2_M
			{
				magazine = "CUP_Strela_2_M";
				count = 1;
			};
		};
	};
	class B_Carryall_cbr_Exp_GSFG70: B_Carryall_cbr
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
	class FP_Faction_GSFG70_Soldier_BASE: B_Soldier_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};
		faceType = "Man_A3";
		side = 0;
		faction = "FP_Faction_GSFG70";
		genericNames = "RussianMen";
		vehicleClass = "Men";
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
		model = "\A3\characters_F\OPFOR\o_officer.p3d";
		uniformClass = "FP_Uniform_SovUniform_Private";  
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class FP_Faction_GSFG70_Rifleman: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Faction_GSFG70_Soldier_BASE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Conscript Rifleman";
		cost = 100000;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_AR: FP_Faction_GSFG70_Soldier_BASE
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
		displayName = "Automatic Rifleman";
		uniformClass = "FP_Uniform_SovUniform_Private"; 
		weapons[] = {"hlc_rifle_rpk","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","RH_mak","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_AAR: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "CUP_B_CivPack_WDL_GSFG70_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_GSFG70_SL: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		uniformClass = "FP_Uniform_SovUniform_Sergeant";
		weapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_TL: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		uniformClass = "FP_Uniform_SovUniform_Private";
		weapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_DM: FP_Faction_GSFG70_Soldier_BASE
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
		displayName = "Designated Marksman";
		uniformClass = "FP_Uniform_SovUniform_Private";
		weapons[] = {"CUP_srifle_SVD_FPFac_PSO","RH_mak","Throw","Put"};
		respawnWeapons[] = {"CUP_srifle_SVD_FPFac_PSO","RH_mak","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 150000;
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_RAT: FP_Faction_GSFG70_Soldier_BASE
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
		displayName = "Antitank Grenadier";
		uniformClass = "FP_Uniform_SovUniform_Private";
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_Medic: FP_Faction_GSFG70_Soldier_BASE
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
		uniformClass = "FP_Uniform_SovUniform_Private";
		weapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {="hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_Crewman: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		camouflage = 1.6;
		sensitivity = 2.4;
		cost = 90000;
	    linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"CUP_H_TK_TankerHelmet"};
	};
	class FP_Faction_GSFG70_Engineer: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "Toadie";
		scope = 2;
		scopeCurator = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		sensitivity = 2.4;
		backpack = "B_Carryall_cbr_Eng_GSFG70";
		weapons[] = {"hlc_rifle_akm","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_MMG: FP_Faction_GSFG70_Soldier_BASE
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
		uniformClass = "FP_Uniform_SovUniform_Private";
		weapons[] = {"str_pkm","RH_mak","Throw","Put"};
		respawnWeapons[] = {"str_pkm","RH_mak","Throw","Put"};
		magazines[] = {"100rnd_korob_pkp","100rnd_korob_pkp","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"100rnd_korob_pkp","100rnd_korob_pkp","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","HandGrenade","HandGrenade","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_gue_ind_webb","H_mas_gue_HelmetO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_AMMG: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "CUP_B_CivPack_WDL_GSFG70_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_GSFG70_MAT: FP_Faction_GSFG70_Soldier_BASE
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
		uniformClass = "FP_Uniform_SovUniform_Private";
		backpack = "CUP_B_CivPack_WDL_GSFG70_MAT";
		weapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V_gsfgpgo","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_RPG7V_gsfgpgo","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_AMAT: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "CUP_B_CivPack_WDL_GSFG70_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_GSFG70_MANPADS: FP_Faction_GSFG70_Soldier_BASE
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
		uniformClass = "FP_Uniform_SovUniform_Private";
		backpack = "B_Carryall_cbr_GSFG70_MANPADS";
		weapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RDG2","FP_HandGrenade_RDG2"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
	};
	class FP_Faction_GSFG70_AMANPADS: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_Carryall_cbr_GSFG70_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"H_mas_gue_HelmetO","H_mas_gue_HelmetO"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class CUP_O_BTR60_TK;
	class FP_Faction_GSFG70_Vehicle_BTR60: CUP_O_BTR60_TK
	{
		author = "FP Mod Team";
		faction = "FP_Faction_GSFG70";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_GSFG70_Crewman";
		hiddenSelectionsTextures[] = {"FP_Factions\GSFG70\btr60_gsfg70_1_co.paa","FP_Factions\GSFG70\btr60_cdf1_2_co.paa"};
	};
	class CUP_I_BMP1_TK_GUE;
	class FP_Faction_GSFG70_Vehicle_BMP1: CUP_I_BMP1_TK_GUE
	{
		author = "FP Mod Team";
		faction = "FP_Faction_GSFG70";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_GSFG70_Crewman";
		side = 0;
	};
	class CUP_I_T55_TK_GUE;
	class FP_Faction_GSFG70_Vehicle_T55: CUP_I_T55_TK_GUE
	{
		author = "FP Mod Team";
		faction = "FP_Faction_GSFG70";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_GSFG70_Crewman";
		side = 0;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class CUP_launch_RPG7V;
	class CUP_launch_RPG7V_gsfgpgo: CUP_launch_RPG7V
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "CUP_optic_PGO7V2";
				slot = "CowsSlot";
			};
		};
	};
};


