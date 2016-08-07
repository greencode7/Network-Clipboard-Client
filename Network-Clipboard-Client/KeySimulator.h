#pragma once
#include <string>
#ifdef _WIN32
#include <Windows.h>

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

};
// namespace Base
}
