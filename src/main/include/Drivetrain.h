#pragma once

#include <iostream>
#include <string>
#include <ctre/Phoenix.h>

class Drivetrain{

    public:

        Drivetrain(){}

        float speed = 100.0f;

        void TankDrive();
        void ArcadeDrive();

        void RunOpenLoop();

        void Drive(int direction);
        void Turn(int direction);
        void Stop();


};

#include "Supersystem.h"