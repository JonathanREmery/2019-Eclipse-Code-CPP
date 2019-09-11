#pragma once

#include <iostream>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Elevator {
    public:

        TalonSRX elevator_1 = {Constants::kTalonElevator1};
        TalonSRX elevator_2 = {Constants::kTalonElevator2};

        Elevator(){}

        void RunOpenLoop();
};

#include "Supersystem.h"