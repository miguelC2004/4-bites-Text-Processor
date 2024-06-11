#pragma once
#include <string>

class InputHandler {
public:
  virtual std::string getUserInput() = 0;
  virtual ~InputHandler() = default;
};
