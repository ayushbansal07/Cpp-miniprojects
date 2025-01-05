#pragma once

#include <iostream>

namespace abansal::ctlist {

class TestObj1 {
public:
  void init() {
    std::cerr << "TestObj1 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestObj1 check" << std::endl;
    return true;
  }
};

class TestObj2 {
public:
  void init() {
    std::cerr << "TestObj2 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestObj2 check" << std::endl;
    return true;
  }
};

class TestObj3 {
public:
  void init() {
    std::cerr << "TestObj3 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestObj3 check" << std::endl;
    return false;
  }
};

class TestObj4 {
public:
  void init() {
    std::cerr << "TestObj4 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestObj4 check" << std::endl;
    return true;
  }
};
  
} // namespace abansal::ctlist
