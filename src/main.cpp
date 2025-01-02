#include <Arduino.h>

#define RED 2
#define GREEN 4
#define BLUE 16

void setup() {
    Serial.begin(115200);
    pinMode(RED,OUTPUT);
    pinMode(GREEN,OUTPUT);
    pinMode(BLUE,OUTPUT);

    analogWrite(RED, 255);
    analogWrite(BLUE, 220);
    analogWrite(RED,104);
}

void loop() {
  // put your main code here, to run repeatedly:
}
