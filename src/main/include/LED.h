#pragma once

#include <ctre/phoenix.h>

#include "Constants.h"

class LED {
    private:
        CANifier can = {Constants::kCanifier};
    public:

        LED(){}
        void setRGB(int r, int g, int b);

};