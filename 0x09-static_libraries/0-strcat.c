#include "main.h"
/**
 * *_strcat - function commute srtings
 * @dest: first prototype of _strcat
 * @src: second prototype of _strcat
 * Return: return value to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
