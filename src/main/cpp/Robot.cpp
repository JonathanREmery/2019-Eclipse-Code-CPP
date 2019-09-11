#include "Robot.h"

#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  m_chooser.SetDefaultOption(kAutoNameDefault, kAutoNameDefault);
  m_chooser.AddOption(kAutoNameCustom, kAutoNameCustom);
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
  frc::CameraServer::GetInstance()->StartAutomaticCapture();
  eclipse.drivetrain.right_1.SetInverted(true);
  eclipse.drivetrain.right_2.SetInverted(true);
  eclipse.pivot.pivot_2.SetInverted(true);

  eclipse.drivetrain.left_1.ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute);
  eclipse.drivetrain.left_2.ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute);
  eclipse.drivetrain.right_1.ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute);
  eclipse.drivetrain.right_2.ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Absolute);
}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
  m_autoSelected = m_chooser.GetSelected();
  std::cout << "Auto selected: " << m_autoSelected << std::endl;

  if (m_autoSelected == kAutoNameCustom) {
  } else {
  }
}

void Robot::AutonomousPeriodic() {
  if (m_autoSelected == kAutoNameCustom) {
  } else {
    // Runs the autonomous code
    eclipse.auton.printValues();
  }
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {
  // Runs the main code for the drivetrain, pivot, intake, and elevator
  eclipse.drivetrain.RunOpenLoop();
  eclipse.pivot.RunOpenLoop();
  eclipse.intake.RunOpenLoop();
  eclipse.elevator.RunOpenLoop();
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
