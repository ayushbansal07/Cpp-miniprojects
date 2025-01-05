#pragma once

#include "operators.h"

namespace abansal::ctlist {

template <Operator Op, typename... TObjs>
struct BooleanNodeTypeSelector;
  
} // namespace abansal::ctlist

#include "booleannodetypeselector.hpp"
