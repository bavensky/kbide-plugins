#ifndef __MANHelloWorld_H__
#define __MANHelloWorld_H__

#include "driver.h"
#include "device.h"

#define MANHelloWorld_POLLING_MS         1000

class MANHelloWorld : public Device {
    private:
        enum { s_detect } state;
        TickType_t tickcnt, polling_tickcnt;

    public:
        // constructor
        MANHelloWorld();
        // override
        void init(void);
        void start(void);
        void process(Driver *drv);
        int prop_count(void);
        bool prop_name(int index, char *name);
        bool prop_unit(int index, char *unit);
        bool prop_attr(int index, char *attr);
        bool prop_read(int index, char *value);
        bool prop_write(int index, char *value);
        // method
        char* random();
        void writeled(int pin, int state);
};

#endif
