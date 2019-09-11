#pragma once

#include <iostream>
#include <string>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Drivetrain{

    public:

        TalonSRX left_1 = {Constants::kTalonLeft1};
        TalonSRX left_2 = {Constants::kTalonLeft2};
        TalonSRX right_1 = {Constants::kTalonRight1};
        TalonSRX right_2 = {Constants::kTalonRight2};

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