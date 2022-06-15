#include "main.h"

/**
 * leet - encode string to 1337
 * @str: char input
 *
 * Return: str
 */

char *leet(char *str)
{
	int i = 0, x;

	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (s[x] == str[i])
			{
				str[i] = s1[x];
			}
		}
	}
	return (str);
}
