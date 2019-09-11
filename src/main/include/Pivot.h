#pragma once

#include <iostream>
#include <ctre/Phoenix.h>

#include "Constants.h"

class Pivot{
    public:

        TalonSRX pivot_1 = {Constants::kTalonPivot1};
        TalonSRX pivot_2 = {Constants::kTalonPivot2};

        Pivot(){}

        void RunOpenLoop();
};

#include "Supersystem.h"