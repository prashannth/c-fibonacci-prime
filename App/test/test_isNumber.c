#include "../vendor/unity/src/unity.h"
#include "../src/main.h"

/** Test that boolean is True if given string contains only numbers, false if not.
 *
 *  @test The function isNumber is called with a variety of parameters and its
 *        return asserted true or false based on expectations.
 *        - True if string contains only digits (1234567890)
 *        - False if string contains any other character
 *
 */
void test_isNumber( void )
{
    TEST_ASSERT_TRUE( isNumber( "2" ) );
    TEST_ASSERT_TRUE( isNumber( "02" ) );
    TEST_ASSERT_TRUE( isNumber( "25234543" ) );
    TEST_ASSERT_TRUE( isNumber( "12200160415121876738" ) );
    
    TEST_ASSERT_FALSE( isNumber( NULL ) );
    TEST_ASSERT_FALSE( isNumber( "" ) );
    TEST_ASSERT_FALSE( isNumber( "\n" ) );
    TEST_ASSERT_FALSE( isNumber( "\0" ) );
    TEST_ASSERT_FALSE( isNumber( "2d" ) );
    TEST_ASSERT_FALSE( isNumber( "test" ) );
}
