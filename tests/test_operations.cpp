#include "catch_amalgamated.hpp" // From Catch2's Github
#include "../Operations.h"
#include <stdexcept>

TEST_CASE("Testing addition", "[add]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, -1) == -2);
    REQUIRE(add(0, 0) == 0);
}

TEST_CASE("Testing subtraction", "[subtract]") {
    REQUIRE(subtract(5, 3) == 2);
    REQUIRE(subtract(-1, -1) == 0);
    REQUIRE(subtract(0, 5) == -5);
}

TEST_CASE("Testing multiplication", "[multiply]") {
    REQUIRE(multiply(2, 3) == 6);
    REQUIRE(multiply(-1, -1) == 1);
    REQUIRE(multiply(0, 5) == 0);
}

TEST_CASE("Testing division", "[divide]") {
    REQUIRE(divide(6, 3) == 2);
    REQUIRE(divide(-4, -2) == 2);
    REQUIRE(divide(5, 2) == Catch::Approx(2.5));
}

TEST_CASE("Testing division by zero", "[divide]") {
    REQUIRE_THROWS_AS(divide(5, 0), std::runtime_error);
}