#pragma once

#include <iostream>

namespace abansal::ctlist {

class TestNode1 {
public:
  void init() {
    std::cerr << "TestNode1 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestNode1 check" << std::endl;
    return true;
  }
};

class TestNode2 {
public:
  void init() {
    std::cerr << "TestNode2 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestNode2 check" << std::endl;
    return true;
  }
};

class TestNode3 {
public:
  void init() {
    std::cerr << "TestNode3 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestNode3 check" << std::endl;
    return false;
  }
};

class TestNode4 {
public:
  void init() {
    std::cerr << "TestNode4 init" << std::endl;
  }

  bool check() {
    std::cerr << "TestNode4 check" << std::endl;
    return true;
  }
};
  
} // namespace abansal::ctlist
