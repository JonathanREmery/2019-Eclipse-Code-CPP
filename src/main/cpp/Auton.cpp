#include "Auton.h"

void Auton::printValues(){
    std::cout << "Left_1: " << eclipse.drivetrain.left_1.GetSelectedSensorPosition() << std::endl;
    std::cout << "Left_2: " << eclipse.drivetrain.left_2.GetSelectedSensorPosition() << std::endl;
    std::cout << "Right_1: " << eclipse.drivetrain.right_1.GetSelectedSensorPosition() << std::endl;
    std::cout << "Right_2: " << eclipse.drivetrain.right_2.GetSelectedSensorPosition() << std::endl;
}