#pragma once

#include "booleannodetypeselector.h"

namespace abansal::ctlist {

template <Operator Op, typename... TNodes>
class BooleanList {
public:
  void init() {
    m_node.init();
  }

  bool check() {
    return m_node.check();
  }

private:
  typename BooleanNodeTypeSelector<Op, TNodes...>::type m_node;
};

template <typename... TNodes>
using AndList = BooleanList<Operator::AND, TNodes...>;

template <typename... TNodes>
using OrList = BooleanList<Operator::OR, TNodes...>;
  
} // namespace abansal::ctlist
