#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) { /*
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
 */
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
