#pragma once
#include <string>
#include "OutputHandler.h"

class ConsoleOutputHandler : public OutputHandler {
public:
  void displayOutput(const std::string& output) override;
};
