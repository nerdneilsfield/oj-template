// Using catch test framework

#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "sol.cpp"

#define REQUIRE_VECTOR(expected, real)           \
  {                                              \
    \
    REQUIRE((expected).size() == (real).size()); \
    for (unsigned int i = 0; i < (real).size(); i++) {    \
      REQUIRE((expected)[i] == (real)[i]);       \
    }                                            \
  }

TEST_CASE("01") {
  REQUIRE_VECTOR(expected, real);
}
