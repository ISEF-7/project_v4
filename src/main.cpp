#include "common.h"
Servo steer;
Servo back;


void setup(){
    Serial.begin(9600);
    back.attach(9); 
    steer.attach(8);
    back.write(0);
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
  for (int pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    steer.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (int pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    steer.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}