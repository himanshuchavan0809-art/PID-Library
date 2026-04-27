#include "PID.h"




PID::PID(){
    I=0;
    prev_Error=0;
}
float PID::calculate(float set_point, float position_val, float kp, float ki, float kd){

    float Error=set_point-position_val;
    I += Error;
    float value= kp*Error + ki*I + kd*(Error-prev_Error);
    prev_Error=Error;

    return value;

}