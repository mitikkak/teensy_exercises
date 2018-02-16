
#include "Arduino.h"

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    //_SERIAL.println("HIGH");
    delay(500);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    //_SERIAL.println("LOW");
    delay(500);                       // wait for a second
}
