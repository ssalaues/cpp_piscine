#ifndef OFFICE_BLOCK_HPP
#define OFFICE_BLOCK_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

class OfficeBlock {

public:
  OfficeBlock(void);
  void doBureaucracy(std::string, std::string);
  void setIntern(Intern &intern);
  void setSigner(Bureaucrat &signer);
  void setExecutor(Bureaucrat &executor);
  ~OfficeBlock(void);

private:
  Bureaucrat *_signing;
  Bureaucrat *_executor;
  Intern *_intern;
  Form *_form;

  OfficeBlock &operator=(OfficeBlock const &rhs);
  OfficeBlock(OfficeBlock const &src);
};

#endif