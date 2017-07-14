#include "Bureaucrat.hpp"

// MIB
Bureaucrat::Bureaucrat(void) { return; }

Bureaucrat::Bureaucrat(std::string bill, int grade) : _name(bill) {
  if (grade == 0)
    throw Bureaucrat::GradeTooLowException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade = grade;
  return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
  *this = src;
  return;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "devoured by his own hell hounds\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
  setGrade(rhs._grade);
  return *this;
}

void Bureaucrat::upGrade(void) {
  if ((this->_grade - 1) <= 0)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade--;
}

void Bureaucrat::downGrade(void) {
  if ((this->_grade + 1) > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->_grade++;
}

Bureaucrat::~Bureaucrat(void) { return; }
// Get and set

int Bureaucrat::getGrade(void) const { return this->_grade; }

void Bureaucrat::setGrade(int const grade) {
  this->_grade = grade;
  return;
}

std::string Bureaucrat::getName(void) const { return this->_name; }

void Bureaucrat::setName(std::string const name) {
  this->_name = name;
  return;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &rhs) {
  o << rhs.getName() << ", Bureaucrat Grade " << rhs.getGrade() << "\n";
  return o;
}

// Soooo high bro
Bureaucrat::GradeTooHighException::GradeTooHighException(void) { return; }

Bureaucrat::GradeTooHighException::GradeTooHighException(
    GradeTooHighException const &src) {
  *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
  return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::
operator=(GradeTooHighException const &rhs) {
  (void)rhs;
  return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "flew too close to the sun\n";
}

// Tooooo low man
Bureaucrat::GradeTooLowException::GradeTooLowException(void) { return; }

Bureaucrat::GradeTooLowException::GradeTooLowException(
    GradeTooLowException const &src) {
  *this = src;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::
operator=(GradeTooLowException const &rhs) {
  (void)rhs;
  return *this;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
  return;
}