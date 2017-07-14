#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

class Intern {
public:
  class NoForm : public std::exception {
  private:
  public:
    NoForm(void);
    NoForm(NoForm const &src);
    virtual ~NoForm(void) throw();

    NoForm &operator=(NoForm const &rhs);

    virtual const char *what() const throw();
  };

private:
public:
  Intern(void);
  Intern(Intern const &src);
  ~Intern(void);

  Intern &operator=(Intern const &rhs);

  Form *searchForm(std::string nameForm, std::string targetForm);
  Form *makeForm(std::string nameForm, std::string targetForm);

  Form *robotomyRequest(std::string const &target);
  Form *presidentialPardon(std::string const &target);
  Form *shrubberyCreation(std::string const &target);
};

#endif