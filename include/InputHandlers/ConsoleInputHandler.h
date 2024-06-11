#pragma once
#include <string>
#include "InputHandler.h"

class ConsoleInputHandler : public InputHandler {
public:
  std::string getUserInput() override;
};
