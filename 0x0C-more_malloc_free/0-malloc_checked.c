#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)

	exit(98);
	return (str);
}
