#pragma once

#include <iostream>
#include <string>
#include <frc/Ultrasonic.h>

class Auton{

    public:

        Auton(){}

        struct LidarData{
            double front,
            back,
            left,
            right;
        };

        LidarData getLidarData();

};