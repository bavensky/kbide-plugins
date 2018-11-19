#include <stdio.h>
#include <string.h>
#include <math.h>
#include "esp_system.h"
#include "kidbright32.h"
#include "kidbrightled.h"


kidbrightled::kidbrightled() {
}

void kidbrightled::init(void) {
  initialized = true;

  // gpio_config_t io_conf;

  //OUTPUT Mode
  //disable interrupt
  // io_conf.intr_type = GPIO_INTR_DISABLE;
  //set as output mode
  // io_conf.mode = GPIO_MODE_OUTPUT;
  //bit mask of the pins that you want to set GPIO
  // io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;


  // //INPUT Mode
  // io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
  // //set as input mode    
  // io_conf.mode = GPIO_MODE_INPUT;
  // //enable pull-up mode
  // io_conf.pull_up_en = GPIO_PULLUP_ENABLE;


  //configure GPIO with the given settings
  // gpio_config(&io_conf);
}

int kidbrightled::prop_count(void) {
  // not supported
  return 0;
}

bool kidbrightled::prop_name(int index, char *name) {
  // not supported
  return false;
}

bool kidbrightled::prop_unit(int index, char *unit) {
  // not supported
  return false;
}

bool kidbrightled::prop_attr(int index, char *attr) {
  // not supported
  return false;
}

bool kidbrightled::prop_read(int index, char *value) {
  // not supported
  return false;
}

bool kidbrightled::prop_write(int index, char *value) {
  // not supported
  return false;
}

void kidbrightled::process(Driver *drv) {

}

void kidbrightled::outputpin(int pin, int state) {
  _pin = pin; 
  _state = state;

  if(_pin == 17) {
     gpio_set_level(GPIO_NUM_17, _state);
  } else if(_pin == 2) {
    gpio_set_level(GPIO_NUM_2, _state);
  } else if(_pin == 15) {
    gpio_set_level(GPIO_NUM_15, _state);
  } else if(_pin == 12) {
    gpio_set_level(GPIO_NUM_12, _state);
  }
}

// int kidbrightled::inputpin(int pin) {
//   gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void*) GPIO_INPUT_IO_0);

//   _pin = pin;
//   if(_pin == 16) {
//     _buttonstate = gpio_get_level(GPIO_NUM_16); // BUTTON 1
//   } else if(_pin == 14) {
//     _buttonstate = gpio_get_level(GPIO_NUM_14); // BUTTON 2
//   }

  
//   return _buttonstate;
// }



