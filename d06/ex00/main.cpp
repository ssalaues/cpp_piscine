#include "Convert.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " "
              << " [value]" << std::endl;
    return (0);
  }
  double dIn = std::atof(argv[1]);
  int precision = Convert::getPrecision(argv[1]);
  if (dIn == 0 && argv[1][0] != '0') {
    std::cout << "Numeric number need." << std::endl;
    return (0);
  }
  try {
    std::cout << "char: ";
    char c = Convert::doubleToChar(dIn);
    std::cout << "'" << c << "'" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "int: ";
    std::cout << Convert::doubleToInt(dIn) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "float: ";
    std::cout << std::setprecision(precision) << std::fixed
              << Convert::doubleToFloat(dIn) << "f" << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << "double: ";
    std::cout << std::setprecision(precision) << std::fixed
              << Convert::doubleToDouble(dIn) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return (0);
}
