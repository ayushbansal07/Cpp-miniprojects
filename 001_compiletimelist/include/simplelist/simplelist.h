#pragma once

#include "simplenodetypeselector.h"

namespace abansal::ctlist {

template <typename... TNodes>
class SimpleList {
public:
  void init() {
    m_node.init();
  }

  bool check() {
    return m_node.check();
  }

protected:
  typename SimpleNodeTypeSelector<TNodes...>::type m_node;
};
  
} // namespace abansal::ctlist
