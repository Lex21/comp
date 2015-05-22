class arifle_MX_F;
class arifle_MX_GL_F;
class srifle_EBR_F;
class srifle_LRR_F;
class srifle_GM6_F;
class SMG_02_F;
class LMG_Mk200_F;
class hgun_PDW2000_F;
class UGL_F;
class arifle_mas_hk416: arifle_MX_F {
};

class arifle_mas_hk416_gl: arifle_MX_GL_F {
    class AG36: UGL_F {
    };
};

class arifle_mas_hk416_m203: arifle_mas_hk416_gl {    
    class M203a: UGL_F {
    };
};

class arifle_mas_hk417c: arifle_mas_hk416 {
};

class arifle_mas_hk417_m203c: arifle_mas_hk416_m203 {
};

class arifle_mas_m4_m203: arifle_mas_hk416_gl {
    
    class M203b: UGL_F {
    };
};

class arifle_mas_m16_gl: arifle_mas_hk416_gl {
    
    class M203c: UGL_F {
    };
};

class srifle_mas_hk417: srifle_EBR_F {
};

class srifle_mas_sr25: srifle_mas_hk417 {
};

class srifle_mas_ebr: srifle_EBR_F {
};

class srifle_mas_m24: srifle_LRR_F {
};

class srifle_mas_lrr: srifle_LRR_F {
};

class arifle_mas_mp5: SMG_02_F {
};

class arifle_mas_mp5sd: arifle_mas_mp5 {
};

class arifle_mas_mp5sd_ds: arifle_mas_mp5sd {
};

class srifle_mas_m107: srifle_GM6_F {
};

class LMG_mas_Mk200_F: LMG_Mk200_F {

};

class LMG_mas_M249_F: LMG_Mk200_F {
};

class LMG_mas_M249a_F: LMG_mas_M249_F {
};

class LMG_mas_mk48_F: LMG_Mk200_F {
};

class LMG_mas_m240_F: LMG_mas_mk48_F {
};

class LMG_mas_m60_F: LMG_mas_mk48_F {
};

class LMG_mas_mg3_F: LMG_mas_m240_F {
};

class arifle_mas_g3: arifle_mas_hk416 {
};

class arifle_mas_g3_m203: arifle_mas_hk416_m203 {
};

class arifle_mas_fal: arifle_mas_g3 {
};

class arifle_mas_fal_m203: arifle_mas_g3_m203 {
};

class arifle_mas_m1014: arifle_mas_hk416 {
};

class hgun_mas_mp7_F: hgun_PDW2000_F {
};

class arifle_mas_m14: srifle_EBR_F {
};

class arifle_mas_lee: arifle_mas_g3 {
};