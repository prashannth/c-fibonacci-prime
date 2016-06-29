#include "isPrime.h"

bool isPrime( uint64_t num )
{
    // uint32_t is unsigned int. Unsigned long yeilds faster implimentation.
    unsigned long i;
    
    if ( num == 2 || num == 3 )
    {
        return true;
    }
    else if ( num <= 1 || num % 2 == 0 || num % 3 == 0 )
    {
        return false;
    }
    else
    {
        for ( i = 5; i * i <= num; i += 6 )
        {
            if ( num % i == 0 || num % ( i + 2 ) == 0 )
            {
                return false;
            }
        }
    }
    
    return true;
}
