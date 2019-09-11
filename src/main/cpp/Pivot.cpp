#include "Pivot.h"

void Pivot::RunOpenLoop(){
    if (eclipse.controller.getLeftBumper()){
        // If the left bumper on the controller is pressed
        if (eclipse.intake.mode){
            // If currently in cargo mode run the pivot upward at 60% speed
            pivot_1.Set(ControlMode::PercentOutput, Constants::kPivotCargoUpPower);
            pivot_2.Set(ControlMode::PercentOutput, Constants::kPivotCargoUpPower);
        } else {
            // If currently in hatch mode run the pivot upward at 40% speed
            pivot_1.Set(ControlMode::PercentOutput, Constants::kPivotHatchUpPower);
            pivot_2.Set(ControlMode::PercentOutput, Constants::kPivotHatchUpPower);
        }
    } else if (eclipse.controller.getLeftTrigger()){
        // If the left trigger on the controller is pressed run the pivot downward at 20% speed
        pivot_1.Set(ControlMode::PercentOutput, Constants::kPivotCargoDownPower);
        pivot_2.Set(ControlMode::PercentOutput, Constants::kPivotCargoDownPower);
    } else {
        pivot_1.Set(ControlMode::PercentOutput, Constants::kPivotHatchDownPower);
        pivot_2.Set(ControlMode::PercentOutput, Constants::kPivotHatchDownPower);
    }
}