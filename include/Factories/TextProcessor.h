#pragma once
#include <string>
#include <memory>
#include "InputHandler.h"
#include "OutputHandler.h"
#include "InputHandlerFactory.h"
#include "OutputHandlerFactory.h"

class TextProcessor {
public:
  TextProcessor(const std::string& inputFileName, const std::string& outputFileName);

  void processText();

private:
  std::unique_ptr<InputHandler> inputHandler;
  std::unique_ptr<OutputHandler> outputHandler;
};
