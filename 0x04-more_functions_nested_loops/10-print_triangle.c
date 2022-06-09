#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int x = 1, i;

	while (x <= size && size > 0)
	{
		i = 0;
		while (i < size - x)
		{
			_putchar(' ');
			i++;
		}
		i = 0;
		while (i < x)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		x++;
	}
	if (x == 1)
		_putchar('\n');
}
