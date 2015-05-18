class CfgWeapons {
    /*
     * WEAPONS
     */

    class Rifle_Base_F;
    class RHARD_MK18_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class RHARD_MK18_base_F: RHARD_MK18_base {
        magazines[] += {"MEU_STANAG4179"};
        
        ACE_barrelTwist = 7;
        ACE_barrelLength = 10.3;

        class WeaponSlotsInfo: WeaponSlotsInfo {    
            class asdg_Muzzle_M4: asdg_MuzzleSlot_556 {};
            class asdg_OpticRail_M4: asdg_OpticRail1913_long{};
            class asdg_FrontSideRail_M4: asdg_FrontSideRail
            {
                class compatibleItems: compatibleItems
                {
                    PEQ15_A3_Top = 1;
                    PEQ15_A3_Top_FlashLight = 1;
                    PEQ15_A3_Top_RedLaser = 1;
                    peq15_top = 1;
                    peq15_top_FlashLight = 1;
                    peq15_top_RedLaser = 1;
                };
            };
        };
    };
    class RHARD_MK18_F: RHARD_MK18_base_F {
        magazines[] += {"MEU_STANAG4179"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot {};
            class PointerSlot {};
            class MuzzleSlot {};
        };
    };

    class RHARD_M4_base_F: RHARD_MK18_base_F {
        class WeaponSlotsInfo;
    };
    class RHARD_M4DDR_F: RHARD_M4_base_F
    {
        magazines[] += {"MEU_STANAG4179"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class asdg_Muzzle_M4: asdg_MuzzleSlot_556 {};
            class asdg_OpticRail_M4: asdg_OpticRail1913_long{};
        };
    };
    class RHARD_M4DDRD_F: RHARD_M4_base_F
    {
        magazines[] += {"MEU_STANAG4179"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class asdg_Muzzle_M4: asdg_MuzzleSlot_556 {};
            class asdg_OpticRail_M4: asdg_OpticRail1913_long{};
        };
    };
    class RHARD_M4DDRP_F: RHARD_M4_base_F
    {
        magazines[] += {"MEU_STANAG4179"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class asdg_Muzzle_M4: asdg_MuzzleSlot_556 {};
            class asdg_OpticRail_M4: asdg_OpticRail1913_long{};
        };
    };
    class RHARD_M4DDRPD_F: RHARD_M4_base_F
    {
        magazines[] += {"MEU_STANAG4179"};
        
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class asdg_Muzzle_M4: asdg_MuzzleSlot_556 {};
            class asdg_OpticRail_M4: asdg_OpticRail1913_long{};
        };
    };

    /*
     * ATTACHMENTS
     */
    class acc_pointer_IR;
    class PEQ15_A3_Top: acc_pointer_IR {
        MRT_SwitchItemNextClass = "PEQ15_A3_Top_FlashLight";
        MRT_SwitchItemPrevClass = "PEQ15_A3_Top_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "peq15_top_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 -  IR Laser";

        class InventoryFlashLightItem_Base_F;
    };
    class PEQ15_A3_Top_FlashLight: PEQ15_A3_Top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "PEQ15_A3_Top";
        MRT_SwitchItemPrevClass = "PEQ15_A3_Top_RedLaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "PEQ15_A3_Top_RedLaser";
        ACE_modeDescription = "AN/PEQ-15 -  Flashlight";


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
    class PEQ15_A3_Top_RedLaser: PEQ15_A3_Top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "PEQ15_A3_Top";
        MRT_SwitchItemPrevClass = "PEQ15_A3_Top_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red laser";

        ACE_laserpointer = 1;

        ACE_nextModeClass = "peq15_top_Redlaser";
        ACE_modeDescription = "AN/PEQ-15 - Flashlight";

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
    class ItemCore;
    class peq15_top: ItemCore {
        MRT_SwitchItemNextClass = "peq15_top_FlashLight";
        MRT_SwitchItemPrevClass = "peq15_top_Redlaser";
        MRT_SwitchItemHintText = "AN/PEQ15 - IR Laser";

        ACE_nextModeClass = "peq15_top_FlashLight";
        ACE_modeDescription = "AN/PEQ-15 -  IR Laser";

        class InventoryFlashLightItem_Base_F;

    };
    class peq15_top_FlashLight: peq15_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "peq15_top_Redlaser";
        MRT_SwitchItemPrevClass = "peq15_top";
        MRT_SwitchItemHintText = "AN/PEQ15 - Flashlight";

        ACE_nextModeClass = "peq15_top_Redlaser";
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
    class peq15_top_Redlaser: peq15_top {
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        MRT_SwitchItemNextClass = "peq15_top";
        MRT_SwitchItemPrevClass = "peq15_top_FlashLight";
        MRT_SwitchItemHintText = "AN/PEQ15 - Red laser";

        ACE_laserpointer = 1;

        ACE_nextModeClass = "peq15_top";
        ACE_modeDescription = "AN/PEQ-15 - Red laser";

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
};