#pragma once
#include <memory>
#include <string>
#include "InputHandler.h"

class InputHandlerFactory {
public:
  static std::unique_ptr<InputHandler> createInputHandler(const std::string& fileName);
};
