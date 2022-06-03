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

	for (x = '0'; x <= '9'; x++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			if (x < e)
			{
				putchar(x);
				putchar(e);

				if (x != '8' || (e == '8' && e != '9'))
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
