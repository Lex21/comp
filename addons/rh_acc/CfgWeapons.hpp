class CfgWeapons {
    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    class RH_peq15: ItemCore {
        MRT_SwitchItemNextClass = "RH_peq15_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq15_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "RH_peq15_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";
    };
    class RH_peq15_FlashLight: RH_peq15 {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15_RedLaser";
        MRT_SwitchItemPrevClass = "RH_peq15";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "RH_peq15_RedLaser";
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

    class RH_peq15_RedLaser: RH_peq15 {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15";
        MRT_SwitchItemPrevClass = "RH_peq15_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red Laser";

        ACE_nextModeClass = "RH_peq15";
        ACE_modeDescription = "AN/PEQ-15 - Red Laser";

        ACE_laserpointer = 1;

        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                color[] = {0,0,0};
                ambient[] = {0,0,0};
                intensity = 0;
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                coneFadeCoef = 5;
                position = "laser pos";
                direction = "laser dir";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = "100.0f";
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };

                scale[] = {0};
            };
        };
    };

    class RH_peq15_top: RH_peq15 {
        MRT_SwitchItemNextClass = "RH_peq15_top_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq15_top_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "RH_peq15_top_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";
    };
    class RH_peq15_top_FlashLight: RH_peq15_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15_top_RedLaser";
        MRT_SwitchItemPrevClass = "RH_peq15_top";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "RH_peq15_top_RedLaser";
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
    class RH_peq15_top_RedLaser: RH_peq15_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15_top";
        MRT_SwitchItemPrevClass = "RH_peq15_top_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red Laser";

        ACE_nextModeClass = "RH_peq15_top";
        ACE_modeDescription = "AN/PEQ-15 - Red Laser";

        ACE_laserpointer = 1;

        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                color[] = {0,0,0};
                ambient[] = {0,0,0};
                intensity = 0;
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                coneFadeCoef = 5;
                position = "laser pos";
                direction = "laser dir";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = "100.0f";
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };

                scale[] = {0};
            };
        };
    };

    class RH_peq15b: RH_peq15 {
        MRT_SwitchItemNextClass = "RH_peq15b_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq15b_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "RH_peq15b_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";
    };
    class RH_peq15b_FlashLight: RH_peq15b {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15b_RedLaser";
        MRT_SwitchItemPrevClass = "RH_peq15b";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "RH_peq15b_RedLaser";
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
    class RH_peq15b_RedLaser: RH_peq15b {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15b";
        MRT_SwitchItemPrevClass = "RH_peq15b_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red Laser";

        ACE_nextModeClass = "RH_peq15b";
        ACE_modeDescription = "AN/PEQ-15 - Red Laser";

        ACE_laserpointer = 1;

        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                color[] = {0,0,0};
                ambient[] = {0,0,0};
                intensity = 0;
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                coneFadeCoef = 5;
                position = "laser pos";
                direction = "laser dir";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = "100.0f";
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };

                scale[] = {0};
            };
        };
    };

    class RH_peq15b_top: RH_peq15b {
        MRT_SwitchItemNextClass = "RH_peq15b_top_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq15b_top_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "RH_peq15b_top_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 - IR Laser";

    };
    class RH_peq15b_top_FlashLight: RH_peq15b_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15b_top_RedLaser";
        MRT_SwitchItemPrevClass = "RH_peq15b_top";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";
        
        ACE_nextModeClass = "RH_peq15b_top_RedLaser";
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
    class RH_peq15b_top_RedLaser: RH_peq15b_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq15b_top";
        MRT_SwitchItemPrevClass = "RH_peq15b_Flashlight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red laser";
        
        ACE_nextModeClass = "RH_peq15b_top";
        ACE_modeDescription = "AN/PEQ-15 - Red laser";

        ACE_laserpointer = 1;

        MEU_HideItem = 1;
        class ItemInfo: InventoryFlashLightItem_Base_F {
            mass = 8;
            class Pointer {};
            class FlashLight {
                color[] = {0,0,0};
                ambient[] = {0,0,0};
                intensity = 0;
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                coneFadeCoef = 5;
                position = "laser pos";
                direction = "laser dir";
                useFlare = 0;
                flareSize = 0;
                flareMaxDistance = "100.0f";
                dayLight = 0;

                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };

                scale[] = {0};
            };
        };
    };

    class RH_peq2: ItemCore {
        MRT_SwitchItemNextClass = "RH_peq2_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq2_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ-2 - IR Laser";

        ACE_nextModeClass = "RH_peq2_FlashLight";
        ACE_modeDescription = "AN/PEQ-2 - IR Laser";
    };
    class RH_peq2_FlashLight: RH_peq2 {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq2";
        MRT_SwitchItemPrevClass = "RH_peq2";
        MRT_SwitchItemHintText = "AN/PEQ-2 - Flashlight";

        ACE_nextModeClass = "RH_peq2";
        ACE_modeDescription = "AN/PEQ-2 - Flashlight";

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

    class RH_peq2_top: ItemCore {
        MRT_SwitchItemNextClass = "RH_peq2_top_FlashLight";
        MRT_SwitchItemPrevClass = "RH_peq2_top_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "RH_peq2_top_FlashLight";
        ACE_modeDescription = "AN/PEQ-2 - IR Laser";
    };
    class RH_peq2_top_FlashLight: RH_peq2_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "RH_peq2_top";
        MRT_SwitchItemPrevClass = "RH_peq2_top";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "RH_peq2_top";
        ACE_modeDescription = "AN/PEQ-2 - Flashlight";
        
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