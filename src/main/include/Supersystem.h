#pragma once

#include <iostream>
#include <string>

#include "Drivetrain.h"
#include "Climber.h"
#include "Pivot.h"
#include "Intake.h"
#include "Elevator.h"
#include "Controls.h"
#include "Auton.h"

class Supersystem {
    
    public:
        Supersystem(){}
        Controls controls;
        Controls::LeftJoystick leftJoystick;
        Controls::RightJoystick rightJoystick;
        Controls::Controller controller;
        Drivetrain drivetrain;
        Climber climber;
        Pivot pivot;
        Intake intake;
        Elevator elevator;
        Auton auton;

};

static Supersystem eclipse;