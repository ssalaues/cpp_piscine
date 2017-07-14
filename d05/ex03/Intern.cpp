#include "Intern.hpp"

Intern::NoForm::NoForm(void) {
  std::cout << "\nExplicit error message:\n";
  return;
}

Intern::NoForm::NoForm(NoForm const &src) {
  *this = src;
  return;
}

Intern::NoForm &Intern::NoForm::operator=(NoForm const &rhs) {
  (void)rhs;
  return *this;
}

const char *Intern::NoForm::what() const throw() {
  return "What the fuck kind of form was that?";
}

Intern::NoForm::~NoForm(void) throw() {}

Intern::Intern(void) { return; }

Intern::Intern(Intern const &src) {
  *this = src;
  return;
}

Intern &Intern::operator=(Intern const &rhs) {
  (void)rhs;
  return *this;
}

Form *Intern::searchForm(std::string nameForm, std::string targetForm) {
  Form *(Intern::*arrPtrF[3])(std::string const &target) = {
      &Intern::robotomyRequest, &Intern::presidentialPardon,
      &Intern::shrubberyCreation};

  const std::string arrNameForm[] = {"RobotomyRequest", "PresidentialPardon",
                                     "ShrubberyCreation"

  };

  for (int i = 0; i < 3; i++) {
    if (arrNameForm[i].compare(nameForm) == 0) {
      std::cout << "Intern busted their ass off on " << nameForm << "\n";
      return (this->*arrPtrF[i])(targetForm);
    }
  }
  throw Intern::NoForm();
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm) {
  try {
    return Intern::searchForm(nameForm, targetForm);
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  return NULL;
}

Form *Intern::robotomyRequest(std::string const &target) {
  return new RobotomyRequestForm(target);
}

Form *Intern::presidentialPardon(std::string const &target) {
  return new PresidentialPardonForm(target);
}

Form *Intern::shrubberyCreation(std::string const &target) {
  return new ShrubberyCreationForm(target);
}

Intern::~Intern(void) { return; }