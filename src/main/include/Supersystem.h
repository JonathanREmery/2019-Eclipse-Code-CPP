#pragma once

#include <iostream>
#include <string>

#include "Drivetrain.h"
#include "Climber.h"
#include "Pivot.h"
#include "Intake.h"
#include "Elevator.h"
#include "Controls.h"

class Supersystem {
    
    public:
        Supersystem(){}
        Controls controls = *new Controls();
        Controls::LeftJoystick leftJoystick = *new Controls::LeftJoystick();
        Controls::RightJoystick rightJoystick = *new Controls::RightJoystick();
        Controls::Controller controller = *new Controls::Controller();
        Drivetrain drivetrain = *new Drivetrain();
        Climber climber = *new Climber();
        Pivot pivot = *new Pivot();
        Intake intake = *new Intake();
        Elevator elevator = *new Elevator();

};

static Supersystem eclipse = *new Supersystem();