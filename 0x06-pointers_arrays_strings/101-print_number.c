#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x1;

	x1 = n;

	if (n < 0)
	{
		_putchar('-');
		x1 = -n;
	}
	if (x1 / 10 != 0)
	{
		print_number(x1/ 10);
	}
	_putchar((x1 % 10) + '0');
}
