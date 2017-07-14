#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

class Convert {
public:
  class NoneDisplayableException : public std::exception {
  private:
  public:
    NoneDisplayableException(void);
    NoneDisplayableException(NoneDisplayableException const &src);
    virtual ~NoneDisplayableException(void) throw();

    NoneDisplayableException &operator=(NoneDisplayableException const &rhs);

    virtual const char *what() const throw();
  };

  class ImpossibleException : public std::exception {
  private:
  public:
    ImpossibleException(void);
    ImpossibleException(ImpossibleException const &src);
    virtual ~ImpossibleException(void) throw();

    ImpossibleException &operator=(ImpossibleException const &rhs);

    virtual const char *what() const throw();
  };

private:
public:
  Convert(void);
  Convert(Convert const &src);
  ~Convert(void);

  Convert &operator=(Convert const &rhs);

  static int getPrecision(char *str);
  static char doubleToChar(double dIn);
  static int doubleToInt(double dIn);
  static float doubleToFloat(double dIn);
  static double doubleToDouble(double dIn);
};

#endif