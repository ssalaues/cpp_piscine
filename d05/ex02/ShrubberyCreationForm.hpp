#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
  void runForm(Bureaucrat const &exec) const;
  ~ShrubberyCreationForm(void);
};
#endif