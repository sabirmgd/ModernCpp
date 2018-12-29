#include "stdafx.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "RepeatedString.h"


TEST_CASE("Repeated String with with small string", "[repeatedStringElegant]") {
	string s = "aba";
	REQUIRE(::repeatedStringElegant(s, 10) == 6);

	
}