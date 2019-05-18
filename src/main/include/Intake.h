#pragma once

#include <iostream>
#include <ctre/Phoenix.h>

class Intake{
    public:
        Intake(){}

        void RunOpenLoop();
        bool mode = false;
        bool ledEnabled = false;
};

#include "Supersystem.h"