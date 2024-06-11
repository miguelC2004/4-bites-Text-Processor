#include "FileOutputHandler.h"
#include <fstream>

FileOutputHandler::FileOutputHandler(const std::string& fileName) {
  outFile.open(fileName);
}

FileOutputHandler::~FileOutputHandler() {
  outFile.close();
}

void FileOutputHandler::displayOutput(const std::string& output) {
  outFile << output;
}
