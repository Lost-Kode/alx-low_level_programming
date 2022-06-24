#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: pointer to the array of argument
 * Return: 0 for success 1 for an error
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)

	{
		printf("Error\n");
		return (1);

	}

	if (argv[1][0] == '-')

	{

		printf("0\n");

		return (0);

	}

	n = atoi(argv[1]);
	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);



	return (0);

}
