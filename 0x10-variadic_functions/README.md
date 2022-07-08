C - Variadic functions

Resouce

stdarg.h
Variadic Functions
Const Keyword
An ellipsis may not appear in old-style function definitions.

stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.[1] It provides facilities for stepping through a list of function arguments of unknown number and type. C++ provides this functionality in the header cstdarg.

The contents of stdarg.h are typically used in variadic functions, though they may be used in other functions (for example, vprintf) called by variadic functions.


stdarg.h types
Name	Description	Compatibility
va_list	type for iterating arguments	C89
stdarg.h macros
Name	Description	compatibility
va_start	Start iterating arguments with a va_list	C89
va_arg	Retrieve an argument	C89
va_end	Free a va_list	C89
va_copy	Copy contents of one va_list to another	C99



0. Beauty is variable, ugliness is constant
mandatory
Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0


1. To be is to be the value of a variable
mandatory
Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function

 One woman's constant is another woman's variable
mandatory
Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function

2.  One woman's constant is another woman's variable
mandatory
Write a function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function


3. To be is a to be the value of a variable
mandatory
Write a function that prints anything.

Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
see example
You are not allowed to use for, goto, ternary operator, else, do ... while
You can use a maximum of
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function



