#include "OutputHandlerFactory.h"
#include "ConsoleOutputHandler.h"
#include "FileOutputHandler.h"

std::unique_ptr<OutputHandler> OutputHandlerFactory::createOutputHandler(const std::string& fileName) {
  if (fileName == "-") {
    return std::make_unique<ConsoleOutputHandler>();
  } else {
    return std::make_unique<FileOutputHandler>(fileName);
  }
}
