class arifle_MX_F;
class arifle_MX_GL_F;
class srifle_EBR_F;
class srifle_LRR_F;
class srifle_GM6_F;
class LMG_Mk200_F;
class arifle_mas_hk416: arifle_MX_F {
    magazines[] += {"MEU_STANAG4179", MAGAZINE_LIST_STANAG4179_RIFLE};
};

class arifle_mas_hk416_gl: arifle_MX_GL_F
{
    magazines[] = {MAGAZINES_STANAG};

    class AG36: UGL_F
    {
        magazines[] += {"MEU_M203", MAGAZINE_LIST_M203_GL};
    };
};

class arifle_mas_hk416_m203: arifle_mas_hk416_gl {
    magazines[] += {"MEU_STANAG4179", MAGAZINE_LIST_STANAG4179_RIFLE};
    
    class M203a: UGL_F {
        magazines[] = {ROUNDS_M203};
    };
};

class arifle_mas_hk417c: arifle_mas_hk416 {
    magazines[] += {"MEU_MK11", MAGAZINE_LIST_MK11};
};

class arifle_mas_hk417_m203c: arifle_mas_hk416_m203 {
    magazines[] += {"MEU_MK11", MAGAZINE_LIST_MK11};
};

class arifle_mas_m4_m203: arifle_mas_hk416_gl
{
    magazines[] = {MAGAZINES_STANAG};
    
    class M203b: UGL_F
    {
        magazines[] = {ROUNDS_M203};
    };
};

class arifle_mas_m16_gl: arifle_mas_hk416_gl
{
    magazines[] = {MAGAZINES_STANAG};
    
    class M203c: UGL_F
    {
        magazines[] = {ROUNDS_M203};
    };
    
    //Advanced Ballistics
    AB_barrelTwist = 7;
    AB_twistDirection = 1;
    AB_barrelLength = BARREL_LONGRIFLE;
};

class srifle_mas_hk417: srifle_EBR_F
{
    magazines[] = {MAGAZINES_762};
    
    //Advanced Ballistics
    AB_barrelTwist = 7;
    AB_twistDirection = 1;
    AB_barrelLength = BARREL_RIFLE;
};

class srifle_mas_sr25: srifle_mas_hk417
{
    magazines[] = {MAGAZINES_SR25};
    
    AGM_Bipod = 1;
};

class srifle_mas_ebr: srifle_EBR_F
{
    magazines[] = {MAGAZINES_762};
};

class srifle_mas_m24: srifle_LRR_F
{
    magazines[] = {MAGAZINES_M24};
};

class srifle_mas_lrr: srifle_LRR_F
{
    magazines[] = {MAGAZINES_338_10};   
};

class arifle_mas_mp5: SMG_02_F
{
    magazines[] = {MAGAZINES_MP5};
};

class arifle_mas_mp5sd: arifle_mas_mp5
{
    magazines[] = {MAGAZINES_MP5};
};

class arifle_mas_mp5sd_ds: arifle_mas_mp5sd
{
    magazines[] = {MAGAZINES_MP5_UW};
};

class srifle_mas_m107: srifle_GM6_F
{
    magazines[] = {MAGAZINES_50BMG};
};

class LMG_mas_Mk200_F: LMG_Mk200_F
{
    magazines[] = {MAGAZINES_STANAG_MG};
    
    AGM_Bipod = 1;
};

class LMG_mas_M249_F: LMG_Mk200_F
{
    magazines[] = {MAGAZINES_STANAG_MG};
    
    AGM_Bipod = 1;
};

class LMG_mas_M249a_F: LMG_mas_M249_F
{
    magazines[] = {MAGAZINES_STANAG_MG};
    
    AGM_Bipod = 1;
};

class LMG_mas_mk48_F: LMG_Mk200_F
{
    magazines[] = {MAGAZINES_762_MG};
    
    AGM_Bipod = 1;
};

class LMG_mas_m240_F: LMG_mas_mk48_F
{
    magazines[] = {MAGAZINES_762_MG};
    
    AGM_Bipod = 1;
};

class LMG_mas_m60_F: LMG_mas_mk48_F
{
    magazines[] = {MAGAZINES_M60};
};

class LMG_mas_mg3_F: LMG_mas_m240_F
{
    magazines[] = {MAGAZINES_762_MG};
    
    AGM_Bipod = 1;
};

class arifle_mas_g3: arifle_mas_hk416
{
    magazines[] = {MAGAZINES_G3};
};

class arifle_mas_g3_m203: arifle_mas_hk416_m203
{
    magazines[] = {MAGAZINES_G3};
};

class arifle_mas_fal: arifle_mas_g3
{
    magazines[] = {MAGAZINES_FAL};
};

class arifle_mas_fal_m203: arifle_mas_g3_m203
{
    magazines[] = {MAGAZINES_FAL};
};

class arifle_mas_m1014: arifle_mas_hk416
{
    magazines[] = {MAGAZINES_BenelliM1014};
};

class hgun_mas_mp7_F: hgun_PDW2000_F
{
    magazines[] = {MAGAZINES_MP7};
};

class arifle_mas_m14: srifle_EBR_F
{
    magazines[] = {MAGAZINES_M14};
};

class arifle_mas_lee: arifle_mas_g3
{
    magazines[] = {MAGAZINES_Enfield};
};