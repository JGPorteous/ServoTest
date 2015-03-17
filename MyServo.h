#pragma 
#include <Servo.h>

class MyServo
{
public:
	MyServo();
	MyServo(int ServoPin);
	void Attach(int ServoPin);

	~MyServo();
};

