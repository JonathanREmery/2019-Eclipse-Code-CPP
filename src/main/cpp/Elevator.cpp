#include "Elevator.h"

void Elevator::RunOpenLoop(){
    if (eclipse.controller.getLeftY() > 0){
        // If the elevator is going up run it at 85% speed
        elevator_1.Set(ControlMode::PercentOutput, Constants::kElevatorCurrentHold+(-eclipse.controller.getLeftY()*Constants::kElevatorUpPower));
        elevator_2.Set(ControlMode::PercentOutput, -Constants::kElevatorCurrentHold+(eclipse.controller.getLeftY()*Constants::kElevatorUpPower));
    } else {
        // If the elevator is going down run it at 80% speed
        elevator_1.Set(ControlMode::PercentOutput, Constants::kElevatorCurrentHold+(-eclipse.controller.getLeftY()*Constants::kElevatorDownPower));
        elevator_2.Set(ControlMode::PercentOutput, -Constants::kElevatorCurrentHold+(eclipse.controller.getLeftY()*Constants::kElevatorDownPower));
    }
}