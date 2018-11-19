#ifndef __kidbrightled_H__
#define __kidbrightled_H__

#include "driver.h"
#include "device.h"

#define kidbrightled_POLLING_MS         1000

// #define GPIO_OUTPUT_PIN_SEL  1ULL<<GPIO_NUM_17

// #define GPIO_INPUT_PIN_SEL  ((1ULL<<GPIO_NUM_16) | (1ULL<<GPIO_NUM_14))

class kidbrightled : public Device {
    private:
        enum { s_detect } state;
        TickType_t tickcnt, polling_tickcnt;

    public:
        // constructor
        kidbrightled();
        // override
        void init(void);
        void process(Driver *drv);
        int prop_count(void);
        bool prop_name(int index, char *name);
        bool prop_unit(int index, char *unit);
        bool prop_attr(int index, char *attr);
        bool prop_read(int index, char *value);
        bool prop_write(int index, char *value);
        int _pin;
        int _state;
        // int _buttonstate;
        // method
        void outputpin(int pin, int state);

        // int inputpin(int pin);
};

#endif
