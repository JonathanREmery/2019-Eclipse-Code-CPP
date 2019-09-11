#include "LED.h"

void LED::setRGB(int r, int g, int b){
    can.SetLEDOutput(r, CANifier::LEDChannelA);
    can.SetLEDOutput(g, CANifier::LEDChannelB);
    can.SetLEDOutput(b, CANifier::LEDChannelC);
}