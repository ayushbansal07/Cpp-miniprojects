#pragma once

#include "booleannodetypeselector.h"

namespace abansal::ctlist {

template <Operator Op, typename... TObjs>
class BooleanList {
public:
  void init() {
    m_obj.init();
  }

  bool check() {
    return m_obj.check();
  }

private:
  typename BooleanNodeTypeSelector<Op, TObjs...>::type m_obj;
};

template <typename... TObjs>
using AndList = BooleanList<Operator::AND, TObjs...>;

template <typename... TObjs>
using OrList = BooleanList<Operator::OR, TObjs...>;
  
} // namespace abansal::ctlist
