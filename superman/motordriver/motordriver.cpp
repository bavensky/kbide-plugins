#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "motordriver.h"


motordriver::motordriver(uint8_t ena, uint8_t enb, uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4) {
  polling_ms = NTTRandom2_POLLING_MS;
  _enable1 = ena;
  _enable2 = enb;
}

void motordriver::init(void) {
  state = s_detect;
  initialized = true;

  pinMode(_enable1, OUTPUT);
  pinMode(_enable2, OUTPUT);
  pinMode(_in1, OUTPUT);
  pinMode(_in2, OUTPUT);
  pinMode(_in3, OUTPUT);
  pinMode(_in4, OUTPUT);

  ledcSetup(0, 5000, 8);
  ledcAttachPin(_enable1, 0);

  ledcSetup(1, 5000, 8);
  ledcAttachPin(_enable2, 1);
  
}

int motordriver::prop_count(void) {
  // not supported
  return 0;
}

bool motordriver::prop_name(int index, char *name) {
  // not supported
  return false;
}

bool motordriver::prop_unit(int index, char *unit) {
  // not supported
  return false;
}

bool motordriver::prop_attr(int index, char *attr) {
  // not supported
  return false;
}

bool motordriver::prop_read(int index, char *value) {
  // not supported
  return false;
}

bool motordriver::prop_write(int index, char *value) {
  // not supported
  return false;
}

void motordriver::process(Driver *drv) {

}


void motordriver::drivermotor(bool state, uint8_t pwm) {
  switch(state) {
    case 1 : 
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);;
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            break;
    case 2 : 
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);;
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            break;
    case 3 : 
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);;
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            break;
    case 4 : 
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            break;
  }
  ledcWrite(0, pwm);
  ledcWrite(1, pwm);

}
    

