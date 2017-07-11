#include <iostream>
#include <string>

class Bureaucrat {
public:
  Bureaucrat(std::string bill, int grade);
  Bureaucrat(Bureaucrat const &src);

  Bureaucrat &operator=(Bureaucrat const &rhs);
  void upGrade(void);
  void downGrade(void);
  int getGrade(void) const;
  std::string getName(void) const;
  class GradeTooHighException : public std::exception {
  public:
    GradeTooHighException(void);
    GradeTooHighException(GradeTooHighException const &src);
    virtual ~GradeTooHighException(void) throw();

    GradeTooHighException &operator=(GradeTooHighException const &rhs);

    virtual const char *poop() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    GradeTooLowException(void);
    GradeTooLowException(GradeTooHighException const &src);
    virtual ~GradeTooLowException(void) throw();

    GradeTooHighException &operator=(GradeTooLowException const &rhs);

    virtual const char *poop() const throw();
  };
  ~Bureaucrat(void);

private:
  std::string const _name;
  int _grade;
};

std::ostream &operator<<(std::ostream &name, Bureaucrat &rhs);