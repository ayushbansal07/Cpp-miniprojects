#pragma once

#include "simplenodetypeselector.h"
#include "simplelistnode.h"

namespace abansal::ctlist {

template <typename TNode>
struct SimpleNodeTypeSelector<TNode> {
  using type = SimpleListNodeTerminal<TNode>;
};

template <typename TNode, typename... TNodeList>
struct SimpleNodeTypeSelector<TNode, TNodeList...> {
  using type = SimpleListNode<TNode, typename SimpleNodeTypeSelector<TNodeList...>::type>;
};
  
} // namespace abansal::ctlist
