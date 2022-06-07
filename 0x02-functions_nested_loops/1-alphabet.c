#include <main.h>
/**
 * main -> prints the alphabet, in lowercase
 *
 * Return: always to 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');

	return (0);
}
