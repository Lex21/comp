class CfgMEUEquipment {
    class meu {
        displayName "11th Marine Expeditionary Unit (REG)";

        class Uniforms {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "meu_marpatd_frog_d",
                    "meu_marpatd_frog_u",
                    "meu_marpatw_frog_d",
                    "meu_marpatw_frog_u"
                };
            };            
        };

        class Vests {
            class meu {
                displayName = "11th Marine Expeditionary Unit (REG)";
                classes[] = {
                    "meu_vests_mtv_01",
                    "meu_vests_mtv_02",
                    "meu_vests_mtv_03",
                    "meu_vests_mtv_04",
                    "meu_vests_spc_01",
                    "meu_vests_spc_02",
                    "meu_vests_spc_03",
                    "meu_vests_spc_04"
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
                    "meu_marpatd_bp_ilbe",
                    "meu_marpatd_bp_fastpack",
                    "meu_marpatw_bp_ilbe",
                    "meu_marpatw_bp_fastpack"
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
                    "meu_marpatd_mich2000",
                    "meu_marpatd_boonie_01"
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
                    "meu_goggles_tacticalxt_tan",
                };
            };

            class generic {
                displayName = "$STR_MEU_Equipment_TypeGeneric";
                common = 0;
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