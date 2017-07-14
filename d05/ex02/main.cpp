#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) { /*
   try {
     std::cout << "Icarus is going to reach for the sky\n";
     Bureaucrat Icarus = Bureaucrat("Icarus", 10);
     Form i1 = Form("letter to dad", 25, 75);
     Icarus.signForm(i1);
     while (1) {
       std::cout << Icarus.getGrade() << "\n";
       Icarus.upGrade();
     }
     ShrubberyCreationForm lee("test");

   } catch (std::exception &e) {
     std::cout << "Icarus " << e.what();
   }

   try {
     std::cout << "\nHades is reaching into the depths of despair\n";
     Bureaucrat Hades = Bureaucrat("Hades", 140);
     Form h1 = Form("letter to Zeus\n", 90, 1);
     Hades.signForm(h1);
     while (1) {
       std::cout << Hades.getGrade() << "\n";
       Hades.downGrade();
     }

   } catch (std::exception &e) {
     std::cout << "Hades.. " << e.what();
   }

   try {
     Bureaucrat h = Bureaucrat("Hades", 140);
     std::cout << "\n" << h << "\n";

     Bureaucrat i = Bureaucrat("Icarus", 10);
     std::cout << "\n" << i << "\n";

   } catch (std::exception &e) {
     std::cout << e.what() << std::endl;
   }*/

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