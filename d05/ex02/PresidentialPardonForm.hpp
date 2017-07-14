#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
  PresidentialPardonForm(int signGrade, int execGrade);
  PresidentialPardonForm(PresidentialPardonForm const &src);
  PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
  ~PresidentialPardonForm(void);
};