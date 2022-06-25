#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first prototype of _strcat
 * @src: second prototype of _strcat
 * @n: int parameter
 *
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int i;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		++x;
	}
	while (src[i] != 0 && i < n)
	{
		dest[x] = src[i];
		++i;
		++x;
	}
	dest[x] = '\0';
	return (dest);
}
