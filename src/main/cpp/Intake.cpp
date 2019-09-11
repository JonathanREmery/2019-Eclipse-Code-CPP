#include "Intake.h"

bool alreadyChanged = false;

void Intake::RunOpenLoop() {
    if (eclipse.controller.getPOV() == eclipse.controls.down){
        // If down on the DPAD is pressed intake
        intake_motor.Set(ControlMode::PercentOutput, mode ? Constants::kIntakeCargoPower : Constants::kIntakeHatchPower);
    } else if (eclipse.controller.getPOV() == eclipse.controls.up){
        // If up on the DPAD is pressed outake
        intake_motor.Set(ControlMode::PercentOutput, mode ? -Constants::kIntakeCargoPower : -Constants::kIntakeHatchPower);
    } else {
        // If neither are pressed then just hold the cargo/hatch
        intake_motor.Set(ControlMode::PercentOutput, mode ? Constants::kIntakeCargoCurrentHold : Constants::kIntakeHatchCurrentHold);
    }

    if (ledEnabled){
        if (mode){
            // If LED's are enabled and in cargo mode turn LED's orange
            led.setRGB(255, 173, 33);
        } else {
            // If LED's are enabled and in hatch mode turn LED's purple
            led.setRGB(113, 47, 198);
        }
    }

    if (eclipse.controller.getRightBumper() == 1 && !alreadyChanged){
        // If the right bumper on the controller was just pressed change modes
        mode = !mode;
        alreadyChanged = true;
    }
    if (alreadyChanged && !eclipse.controller.getRightBumper()){
        // If the right bumper on the controller was just released let the program know
        alreadyChanged = false;
    }
}