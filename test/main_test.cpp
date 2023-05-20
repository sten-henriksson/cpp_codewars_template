#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

TEST_CASE("Basic test", "[basic]") {
    REQUIRE(1 == 1);
}