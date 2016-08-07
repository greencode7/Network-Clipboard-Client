#include "keyboardreceiver.h"

KeyboardReceiver::KeyboardReceiver(QObject *parent) : QObject(parent)
{

}

void KeyboardReceiver::readKeys()
{
    if (RegisterHotKey(NULL,1, MOD_CONTROL | MOD_SHIFT, 0x4c))  //0x42 is 'b'
        {
            std::cout<<"eingerichtet"<<std::endl;
        }

        MSG msg = {0};
        while (GetMessage(&msg, NULL, 0, 0) != 0)
        {
            if (msg.message == WM_HOTKEY)
            {
                std::cout<<"tasten wurden gedrückt"<<std::endl;
            }
        }

    UnregisterHotKey(NULL, 1);
}
