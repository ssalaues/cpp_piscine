#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
  void runForm(Bureaucrat const &exec) const;
  ~RobotomyRequestForm(void);
};
#endif