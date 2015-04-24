class CfgWeapons {
    class ItemCore;
    class PEQ15_A3_Top: ItemCore {
        MEU_PointerSwitch = "PEQ15_A3_Top_FlashLight";
    };
    class PEQ15_A3_Top_FlashLight: PEQ15_A3_Top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MEU_PointerSwitch = "PEQ15_A3_Top";
        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                ambient[] = {9, 7.5, 6};
                color[] = {1800, 1500, 1200};
                conefadecoef = 5;
                daylight = 0;
                direction = "laser dir";
                flaremaxdistance = "100.0f";
                flaresize = 0.4;
                innerangle = 20;
                intensity = 1;
                outerangle = 80;
                position = "laser pos";
                scale[] = {0};
                size = 1;
                useflare = 1;
                class Attenuation {
                    constant = 0;
                    hardlimitend = 30;
                    hardlimitstart = 20;
                    linear = 0;
                    quadratic = 1;
                    start = 0.5;
                };
            };
        };
    };

    class peq15_top: ItemCore {
        MEU_PointerSwitch = "peq15_top_FlashLight";
    };
    class peq15_top_FlashLight: peq15_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MEU_PointerSwitch = "peq15_top";
        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                ambient[] = {9, 7.5, 6};
                color[] = {1800, 1500, 1200};
                conefadecoef = 5;
                daylight = 0;
                direction = "laser dir";
                flaremaxdistance = "100.0f";
                flaresize = 0.4;
                innerangle = 20;
                intensity = 1;
                outerangle = 80;
                position = "laser pos";
                scale[] = {0};
                size = 1;
                useflare = 1;
                class Attenuation {
                    constant = 0;
                    hardlimitend = 30;
                    hardlimitstart = 20;
                    linear = 0;
                    quadratic = 1;
                    start = 0.5;
                };
            };
        };
    };
};