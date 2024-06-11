#include "TextProcessor.h"
#include <iostream>
#include <string>

int main() {
  std::string inputFileName, outputFileName;
  std::cout << "Ingrese el nombre del archivo de entrada o '-' para entrada por consola: ";
  std::cin >> inputFileName;
  std::cin.ignore(); // Ignorar el salto de línea después de la entrada del archivo

  std::cout << "Ingrese el nombre del archivo de salida o '-' para salida por consola: ";
  std::cin >> outputFileName;
  std::cin.ignore(); // Ignorar el salto de línea después de la entrada del archivo

  TextProcessor processor(inputFileName, outputFileName);
  processor.processText();

  return 0;
}
