#pragma once
#include <memory>
#include <string>
#include "OutputHandler.h"

class OutputHandlerFactory
{
public:
  static std::unique_ptr<OutputHandler> createOutputHandler(const std::string& fileName);
};
