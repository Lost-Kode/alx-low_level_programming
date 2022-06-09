#include "main.h"
#include <stdio.h>
/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 * Return: void.
 */

int main(void)
{

		int x = 1;

		while (x <= 100)
		{
			if (x % 3 == 0 && x % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (x % 3 == 0)
			{
				printf("Fizz");
			}
			else if (x % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%i", x);
			}
			if (x  != 100)
			{
				putchar(' ');
			}
			x++;
		}
		putchar('\n');
		return (0);
}
