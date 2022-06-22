#include "main.h"

/**
 * _strlen_recursion - counts string length
 * @s: string to be counted
 * Return: number of char
 */



int _strlen_recursion(char *s)

{

	if (*s == '\0')

	{

		return (0);

	}

	s++;



	return (1 + _strlen_recursion(s));

}
