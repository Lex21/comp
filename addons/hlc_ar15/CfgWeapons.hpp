class CfgWeapons {
    class Rifle_Base_F;
    class hlc_ar15_base: Rifle_Base_F {

        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 368;

        ACE_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
        ACE_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
        ACE_Overheating_JamChance[] = {0, 0.0003, 0.0015, 0.0075};
    };

    class hlc_rifle_RU556: hlc_ar15_base {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 228;
    };
    class hlc_rifle_RU5562: hlc_rifle_RU556 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 228;
    };
    class hlc_rifle_bcmjack: hlc_ar15_base {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 368;
    };
    class hlc_rifle_Colt727: hlc_ar15_base {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 368;
    };
    class hlc_rifle_SAMR: hlc_rifle_RU556 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 508;
    };
    class hlc_rifle_CQBR: hlc_rifle_RU556 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 261;
    };

    class hlc_rifle_M4: hlc_rifle_RU556 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 150;
    };
    class hlc_rifle_Bushmaster300: hlc_rifle_Colt727 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406;
    };
    class hlc_rifle_vendimus: hlc_rifle_Bushmaster300 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406;
    };
    class hlc_rifle_honeybase: hlc_rifle_RU556 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 150;
    };
};