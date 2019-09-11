#pragma once

#include <iostream>
#include <cstdio>
#include <ctime>

class PID {
    private:
        float kp, ki, kd, i, previous_error, start;
        float* actual;
        float* desired;
        float* output;

        bool hasStartedClock = false;

    public:
        PID(float kP, float kI, float kD);

        void setActual(float *value);
        void setDesired(float *value);
        void setOutput(float *value);
        void setKp(float value);
        void setKi(float value);
        void setKd(float value);
        void setGain(float kP, float kI, float kD);

        void runClosedLoop();


};