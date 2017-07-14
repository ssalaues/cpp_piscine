#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("Lee Harvey", "Shrubbery", 145, 137) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form(target, "Shrubbery", 145, 147) {
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
  Form::executeForm(exec);

  std::string filename = this->getTarget() += "_shrubbery";
  std::ofstream prettyTrees;
  prettyTrees.open(filename.c_str());
  prettyTrees
      << "                                  # #### ####                   "
         "                    # #### ####\n";
  prettyTrees
      << "                                ### \\/#|### |/####              "
         "                  ### \\/#|### |/####\n";
  prettyTrees
      << "                               ##\\/#/ \\||/##/_/##/_#            "
         "                 ##\\/#/ \\||/##/_/##/_#\n";
  prettyTrees
      << "                             ###  \\/###|/ \\/ # ###              "
         "               ###  \\/###|/ \\/ # ###\n";
  prettyTrees
      << "                           ##_\\_#\\_\\## | #/###_/_####           "
         "              ##_\\_#\\_\\## | #/###_/_####\n";
  prettyTrees
      << "                          ## #### # \\ #| /  #### ##/##          "
         "            ## #### # \\ #| /  #### ##/##\n";
  prettyTrees
      << "                           __#_--###`  |{,###---###-~           "
         "             __#_--###`  |{,###---###-~\n";
  prettyTrees
      << "                                     \\ }{                       "
         "                       \\ }{\n";
  prettyTrees
      << "                                      }}{                       "
         "                        }}{\n";
  prettyTrees
      << "                                      }}{                       "
         "                        }}{\n";
  prettyTrees
      << "                                 ejm  {{}                       "
         "                        {{}\n";
  prettyTrees << "                                , -=-~{ .-^- "
                 "_--____--____--__-__-___-_________________-{  }_=-\n";
  prettyTrees.close();
}
ShrubberyCreationForm::~ShrubberyCreationForm(void) { return; }