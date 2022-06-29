/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/cademissner/Desktop/IoT/Lab5-VoltageDivision/src/Lab5-VoltageDivision.ino"
void setup();
void loop();
#line 1 "/Users/cademissner/Desktop/IoT/Lab5-VoltageDivision/src/Lab5-VoltageDivision.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

#define LED_PIN D5
#define LIGHT_PIN A5
int minVal = 4095;
int maxVal = 0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);

}

void loop() {
    int light = analogRead(LIGHT_PIN);
    minVal = min(minVal, light);
    maxVal = max(maxVal, light);
    Serial.println(maxVal);

    analogWrite(LED_PIN, map(light, minVal, maxVal, 0, 255));
}