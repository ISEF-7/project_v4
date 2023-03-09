#include "common.h"
Servo steer;
Servo back;


void setup(){
    back.write(94); //makes the back wheels spin at a relatively slow rate
    Serial.begin(9600);
    back.attach(9); //48,9
    steer.attach(8); //13
    steer.write(steer.read()+10); //makes a steer at 10 degrees to the right
}
void loop(){
}