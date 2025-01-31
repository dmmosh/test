#include <Arduino.h>

#define RED 2
#define GREEN 4
#define BLUE 16
#define MAX 255

void setup() {
    Serial.begin(115200);
    pinMode(RED,OUTPUT);
    pinMode(GREEN,OUTPUT);
    pinMode(BLUE,OUTPUT);

}


uint8_t r = MAX;
uint8_t g = 0;
uint8_t b = 0;
void loop() {
    analogWrite(RED, r);
    analogWrite(GREEN,g);
    analogWrite(BLUE, b);

    if(r==MAX && g < 20 && b < 20){
        vTaskDelay(200/portTICK_PERIOD_MS);
    }

    if(r == MAX){
        if(b){
            b--;
        } else {
            g++;
        }
    } if (g == MAX){
        if(r){
            r--;
        } else {
            b++;
        }
    } if (b == MAX){
        if(g){
            g--;
        } else {
            r++;
        }
    }
    Serial.printf("R: %3i G: %3i B: %3i\n", r,g,b);
    

    vTaskDelay(7/portTICK_PERIOD_MS);
}
