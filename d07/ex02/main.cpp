#include "Array.tpp"

int main(void) {
  try {
    Array<int> tab(5);

    tab[0] = 21;
    tab[1] = 47;
    tab[2] = 36;
    tab[3] = 48;
    tab[4] = 47;
    for (int i = 0; i < 5; i++)
      std::cout << tab[i] << "\n";
  }

  catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }

  std::cout << "\n";
  try {
    Array<std::string> tab(6);

    tab[0] = "I";
    tab[1] = "Can't";
    tab[2] = "Believe";
    tab[3] = "Types";
    tab[4] = "Don't";
    tab[5] = "Matter!";

    for (int i = 0; i < 6; i++)
      std::cout << tab[i] << "\n";
  }

  catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  return (0);
}
