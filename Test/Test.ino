/*
 Name:		Test.ino
 Created:	2019/9/14 19:56:13
 Author:	steve
 ���ǵ�һ����visual studio�Ĳ��ԣ����Ҳ�����ģ�黯����
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
