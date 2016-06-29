/** @file main.h
 *  @brief BuzzFizz based on Fibonacci and prime numbers.
 *  @author Prashannth Vijayakumar
 *  @date 29/06/2016
 *  @bug No known bugs.
 *
 */

#ifndef main_h
#define main_h

#include <stdbool.h>

// defined in Makefile
//#define DEBUG_MODE 1
//#define UNIT_TEST 1

#define MSG_FORMAT_LEN 14
#define MAX_MSG_LEN 22
#define MAX_LINE_LEN 10

/*
 *  Test function declarations (since we are using Unity in such a simple way).
 */
extern void test_iterativeFibonacci( void );
extern void test_recursiveFibonacci( void );
extern void test_isPrime( void );
extern void test_getMessage( void );
extern void test_isNumber( void );

/** Takes user input and prints the output.
 *
 *  @param  n User input: the n term used to calculate the nth Fibonacci number.
 *
 */
void buzzFizz( int n );

/** Determines which message to print.
 *
 *  The function getMessage will build a BuzzFizz string based on the supplied
 *  Fibonacci number and whether or not that number is a prime number. If the
 *  Fibonacci number is UINT64_MAX then it is known that overflow had occured
 *  while calculating the Fibonacci number and a message stating such will be
 *  returned.
 *
 *  @param  fibonacci The Fibonacci number.
 *
 *  @param  isPrime True is the Fibonacci number is a prime number, else false.
 *
 *  @return The message to be printed.
 *
 */
const char* getMessage( uint64_t fibonacci, bool isPrime );

/** Prompts for and collects user input.
 *
 *  The function getMessage will continue to prompt the user to enter a number
 *  until a natural number or the character 'q' is detected. If 'q' is entered,
 *  the function will return -1.
 *
 *  @return The user input.
 *
 */
int getUserInput( void );

/** Checks whether or not the string contains only numbers (0 - 9).
 *
 *  The function isNumber is take a string that was collected through stdin and
 *  checks each character. If a non-digit character is found, it will return
 *  false. If all the characters are digits, the string will be valid and the
 *  function will return true. Since the string was user-entered through stdin,
 *  a newline character indicates the end and so only characters before this
 *  are considered when determining validity.
 *
 *  @param  str The string to validate.
 *
 *  @return True if string is valid, else false.
 *
 */
bool isNumber( const char *str );

#endif /* main_h */
