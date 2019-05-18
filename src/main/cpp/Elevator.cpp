#include "Elevator.h"

TalonSRX elevator_1(9);
TalonSRX elevator_2(13);

void Elevator::RunOpenLoop(){
    if (eclipse.controller.getLeftY() > 0){
        // If the elevator is going up run it at 85% speed
        elevator_1.Set(ControlMode::PercentOutput, 0.05f+(-eclipse.controller.getLeftY()*0.85f));
        elevator_2.Set(ControlMode::PercentOutput, -0.05f+(eclipse.controller.getLeftY()*0.85f));
    } else {
        // If the elevator is going down run it at 80% speed
        elevator_1.Set(ControlMode::PercentOutput, 0.05f+(-eclipse.controller.getLeftY()*0.80f));
        elevator_2.Set(ControlMode::PercentOutput, -0.05f+(eclipse.controller.getLeftY()*0.80f));
    }
}