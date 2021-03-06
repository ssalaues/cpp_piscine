#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("Cyberman", "Robotomy", 72, 45) {
  srand(time(NULL));
  return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form(target, "Robotomy", 72, 45) {
  srand(time(NULL));
  return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
    : Form("Cyberman", "Robotomy", 72, 45) {
  srand(time(NULL));
  *this = src;
  return;
}

RobotomyRequestForm &RobotomyRequestForm::
operator=(RobotomyRequestForm const &rhs) {
  (void)rhs;
  return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &exec) const {
  Form::execute(exec);
  if (rand() % 2 == 1)
    std::cout << "\a boop \a beep \a boop\n"
              << this->getTarget() << " has been robotomized successfully\n";
  else
    std::cout << this->getTarget() << " FAILED ROBOTOMIZATION\n";
}

RobotomyRequestForm::~RobotomyRequestForm(void) { return; }