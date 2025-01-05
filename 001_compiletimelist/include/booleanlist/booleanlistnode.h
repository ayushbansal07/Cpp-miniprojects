#pragma once

#include "operators.h"

namespace abansal::ctlist {

template <Operator Op, typename TObj, typename TNextNode>
class BooleanListNodeBase {
public:
  void init() {
    m_obj.init();
    m_next.init();
  }
  bool check();

protected:
  TObj m_obj;
  TNextNode m_next;
};

template <Operator Op, typename TObj, typename TNextNode>
class BooleanListNode;

template <typename TObj, typename TNextNode>
class BooleanListNode<Operator::AND, TObj, TNextNode> : public BooleanListNodeBase<Operator::AND, TObj, TNextNode> {
public:
  bool check() {
    return this->m_obj.check() && this->m_next.check();
  }
};

template <typename TObj, typename TNextNode>
class BooleanListNode<Operator::OR, TObj, TNextNode> : public BooleanListNodeBase<Operator::OR, TObj, TNextNode> {
public:
  bool check() {
    return this->m_obj.check() || this->m_next.check();
  }
};

template <typename TObj>
class BooleanListNodeTerminal {
public:
  void init() {
    m_obj.init();
  }

  bool check() {
    return m_obj.check();
  }

private:
  TObj m_obj;
};
  
} // namespace abansal::ctlist
