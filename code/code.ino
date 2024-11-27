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

left_hip_pitch.attach(5);
left_hip_roll.attach(6);
left_knee.attach(3);
// left_hip_yaw.attach(NA);

right_hip_pitch.attach(10);
right_hip_roll.attach(9);
right_knee.attach(11);
// right_hip_yaw.attach(NA);

Serial.begin(9600);

reset();

delay(1000);

}

void loop(){

  // left_knee.write(50);
  // left_hip_roll.write(120); 
  // delay(50);
  // right_hip_pitch.write(20);
  // right_knee.write(50);
  // delay(2);

}

void reset() {
  
  left_hip_pitch.write(90); //clockwise
  left_hip_roll.write(110); //clockwise
  left_knee.write(70); //anticlockwise
  // left_hip_yaw.attach(NA);

  right_hip_pitch.write(80); //anticlockwise
  right_hip_roll.write(125); //clockwise
  right_knee.write(90); //clockwise
}

// initial positions

// left_hip_pitch.write(90); //clockwise
// left_hip_roll.write(110); //clockwise
// left_knee.write(70); //anticlockwise
// // left_hip_yaw.attach(NA);

// right_hip_pitch.write(80); //anticlockwise
// right_hip_roll.write(125); //clockwise
// right_knee.write(90); //clockwise