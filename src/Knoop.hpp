#ifndef KNOOP_HPP
#define KNOOP_HPP

#include <map>
#include <variant>

#ifdef USING_CPP17
  #include <optional>
#else 
  #include <experimental/optional>

  namespace std {
    using namespace std::experimental;
  }
#endif

namespace njoy {
namespace Knoop {
  #include "Knoop/Node.hpp"
}
}

#endif // KNOOP_HPP
