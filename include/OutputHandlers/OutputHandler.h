#pragma once
#include <string>

class OutputHandler 
{
public:
  virtual void displayOutput(const std::string& output) = 0;
  virtual ~OutputHandler() = default;
};
