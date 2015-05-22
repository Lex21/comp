class CfgWeapons {
    class Rifle_Base_F;    
    class UGL_F;
    
    class RH_ar10: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 528;
    };

    class RH_m110: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 508;
    };

    class RH_SR25EC: RH_m110 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 510;
    };

    class RH_m4: Rifle_Base_F {
        
        class M203: UGL_F {
        };
        
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 368;
    };

    class RH_hb: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 150;
    };

    class RH_sbr9: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 150;
    };

    class RH_M4A1_ris;
    class RH_M4sbr: RH_M4A1_ris {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 150;
    };

    class RH_M16a1: RH_m4 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 528;

        ACE_Overheating_Dispersion[] = {0, 0.001, 0.003, 0.006};
        ACE_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
        ACE_Overheating_JamChance[] = {0, 0.0003, 0.0030, 0.0090};
    };

    class RH_M16A2: RH_m4 {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 528;

        ACE_Overheating_Dispersion[] = {0, 0.001, 0.003, 0.006};
        ACE_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
        ACE_Overheating_JamChance[] = {0, 0.0003, 0.0030, 0.0090};
    };

    class RH_M4_ris: RH_m4 {};
    class RH_M16A4: RH_M4_ris {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 528;
    };

    class RH_M4A6: RH_M4A1_ris
    {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406;
    };

    class RH_M16A6: RH_M16A4
    {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 406;
    };

    class RH_Mk12mod1: RH_M16A4 {

        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 457.2;
    };

    class RH_M27IAR: RH_Mk12mod1 {
        
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 420;
    };
};