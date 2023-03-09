#include "common.h"
Servo steer;
Servo back;


void setup(){
    back.write(86); //optimal 92 - pulse 
    Serial.begin(9600);
    back.attach(9); //48,9
    steer.attach(8); //13
    
    // road_act test = {
    //     3,
    //     50,
    //     30
    // };
    // vector<road_act> test_vec;
    // test_vec.push_back(test);
    // vector<instruction> _test = m1(test_vec,steer);
}
void loop(){
}