#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "MANHelloWorld.h"


MANHelloWorld::MANHelloWorld() {
  polling_ms = MANHelloWorld_POLLING_MS;
}

void MANHelloWorld::init(void) {
  state = s_detect;
  initialized = true;
}

void MANHelloWorld::start(void) {

}

void MANHelloWorld::writeled(int pin, int state) {
  if(pin == 17) {
    gpio_set_level(GPIO_NUM_17, state);
  } else if(pin == 2) {
    gpio_set_level(GPIO_NUM_2, state);
  }
}

int MANHelloWorld::prop_count(void) {
  // not supported
  return 0;
}

bool MANHelloWorld::prop_name(int index, char *name) {
  // not supported
  return false;
}

bool MANHelloWorld::prop_unit(int index, char *unit) {
  // not supported
  return false;
}

bool MANHelloWorld::prop_attr(int index, char *attr) {
  // not supported
  return false;
}

bool MANHelloWorld::prop_read(int index, char *value) {
  // not supported
  return false;
}

bool MANHelloWorld::prop_write(int index, char *value) {
  // not supported
  return false;
}

void MANHelloWorld::process(Driver *drv) {
}

char* MANHelloWorld::random() {
    return "nat-random";
}


