#include <iostream>
#include <string>

template <typename T> void iter(T *arr, size_t len, void (*func)(T const &)) {
  if (!arr)
    return;

  for (size_t i = 0; i < len; i++) {
    func(arr[i]);
  }
}

void printInt(int const &i) { std::cout << i << "\n"; }

void printString(std::string const &str) { std::cout << str << "\n"; }

int main(void) {
  int arrInt[] = {21, 47, 48, 36, 47};
  std::string arrString[] = {"I",     "Can't", "Believe",
                             "Types", "Don't", "Matter!"};

  std::cout << "String Array: " << std::endl;
  iter(arrString, 6, printString);
  std::cout << std::endl;

  std::cout << "Int Max in Array Format: " << std::endl;
  iter(arrInt, 5, printInt);
  std::cout << std::endl;

  return (0);
}
