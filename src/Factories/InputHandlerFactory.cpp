#include "InputHandlerFactory.h"
#include "ConsoleInputHandler.h"
#include "FileInputHandler.h"

std::unique_ptr<InputHandler> InputHandlerFactory::createInputHandler(const std::string& fileName) {
  if (fileName == "-") {
    return std::make_unique<ConsoleInputHandler>();
  } else {
    return std::make_unique<FileInputHandler>(fileName);
  }
}
