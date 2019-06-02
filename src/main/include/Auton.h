#pragma once

#include <iostream>
#include <string>

#include "frc/smartdashboard/Smartdashboard.h"
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableInstance.h"

class Auton{

    public:

        Auton(){}
        
        void printValues();

};

#include "Supersystem.h"