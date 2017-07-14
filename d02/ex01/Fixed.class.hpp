#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <cmath>
#include <iostream>

class Fixed {

private:
  int _n;
  static const int _fractionalBits = 8;

public:
  Fixed(void);
  Fixed(Fixed const &src);
  Fixed(int const n);
  Fixed(float const n);
  ~Fixed(void);

  Fixed &operator=(Fixed const &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif