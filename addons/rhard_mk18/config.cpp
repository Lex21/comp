#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"meu_main", "RHARD_MK18_Mod1", "asdg_jointrails_rhard_mk18"};
        author[] = {"11thMEU Dev Team"};
        authorUrl = "http://11thmeu.es";
        versionDesc = "11thMEU Addons";
        VERSION_CONFIG;
    };
};

class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
    class compatibleItems {
        PEQ15_A3_Top_FlashLight = 1;
        peq15_top_FlashLight = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
    class compatibleItems
    {
        muzzle_MK18_L = 1;
        muzzle_MK18D_L = 1;
    };
};

class asdg_OpticRail1913_long;

#include "CfgWeapons.hpp"