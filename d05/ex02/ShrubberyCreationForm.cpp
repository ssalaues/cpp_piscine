#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("Lee Harvey", "Shrubbery", 145, 137) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::target)
    : Form(target, "Shrubbery" 145, 147) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
    : Form("Lee Harvey", "Shrubbery", 145, 137) {
  *this = src;
  return;
}

ShrubberyCreationForm &ShrubberyCreationForm::
operator=(ShrubberyCreationForm const &rhs) {
  (void)rhs;
  return *this;
}

void ShrubberyCreationForm::runForm(Bureaucrat const &exec) const {
  Form::executeForm(trees);

  std::string filename = this->getTarget() += "_shrubbery";
  std::ofstream prettyTrees(filename);
  prettyTrees.open(filename);
  filename << "                                  # #### ####                   "
              "                    # #### ####\n";
  filename << "                                ### \/#|### |/####              "
              "                  ### \/#|### |/####\n";
  filename << "                               ##\/#/ \||/##/_/##/_#            "
              "                 ##\/#/ \||/##/_/##/_#\n";
  filename << "                             ###  \/###|/ \/ # ###              "
              "               ###  \/###|/ \/ # ###\n";
  filename << "                           ##_\_#\_\## | #/###_/_####           "
              "              ##_\_#\_\## | #/###_/_####\n";
  filename << "                          ## #### # \ #| /  #### ##/##          "
              "            ## #### # \ #| /  #### ##/##\n";
  filename << "                           __#_--###`  |{,###---###-~           "
              "             __#_--###`  |{,###---###-~\n";
  filename << "                                     \ }{                       "
              "                       \ }{\n";
  filename << "                                      }}{                       "
              "                        }}{\n";
  filename << "                                      }}{                       "
              "                        }}{\n";
  filename << "                                 ejm  {{}                       "
              "                        {{}\n";
  filename << "                                , -=-~{ .-^- "
              "_--____--____--__-__-___-_________________-{  }_=-\n";
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) { return; }