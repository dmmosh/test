#include <Arduino.h>

#define RED 2
#define GREEN 4
#define BLUE 16

void setup() {
    Serial.begin(115200);
    pinMode(RED,OUTPUT);
    pinMode(GREEN,OUTPUT);
    pinMode(BLUE,OUTPUT);

}


uint8_t r = 0;
uint8_t g = 0;
uint8_t b = 0;
void loop() {
    analogWrite(RED, r);
    analogWrite(GREEN,g);
    analogWrite(BLUE, b);

    r++;
    g++;
    b++;


    vTaskDelay(5/portTICK_PERIOD_MS);
}
