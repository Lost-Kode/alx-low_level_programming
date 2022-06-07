#include "main.h"
/**
 * print_last_digit -> prints the last digit
 * @i: the argument passed
 * Return: last digit
 */
int print_last_digit(int i)
{
	int x;

	if (i < 0)
	i = -i;
	x = i % 10;
	_putchar(x + '0');
	return (x);
}
