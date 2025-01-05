#pragma once

#include "operators.h"

namespace abansal::ctlist {

template <Operator Op, typename... TNodes>
struct BooleanNodeTypeSelector;
  
} // namespace abansal::ctlist

#include "booleannodetypeselector.hpp"
