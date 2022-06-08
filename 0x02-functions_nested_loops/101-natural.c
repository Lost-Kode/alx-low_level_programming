#include <stdio.h>

/**
 * main - natural numbers multiples of 3 or 5 to 1024
 *
 * Return: always 0
 */

int main(void)
{
	int l, o, v, e, s;

	l = 0;
	for (o = 0; o <= (1024 / 3); o++)
	{
		v = 3 * o;
		l = l + v;
	}
	for (e = 0; e <= (1024 / 5); e++)
	{
		if (!(e % 3 == 0))
		{
			s = 5 * v;
			l = l + s;
		}
	}
	printf("%i\n", l);
	return (0);
}
