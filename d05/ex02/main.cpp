#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Bureaucrat Nixon("Nixon", 10);
  try {
    ShrubberyCreationForm Water("Gate");
    RobotomyRequestForm Smash("Reagan");
    PresidentialPardonForm Ruby("Jack");

    Nixon.signForm(Ruby);

    Nixon.executeForm(Ruby);

    std::cout << Nixon << "\n";
    std::cout << Water << "\n";
    std::cout << Smash << "\n";
    std::cout << Ruby << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  Bureaucrat jfk("JFK", 145);
  try {
    ShrubberyCreationForm Lee("Harvey");
    RobotomyRequestForm Jaquel("Reagan");
    PresidentialPardonForm Bobby("Ken");

    jfk.signForm(Lee);

    jfk.executeForm(Lee);

    std::cout << jfk << "\n";
    std::cout << Lee << "\n";
    std::cout << Jaquel << "\n";
    std::cout << Bobby << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  Bureaucrat Cyber("Cybermen", 66);
  try {
    ShrubberyCreationForm K("Bushes");
    RobotomyRequestForm Two("Dr. Who");
    PresidentialPardonForm So("Poop");

    Cyber.signForm(Two);

    Cyber.executeForm(Two);

    std::cout << Cyber << "\n";
    std::cout << K << "\n";
    std::cout << Two << "\n";
    std::cout << So << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  return 0;
}