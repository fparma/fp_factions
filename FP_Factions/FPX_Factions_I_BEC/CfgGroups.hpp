class Indep {
	class FPX_Factions_I_BEC_Units {
		name = "Black Element (BEC)";
			class Infantry {
				name = "Mercenaries";
				class FPX_Factions_I_BEC_Squad {
					name = "Light Squad";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					}; 
					class Unit4 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class FPX_Factions_I_BEC_Team {
					name = "Fire Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_TL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_G36";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class FPX_Factions_I_BEC_Machinegun {
					name = "MG Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_AK";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
				class FPX_Factions_I_BEC_Marksman {
					name = "Marksman Team";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_M";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_M";
						rank = "PRIVATE";
						position[] = {5,-2,0};
					};
				};
			};
			class SpecialForces {
				name = "Civil Security Teams";
				class FPX_Factions_I_BEC_Security {
					name = "Security Attachments";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Security";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				/*class FPX_Factions_I_BEC_Functionary {
					name = "Functionary Guards";
					side = 2;
					faction = "FPX_I_BEC";
					class Unit0 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 {
						side = 2;
						vehicle = "FPX_I_BEC_Soldier_Func";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};*/
			};
		};
	};