#include "MyServo.h"

int servoPin = 0;
Servo thisServo;

MyServo::MyServo()
{
}

MyServo::MyServo(int ServoPin)
{
	servoPin = ServoPin;
	thisServo.attach(servoPin);
}

void MyServo::Attach(int ServoPin)
{
	servoPin = ServoPin;
	thisServo.attach(servoPin);
}


MyServo::~MyServo()
{
}
