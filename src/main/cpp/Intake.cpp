#include "Intake.h"

TalonSRX intake_motor(16);
CANifier led(0);
bool alreadyChanged = false;

void Intake::RunOpenLoop() {
    if (eclipse.controller.getPOV() == eclipse.controls.down){
        // If down on the DPAD is pressed intake
        intake_motor.Set(ControlMode::PercentOutput, mode ? 0.75f : -0.75f);
    } else if (eclipse.controller.getPOV() == eclipse.controls.up){
        // If up on the DPAD is pressed outake
        intake_motor.Set(ControlMode::PercentOutput, mode ? -0.5f : 0.5f);
    } else {
        // If neither are pressed then just hold the cargo/hatch
        intake_motor.Set(ControlMode::PercentOutput, mode ? 0.075f : -0.075f);
    }

    if (ledEnabled){
        if (mode){
            // If LED's are enabled and in ball mode turn LED's orange
            led.SetLEDOutput(255, CANifier::LEDChannelA);
            led.SetLEDOutput(173, CANifier::LEDChannelB);
            led.SetLEDOutput(33, CANifier::LEDChannelC);
        } else {
            // If LED's are enabled and in disc mode turn LED's purple
            led.SetLEDOutput(113, CANifier::LEDChannelA);
            led.SetLEDOutput(47, CANifier::LEDChannelB);
            led.SetLEDOutput(198, CANifier::LEDChannelC);
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