#pragma once

#include <iostream>
#include <frc/Joystick.h>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Climber{
    public:

        TalonSRX climber_front = {Constants::kTalonClimberFront};
        TalonSRX climber_back = {Constants::kTalonClimberBack};

        Climber(){}
        
        void RunOpenLoop();

};


#include "Supersystem.h"