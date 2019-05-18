#include "Auton.h"

frc::Ultrasonic frontSensor(1, 1);
frc::Ultrasonic backSensor(2, 2);
frc::Ultrasonic leftSensor(3, 3);
frc::Ultrasonic rightSensor(4, 4);

Auton::LidarData Auton::getLidarData(){
    // Returns information from four ultrasonic sensors for use in autonomous
    Auton::LidarData data;
    data.front = frontSensor.GetRangeInches();
    data.back = backSensor.GetRangeInches();
    data.left = leftSensor.GetRangeInches();
    data.right = rightSensor.GetRangeInches();
    return data;    
}