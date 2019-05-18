#include "Controls.h"

frc::Joystick leftJoy(1);
frc::Joystick rightJoy(2);
frc::Joystick operatorController(0);

double Controls::RightJoystick::getX(){
    // Return the X axis of the right joystick
    return rightJoy.GetRawAxis(0);
}

double Controls::RightJoystick::getY(){
    // Return the Y axis of the right joystick
    return rightJoy.GetRawAxis(1);
}

bool Controls::RightJoystick::getTrigger(){
    // Return true if the right joystick trigger is pressed
    return rightJoy.GetRawButton(1);
}

int Controls::RightJoystick::getPOV(){
    // Return what direction the DPAD of the right joystick is in
    return rightJoy.GetPOV();
}



double Controls::LeftJoystick::getX(){
    // Return the X axis of the left joystick
    return leftJoy.GetRawAxis(0);
}

double Controls::LeftJoystick::getY(){
    // Return the Y axis of the left joystick
    return leftJoy.GetRawAxis(1);
}

bool Controls::LeftJoystick::getTrigger(){
    // Return true if the left joystick trigger is pressed
    return leftJoy.GetRawButton(1);
}

int Controls::LeftJoystick::getPOV(){
    // Return what direction the DPAD of the left joystick is in
    return leftJoy.GetPOV();
}



double Controls::Controller::getRightX(){
    // Returns the X axis of the right joystick on the controller
    return operatorController.GetRawAxis(2);
}
double Controls::Controller::getRightY(){
    // Returns the Y axis of the right joystick on the controller
    return operatorController.GetRawAxis(3);
}
double Controls::Controller::getLeftX(){
    // Returns the X axis of the left joystick on the controller
    return operatorController.GetRawAxis(0);
}
double Controls::Controller::getLeftY(){
    // Returns the Y axis of the left joystick on the controller
    return operatorController.GetRawAxis(1);
}
bool Controls::Controller::getRightTrigger(){
    // Returns true if the right trigger on the controller is pressed
    return operatorController.GetRawButton(8);
}
bool Controls::Controller::getLeftTrigger(){
    // Returns true if the left trigger on the controller is pressed
    return operatorController.GetRawButton(7);
}
bool Controls::Controller::getRightBumper(){
    // Returns true if the right bumper on the controller is pressed
    return operatorController.GetRawButton(6);
}
bool Controls::Controller::getLeftBumper(){
    // Returns true if the left bumper on the controller is pressed
    return operatorController.GetRawButton(5);
}
int Controls::Controller::getPOV(){
    // Returns what direction the DPAD of the controller is in
    return operatorController.GetPOV();
}