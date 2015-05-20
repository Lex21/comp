class CfgWeapons {
    class C1987_MP7_base: Rifle_Base_F {
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 180;

        ACE_Overheating_Dispersion[] = {0, 0.001, 0.002, 0.004};
        ACE_Overheating_SlowdownFactor[] = {1, 1, 1, 0.9};
        ACE_Overheating_JamChance[] = {0, 0.0003, 0.0015, 0.0075};
    };
};