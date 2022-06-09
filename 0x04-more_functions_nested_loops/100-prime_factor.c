#include "main.h"

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always 0
 */


int main(void)
{
	long int i = 612852475143;
	long int x;

	for (x = 2; x < i; x++)
	{
		if (i % x == 0)
		{
			i = i / x;
		}
	}
	printf("%ld\n", x);
	return (0);
}
