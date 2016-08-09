#include "KeySimulator.h"

namespace Base {

KeySimulator::KeySimulator() {
}

KeySimulator::~KeySimulator() {
}

void KeySimulator::CtrlV() {
#ifdef _WIN32

  INPUT neu[4];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
   neu[0].ki.wVk = VK_LCONTROL;
   neu[0].ki.dwFlags = 0;

   neu[1].type = INPUT_KEYBOARD;
   neu[1].ki.wVk = 'V';
   neu[1].ki.dwFlags = 0;

   neu[2].type = INPUT_KEYBOARD;
   neu[2].ki.wVk = 'V';
   neu[2].ki.dwFlags = KEYEVENTF_KEYUP;

   neu[3].type = INPUT_KEYBOARD;
   neu[3].ki.wVk = VK_LCONTROL;
   neu[3].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(4, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::CtrlX() {
#ifdef _WIN32

  INPUT neu[4];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_LCONTROL;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = 'X';
  neu[1].ki.dwFlags = 0;

  neu[2].type = INPUT_KEYBOARD;
  neu[2].ki.wVk = 'X';
  neu[2].ki.dwFlags = KEYEVENTF_KEYUP;

  neu[3].type = INPUT_KEYBOARD;
  neu[3].ki.wVk = VK_LCONTROL;
  neu[3].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(4, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::CtrlC() {
#ifdef _WIN32

  INPUT neu[4];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_LCONTROL;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = 'C';
  neu[1].ki.dwFlags = 0;

  neu[2].type = INPUT_KEYBOARD;
  neu[2].ki.wVk = 'C';
  neu[2].ki.dwFlags = KEYEVENTF_KEYUP;

  neu[3].type = INPUT_KEYBOARD;
  neu[3].ki.wVk = VK_LCONTROL;
  neu[3].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(4, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::PlayPause() {
#ifdef _WIN32

  INPUT neu[2];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_MEDIA_PLAY_PAUSE;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = VK_MEDIA_PLAY_PAUSE;
  neu[1].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(2, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::Stop() {
#ifdef _WIN32

  INPUT neu[2];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_MEDIA_STOP;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = VK_MEDIA_STOP;
  neu[1].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(2, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::nextTrack() {
#ifdef _WIN32

  INPUT neu[2];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_MEDIA_NEXT_TRACK;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = VK_MEDIA_NEXT_TRACK;
  neu[1].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(2, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}

void KeySimulator::prevTrack() {
#ifdef _WIN32

  INPUT neu[2];
  ZeroMemory(neu, sizeof(neu));

  neu[0].type = INPUT_KEYBOARD;
  neu[0].ki.wVk = VK_MEDIA_PREV_TRACK;
  neu[0].ki.dwFlags = 0;

  neu[1].type = INPUT_KEYBOARD;
  neu[1].ki.wVk = VK_MEDIA_PREV_TRACK;
  neu[1].ki.dwFlags = KEYEVENTF_KEYUP;

  SendInput(2, neu, sizeof(INPUT));

#elif __linux__

#elif __APPLE__

#endif
}
// namespace Base
}
