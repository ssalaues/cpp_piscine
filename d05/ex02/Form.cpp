#include "Form.hpp"

Form::Form(void)
    : _target("Craigslist Rando"), _name("Form"), _gradeSign(1), _gradeExec(1),
      _sign(false) {
  return;
}

Form::Form(std::string target, std::string name, int gradeSign, int gradeExec)
    : _target(target), _name(name), _gradeSign(gradeSign),
      _gradeExec(gradeExec), _sign(false) {
  if (gradeSign <= 0 || gradeExec <= 0)
    throw Bureaucrat::GradeTooHighException();
  else if (gradeSign > 150 || gradeExec > 150)
    throw Bureaucrat::GradeTooLowException();
  return;
}

Form::Form(Form const &src)
    : _target("Craigslist Rando"), _name(src._name), _gradeSign(src._gradeSign),
      _gradeExec(src._gradeExec) {
  *this = src;
  return;
}

Form &Form::operator=(Form const &rhs) {
  this->_sign = rhs._sign;
  return *this;
}

void Form::beSigned(Bureaucrat &buro) {
  if (buro.getGrade() > this->_gradeSign)
    throw Form::GradeTooLowException();
  else
    this->_sign = true;
}

std::ostream &operator<<(std::ostream &o, Form &rhs) {
  o << "Filled Out By: " << rhs.getName()
    << " Grade Sign: " << rhs.getGradeSign()
    << " Grade Exectution: " << rhs.getGradeExec() << " Is Signed? "
    << rhs.getSign() << ">\n";
  return o;
}

std::string Form::getTarget() const { return this->_target; }

std::string Form::getName(void) const { return this->_name; }

int Form::getGradeSign(void) const { return this->_gradeSign; }

int Form::getGradeExec(void) const { return this->_gradeExec; }

bool Form::getSign(void) const { return this->_sign; }

Form::GradeTooHighException::GradeTooHighException(void) { return; }

Form::GradeTooHighException::GradeTooHighException(
    GradeTooHighException const &src) {
  *this = src;
  return;
}

Form::GradeTooHighException &Form::GradeTooHighException::
operator=(GradeTooHighException const &rhs) {
  (void)rhs;
  return *this;
}

const char *Form::GradeTooHighException::what() const throw() {
  return "You flying too high again!\n";
}

Form::GradeTooHighException::~GradeTooHighException(void) throw() { return; }

Form::GradeTooLowException::GradeTooLowException(void) { return; }

Form::GradeTooLowException::GradeTooLowException(
    GradeTooLowException const &src) {
  *this = src;
  return;
}

Form::GradeTooLowException &Form::GradeTooLowException::
operator=(GradeTooLowException const &rhs) {
  (void)rhs;
  return *this;
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Back down in the depths, I see...\n";
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() { return; }

Form::~Form(void) { return; }