#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
  Form(void);
  Form(Form const &src);

  Form &operator=(Form const &rhs);
  Form(std::string target, std::string name, int gradeSign, int gradeExec);
  void beSigned(Bureaucrat &buro);
  std::string getTarget(void) const;
  std::string getName(void) const;
  int getGradeSign(void) const;
  int getGradeExec(void) const;
  bool getSign(void) const;
  virtual void executeForm(Bureaucrat const &exec) const = 0;

  class GradeTooHighException : public std::exception {
  public:
    GradeTooHighException(void);
    GradeTooHighException(GradeTooHighException const &src);

    GradeTooHighException &operator=(GradeTooHighException const &rhs);
    virtual const char *what() const throw();

    virtual ~GradeTooHighException(void) throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    GradeTooLowException(void);
    GradeTooLowException(GradeTooLowException const &src);

    GradeTooLowException &operator=(GradeTooLowException const &rhs);
    virtual const char *what() const throw();

    virtual ~GradeTooLowException(void) throw();
  };

  ~Form(void);

private:
  std::string const _target;
  std::string const _name;
  int const _gradeSign;
  int const _gradeExec;
  bool _sign;
};

std::ostream &operator<<(std::ostream &o, Form &rhs);
#endif