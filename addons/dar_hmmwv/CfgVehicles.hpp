class CfgVehicles {
	class Car_F;
	class DAR_HMMWV_Base: Car_F {
		// Vehicle config Tweaks
	    tf_RadioType_api = "tf_rt1523g"; // todo change to vehicular radio PRC117G
	    tf_hasLRradio_api = 1;
	    tf_isolatedAmount_api = 0.5; // todo tweak

	    // Change Gearbox/Engine
	    //----- General Parameters -----//
	    normalSpeedForwardCoef=0.9;
	    turnCoef=3.5;
	    terrainCoef=0.5;
	    waterSpeedFactor=0.4;
	    simulation="carx";
	    dampersBumpCoef=0;

	    precision=9;
	    brakeDistance=3;
	    acceleration=15;
	    fireResistance=5;

	    maxSpeed=109;
	    fuelCapacity=78;
	    wheelCircumference=2.95;
	    brakeIdleSpeed=0.0;

	    maxFordingDepth=0.9;
	    waterResistance=2;
	    waterDamageEngine = 0.9;
	    waterLeakiness = 250.0;

	    //----- Gearbox Parameters -----//
	    class complexGearbox
	    {
	        GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.48,"D2",1.48,"D3",1.0,"D4",0.75};
	        TransmissionRatios[] = {"High",5.2};
	        gearBoxMode = "auto";
	        moveOffGear = 1;
	        driveString = "D";
	        neutralString = "N";
	        reverseString = "R";
	    };
	    changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95};
	    switchTime=0.28;
	    latency=1.0;

	    //----- Clutch and Driveline Parameters -----//
	    differentialType="all_limited";
	    frontRearSplit=0.5;
	    frontBias=1.5;
	    rearBias=1.5;
	    centreBias=1.3;
	    clutchStrength=35;
	    transmissionLosses = 20;

	    dampingRateFullThrottle=0.079999998;
	    dampingRateZeroThrottleClutchEngaged=1.34999999;
	    dampingRateZeroThrottleClutchDisengaged=0.34999999;

	    //----- Engine Parameters -----//
	    torqueCurve[] = {
	    {"(650/3600)","(417/581)"},
	    {"(1000/3600)","(508/581)"},
	    {"(1500/3600)","(562/581)"},
	    {"(1900/3600)","(581/581)"},
	    {"(2500/3600)","(545/581)"},
	    {"(3000/3600)","(475/581)"},
	    {"(3300/3600)","(396/581)"},
	    {"(3600/3600)","(314/581)"}
	    };

	    maxOmega = 376.99;
	    enginePower = 145;
	    peakTorque = 581;
	    idleRPM = 650;
	    redRPM = 3600;

	    engineLosses = 30;
	    thrustDelay=0.2;
	    engineBrakeCoef = 0.8;

	    // Sound
	    attenuationEffectType = "RHS_CarAttenuation";

	    // Cargo
	    class TransportMagazines{};
	    class TransportItems{};
	    class TransportWeapons{};
	};
};