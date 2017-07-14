#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Bureaucrat gizmo = Bureaucrat("Gremlin", 40);
  Intern furby;

  Form *f1 = furby.makeForm("RobotomyRequest", "Bender");
  gizmo.signForm(*f1);
  Form *f2 = furby.makeForm("PresidentialPardon", "Bender");
  Form *f3 = furby.makeForm("ShrubberyCreation", "Bender");

  std::cout << "\n" << *f1 << "\n";
  std::cout << *f2 << "\n";
  std::cout << *f3 << "\n";

  Form *f4 = furby.makeForm("Bad form", "Bender");

  return (0);
}
