class CfgWeapons {
    class acc_pointer_IR;
    class acc_mas_pointer_IR: acc_pointer_IR {
        MRT_SwitchItemNextClass = "acc_mas_pointer_IR_FlashLight";
        MRT_SwitchItemPrevClass = "acc_mas_pointer_IR_FlashLight";
        MRT_SwitchItemHintText = "Pointer - IR Laser";
    };
    class acc_mas_pointer_IR_FlashLight: acc_mas_pointer_IR {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "acc_mas_pointer_IR";
        MRT_SwitchItemPrevClass = "acc_mas_pointer_IR";
        MRT_SwitchItemHintText = "Pointer - Flashlight";
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