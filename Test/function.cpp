#include "head.h"
#include <Arduino.h>

int funOn() {
	digitalWrite(13, HIGH);
}

int funOff() {
	digitalWrite(13, LOW);
}