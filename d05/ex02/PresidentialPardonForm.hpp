#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const &src);
  PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
  void execute(Bureaucrat const &exec) const;
  ~PresidentialPardonForm(void);
};
#endif