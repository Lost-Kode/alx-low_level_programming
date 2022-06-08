#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: always 0
 */
int main(void)
{
	long int fib1, fib2, fib3, x;

	fib1 = 1;
	fib2 = 2;
	fib3 = 3;
	n = 50;

	for (x = 0; x < n; x++)
	{
		printf("%ld", fib3);
		fib1 = fib2;
		fib2 = fib3;
		fib3 = fib1 + fib2;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
