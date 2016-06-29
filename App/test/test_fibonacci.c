#include "../vendor/unity/src/unity.h"
#include "../src/fibonacci.h"

/** Test that Fibonacci numbers generated through iteration match expected.
 * 
 *  @test The function iterativeFibonacci is called with a variety of n and its
 *        return asserted against the expected value of f(n).
 *
 */
void test_iterativeFibonacci( void )
{
    TEST_ASSERT_EQUAL_UINT64( 0, iterativeFibonacci( 0 ) );
    TEST_ASSERT_EQUAL_UINT64( 1, iterativeFibonacci( 1 ) );
    TEST_ASSERT_EQUAL_UINT64( 1, iterativeFibonacci( 2 ) );
    TEST_ASSERT_EQUAL_UINT64( 2, iterativeFibonacci( 3 ) );
    TEST_ASSERT_EQUAL_UINT64( 3, iterativeFibonacci( 4 ) );
    TEST_ASSERT_EQUAL_UINT64( 5, iterativeFibonacci( 5 ) );
    TEST_ASSERT_EQUAL_UINT64( 8, iterativeFibonacci( 6 ) );
    TEST_ASSERT_EQUAL_UINT64( 13, iterativeFibonacci( 7 ) );
    TEST_ASSERT_EQUAL_UINT64( 21, iterativeFibonacci( 8 ) );
    TEST_ASSERT_EQUAL_UINT64( 34, iterativeFibonacci( 9 ) );
    TEST_ASSERT_EQUAL_UINT64( 55, iterativeFibonacci( 10 ) );
    TEST_ASSERT_EQUAL_UINT64( 6765, iterativeFibonacci( 20 ) );
    TEST_ASSERT_EQUAL_UINT64( 832040, iterativeFibonacci( 30 ) );
    TEST_ASSERT_EQUAL_UINT64( 102334155, iterativeFibonacci( 40 ) );
    TEST_ASSERT_EQUAL_UINT64( 12586269025, iterativeFibonacci( 50 ) );
    TEST_ASSERT_EQUAL_UINT64( 1548008755920, iterativeFibonacci( 60 ) );
    TEST_ASSERT_EQUAL_UINT64( 190392490709135, iterativeFibonacci( 70 ) );
    TEST_ASSERT_EQUAL_UINT64( 23416728348467685, iterativeFibonacci( 80 ) );
    TEST_ASSERT_EQUAL_UINT64( 2880067194370816120, iterativeFibonacci( 90 ) );
    TEST_ASSERT_EQUAL_UINT64( 4660046610375530309, iterativeFibonacci( 91 ) );
    TEST_ASSERT_EQUAL_UINT64( 7540113804746346429, iterativeFibonacci( 92 ) );
    TEST_ASSERT_EQUAL_UINT64( 12200160415121876738llu, iterativeFibonacci( 93 ) );
    
    // higher than fibonacci(93) will return UINT64_MAX to avoid overflow
    TEST_ASSERT_EQUAL_UINT64( UINT64_MAX, iterativeFibonacci( 94 ) );
}

/** Test that Fibonacci numbers generated through recursion match expected.
 *
 *  @test The function recursiveFibonacci is called with a variety of n and its 
 *        return asserted against the expected value of f(n).
 *
 *  @note Only tested for small number of terms, as function is unused.
 *
 */
void test_recursiveFibonacci( void )
{
    TEST_ASSERT_EQUAL_UINT64( 0, recursiveFibonacci( 0 ) );
    TEST_ASSERT_EQUAL_UINT64( 1, recursiveFibonacci( 1 ) );
    TEST_ASSERT_EQUAL_UINT64( 1, recursiveFibonacci( 2 ) );
    TEST_ASSERT_EQUAL_UINT64( 2, recursiveFibonacci( 3 ) );
    TEST_ASSERT_EQUAL_UINT64( 3, recursiveFibonacci( 4 ) );
    TEST_ASSERT_EQUAL_UINT64( 5, recursiveFibonacci( 5 ) );
    TEST_ASSERT_EQUAL_UINT64( 8, recursiveFibonacci( 6 ) );
    TEST_ASSERT_EQUAL_UINT64( 13, recursiveFibonacci( 7 ) );
    TEST_ASSERT_EQUAL_UINT64( 21, recursiveFibonacci( 8 ) );
    TEST_ASSERT_EQUAL_UINT64( 34, recursiveFibonacci( 9 ) );
    TEST_ASSERT_EQUAL_UINT64( 55, recursiveFibonacci( 10 ) );
}
