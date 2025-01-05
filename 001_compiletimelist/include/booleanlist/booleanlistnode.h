#pragma once

#include "operators.h"

namespace abansal::ctlist {

template <Operator Op, typename TNode, typename TNext>
class BooleanListNodeBase {
public:
  void init() {
    m_node.init();
    m_next.init();
  }
  bool check();

protected:
  TNode m_node;
  TNext m_next;
};

template <Operator Op, typename TNode, typename TNext>
class BooleanListNode;

template <typename TNode, typename TNext>
class BooleanListNode<Operator::AND, TNode, TNext> : public BooleanListNodeBase<Operator::AND, TNode, TNext> {
public:
  bool check() {
    return this->m_node.check() && this->m_next.check();
  }
};

template <typename TNode, typename TNext>
class BooleanListNode<Operator::OR, TNode, TNext> : public BooleanListNodeBase<Operator::OR, TNode, TNext> {
public:
  bool check() {
    return this->m_node.check() || this->m_next.check();
  }
};

template <typename TNode>
class BooleanListNodeTerminal {
public:
  void init() {
    m_node.init();
  }

  bool check() {
    return m_node.check();
  }

private:
  TNode m_node;
};
  
} // namespace abansal::ctlist
