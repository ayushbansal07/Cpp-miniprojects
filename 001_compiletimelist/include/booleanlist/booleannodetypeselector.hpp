#pragma once

#include "booleannodetypeselector.h"
#include "booleanlistnode.h"

namespace abansal::ctlist {

template <Operator Op, typename TObj>
struct BooleanNodeTypeSelector<Op, TObj> {
  using type = BooleanListNodeTerminal<TObj>;
};

template <Operator Op, typename TObj, typename... TObjList>
struct BooleanNodeTypeSelector<Op, TObj, TObjList...> {
  using type = BooleanListNode<Op, TObj, typename BooleanNodeTypeSelector<Op, TObjList...>::type>;
};
  
} // namespace abansal::ctlist
