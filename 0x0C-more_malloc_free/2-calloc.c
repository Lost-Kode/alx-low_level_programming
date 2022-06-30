#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}

/**
 *__calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	if (!nmemb|| !size)
		return (NULL);
	x = malloc(nmemb * size);
	if (!x)
		return (NULL);
	_memset(x, 0, (nmemb * size));
	return (x);
}
