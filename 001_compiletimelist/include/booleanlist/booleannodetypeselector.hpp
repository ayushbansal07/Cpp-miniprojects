#pragma once

#include "booleannodetypeselector.h"
#include "booleanlistnode.h"

namespace abansal::ctlist {

template <Operator Op, typename TNode>
struct BooleanNodeTypeSelector<Op, TNode> {
  using type = BooleanListNodeTerminal<TNode>;
};

template <Operator Op, typename TNode, typename... TNodeList>
struct BooleanNodeTypeSelector<Op, TNode, TNodeList...> {
  using type = BooleanListNode<Op, TNode, typename BooleanNodeTypeSelector<Op, TNodeList...>::type>;
};
  
} // namespace abansal::ctlist
