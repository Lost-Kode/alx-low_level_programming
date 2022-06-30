#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;

	unsigned int name1 = 0, name2 = 0, i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[name1] != '\0')
	{
		name1++;
	}
	while (s2[name2] != '\0')
	{
		name2++;
	}
	if (n > name2)
		n = name2;
	x = malloc((name1 + n + 1) * sizeof(char));
	if (!x)
		return (0);
	for (i = 0; i < name1; i++)
	{
		x[i] = s1[i];
	}
	for (; i < (name1 + n); i++)
	{
		x[i] = s2[i - name1];
	}
	x[i] = '\0';
	return (x);
}
