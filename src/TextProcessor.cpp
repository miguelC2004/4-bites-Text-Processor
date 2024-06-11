#include "TextProcessor.h"

TextProcessor::TextProcessor(const std::string& inputFileName, const std::string& outputFileName) {
  inputHandler = InputHandlerFactory::createInputHandler(inputFileName);
  outputHandler = OutputHandlerFactory::createOutputHandler(outputFileName);
}

void TextProcessor::processText() {
  std::string input;
  while ((input = inputHandler->getUserInput()) != ".") {
    if (input.size() != 4) {
      outputHandler->displayOutput("Error: Se esperan 4 bytes.\n");
    } else {
      outputHandler->displayOutput(input + "\n");
    }
  }
}
