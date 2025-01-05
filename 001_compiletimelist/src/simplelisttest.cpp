#include "simplelist/simplelist.h"
#include "simplelist/simplenodeimpl.h"

#include <iostream>

using namespace abansal::ctlist;

int main() {
  std::cerr << "=== Test1 ===" << std::endl;
  SimpleList<TestObj1, TestObj2, TestObj3, TestObj4> list;
  list.init();
  std::cerr << list.check() << std::endl; // Should return 0 as TestObj3 returns false, also TestObj4 check should not be called

  std::cerr << "=== Test2 ===" << std::endl;
  SimpleList<TestObj1, TestObj2, TestObj4> list2;
  list2.init();
  std::cerr << list2.check() << std::endl; // Should return 1 as TestObj[1,2,4] all return true

  return 0;
}