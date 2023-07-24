
#include <Servo.h>

Servo myServo;

int servoPin=A0;
int servoPosition=180;

void setup()
{
  pinMode(servoPin, OUTPUT);
  myServo.attach(A0);
}

void loop()
{
 myServo.write(servoPosition);
  
}