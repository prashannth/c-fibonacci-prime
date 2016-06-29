/** @file main.c
 *  @brief BuzzFizz based on Fibonacci and prime numbers.
 *  @author Prashannth Vijayakumar
 *  @date 29/06/2016
 *
 *  This program is a simple FizzBuzz variation which prints "Buzz", "Fizz",
 *  or "BuzzFizz" based on Fibonacci numbers.
 */
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "fibonacci.h"
#include "isPrime.h"
#include "main.h"

#if UNIT_TEST
#include "../vendor/unity/src/unity.h"
#endif

/** Main method
 *
 *  @param argc Number of command line arguments.
 *  @param argv Array of command line arguments.
 *
 *	@return The exit status of the program as an integer
 *
 */
int main( int argc, char *argv[] )
{
    int n;

#if UNIT_TEST
    UNITY_BEGIN( );
    RUN_TEST( test_iterativeFibonacci );
    RUN_TEST( test_recursiveFibonacci );
    RUN_TEST( test_isPrime );
    RUN_TEST( test_getMessage );
    RUN_TEST( test_isNumber );
    UNITY_END( );
    printf( "\n" );
#endif

    // run while the user input is a number. Quit if user enters 'x'
    do
    {
        n = getUserInput( );
        buzzFizz( n );
        printf( "\n" );
    } while ( n >= 0 );

    return 0;
}

void buzzFizz( int n )
{
    int i;
    uint64_t fibonacci;
    bool prime;

    for ( i = 0; i <= n; i++ )
    {
        fibonacci = iterativeFibonacci( i );
        prime = isPrime( fibonacci );

#if DEBUG_MODE
        printf( "f(%d) = %llu%s : ", i, fibonacci, ( prime ? ", prime" : "" ));
#endif

        printf( "%s", getMessage( fibonacci, prime ) );
    }
}


const char* getMessage( uint64_t fibonacci, bool isPrime )
{
    static char message[ MAX_MSG_LEN ] = "";
    char format[ MSG_FORMAT_LEN ] = "";

    if (fibonacci == UINT64_MAX)
    {
        return "Overflow detected\n";
    }

    strcat( format, !isPrime && fibonacci % 3 ? "" : "Buzz" );
    strcat( format, !isPrime && fibonacci % 5 ? "" : "Fizz" );
    strcat( format, format[3] ? "\n" : "%llu\n" );
    sprintf( message, format, fibonacci );

    return message;
}


int getUserInput( void )
{
    int n = -1;
    char line[ MAX_LINE_LEN ];

    while ( n < 0 )
    {
        printf( "Please input n for fibonacci(n) or 'q' to quit: " );
        if ( fgets( line, sizeof( line ), stdin ) )
        {
            if ( isNumber( line ) )
            {
                sscanf( line, "%d", &n );
            }
            else {
                if ( strcmp( line, "q\n") == 0 )
                {
                    break;
                }
            }
        }
    }

    return n;
}

bool isNumber( const char *str )
{
    if ( !str || !*str || *str == '\n' )
    {
        return false;
    }

    while ( *str && ( *str != '\n' ) )
    {
        if ( !isdigit( *str++ ) )
        {
            return false;
        }
    }

    return true;
}
