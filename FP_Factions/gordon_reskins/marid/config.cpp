class CfgPatches
{
	class gordon_reskins_marid
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"FP_GOR_B_APC_Wheeled_02_rcws_v2_F",
			"FP_GOR_B_T_APC_Wheeled_02_rcws_v2_F",
			"FP_GOR_I_APC_Wheeled_02_rcws_v2_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= 
		{
			"A3_Armor_F_Beta",
			"A3_Soft_F"
		};
	};
};
//class WeaponFireGun;
//class WeaponCloudsGun;
//class WeaponFireMGun;
//class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
/*				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"HMG_127_APC",
					"GMG_40mm"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				commanding=1;
				minElev=-15;
				initElev=0;
				maxElev=30;
				minCamElev=-90;
				maxCamElev=90;
				gunnerAction="crew_tank01_out";
				gunnerInAction="crew_tank01_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				showCrewAim=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh2";
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-2;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="zbran";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
*/				class Turrets
				{
				};
			};
			class CommanderOptics: CommanderOptics
			{
/*				memoryPointGunnerOutOptics="commanderview";
				memoryPointGunnerOptics="commanderview";
				minElev=-10;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"SmokeLauncher"
				};
				magazines[]=
				{
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					0.56234133,
					1,
					30
				};
				forceHideGunner=0;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerAction="commander_apcwheeled2hi_out";
				gunnerInAction="commander_apcwheeled2hi_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				turretInfoType="RscWeaponRangeFinder";
				showCrewAim=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_n_F";
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				class ViewGunner: ViewCargo
				{
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={4,5};
				};
				startEngine=0;
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="";
						visual="-";
						passThrough=0;
						minimalHit=10;
						explosionShielding=0;
						radius=0;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="";
						visual="-";
						passThrough=0;
						minimalHit=10;
						explosionShielding=0;
						radius=0;
					};
				};
*/			};
		};
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
					"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
					"a3\data_f\vehicles\turret_opfor_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
					"a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
					"a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa",
					"A3\armor_f\data\cage_csat_green_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Blufor
			{
				displayname = "Blufor";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_blufor_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_blufor_CO.paa",
					"a3\data_f\vehicles\turret_co.paa",
					"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class BluforPacific
			{
				displayname = "Blufor Pacific";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_bluforpacific_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_bluforpacific_CO.paa",
					"a3\data_f_exp\vehicles\turret_olive_co.paa",
					"a3\armor_f\data\camonet_NATO_Green_CO.paa",
					"a3\armor_f\data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"BLU_T_F"
				};
			};
			class Black
			{
				displayname = "Black";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_black_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_black_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_black_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_black_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_black_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winter
			{
				displayname = "Winter";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winter_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterstripe
			{
				displayname = "Winter (Striped Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterstripe_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterdot
			{
				displayname = "Winter (Dotted Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdot_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Winterdigi
			{
				displayname = "Winter (Digital Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_winter_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_winter_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_winter_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae1
			{
				displayname = "Russian Arms Expo camo 1";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae1_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae1_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_rae1_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae2
			{
				displayname = "Russian Arms Expo camo 2";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae2_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae2_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_rae2_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Rae3
			{
				displayname = "Russian Arms Expo camo 3";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_rae3_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_rae3_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_rae3_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class Tpat
			{
				displayname = "T-Pat";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\karatel\data\MRAP_02_rcws_t-pat_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_t-pat_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_t-pat_CO.paa"
				};
				factions[]=
				{
					"BLU_F",
					"OPF_F",
					"IND_F"
				};
			};
			class AAF
			{
				displayname = "AAF";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa",
					"a3\armor_f\data\cage_AAF_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Jungle
			{
				displayname = "AAF (Jungle Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Jungle_CO.paa",
					"a3\armor_f\data\cage_G1_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Desert
			{
				displayname = "AAF (Desert Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"a3\armor_f\data\camonet_AAF_Digi_Desert_CO.paa",
					"a3\armor_f\data\cage_G3_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class AAF_Winter
			{
				displayname = "AAF (Winter Camo Net)";
				author="Gordon Weedman";
				textures[]=
				{
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
					"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
					"a3\data_f\vehicles\turret_indp_co.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\camonet_winterdigi_CO.paa",
					"\FP_Factions\gordon_reskins\universalstuff\data\cage_winter_CO.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
/*				gunnerForceOptics=0;
				gunnerAction="Commander_APC_Wheeled_02_rcws_F_out";
				gunnerInAction="Commander_APC_Wheeled_02_rcws_F_in";
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"HMG_127_APC",
					"GMG_40mm",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"200Rnd_127x99_mag_Tracer_Green",
					"SmokeLauncherMag"
				};
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				gunnerName="$STR_POSITION_COMMANDER";
				commanding=1;
				primaryGunner=1;
				primaryObserver=0;
				viewGunnerInExternal=1;
				forceHideGunner=0;
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				startEngine=0;
				usePip=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				stabilizedInAxes=3;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerRightHandAnimName="turret_control";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="commanderview";
				selectionFireAnim="zasleh2";
				turretInfoType="RscOptics_crows";
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				minElev=-15;
				maxElev=30;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="zbran";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				class Turrets
				{
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
*/			};
			class CommanderOptics;
		};
	};
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
	};
		class FP_GOR_B_APC_Wheeled_02_rcws_v2_F: O_APC_Wheeled_02_rcws_v2_F 
	{
		author = "Gordon Weedman";
		
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_f";
		typicalCargo[] = 
		{
			"B_soldier_f"
		};


		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red", 
					"200Rnd_127x99_mag_Tracer_Red",
					"SmokeLauncherMag"
				};
			};
		};	
		
		class TransportMagazines 
		{
			class _xx_30Rnd_65x39_caseless_mag 
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 16;
			};

			class _xx_100Rnd_65x39_caseless_mag 
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};

			class _xx_HandGrenade 
			{
				magazine = "HandGrenade";
				count = 10;
			};

			class _xx_1Rnd_HE_Grenade_shell 
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};

			class _xx_1Rnd_Smoke_Grenade_shell 
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeGreen_Grenade_shell 
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeOrange_Grenade_shell 
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};

			class _xx_1Rnd_SmokeBlue_Grenade_shell 
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};

			class _xx_16Rnd_9x21_Mag 
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};

			class _xx_SmokeShell 
			{
				magazine = "SmokeShell";
				count = 4;
			};

			class _xx_SmokeShellGreen 
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};

			class _xx_SmokeShellOrange 
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};

			class _xx_SmokeShellBlue 
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};

			class _xx_NLAW_F 
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};

		class TransportItems 
		{
			class _xx_FirstAidKit 
			{
				name = "FirstAidKit";
				count = 10;
			};
		};

		class TransportWeapons 
		{
			class _xx_arifle_MX_F 
			{
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
		/*extern*/ class Components;
	

		textureList[] = 
		{
			"Blufor", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_blufor_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_blufor_CO.paa",
			"a3\data_f\vehicles\turret_co.paa",
			"a3\armor_f\data\camonet_NATO_Desert_CO.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	
	class FP_GOR_B_APC_Wheeled_02_rcws_v2_F;
	class FP_GOR_B_T_APC_Wheeled_02_rcws_v2_F: FP_GOR_B_APC_Wheeled_02_rcws_v2_F 
	{
		author = "Gordon Weedman";

		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_crew_f";
		typicalCargo[] = 
		{
			"B_T_soldier_f"
		};

		class TransportWeapons 
		{
			class _xx_arifle_MX_khk_F 
			{
				weapon = "arifle_MX_khk_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"BluforPacific", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_bluforpacific_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_bluforpacific_CO.paa",
			"a3\data_f_exp\vehicles\turret_olive_co.paa",
			"a3\armor_f\data\camonet_NATO_Green_CO.paa",
			"a3\armor_f\data\cage_olive_CO.paa"
		};
	};
	

	class FP_GOR_B_APC_Wheeled_02_rcws_v2_F;
	class FP_GOR_I_APC_Wheeled_02_rcws_v2_F: FP_GOR_B_APC_Wheeled_02_rcws_v2_F
	{
		author = "Gordon Weedman";

		side = 2;
		faction = "IND_F";
		crew = "I_crew_F";
		typicalCargo[] = 
		{
			"I_Soldier_lite_F"
		};

		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				magazines[] = 
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow", 
					"200Rnd_127x99_mag_Tracer_Yellow",
					"SmokeLauncherMag"
				};
			};
		};	
		
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 3;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 4;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 12;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		/*extern*/ class Components;

		
		textureList[] = 
		{
			"AAF", 1
		};
		hiddenSelectionsTextures[] = 
		{
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_01_AAF_CO.paa",
			"\FP_Factions\gordon_reskins\marid\data\APC_Wheeled_02_ext_02_AAF_CO.paa",
			"a3\data_f\vehicles\turret_indp_co.paa",
			"a3\armor_f\data\camonet_AAF_Digi_Green_CO.paa",
			"a3\armor_f\data\cage_AAF_CO.paa"
		};
	};
};
