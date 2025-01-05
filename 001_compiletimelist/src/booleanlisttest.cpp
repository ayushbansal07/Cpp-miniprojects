#include "booleanlist/booleanlist.h"
#include "simplelist/simplenodeimpl.h"

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
  using MyAndList = AndList<TestNode1, TestNode2, TestNode3, TestNode4>;
  MyAndList list1;
  initAndCheck(list1, 1); // Should return 0 as TestNode3 returns false, also TestNode4 check should not be called

  using MyOrList = OrList<TestNode1, TestNode2, TestNode3, TestNode4>;
  MyOrList list2;
  initAndCheck(list2, 2); // Should return 1 as TestNode1 return true, but only TestNode1 should be called

  // We can use conjunction of AndList and OrList
  AndList<MyAndList, MyOrList> list3;
  initAndCheck(list3, 3); // Should return 0 as MyAndList returns false, none of the MyOrsList nodes should be checked

  OrList<MyAndList, MyOrList> list4;
  initAndCheck(list4, 4); // Should return true as MyOrList returns true, both MyAndList (which return false) and MyOrList should be checked

  return 0;
}