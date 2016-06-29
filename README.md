# Fibonacci Prime Solution - C

## Problem

In the programming language of your choice, write a program generating the first n Fibonacci numbers F(n), printing ...

- ... "Buzz" when F(n) is divisible by 3.
- ... "Fizz" when F(n) is divisible by 5.
- ... "BuzzFizz" when F(n) is prime.
- ... the value F(n) otherwise.

Advancements - Test cases

## Overview

This program was written in C to solve the problem above. It will prompt the user for n and then calculate F(n) iteratively and print out the appropriate messages as it goes. Entering 'q' at the prompt will exit the program.

It should be noted that the functions to determine the nth Fibonacci number and to print the message are seperate. This means that the Fibonacci function is called for every _n_. This is obviously not as efficient as combinging the two (as is done in the simple version mentioned below) as it introduces many more loop iterations. This was a design deicision made considering the return limits on the maximum Fibonacci number as well as a desire to illustrate the Fibonacci function as its own module.

It should also be noted that I allowed 0 to be divisible by 3 and 5. So, F(0) will return BuzzFizz since 0 % 3 = 0 and 0 % 5 = 0.

## Simpler Version

A much simpler version of this program can be found in the file _crispSolution.c_ . This version calculates the Fibonacci number and prints the output in the same function, so it only loops through the Fibonacci numbers once making it more efficient. Also, this version is one file, does not accept user input, has no unit testing, and is documented with basic comments.

## Building

The program can be built using the simple Makefile included in the BuzzFizz directory. Simply navigate to the directory and type `make`. Typing `make clean` will remove any generated files.

Debug information and unit testing can be turned off and on with the DEBUG_MODE and UNIT_TEST preprocessor directives within the makefile. These are on by default.

## Unit testing

Unit testing is made possible by [Unity](http://www.throwtheswitch.org/unity/). The unit testing here is very simple and is called within the main function if the UNIT_TEST preprocessor directive is on. Test cases can be found in the BuzzFizz/test directory. I would like for future iterations of this program to take advantage of Unity's Ruby scripting to run unit tests during the build.

## Result

Following is an example of the output (with DEBUG_MODE = 1):

```
Please input n for fibonacci(n) or 'q' to quit: 0
f(0) = 0 : BuzzFizz

Please input n for fibonacci(n) or 'q' to quit: 1
f(0) = 0 : BuzzFizz
f(1) = 1 : 1

Please input n for fibonacci(n) or 'q' to quit: 2
f(0) = 0 : BuzzFizz
f(1) = 1 : 1
f(2) = 1 : 1

Please input n for fibonacci(n) or 'q' to quit: 95
f(0) = 0 : BuzzFizz
f(1) = 1 : 1
f(2) = 1 : 1
f(3) = 2, prime : BuzzFizz
f(4) = 3, prime : BuzzFizz
f(5) = 5, prime : BuzzFizz
f(6) = 8 : 8
f(7) = 13, prime : BuzzFizz
f(8) = 21 : Buzz
f(9) = 34 : 34
f(10) = 55 : Fizz
f(11) = 89, prime : BuzzFizz
f(12) = 144 : Buzz
f(13) = 233, prime : BuzzFizz
f(14) = 377 : 377
f(15) = 610 : Fizz
f(16) = 987 : Buzz
f(17) = 1597, prime : BuzzFizz
f(18) = 2584 : 2584
f(19) = 4181 : 4181
f(20) = 6765 : BuzzFizz
f(21) = 10946 : 10946
f(22) = 17711 : 17711
f(23) = 28657, prime : BuzzFizz
f(24) = 46368 : Buzz
f(25) = 75025 : Fizz
f(26) = 121393 : 121393
f(27) = 196418 : 196418
f(28) = 317811 : Buzz
f(29) = 514229, prime : BuzzFizz
f(30) = 832040 : Fizz
f(31) = 1346269 : 1346269
f(32) = 2178309 : Buzz
f(33) = 3524578 : 3524578
f(34) = 5702887 : 5702887
f(35) = 9227465 : Fizz
f(36) = 14930352 : Buzz
f(37) = 24157817 : 24157817
f(38) = 39088169 : 39088169
f(39) = 63245986 : 63245986
f(40) = 102334155 : BuzzFizz
f(41) = 165580141 : 165580141
f(42) = 267914296 : 267914296
f(43) = 433494437, prime : BuzzFizz
f(44) = 701408733 : Buzz
f(45) = 1134903170 : Fizz
f(46) = 1836311903 : 1836311903
f(47) = 2971215073, prime : BuzzFizz
f(48) = 4807526976 : Buzz
f(49) = 7778742049 : 7778742049
f(50) = 12586269025 : Fizz
f(51) = 20365011074 : 20365011074
f(52) = 32951280099 : Buzz
f(53) = 53316291173 : 53316291173
f(54) = 86267571272 : 86267571272
f(55) = 139583862445 : Fizz
f(56) = 225851433717 : Buzz
f(57) = 365435296162 : 365435296162
f(58) = 591286729879 : 591286729879
f(59) = 956722026041 : 956722026041
f(60) = 1548008755920 : BuzzFizz
f(61) = 2504730781961 : 2504730781961
f(62) = 4052739537881 : 4052739537881
f(63) = 6557470319842 : 6557470319842
f(64) = 10610209857723 : Buzz
f(65) = 17167680177565 : Fizz
f(66) = 27777890035288 : 27777890035288
f(67) = 44945570212853 : 44945570212853
f(68) = 72723460248141 : Buzz
f(69) = 117669030460994 : 117669030460994
f(70) = 190392490709135 : Fizz
f(71) = 308061521170129 : 308061521170129
f(72) = 498454011879264 : Buzz
f(73) = 806515533049393 : 806515533049393
f(74) = 1304969544928657 : 1304969544928657
f(75) = 2111485077978050 : Fizz
f(76) = 3416454622906707 : Buzz
f(77) = 5527939700884757 : 5527939700884757
f(78) = 8944394323791464 : 8944394323791464
f(79) = 14472334024676221 : 14472334024676221
f(80) = 23416728348467685 : BuzzFizz
f(81) = 37889062373143906 : 37889062373143906
f(82) = 61305790721611591 : 61305790721611591
f(83) = 99194853094755497, prime : BuzzFizz
f(84) = 160500643816367088 : Buzz
f(85) = 259695496911122585 : Fizz
f(86) = 420196140727489673 : 420196140727489673
f(87) = 679891637638612258 : 679891637638612258
f(88) = 1100087778366101931 : Buzz
f(89) = 1779979416004714189 : 1779979416004714189
f(90) = 2880067194370816120 : Fizz
f(91) = 4660046610375530309 : 4660046610375530309
f(92) = 7540113804746346429 : Buzz
f(93) = 12200160415121876738 : 12200160415121876738
f(94) = 18446744073709551615 : Overflow detected
f(95) = 18446744073709551615 : Overflow detected

Please input n for fibonacci(n) or 'q' to quit: q
```
