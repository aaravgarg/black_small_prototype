#include <Servo.h>

Servo left_hip_pitch;
Servo left_hip_yaw;
Servo left_hip_roll;
Servo left_knee;

Servo right_hip_pitch;
Servo right_hip_yaw;
Servo right_hip_roll;
Servo right_knee;

void setup(){

left_hip_pitch.attach(5)
left_hip_roll.attach(6);
left_knee.attach(3);
// left_hip_yaw.attach(NA);

right_hip_pitch.attach(10);
right_hip_roll.attach(9);
right_knee.attach(11);
// right_hip_yaw.attach(NA);


}

void loop(){

}