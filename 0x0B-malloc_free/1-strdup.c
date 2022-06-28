#include <stdlib.h>

/**
 * _strdup - copy
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0, x;

	if (!str)
	return (NULL);
	while (*(str + i))
	i++;
	i++;
	s = malloc(sizeof(char) * i);
	if (!s)
	{
	return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		s[x] = str[x];
	}
	return (s);
}
