#include "Drivetrain.h"

TalonSRX left_1(5);
TalonSRX left_2(6);
TalonSRX right_1(1);
TalonSRX right_2(2);

void Drivetrain::TankDrive(){
    // Run the drivetrain in tank drive
    left_1.Set(ControlMode::PercentOutput, (speed/100.0f)*eclipse.leftJoystick.getY());
    left_2.Set(ControlMode::PercentOutput, (speed/100.0f)*eclipse.leftJoystick.getY());
    right_1.Set(ControlMode::PercentOutput, -(speed/100.0f)*eclipse.rightJoystick.getY());
    right_2.Set(ControlMode::PercentOutput, -(speed/100.0f)*eclipse.rightJoystick.getY());
}

void Drivetrain::ArcadeDrive(){
    // Run the drivetrain in arcade drive
    left_1.Set(ControlMode::PercentOutput, (speed/100.0f)*(eclipse.leftJoystick.getY()-eclipse.rightJoystick.getX()));
    left_2.Set(ControlMode::PercentOutput, (speed/100.0f)*(eclipse.leftJoystick.getY()-eclipse.rightJoystick.getX()));
    right_1.Set(ControlMode::PercentOutput, -(speed/100.0f)*(eclipse.leftJoystick.getY()+eclipse.rightJoystick.getX()));
    right_2.Set(ControlMode::PercentOutput, -(speed/100.0f)*(eclipse.leftJoystick.getY()+eclipse.rightJoystick.getX()));
}

void Drivetrain::RunOpenLoop(){
    // Tells the drivetrain how fast and in what way to drive
    speed = 100.0f;
    TankDrive();
}

void Drivetrain::Drive(int direction){
    // Drive in a given direction
    if (direction){
        // If direction is true than drive foward
        left_1.Set(ControlMode::PercentOutput, speed/100.0f);
        left_2.Set(ControlMode::PercentOutput, speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, -speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, -speed/100.0f);
    } else {
        // If direction is false than drive backward
        left_1.Set(ControlMode::PercentOutput, -speed/100.0f);
        left_2.Set(ControlMode::PercentOutput, -speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, speed/100.0f);
    }
}
    
void Drivetrain::Turn(int direction){
    // Turn in a given direction
    if (direction){
        // If direction is true than turn right
        left_1.Set(ControlMode::PercentOutput, -speed/100.0f);
        left_2.Set(ControlMode::PercentOutput, -speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, -speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, -speed/100.0f);
    } else {
        // If direction is false than turn left
        left_1.Set(ControlMode::PercentOutput, speed/100.0f);
        left_2.Set(ControlMode::PercentOutput, speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, speed/100.0f);
        right_1.Set(ControlMode::PercentOutput, speed/100.0f);
    }
}

void Drivetrain::Stop(){
    // Sends a command to all motors to stop
    left_1.Set(ControlMode::PercentOutput, 0.0f);
    left_2.Set(ControlMode::PercentOutput, 0.0f);
    right_1.Set(ControlMode::PercentOutput, 0.0f);
    right_1.Set(ControlMode::PercentOutput, 0.0f);
}