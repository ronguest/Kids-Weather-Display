//
//  Copyright (C) 2017 Ronald Guest <http://about.me/ronguest>

#include "Conditions.h"

//Conditions::Conditions() {
//}

void Conditions::setLow(int temperature) {
  lowTemperature = temperature;
}

void Conditions::setHigh(int temperature) {
  highTemperature = temperature;
}

void Conditions::setHumidity(int humidity) {
  theHumidity = humidity;
}

void Conditions::setTemperature(int temp) {
  theTemperature = temp;
}

void Conditions::setPop(char* apop) {
  pop = apop;
}

int Conditions::getLow() {
  return lowTemperature;
}

int Conditions::getHigh() {
  return highTemperature;
}

int Conditions::getHumidity() {
  return theHumidity;
}

int Conditions::getTemperature() {
  return theTemperature;
}

char* Conditions::getPop() {
  return pop;
}
