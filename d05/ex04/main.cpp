#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Intern idiotOne;
  Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
  Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
  OfficeBlock ob;
  ob.setIntern(idiotOne);
  ob.setSigner(bob);
  ob.setExecutor(hermes);
  try {
    ob.doBureaucracy("mutant pig termination", "Pigley");
  } catch (Form::NotSigned &e) {
    std::cout << e.what() << "\n";
  } catch (Intern::NoForm &e) {
    std::cout << e.what() << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  return (0);
}
