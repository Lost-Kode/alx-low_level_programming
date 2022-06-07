#include "main.h"

/**
 * _isalpha - checks for alphabetical latters
 * @c: character to be checks on
 * Return: retuns 0 and 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}

