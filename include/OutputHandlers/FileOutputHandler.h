#pragma once
#include <string>
#include <fstream>
#include "OutputHandler.h"

class FileOutputHandler : public OutputHandler 
{
public:
  explicit FileOutputHandler(const std::string& fileName);
  ~FileOutputHandler();

  void displayOutput(const std::string& output) override;

private:
  std::ofstream outFile;
};
