#include "simplelist/simplelist.h"
#include "simplelist/simplenodeimpl.h"

#include <iostream>

using namespace abansal::ctlist;

int main() {
  std::cerr << "=== Test1 ===" << std::endl;
  SimpleList<TestNode1, TestNode2, TestNode3, TestNode4> list;
  list.init();
  std::cerr << list.check() << std::endl; // Should return 0 as TestNode3 returns false, also TestNode4 check should not be called

  std::cerr << "=== Test2 ===" << std::endl;
  SimpleList<TestNode1, TestNode2, TestNode4> list2;
  list2.init();
  std::cerr << list2.check() << std::endl; // Should return 1 as TestNode[1,2,4] all return true

  return 0;
}