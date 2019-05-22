#include "Pivot.h"

TalonSRX pivot_1(10);
TalonSRX pivot_2(14);

void Pivot::RunOpenLoop(){
    if (eclipse.controller.getLeftBumper()){
        // If the left bumper on the controller is pressed run the pivot upward at 60% speed
        pivot_1.Set(ControlMode::PercentOutput, 0.6f);
        pivot_2.Set(ControlMode::PercentOutput, -0.6f);
    } else if (eclipse.controller.getLeftTrigger()){
        // If the left trigger on the controller is pressed run the pivot downward at 20% speed
        pivot_1.Set(ControlMode::PercentOutput, -0.2f);
        pivot_2.Set(ControlMode::PercentOutput, 0.2f);
    } else {
        pivot_1.Set(ControlMode::PercentOutput, 0.15f);
        pivot_2.Set(ControlMode::PercentOutput, -0.15f);
    }
}