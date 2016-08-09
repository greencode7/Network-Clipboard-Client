#ifndef KEYBOARDRECEIVER_H
#define KEYBOARDRECEIVER_H

#include <windows.h>
#include <iostream>
#include "KeySimulator.h"

namespace Base {
class KeyboardReceiver
{
public:
    KeyboardReceiver();
    void readKeys();
    void end();
};

}

#endif // KEYBOARDRECEIVER_H
