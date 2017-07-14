#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
  void execute(Bureaucrat const &exec) const;
  ~RobotomyRequestForm(void);
};
#endif