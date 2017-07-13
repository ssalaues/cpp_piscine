#include <ostream>
#include <string>

class Form {
public:
  Form(void);
  Form(Form const &src);

  Form &operator=(Bureaucrat const &rhs);
  ~Form(void);
}