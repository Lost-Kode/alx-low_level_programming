#include "main.h"

/**
 * _prime - check number weather it is prime
 * @num: number
 * @r: checkng number
 * Return: prime or not
 */



int _prime(int num, int r)

{

	if (r > 1 && r < num)

	{

		if (num % r != 0)

			return (1);



		return (_prime(num, r + 1));

	}

	else

		return (0);

}



/**
 * is_prime_number - check whether n is prime or not
 * @n: number
 * Return: 1 if it is prime and 0 if it is not
 */



int is_prime_number(int n)

{

	return (_prime(n, 2));

}
