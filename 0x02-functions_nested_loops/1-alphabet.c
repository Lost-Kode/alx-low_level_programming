#include "main.h"
/**
 * print_alphabet-> Prints the alphabet 5 times
 *
 * Return: void
 */

void print_alphabet(void);
{
	int i;

	for (i = 0; i < 5; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
