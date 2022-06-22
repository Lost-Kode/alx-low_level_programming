#include "main.h"

/**
 * _sqrt - find roots
 * @num: number
 * @r: root of the number
 * Return: root
 */



int _sqrt(int num, int r)

{

	if (r * r == num)

		return (r);

	if (r * r > num)

		return (-1);



	return (_sqrt(num, r + 1));

}



/**
 * _sqrt_recursion - sqwuare root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)

{

	if (n < 0)

	{

		return (-1);

	}



	return (_sqrt(n, 0));

}
