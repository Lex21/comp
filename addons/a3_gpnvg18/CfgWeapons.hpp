class CfgWeapons {
    class NVGoggles;
    class A3_GPNVG18_F: NVGoggles
    {
        // ACE_Nightvision
        ACE_NightVision_grain = 0.05;
        ACE_NightVision_blur = 0.005;
        ACE_NightVision_radBlur = 0.000;

        // fix for str not found error on log        
        descriptionUse = "L3 Panoramic GPNVG18";
        class Library
        {
            libTextDesc = "L3 Panoramic GPNVG18";
        };
    };
};