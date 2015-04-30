class CfgWeapons {
    class ItemCore;
    class FHQ_acc_ANPEQ15: ItemCore {
        MRT_SwitchItemNextClass = "FHQ_acc_ANPEQ15_FlashLight";
        MRT_SwitchItemPrevClass = "FHQ_acc_ANPEQ15_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "FHQ_acc_ANPEQ15_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";
    };
    class FHQ_acc_ANPEQ15_FlashLight: FHQ_acc_ANPEQ15 {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "FHQ_acc_ANPEQ15";
        MRT_SwitchItemPrevClass = "FHQ_acc_ANPEQ15";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "FHQ_acc_ANPEQ15";
        ACE_modeDescription = "AN/PEQ-15 - Flashlight";

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

    class FHQ_acc_ANPEQ15_black: FHQ_acc_ANPEQ15 {
        MRT_SwitchItemNextClass = "FHQ_acc_ANPEQ15_black_FlashLight";
        MRT_SwitchItemPrevClass = "FHQ_acc_ANPEQ15_black_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "FHQ_acc_ANPEQ15_black_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";
    };
    class FHQ_acc_ANPEQ15_black_FlashLight: FHQ_acc_ANPEQ15_black {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "FHQ_acc_ANPEQ15_black";
        MRT_SwitchItemPrevClass = "FHQ_acc_ANPEQ15_black";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Flashlight";

        ACE_nextModeClass = "FHQ_acc_ANPEQ15_black";
        ACE_modeDescription = "AN/PEQ-15 - Flashlight";

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

    class FHQ_acc_LLM01F: ItemCore {
        MEU_HideItem = 1;
    };
};