#include "../vendor/unity/src/unity.h"
#include "../src/main.h"
#include "../src/fibonacci.h"
#include "../src/isPrime.h"

/** Test that the appropriate message is returned based on given parameters.
 *
 *  @test The function iterates through the first 100 Fibonacci numbers and
 *        determines their primality. It calls getMessage for each number and
 *        asserts that the return message matches the expected message.
 *        - Fibonacci is prime, message = "BuzzFizz"
 *        - Fibonacci % 3 and Fibonacci % 5 and not prime, message = "BuzzFizz"
 *        - Fibonacci % 3 and not prime, message = "Buzz"
 *        - Fibonacci % 5 and not prime, message = "Fizz"
 *        - Fibonacci = UINT64_MAX, message = "Overflow detected\n"
 *        - Otherwise, message Fibonacci number
 *
 */
void test_getMessage( void )
{
    char numberString[ MAX_MSG_LEN ] = "";
    uint64_t fibonacci;
    bool prime;
    int n = 100;
    int i;
    
    for ( i = 0; i < n; i++ )
    {
        fibonacci = iterativeFibonacci( i );
        prime = isPrime( fibonacci );
        
        if ( prime || ( fibonacci % 3 == 0 && fibonacci % 5 == 0 ) )
        {
            TEST_ASSERT_MESSAGE( getMessage( fibonacci, prime ), "BuzzFizz" );
        }
        else if (fibonacci % 3 == 0)
        {
            TEST_ASSERT_MESSAGE( getMessage( fibonacci, prime ), "Buzz" );
        }
        else if (fibonacci % 5 == 0)
        {
            TEST_ASSERT_MESSAGE( getMessage( fibonacci, prime ), "Fizz" );
        }
        else if ( fibonacci == UINT64_MAX )
        {
            TEST_ASSERT_MESSAGE( getMessage( fibonacci, prime ),
                                "Overflow detected\n" );
        }
        else
        {
            sprintf( numberString, "%llu", fibonacci );
            TEST_ASSERT_MESSAGE( getMessage( fibonacci, prime ), numberString );
        }
    }
}
