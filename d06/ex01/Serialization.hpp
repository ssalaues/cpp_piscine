#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <ctime>
#include <iostream>
#include <string>

class Serialization {
public:
  struct Data {
    std::string s1;
    int n;
    std::string s2;
  } typedef Data;
  Serialization(void);
  Serialization(Serialization const &src);
  ~Serialization(void);

  Serialization &operator=(Serialization const &rhs);

  void *serialize(void);
  Data *deserialize(void *raw);
  std::string randomArrayAplhaNum();
};

#endif