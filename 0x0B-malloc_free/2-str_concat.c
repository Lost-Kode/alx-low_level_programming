#include "main.h"

/**
 *  str_concat - a function that concatenates two strings.
 * @s1:First string
 * @s2:Second string
 *
 * Return: NULL in case of failure , but pointer to new string in
 * case of success
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int x_index, index = 0,  x = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (x_index = 0; s1[x_index] || s2[x_index]; x_index++)
		x++;
	str = malloc(sizeof(char) * x);
	if (!str)
		return (NULL);
	for (x_index = 0; s1[x_index]; x_index++)
		str[index++] = s1[x_index];
	for (x_index = 0; s2[x_index]; x_index++)
		str[index++] = s2[x_index];
	return (str);
}
