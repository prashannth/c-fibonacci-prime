/** @file fibonacci.h
 *  @brief Nth Fibonacci number generators.
 *  @author Prashannth Vijayakumar
 *  @date 29/06/2016
 *  @bug No known bugs.
 *
 */

#ifndef fibonacci_h
#define fibonacci_h

#include <stdint.h>

/** Calculates nth fibonacci number through iteration.
 *
 *  The function iterativeFibonacci takes in the desired n to calculate the
 *  nth Fibonacci number. It will iterate while i <= n and sum the first and
 *  second terms to calculate the current Fibonacci term. This function will
 *  only generate Fibonacci terms up to f(93). Terms greater than this are
 *  large enough to overflow the unsigned long long variable in which they
 *  are stored.
 *
 *  @param  n The parameter of f(n) for the nth Fibonacci number.
 *
 *  @return The nth fibonacci number.
 *
 */
uint64_t iterativeFibonacci( uint64_t n );

/** Calculates nth fibonacci number through recursion.
 *
 *  The function recursiveFibonacci takes in the desired n to calculate the
 *  nth Fibonacci number. It will recursively call itself for (n - 1) and (n - 2)
 *  while n >= 2. It will then sum these values as it returns.
 *
 *  @param  n The parameter of f(n) for the nth Fibonacci number.
 *
 *  @return The nth fibonacci number.
 *
 *  @note This function becomes prohibitively slow for large Fibonacci numbers,
 *        so it is not used in this program.
 *
 */
uint64_t recursiveFibonacci( uint64_t n );

#endif /* fibonacci_h */
