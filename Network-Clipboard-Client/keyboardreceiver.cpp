#include "keyboardreceiver.h"

namespace Base {

KeyboardReceiver::KeyboardReceiver()
{

}

void KeyboardReceiver::readKeys()
{
    // key p
 if (RegisterHotKey(NULL, 1, MOD_CONTROL | MOD_ALT, 0x50)) {
     #ifdef DEBUGG
         std::cout << "eingerichtet" << std::endl;
     #endif
 }
 //Key b
 if (RegisterHotKey(NULL, 2, MOD_CONTROL | MOD_ALT, 0x42)) {
     #ifdef DEBUGG
         std::cout << "eingerichtet" << std::endl;
     #endif
 }
 //key n
 if (RegisterHotKey(NULL, 3, MOD_CONTROL | MOD_ALT, 0x4e)) {
     #ifdef DEBUGG
         std::cout << "eingerichtet" << std::endl;
     #endif
 }
 //key v
 if (RegisterHotKey(NULL, 4, MOD_CONTROL | MOD_ALT, 0x56)) {
     #ifdef DEBUGG
         std::cout << "eingerichtet" << std::endl;
     #endif
 }

 MSG msg = { 0 };
 while (GetMessage(&msg, NULL, 0, 0) != 0) {
   if (msg.message == WM_HOTKEY) {

     switch (msg.wParam) {
       case 1:
         Base::KeySimulator::PlayPause();
         break;
       case 2:
         Base::KeySimulator::Stop();
         break;
       case 3:
         Base::KeySimulator::nextTrack();
         break;
       case 4:
         Base::KeySimulator::prevTrack();
         break;
     }

#ifdef DEBUGG
        std::cout << "tasten wurden gedrueckt" << std::endl;
#endif
   }
 }

 UnregisterHotKey(NULL, 1);
}

void KeyboardReceiver::end() {
  UnregisterHotKey(NULL, 1);
  UnregisterHotKey(NULL, 2);
  UnregisterHotKey(NULL, 3);
  UnregisterHotKey(NULL, 4);
}
//end of Base
}
