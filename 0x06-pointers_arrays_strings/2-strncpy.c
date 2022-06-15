#include "main.h"

/**
 * *_strncpy - string copy
 * @dest: first input
 * @src: second input
 * @n: number of bytes
 *
 * Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	for ( ; x < n && src[x] != '\0'; ++x)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		++x;
	}
	return (dest);
}
