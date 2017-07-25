#ifndef ARRAY_CPP
#define ARRAY_CPP

#include <iostream>
#include <string>

template <typename T>

class Array {
public:
  Array<T>(void) {
    this->*_arr = NULL;
    return;
  }
  Array<T>(Array const &src) {
    *this = src;
    return;
  }
  Array<T>(unsigned int n) {
    this->_size = n;
    this->_arr = new T[n];
  }

  Array &operator=(Array const &rhs) {
    this->_size = rhs.size;
    _arr = new T[_size];

    for (size_t i = 0; i < this->_size; i++) {
      _arr[i] = rhs._arr[i];
    }
    return *this;
  }

  unsigned int size() { return _size; }

  T &operator[](unsigned int i) {
    if (i > (_size - 1))
      throw std::exception();
    return _arr[i];
  }
  ~Array<T>(void) { return; }

  private:
  T *_arr;
  unsigned int _size;

};

#endif 
