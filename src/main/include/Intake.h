#pragma once

#include <iostream>
#include <ctre/Phoenix.h>

#include "Constants.h"
#include "LED.h"

class Intake{
    public:

        TalonSRX intake_motor = {Constants::kTalonIntake};
        LED led;

        Intake(){}

        void RunOpenLoop();
        bool mode = false;
        bool ledEnabled = false;
};

#include "Supersystem.h"