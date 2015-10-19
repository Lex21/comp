class CfgMEUEquipment {
    class meu {
        displayName = "11th Marine Expeditionary Unit (REG)";

        class Uniforms {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "rhs_uniform_FROG01_d",
                    "rhs_uniform_FROG01_wd"
                };
            };
        };

        class Vests {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "rhsusf_spc",
                    "rhsusf_spc_corpsman",
                    "rhsusf_spc_crewman",
                    "rhsusf_spc_iar",
                    "rhsusf_spc_light",
                    "rhsusf_spc_mg",
                    "rhsusf_spc_marksman",
                    "rhsusf_spc_rifleman",
                    "rhsusf_spc_squadleader",
                    "rhsusf_spc_teamleader"
                };
            };

            class generic {
                displayName = "$STR_MEU_Equipment_TypeGeneric";
                common = 0;
            };
        };

        class Backpacks {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "rhsusf_assault_eagleaiii_coy",
                    "B_Kitbag_cbr",
                    "B_Kitbag_rgr",
                    "B_Carryall_cbr",
                    "B_Carryall_oli",
                    "TRYK_B_Medbag",
                    "TRYK_B_Medbag_OD"
                };
            };

            class generic {
                displayName = "$STR_MEU_Equipment_TypeGeneric";
                common = 0;
            };
        };

        class Headgear {
            class usmc {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "rhsusf_lwh_helmet_marpatd",
                    "rhsusf_lwh_helmet_marpatd_ess",
                    "rhsusf_lwh_helmet_marpatd_headset",
                    "rhsusf_lwh_helmet_marpatwd",
                    "rhsusf_lwh_helmet_marpatwd_ess",
                    "rhsusf_lwh_helmet_marpatwd_headset",
                    "rhsusf_mich_helmet_marpatd",
                    "rhsusf_mich_helmet_marpatd_alt",
                    "rhsusf_mich_helmet_marpatd_norotos",
                    "rhsusf_mich_helmet_marpatd_norotos_arc",
                    "rhsusf_mich_helmet_marpatwd",
                    "rhsusf_mich_helmet_marpatwd_alt",
                    "rhsusf_mich_helmet_marpatwd_norotos",
                    "rhsusf_mich_helmet_marpatwd_norotos_arc",
                    "rhsusf_cvc_green_helmet",
                    "rhsusf_cvc_green_ess",
                    "rhsusf_cvc_helmet",
                    "rhsusf_cvc_ess",
                    "rhs_Booniehat_marpatd",
                    "rhs_Booniehat_marpatwd",
                    "Campaign_Hat"
                };
            };

            class generic {
                displayName = "$STR_MEU_Equipment_TypeGeneric";
                common = 0;
            };
        };

        class Goggles {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "TRYK_US_ESS_Glasses",
                    "TRYK_US_ESS_Glasses_BLK",
                    "TRYK_US_ESS_Glasses_TAN",
                    "TRYK_US_ESS_Glasses_TAN_BLK",
                    "G_Combat",
                    "G_Lowprofile",
                    "rhs_googles_black",
                    "rhs_googles_clear",
                    "rhs_googles_yellow",
                    "rhs_googles_orange",
                    "G_Diving",
                    "Mask_M40",
                    "Mask_M40_OD",
                    "TRYK_headset2_glasses",
                    "TRYK_TAC_EARMUFF_Gs",
                    "TRYK_NOMIC_TAC_EARMUFF_Gs",
                    "TRYK_TAC_EARMUFF_SHADE_Gs"
                };
            };
        };

        class Presets {
            class usmc {
                displayName = "$STR_MEU_COMP_mas_usa_mars_TypeUSMC";
                presets[] = {
                    {"Regular MARPAT-W 2006", "meu_marpatw_frog_d", "meu_vests_mtv_01", "meu_marpatd_bp_ilbe", "meu_marpatw_mich2000"},
                    {"Regular MARPAT-D 2006", "meu_marpatd_frog_d", "meu_vests_mtv_01", "meu_marpatd_bp_ilbe", "meu_marpatd_mich2000"},
                    {"Regular MARPAT-W 2010", "meu_marpatw_frog_d", "meu_vests_spc_01", "meu_marpatw_bp_fastpack", "meu_marpatw_mich2000"},
                    {"Regular MARPAT-D 2010", "meu_marpatd_frog_d", "meu_vests_spc_01", "meu_marpatw_bp_fastpack", "meu_marpatd_mich2000"}
                };
            };
        };
    };
};
