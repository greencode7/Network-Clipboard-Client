#pragma once
#include <string>
#ifdef _WIN32
#include <windows.h>

#elif __linux__

#elif __APPLE__

#endif
namespace Base {
class KeySimulator {
 private:
  KeySimulator();
  ~KeySimulator();

 public:
  static void CtrlV();
  static void CtrlX();
  static void CtrlC();
  static void PlayPause();
  static void Stop();
  static void nextTrack();
  static void prevTrack();

};
// namespace Base
}
