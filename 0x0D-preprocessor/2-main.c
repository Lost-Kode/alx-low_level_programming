#include <stdio.h>

/**
 * main - prints current file name to std (name of file it was compiled from)
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
