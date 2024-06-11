#include "FileInputHandler.h"
#include <fstream>

FileInputHandler::FileInputHandler(const std::string& fileName) {
  inFile.open(fileName);
}

FileInputHandler::~FileInputHandler() {
  inFile.close();
}

std::string FileInputHandler::getUserInput() {
  std::string input;
  std::getline(inFile, input);
  return input;
}
