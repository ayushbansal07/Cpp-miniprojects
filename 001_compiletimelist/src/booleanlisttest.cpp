#include "booleanlist/booleanlist.h"
#include "simplelist/objimpl.h"

#include <iostream>

using namespace abansal::ctlist;

// Helper funciton for different test cases
template <typename T>
void initAndCheck(T& list, int testId) {
  std::cerr << "=== Test" << testId << " ===" << std::endl;
  list.init();
  std::cerr << list.check() << std::endl;
}

int main() {
  using MyAndList = AndList<TestObj1, TestObj2, TestObj3, TestObj4>;
  MyAndList list1;
  initAndCheck(list1, 1); // Should return 0 as TestObj3 returns false, also TestObj4 check should not be called

  using MyOrList = OrList<TestObj1, TestObj2, TestObj3, TestObj4>;
  MyOrList list2;
  initAndCheck(list2, 2); // Should return 1 as TestObj1 return true, but only TestObj1 should be called

  // We can use conjunction of AndList and OrList
  AndList<MyAndList, MyOrList> list3;
  initAndCheck(list3, 3); // Should return 0 as MyAndList returns false, none of the MyOrsList nodes should be checked

  OrList<MyAndList, MyOrList> list4;
  initAndCheck(list4, 4); // Should return true as MyOrList returns true, both MyAndList (which return false) and MyOrList should be checked

  return 0;
}
