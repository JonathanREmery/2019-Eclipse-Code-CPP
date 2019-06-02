#include "Auton.h"

std::shared_ptr<NetworkTable> limelight = nt::NetworkTableInstance::GetDefault().GetTable("limelight");

void Auton::printValues(){
    // Print values from limelight
    std::cout << "tx: " << limelight->GetNumber("tx", 0.0) << std::endl;
    std::cout << "ty: " << limelight->GetNumber("ty", 0.0) << std::endl;
    std::cout << "ta: " << limelight->GetNumber("ta", 0.0) << std::endl;
}