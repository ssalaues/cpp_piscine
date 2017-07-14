#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
  RobotomyRequestForm(int signGrade, int execGrade);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
  ~RobotomyRequestForm(void);
};