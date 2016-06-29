#include "../vendor/unity/src/unity.h"
#include "../src/isPrime.h"

/** Test that boolean is True if given number is a prime, false if not.
 *
 *  @test The function isPrime is called with a variety of parameters and its
 *        return asserted true or false based on expectations.
 *        - True if number is a prime number
 *        - False if number is not a prime number
 *
 */
void test_isPrime( void )
{
    TEST_ASSERT_TRUE( isPrime( 2 ) );
    TEST_ASSERT_TRUE( isPrime( 3 ) );
    TEST_ASSERT_TRUE( isPrime( 5 ) );
    TEST_ASSERT_TRUE( isPrime( 3917 ) );
    TEST_ASSERT_TRUE( isPrime( 4933 ) );
    TEST_ASSERT_TRUE( isPrime( 6337 ) );
    TEST_ASSERT_TRUE( isPrime( 7919 ) );
    TEST_ASSERT_TRUE( isPrime( 982451653 ) );
    TEST_ASSERT_TRUE( isPrime( 32416190071 ) );
    TEST_ASSERT_TRUE( isPrime( 99194853094755497 ) );
    
    TEST_ASSERT_FALSE( isPrime( -1 ) );
    TEST_ASSERT_FALSE( isPrime( 0 ) );
    TEST_ASSERT_FALSE( isPrime( 1 ) );
    TEST_ASSERT_FALSE( isPrime( 10 ) );
    TEST_ASSERT_FALSE( isPrime( 99 ) );
    TEST_ASSERT_FALSE( isPrime( 32416190075 ) );
    TEST_ASSERT_FALSE( isPrime( 12200160415121876738llu ) );
    TEST_ASSERT_FALSE( isPrime( UINT64_MAX ) );
}
