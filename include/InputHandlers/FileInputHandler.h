#pragma once
#include <string>
#include <fstream>
#include "InputHandler.h"

class FileInputHandler : public InputHandler 
{
public:
  explicit FileInputHandler(const std::string& fileName);
  ~FileInputHandler();

  std::string getUserInput() override;

private:
  std::ifstream inFile;
};
