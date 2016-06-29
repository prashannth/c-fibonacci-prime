#include "fibonacci.h"

uint64_t iterativeFibonacci( uint64_t n )
{
    int i;
    uint64_t first = 0;
    uint64_t second = 1;
    uint64_t fibonacci = 0;
    
    for ( i = 0; i <= n; i++ )
    {
        if ( second > UINT64_MAX - first )
        {
            return UINT64_MAX; // overflow will occur, lets just return max
        }
        else if ( i < 2 )
        {
            fibonacci = i;
        }
        else
        {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }
    }
    
    return fibonacci;
}

uint64_t recursiveFibonacci( uint64_t n )
{
    if ( n < 2 )
    {
        return n;
    }
    else
    {
        return recursiveFibonacci( n - 1 ) + recursiveFibonacci( n - 2 );
    }
}
