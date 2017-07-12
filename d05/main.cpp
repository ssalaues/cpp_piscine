#include "Bureaucrat.hpp"

int main(void) {
  try {
    Bureaucrat Bill = Bureaucrat("Billy", 5);
    std::cout << Bill.getGrade() << "\n";
    std::cout << Bill.getGrade() << "\n";
  }
  return 0;
}