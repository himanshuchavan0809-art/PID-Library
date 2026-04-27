#ifndef PID_H
#define PID_H


class PID{
    private:
        float I;
        float prev_Error;
    
    public:
        PID();
        float calculate(float set_point, float position_val, float kp, float ki, float kd);
};

#endif
