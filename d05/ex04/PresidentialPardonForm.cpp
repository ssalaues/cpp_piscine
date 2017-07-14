#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : Form("Nixon", "Presidential", 25, 5) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form(target, "Presidential", 25, 5) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &src)
    : Form("Nixon", "Presidential", 25, 5) {
  *this = src;
  return;
}

PresidentialPardonForm &PresidentialPardonForm::
operator=(PresidentialPardonForm const &rhs) {
  (void)rhs;
  return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &exec) const {
  Form::execute(exec);
  std::cout << this->getTarget()
            << " has been pardoned by Zafod Beeblebrox himself.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(void) { return; }