#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
  ShrubberyCreationForm(int signGrade, int execGrade);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
  ~ShrubberyCreationForm(void);
};