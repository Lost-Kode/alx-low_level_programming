#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, l, x;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (l = 1; l <= n; l++)
			{
				x = a * l;
				_putchar(44);
				_putchar(32);
				if (x <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(x + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((x / 10) + 48);
					_putchar((x % 10) + 48);
				}
				else
				{
					_putchar(((x / 100) % 10) + 48);
					_putchar(((x / 10) % 10) + 48);
					_putchar((x % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
