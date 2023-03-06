#pragma once
#include "common.h"

struct road_act{
    float l;
    float next_turndeg;
    float speed;
    //int lane; TODO
};

class instruction{
    public:
        float w;
        float t;
};

vector<instruction> m1(vector<road_act> d, Servo w);