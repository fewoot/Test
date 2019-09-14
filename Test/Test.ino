/*
 Name:		Test.ino
 Created:	2019/9/14 19:56:13
 Author:	steve
*/

#include "head.h"
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
	/*funOn();
	delay(1000);
	funOff();*/
}
