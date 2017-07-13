#include <iostream>
#include <string>

class Bureaucrat {
public:
  Bureaucrat(void);
  Bureaucrat(std::string bill, int grade);
  Bureaucrat(Bureaucrat const &src);

  Bureaucrat &operator=(Bureaucrat const &rhs);
  void upGrade(void);
  void downGrade(void);
  void setGrade(int const grade);
  int getGrade(void) const;
  void setName(std::string const name);
  std::string getName(void) const;
  class GradeTooHighException : public std::exception {
  public:
    GradeTooHighException(void);
    GradeTooHighException(GradeTooHighException const &src);
    virtual ~GradeTooHighException(void) throw();

    GradeTooHighException &operator=(GradeTooHighException const &rhs);

    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    GradeTooLowException(void);
    GradeTooLowException(GradeTooLowException const &src);
    virtual ~GradeTooLowException(void) throw();

    GradeTooLowException &operator=(GradeTooLowException const &rhs);

    virtual const char *what() const throw();
  };
  ~Bureaucrat(void);

private:
  std::string _name;
  int _grade;
};

std::ostream &operator<<(std::ostream &name, Bureaucrat &rhs);