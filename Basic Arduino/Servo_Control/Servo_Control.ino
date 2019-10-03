//Cole Neal
//9/5/19

#include <Servo.h>

Servo myServo;

int btn1Pin = 2;
int btn2Pin = 3;
int servoPin = 9;
int btn1State;
int btn2State;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  Serial.println(btn1State);
  Serial.println(btn2State);
}
void loop() {
  btn1State = digitalRead(btn1Pin);
  btn2State = digitalRead(btn2Pin);
  if (btn1State == HIGH) {
    Serial.println("Button 1 is on");
    myServo.write(360);
  }
  if (btn2State == HIGH) {
    Serial.println("Button 2 is on");
    myServo.write(0);
  }
}
