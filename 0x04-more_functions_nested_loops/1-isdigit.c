#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if paramter c represents an digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
