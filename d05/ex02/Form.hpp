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
  virtual void execute(Bureaucrat const &executor) const = 0;
  void beSigned(Bureaucrat &buro);
  std::string getTarget(void) const;
  std::string getName(void) const;
  int getGradeSign(void) const;
  int getGradeExec(void) const;
  bool getSign(void) const;

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
  class NotSigned : public std::exception {
  public:
    NotSigned(void);
    NotSigned(NotSigned const &src);
    NotSigned &operator=(NotSigned const &rhs);
    virtual const char *what() const throw();
    virtual ~NotSigned(void) throw();
  };

  virtual ~Form(void) = 0;

private:
  std::string const _target;
  std::string const _name;
  int const _gradeSign;
  int const _gradeExec;
  bool _sign;
};

std::ostream &operator<<(std::ostream &o, Form &rhs);
#endif