#include "TextProcessor.h"
#include <iostream>
#include <string>

int main() 
{
  std::string inputFileName, outputFileName;
  std::cout << "Ingrese el nombre del archivo de entrada o '-' para entrada por consola: ";
  std::cin >> inputFileName;
  std::cin.ignore();

  std::cout << "Ingrese el nombre del archivo de salida o '-' para salida por consola: ";
  std::cin >> outputFileName;
  std::cin.ignore();

  TextProcessor processor(inputFileName, outputFileName);
  processor.processText();

  return 0;
}
