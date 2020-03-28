#pragma once

#include <iosfwd>
#include <string>

#include <googletest/export.hpp>

namespace googletest
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  GOOGLETEST_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
