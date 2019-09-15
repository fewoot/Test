/*
 Name:		Test.ino
 Created:	2019/9/14 19:56:13
 Author:	steve
 这是第一次用visual studio的测试，并且测试了模块化处理
*/

#include "head.h"
// the setup function runs once when you press reset or power the board
void setup() {
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	funOn();
	delay(1000);
	funOff();
}
