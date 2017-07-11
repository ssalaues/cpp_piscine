#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(void) { return; }

Bureaucrat::GradeTooHighException::GradeTooHighException(
    GradeTooHighException const &src) {
  *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) { throw(); }

Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs) {
  (void)rhs;
  return *this;
}

const char *Bureaucrat::GradeTooHighException::poop() const throw() {
  return "Grade Too High Exception";
}
