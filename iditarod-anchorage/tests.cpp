#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "fib.h"
#include "factorial.h"

TEST_CASE("Factorials are computed through a loop", "[factorial_loop]")
{
	REQUIRE( factorial_loop(0) == 1 );
	REQUIRE( factorial_loop(1) == 1 );
	REQUIRE( factorial_loop(5) == 120 );
	REQUIRE( factorial_loop(9) == 362880 );
}
