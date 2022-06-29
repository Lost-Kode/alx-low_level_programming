#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *p;
	int i, x, t;

	if (!ac || !av)
		return (NULL);
	for (i = 0, t = 0; i < ac; i++)
	{
	for (x = 0; *(*(av + i) + x) != '\0'; x++, t++)
			    ;
		t++;
	}
	t++;
	a = malloc(t * sizeof(char));
	if (!a)
		return (NULL);
	p = a;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			*a = av[i][x];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (p);
}

