#pragma once

#include <iostream>
#include <string>
#include <frc/Joystick.h>

class Controls{

    public:

        Controls(){}

        enum direction{
            up = 0,
            right = 90,
            down = 180,
            left = 270
        };

        class RightJoystick{
            public:
                RightJoystick(){}
                double getX();
                double getY();
                bool getTrigger();
                int getPOV();
        };

        class LeftJoystick{
            public:
                LeftJoystick(){}
                double getX();
                double getY();
                bool getTrigger();
                int getPOV();
        };

        class Controller{
            public:
                Controller(){}
                double getLeftX();
                double getLeftY();
                double getRightX();
                double getRightY();
                bool getLeftTrigger();
                bool getRightTrigger();
                bool getLeftBumper();
                bool getRightBumper();
                int getPOV();

        };
};