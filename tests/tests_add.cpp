#include <limits>
#include <catch2/catch_test_macros.hpp>

#include "add.h"

TEST_CASE("Basic test")
{
    REQUIRE(add<int>(2, 2) == 4);
    REQUIRE(add<int>(3, 2) == 5);
    REQUIRE(add<int>(std::numeric_limits<int>::max(), 0) == std::numeric_limits<int>::max());
}
