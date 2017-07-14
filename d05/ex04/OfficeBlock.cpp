#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void)
    : _signing(NULL), _executor(NULL), _intern(NULL), _form(NULL) {
  return;
}

OfficeBlock::OfficeBlock(OfficeBlock const &src) {
  *this = src;
  return;
}

OfficeBlock::~OfficeBlock(void) { return; }

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &rhs) {
  (void)rhs;
  return *this;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target) {
  _form = _intern->makeForm(form, target);
  _signing->signForm(*_form);
  _executor->executeForm(*_form);
}

void OfficeBlock::setIntern(Intern &intern) { _intern = &intern; }

void OfficeBlock::setSigner(Bureaucrat &signing) { _signing = &signing; }

void OfficeBlock::setExecutor(Bureaucrat &executor) { _executor = &executor; }
