#include "common.h"
#include "map.h"
#include "motors.h"

//define pins
#define pin_L 0 //TODO set the values
#define pin_m_1 1
#define pin_m_2 2

using namespace std;
enum PROTOCOL {OFF_PROTOCOL = 0, ON_PROTOCOL = 1, BOOTING_PROTOCOL = 2, ROUTE_PROTOCOL = 3, SLAM_PROTOCOL = 4} SYS_STATUS;
enum STATUS {OK, ERR};

const bool TEST_PROTOCOL = true;

RPLidar l; RPLidar* L = &l; STATUS lstatus; //TODO restructure code by adding custom classes inherited from these builtin header classes 
Servo m1; Servo* M1 = &m1; STATUS m1status; 
Servo m2; Servo* M2 = &m2; STATUS m2status;

class Hub{
  public:
    const int Pin_l = pin_L; 
    const int Pin_m_1 = pin_m_1;
    const int Pin_m_2 = pin_m_2;

    const int width = 110; 
    const int length = 150; 
    const int heigh = 50; 
    //const int mass = ; TODO set
    const int wheel_diamter = 30;
};

void shutdown(Servo obj){
  if (strcmp(nameof(obj), "m1") == 0){ //TEST if nameof() macro prints "obj" not the actual name of passed argument 
  //TODO add shutting down of specific modules
  }
  if (strcmp(nameof(obj), "m2") == 0){
  }
}
void shutdown(RPLidar obj){
  if (strcmp(nameof(obj),"l") == 0){ 
  }
}

//////

short completePercent = 0;

string hok = "Hub: OK\n";

string her = "Hub: ERR\n";
string hb = "Booting Hub";

string m1ok = "Servo m1: OK\n";
string m1er = "Servo m1: ERR\n";

string m2ok = "Servo m2:" "OK\n";
string m2er = "Servo m2:" "ERR\n";

string sb = "Booting Servo m";

string lok = "RPLidar l: OK\n";
string ler = "RPLidar l: ERR\n";
string lb = "Booting RPLidar";

string SETUP = "SETUP ///////\n";
string b = "Booting | ";
string route = "Calculating Route | ";
string boot_results;

string SETUP_FINISH  = "SETUP Completed ///////\n";
string b_FINISH = "Booting Completed ///////\n";
string r_FINISH = "Route Found! ///////\n";

string X = "X";
string hash = "#";
string dotdotdot = "...\n";
string exclamation_mark = "!\n";

string tick = "Tick #";

//////

string file = "0 3.2 5.6%3.2 0 0%5.6 0 0%|0 30 0%30 0 0%0 0 0%|30 40 0%|";
//TODO later add SD file reading
//TODO init threading

// vector<vector<float>> l_mtx_data;
// vector<vector<float>> a_mtx_data;
// vector<vector<float>> r_mtx_data;
// vector<road_act> B;
// vector<instruction> MOTOR_1_INSTRUCTIONS;
// vector<instruction> MOTOR_2_INSTRUCTIONS;

void LEDblink(int port, int delayms){
  digitalWrite(port, HIGH);
  delay(delayms);
  digitalWrite(port, LOW);
  delay(delayms);
}

void setup() {
  Serial.begin(9600);
  //Serial.println(test()[0][0]);
  vector<vector<float>> l_mtx_data = convert_f_TO_2d(div(file)[0]);
}

void loop() {
  // put your main code here, to run repeatedly:
}