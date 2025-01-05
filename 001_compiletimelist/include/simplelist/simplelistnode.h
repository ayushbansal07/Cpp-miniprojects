#pragma once

namespace abansal::ctlist {

template <typename TNode, typename TNext>
class SimpleListNode {
public:
  void init() {
    m_node.init();
    m_next.init();
  }

  bool check() {
    if (!m_node.check()) {
      return false;
    }
    return m_next.check();
  }

protected:
  TNode m_node;
  TNext m_next;
};

template <typename TNode>
class SimpleListNodeTerminal {
public:
  void init() {
    m_node.init();
  }

  bool check() {
    return m_node.check();
  }

protected:
  TNode m_node;
};

} // namespace abansal::ctlist

