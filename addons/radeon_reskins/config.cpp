class CfgPatches {
    class radeon_reskins {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.18;
        requiredAddons[]= {
            "A3_Data_F_AoW_Loadorder",
            "jam_characters_east",
            "RF_Characters"
        };
        skipWhenMissingDependencies = 1;
        author = "AMD Radeon 386";
    };
};

class CfgVehicles {
    #include "CfgVehicles.hpp"
};
class CfgWeapons {
    #include "CfgWeapons.hpp"
};