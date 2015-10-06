class CfgPatches
{
	class FP_Factions_GSFG70
	{
		units[] = {"FP_Faction_GSFG70_Soldier_BASE","FP_Faction_GSFG70_Rifleman","FP_Faction_GSFG70_AR","FP_Faction_GSFG70_AAR","FP_Faction_GSFG70_SL","FP_Faction_GSFG70_TL","FP_Faction_GSFG70_DM","FP_Faction_GSFG70_RAT","FP_Faction_GSFG70_Medic","FP_Faction_GSFG70_Crewman","FP_Faction_GSFG70_Engineer","FP_Faction_GSFG70_MMG","FP_Faction_GSFG70_AMMG","FP_Faction_GSFG70_MAT","FP_Faction_GSFG70_AMAT","FP_Faction_GSFG70_MANPADS","FP_Faction_GSFG70_AMANPADS","FP_Faction_GSFG70_Vehicle_GAZ66","FP_Faction_GSFG70_Vehicle_UAZ496","FP_Faction_GSFG70_Vehicle_BTR60","FP_Faction_GSFG70_Vehicle_BMP1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","rhs_c_weapons","FP_communitymods","PLA_weapons"};
	};
};
class CfgFactionClasses
{
	class FP_Faction_GSFG70
	{
		displayName = "GSFG 1970";
		priority = 2;
		side = 0;
		icon = "\FP_Factions\GSFG\cfgfactionclasses_ussr_ca.paa";
		flag = "\FP_Factions\GSFG\flag_ussr.paa";
	};
};
class CfgGroups
{
	class East
	{
		class FP_Faction_GSFG70_Units
		{
			name = "GFSG (1970)";
			class Infantry
			{
				name = "GSFG Infantry";
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
				name = "GSFG Motorized Infantry";
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
				name = "GSFG Mechanized Infantry";
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
				name = "GFSG70 Company Attachments";
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
	class rhs_sidor;
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
	class rhs_sidor_GSFG70_AAR: rhs_sidor
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
	class rhs_sidor_GSFG70_MMG: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine = "rhs_100Rnd_762x54mmR";
				count = 4;
			};
		};
	};
	class rhs_sidor_GSFG70_MAT: rhs_sidor
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7VL_mag
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 3;
			};
		};
	};
	class B_Carryall_cbr_GSFG70_MANPADS: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_mag_9k38_rocket
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
	class Man;
	class SoldierEB: Man{};
	class O_Soldier_base_F: SoldierEB
	{
		class Eventhandlers;
	};
	class FP_Faction_GSFG70_Soldier_BASE: O_Soldier_base_F
	{
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		armorStructural = 5;
		author = "FP Mod Team";
		expansion = 1;
		identityTypes[] = {"LanguageRUS", "Head_Euro", "rhs_scarf"};
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
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		uniformClass = "FP_Uniform_KLMKM88";  
		weapons[] = {"hlc_rifle_akm2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
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
		weapons[] = {"hlc_rifle_rpk","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_rpk","RH_mak","Throw","Put"};
		magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"rhs_6b23_rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"LOP_H_SSh68Helmet_OLV","LOP_H_SSh68Helmet_OLV"};
	};
	class FP_Faction_GSFG70_AAR: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Assistant Automatic Rifleman";
		backpack = "rhs_sidor_GSFG70_AAR";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class FP_Faction_GSFG70_SL: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Squad Leader";
		weapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put","Binocular"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put","Binocular"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"rhs_6b23_engineer","FP_Helmet_VSRSSH68","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_engineer","FP_Helmet_VSRSSH68","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		identitytypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
		headgearProbability = 80;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
	};
	class FP_Faction_GSFG70_TL: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Team Leader";
		weapons[] = {"hlc_rifle_akm2","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 450000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManLeader";
		linkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 90;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
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
		weapons[] = {"rhs_weap_svdp_gsfgpso","RH_mak","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_svdp_gsfgpso","RH_mak","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 150000;
		linkedItems[] = {"rhs_6b23_sniper","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_sniper","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 3;
		headgearProbability = 60;
		allowedHeadgear[] = {"LOP_H_SSh68Helmet_OLV","LOP_H_SSh68Helmet_OLV"};
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
		weapons[] = {"hlc_rifle_akm2","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","FP_HandGrenade_RKG3EM","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
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
		weapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {="hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		backpack = "B_FieldPack_cbr_Medic";
		cost = 300000;
		camouflage = 1.6;
		linkedItems[] = {"rhs_6b23_medic","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_medic","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		sensitivity = 2.4;
		icon = "iconManMedic";
		picture = "pictureHeal";
		headgearProbability = 100;
		allowedHeadgear[] = {"LOP_H_SSh68Helmet_OLV","LOP_H_SSh68Helmet_OLV"};
	};
	class FP_Faction_GSFG70_Crewman: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "Crewman";
		weapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","RH_mak","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		camouflage = 1.6;
		sensitivity = 2.4;
		linkedItems[] = {"rhs_6b23_rifleman","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		cost = 90000;
	    linkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"rhs_tsh4"};
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
		weapons[] = {"hlc_rifle_akms","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akms","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
	    linkedItems[] = {"rhs_6b23_engineer","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_engineer","LOP_H_SSh68Helmet_OLV","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		icon = "iconManEngineer";
		picture = "pictureRepair";
		headgearProbability = 100;
		allowedHeadgear[] = {"LOP_H_SSh68Helmet_OLV","LOP_H_SSh68Helmet_OLV"};
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
		weapons[] = {"rhs_weap_pkm","RH_mak","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","RH_mak","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","RH_8Rnd_9x18_Mak","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 95000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		linkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b23_rifleman","FP_Helmet_VSRSSH68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
	};
	class FP_Faction_GSFG70_AMMG: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MMG Assistant";
		backpack = "rhs_sidor_GSFG70_MMG";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
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
		backpack = "rhs_sidor_GSFG70_MAT";
		weapons[] = {"hlc_rifle_akm2","rhs_weap_rpg7_gsfgpgo","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","rhs_weap_rpg7_gsfgpgo","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
	};
	class FP_Faction_GSFG70_AMAT: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MAT Assistant";
		backpack = "rhs_sidor_GSFG70_MAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
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
		backpack = "B_Carryall_cbr_GSFG70_MANPADS";
		weapons[] = {"hlc_rifle_akms","CUP_launch_9K32Strela","Throw","Put"};
		respawnWeapons[] = {"hlc_rifle_akm2","CUP_launch_9K32Strela","Throw","Put"};
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
		cost = 180000;
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
		icon = "iconManAT";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
	};
	class FP_Faction_GSFG70_AMANPADS: FP_Faction_GSFG70_Soldier_BASE
	{
		author = "FP Mod Team";
		scope = 2;
		scopeCurator = 2;
		displayName = "MANPADS Assistant";
		backpack = "B_Carryall_cbr_GSFG70_MANPADS";
		headgearProbability = 100;
		allowedHeadgear[] = {"FP_Helmet_VSRSSH68","FP_Helmet_VSRSSH68"};
		cost = 65000;
		threat[] = {1,0.1,0.3};
	};
	class rhs_btr60_vv;
    class rhs_bmp1_vv;
    class rhs_uaz_open_vdv;
	class rhs_gaz66_vv;
	class FP_Faction_GSFG70_Vehicle_BTR60: rhs_btr60_vv
	{
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_GSFG70";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_GSFG70_Crewman";
	};
	class FP_Faction_GSFG70_Vehicle_BMP1: rhs_bmp1_vv
	{
	    displayName = "BMP-1 (Object 765Sp1)";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_GSFG70";
		category = "Armored";
		vehicleClass = "Armored";
		crew = "FP_Faction_GSFG70_Crewman";
	};
	class FP_Faction_GSFG70_Vehicle_UAZ496: rhs_uaz_open_vdv
	{
	    displayName = "UAZ-496";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_GSFG70";
		vehicleClass = "Car";
		crew = "FP_Faction_GSFG70_Rifleman";
	};
	class FP_Faction_GSFG70_Vehicle_GAZ66: rhs_gaz66_vv
	{
	    displayName = "GAZ-66-1";
		author = "RHS & FP Mod Team";
		faction = "FP_Faction_GSFG70";
		vehicleClass = "Car";
		crew = "FP_Faction_GSFG70_Rifleman";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class rhs_weap_svdp;
	class rhs_weap_svdp_gsfgpso: rhs_weap_svdp
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhs_acc_pso1m2";
				slot = "CowsSlot";
			};
		};
	};
	class rhs_weap_rpg7;
	class rhs_weap_rpg7_gsfgpgo: rhs_weap_rpg7
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhs_acc_pgo7v";
				slot = "CowsSlot";
			};
		};
	};
};


