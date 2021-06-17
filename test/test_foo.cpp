#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE FooTests
#endif

#include <cmath>
#include <cstring>

#include <boost/test/unit_test.hpp>
#include "Foo.hpp"



BOOST_AUTO_TEST_SUITE(foo_add_suite)

    BOOST_AUTO_TEST_CASE(test_simple)
    {
        BOOST_CHECK_EQUAL(foo::add(0,0), 0);
        BOOST_CHECK_EQUAL(foo::add(0,1), 1);
        BOOST_CHECK_EQUAL(foo::add(1,2), 3);
        BOOST_CHECK_EQUAL(foo::add(5,0), foo::add(0,5));
    }

    BOOST_AUTO_TEST_CASE(test_large_numbers)
    {
        BOOST_CHECK_EQUAL(foo::add(1000001,2000002), 3000003);
    }

    BOOST_AUTO_TEST_CASE(test_negative)
    {
        BOOST_CHECK_EQUAL(foo::add(1,-1), 0);
        BOOST_CHECK_EQUAL(foo::add(-6,-4), -10);
        BOOST_CHECK_EQUAL(foo::add(-99,9), -90);
    }

    BOOST_AUTO_TEST_CASE(test_decimal)
    {
        BOOST_CHECK_EQUAL(foo::add(0.2,0.5), 0.7);
        BOOST_CHECK_EQUAL(foo::add(10,-0.01), 9.99);
        BOOST_CHECK_EQUAL(foo::add(.5,99.5), 100.0);
    }

    BOOST_AUTO_TEST_CASE(test_nan)
    {
        BOOST_CHECK( std::isnan(foo::add(std::nan(""),std::nan(""))) );
        BOOST_CHECK( std::isnan(foo::add(std::nan(""),-std::nan(""))) );
        BOOST_CHECK( std::isnan(foo::add(std::nan(""),1)) );
        BOOST_CHECK( std::isnan(foo::add(1,-std::nan(""))) );        
    }

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE(foo_reverse_suite)

    BOOST_AUTO_TEST_CASE(test_empty)
    {
        BOOST_CHECK( std::strcmp( foo::reverse(""), "" ) == 0 );
    }

    BOOST_AUTO_TEST_CASE(test_trivial)
    {
        BOOST_CHECK( std::strcmp( foo::reverse("a"), "a" ) == 0 );
    }

    BOOST_AUTO_TEST_CASE(test_word)
    {
        BOOST_CHECK( std::strcmp( foo::reverse("hello"), "olleh" ) == 0 );
    }

    BOOST_AUTO_TEST_CASE(test_sentence)
    {
        BOOST_CHECK( std::strcmp( foo::reverse("Hello, beautiful world!"), "!dlrow lufituaeb ,olleH" ) == 0 );
    }

BOOST_AUTO_TEST_SUITE_END()

// BOOST_AUTO_TEST_SUITE(these_tests_will_fail)

//     BOOST_AUTO_TEST_CASE(test_to_fail)
//     {
//         BOOST_CHECK( false );
//     }

//     BOOST_AUTO_TEST_CASE(test_to_fail2)
//     {
//         BOOST_CHECK_EQUAL( 1, 0 );
//     }

// BOOST_AUTO_TEST_SUITE_END()