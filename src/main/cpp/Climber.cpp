#include "Climber.h"

TalonSRX climber_front(7);
//TalonSRX climber_back(3);

void Climber::RunOpenLoop(){
    if (eclipse.leftJoystick.getTrigger()){
        // If the trigger on the left joystick is pressed runs the climber downward at 10% speed
        climber_front.Set(ControlMode::PercentOutput, 0.1f);
        //climber_back.Set(ControlMode::PercentOutput, 0.1f);
    } else if (eclipse.rightJoystick.getTrigger()){
        // If the trigger on the right joystick is pressed runs the climber upward at 10% speed
        climber_front.Set(ControlMode::PercentOutput, -0.1f);
        //climber_back.Set(ControlMode::PercentOutput, -1.0f);
    } else {
        // If nothing is pressed does not run climber
        climber_front.Set(ControlMode::PercentOutput, 0.0f);
    }
}