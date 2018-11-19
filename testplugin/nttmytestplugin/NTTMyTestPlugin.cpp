#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "NTTMyTestPlugin.h"


NTTMyTestPlugin::NTTMyTestPlugin() {
  polling_ms = NTTMyTestPlugin_POLLING_MS;
}

void NTTMyTestPlugin::init(void) {
  state = s_detect;
  initialized = true;
}

void NTTMyTestPlugin::writeLED(int pin, int state) {
  if(pin == 17) {
    gpio_set_level(GPIO_NUM_17, state);
  } else if(pin == 2) {
    gpio_set_level(GPIO_NUM_2, state);
  } else if(pin == 15) {
    gpio_set_level(GPIO_NUM_15, state);
  } else if(pin == 12) {
    gpio_set_level(GPIO_NUM_12, state);
  }
}

int NTTMyTestPlugin::prop_count(void) {
  // not supported
  return 0;
}

bool NTTMyTestPlugin::prop_name(int index, char *name) {
  // not supported
  return false;
}

bool NTTMyTestPlugin::prop_unit(int index, char *unit) {
  // not supported
  return false;
}

bool NTTMyTestPlugin::prop_attr(int index, char *attr) {
  // not supported
  return false;
}

bool NTTMyTestPlugin::prop_read(int index, char *value) {
  // not supported
  return false;
}

bool NTTMyTestPlugin::prop_write(int index, char *value) {
  // not supported
  return false;
}

void NTTMyTestPlugin::process(Driver *drv) {
}

char* NTTMyTestPlugin::random() {
    return "nat-random";
}


