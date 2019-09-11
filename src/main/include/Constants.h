#pragma once

class Constants {
    public:
        const static int kTalonLeft1 = 5;
        const static int kTalonLeft2 = 6;
        const static int kTalonRight1 = 1;
        const static int kTalonRight2 = 2;
        const static int kTalonClimberFront = 7;
        const static int kTalonClimberBack = 3;
        const static int kTalonElevator1 = 9;
        const static int kTalonElevator2 = 13;
        const static int kTalonIntake = 16;
        const static int kTalonPivot1 = 10;
        const static int kTalonPivot2 = 14;

        const static int kCanifier = 0;

        constexpr static float kMotorFullPower = 100.0f;
        constexpr static float kMotorNoPower = 0.0f;

        constexpr static float kClimberPower = 0.1f;

        constexpr static float kElevatorUpPower = 0.85f;
        constexpr static float kElevatorDownPower = 0.80f;
        constexpr static float kElevatorCurrentHold = 0.05f;

        constexpr static float kIntakeCargoPower = 0.05f;
        constexpr static float kIntakeHatchPower = -0.05f;
        constexpr static float kIntakeCargoCurrentHold = 0.075f;
        constexpr static float kIntakeHatchCurrentHold = -0.075f;

        constexpr static float kPivotCargoUpPower = 0.6f;
        constexpr static float kPivotHatchUpPower = 0.4f;
        constexpr static float kPivotCargoDownPower = -0.2f;
        constexpr static float kPivotHatchDownPower = -0.15f;
};