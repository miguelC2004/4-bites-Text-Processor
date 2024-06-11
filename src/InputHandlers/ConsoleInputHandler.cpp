#include "ConsoleInputHandler.h"
#include <iostream>

std::string ConsoleInputHandler::getUserInput() 
{
  std::string input;
  std::cout << "Ingrese 4 bytes (ingrese '.' en una línea nueva para finalizar): ";
  std::getline(std::cin, input);
  return input;
}
