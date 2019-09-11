#include "PID.h"

PID::PID(float kP, float kI, float kD){
    kp = kP;
    ki = kI;
    kd = kD;
    i = 0.0f;
    start = 0.0f;
}

void PID::setActual(float *value){
    actual = value;
}

void PID::setDesired(float *value){
    desired = value;
    if (actual){
        previous_error = *desired-*actual;
    }
}

void PID::setOutput(float *value){
    output = value;
}

void PID::setKp(float value){
    kp = value;
}

void PID::setKi(float value){
    ki = value;
}

void PID::setKd(float value){
    kd = value;
}

void PID::setGain(float kP, float kI, float kD){
    kp = kP;
    ki = kI;
    kd = kD;
}


void PID::runClosedLoop(){
    if (!hasStartedClock){
        start = std::clock();
        hasStartedClock = true;
    }
    float deltaTime = (std::clock() - start) / CLOCKS_PER_SEC;
    float e  = *desired - *actual;
    float p = kp*e;
    i += ki*e*deltaTime;
    float d = deltaTime != 0.0 ? kd*((e - previous_error) / deltaTime) : kd * (e - previous_error);
    previous_error = e;
    *output = p + i + d;
}