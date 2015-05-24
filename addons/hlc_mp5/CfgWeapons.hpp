class Mode_SemiAuto;

class CfgWeapons {
    class Rifle_Base_F;
    class hlc_MP5_base: Rifle_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType {
                beginwater1[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_1b", 1, 1, 200};
                beginwater2[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_2b", 1, 1, 200};
                beginwater3[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_3b", 1, 1, 200};
                soundbeginwater[] = {"beginwater1", 0.33, "begin

                water2", 0.33, "beginwater3", 0.34};
            };
        };

        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType {
                beginwater1[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_1b", 1, 1, 200};
                beginwater2[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_2b", 1, 1, 200};
                beginwater3[] = {"A3\sounds_f\weapons\sdar\underwater_sdar_st_3b", 1, 1, 200};
                soundbeginwater[] = {"beginwater1", 0.33, "beginwater2", 0.33, "beginwater3", 0.34};
            };
        };
    };
};

// todo add to burst weapons