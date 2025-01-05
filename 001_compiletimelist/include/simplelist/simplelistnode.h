#pragma once

namespace abansal::ctlist {

template <typename TObj, typename TNextNode>
class SimpleListNode {
public:
  void init() {
    m_obj.init();
    m_next.init();
  }

  bool check() {
    return m_obj.check() && m_next.check();
  }

protected:
  TObj m_obj;
  TNextNode m_next;
};

template <typename TObj>
class SimpleListNodeTerminal {
public:
  void init() {
    m_obj.init();
  }

  bool check() {
    return m_obj.check();
  }

protected:
  TObj m_obj;
};

} // namespace abansal::ctlist

