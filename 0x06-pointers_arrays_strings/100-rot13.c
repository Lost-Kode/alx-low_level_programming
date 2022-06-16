#include "main.h"

/**
 * rot13 - encoder rot13
 * @n: pointer to string params
 *
 * Return: n
 */

char *rot13(char *n)
{
	int i;

	int x;

	char p[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (n[i] == p[x])
			{
				n[i] = p1[x];
				break;
			}
		}
	}
	return (n);
}
