#include <stdio.h>

/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int e;

	for (x = 10; x <= 19; x++)
	{
		for (x = e + 10; e = 19; e++)
		{
			{
				putchar((x % 10) + '0');
				putchar((e % 10) + '0');

				if (x != 18 || e != 19)
				{

				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
