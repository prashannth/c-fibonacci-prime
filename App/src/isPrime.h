/** @file isPrime.h
 *  @brief Prime number test.
 *  @author Prashannth Vijayakumar
 *  @date 29/06/2016
 *  @bug No known bugs.
 *
 */

#ifndef isPrime_h
#define isPrime_h

#include <stdbool.h>
#include <stdint.h>

/** Determines whether or not a given number is a prime number.
 *
 *  The function isPrime takes advantage of the fact that all primes greater than
 *  3 follow the form 6k−1 or 6k+1, where k is a natural number. It is sufficient
 *  only to check up to the number's square root as every composite number N has
 *  a prime factor at most equal to sqrt(N). If no factors are detected up to this
 *  point then N itself must be prime.
 *
 *  @param  num The number to be tested for primality.
 *
 *  @return True if number is a prime, false if not.
 *
 */
bool isPrime( uint64_t num );

#endif /* isPrime_h */
