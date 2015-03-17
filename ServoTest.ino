#include <Servo.h>
#include "MyServo.h"

Servo s;
//This code works, but must attach in setup()
MyServo myServo;

//This code doesn't work, servo shakes and doesn't behave 
//MyServo brokenServo(A1);

void setup()
{
	//This code works...
	s.attach(A1);
	myServo.Attach(A0);
 
	
}

void loop()
{

 

}
