#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE FooTests
#endif

#include <cmath>
#include <cstring>

#include <catch2/catch_test_macros.hpp>

#include "Foo.hpp"

TEST_CASE( "Add Test", "[Foo::add]" ) {
    REQUIRE( foo::add(1,1) == 2  );
    REQUIRE( foo::add(1001,2002) == 3003 );
    REQUIRE( foo::add(10,-10) == 0 );
    REQUIRE( foo::add(0.95,0.05) == 1.0 );
}

TEST_CASE( "Some examplary tests", "[Example]" ) {
    // some setup stuff
    const char* text = "some text";

    SECTION( "A section" ) {
        REQUIRE(true);
        
    }
    SECTION("Another section") {
        REQUIRE(1 == 1);

        SECTION("A subsection") {
            REQUIRE_FALSE(false);
        }

        SECTION("Another subsection") {
            SECTION("Level 3 subsection") {
                REQUIRE(true);
            }
        }
    }

    SECTION("A test that fails") {
        REQUIRE(false);
    }

}