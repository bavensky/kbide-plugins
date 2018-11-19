#ifndef __motordriver_H__
#define __motordriver_H__

#include "driver.h"
#include "device.h"

#define motordriver_POLLING_MS         1000

class motordriver : public Device {
    private:
        enum { s_detect } state;
        TickType_t tickcnt, polling_tickcnt;
        uint8_t _enable1 = 26;
        uint8_t _enable2 = 27;
        uint8_t _in1 = 22;
        uint8_t _in2 = 21;
        uint8_t _in3 = 18;
        uint8_t _in4 = 17;
        
        uint8_t _state = 0;
        uint8_t _pwm = 0;


    public:
        // constructor
        motordriver();
        // override
        void init(uint8_t ena, uint8_t enb, uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4);
        void process(Driver *drv);
        int prop_count(void);
        bool prop_name(int index, char *name);
        bool prop_unit(int index, char *unit);
        bool prop_attr(int index, char *attr);
        bool prop_read(int index, char *value);
        bool prop_write(int index, char *value);
        // method
        void drivermotor(bool state, uint8_t pwm);
};

#endif
