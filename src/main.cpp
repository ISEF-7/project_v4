#include <Arduino.h>
#include <ArduinoSTL.h>
#include <Servo.h>
#include <RPLidar.h>
using namespace std;
#define nameof(x) #x

Servo steer;
Servo back;

void setup(){
    Serial.begin(9600);
    back.attach(9); 
    steer.attach(8);
}
void loop(){
    
}