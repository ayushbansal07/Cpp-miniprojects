#pragma once

#include "simplenodetypeselector.h"
#include "simplelistnode.h"

namespace abansal::ctlist {

template <typename TObj>
struct SimpleNodeTypeSelector<TObj> {
  using type = SimpleListNodeTerminal<TObj>;
};

template <typename TObj, typename... TObjList>
struct SimpleNodeTypeSelector<TObj, TObjList...> {
  using type = SimpleListNode<TObj, typename SimpleNodeTypeSelector<TObjList...>::type>;
};
  
} // namespace abansal::ctlist
