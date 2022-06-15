#include "main.h"

/**
 * reverse_array - reverse array
 * @a : first int parameter
 * @n : second to int parameter
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;
	int tmp;

	i = 0;
	x = n - 1;

	while (i < x)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x] = tmp;
		i++;
		x--;
	}
}
