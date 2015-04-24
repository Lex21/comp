#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"meu_main", "RH_acc", "asdg_jointrails"};
        author[] = {"11thMEU Dev Team"};
        authorUrl = "http://11thmeu.es";
        versionDesc = "11thMEU Addons";
        VERSION_CONFIG;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        RH_peq15_FlashLight = 1;
        RH_peq15_top_FlashLight = 1;
        RH_peq15b_FlashLight = 1;
        RH_peq15b_top_FlashLight = 1;
        RH_peq2_FlashLight = 1;
        RH_peq2_top_FlashLight = 1;
    };
};

#include "CfgWeapons.hpp"